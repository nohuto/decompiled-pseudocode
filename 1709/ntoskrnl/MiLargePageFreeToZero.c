/*
 * XREFs of MiLargePageFreeToZero @ 0x14010FA20
 * Callers:
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiGetLargePageListHead @ 0x14010FDF0 (MiGetLargePageListHead.c)
 *     MiRemoveFaultNode @ 0x14010FE68 (MiRemoveFaultNode.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLargePageFreeToZero(unsigned __int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // rbp
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r10
  _QWORD *v16; // r8
  __int64 updated; // rax
  __int64 *v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r10
  volatile signed __int32 *v25; // r8
  unsigned int v26; // r9d
  unsigned __int64 v27; // rdx
  __int64 LargePageListHead; // rax
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+8h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v6 = 48 * a1 - 0x58000000000LL;
  v7 = a2;
  v8 = MiLargePageSizes[a2];
  v9 = *(_QWORD *)(v6 + 40);
  v34 = (v9 >> 36) & 3;
  v36 = *(_QWORD *)(qword_140388AF0 + 8 * ((v9 >> 40) & 0x3FF));
  v10 = *(_QWORD *)(v36 + 16) + 8256 * (v9 >> 58);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 8200);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10 + 8200);
  }
  else
  {
    v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v10 + 8200), (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v11);
  }
  MiRemoveFaultNode(*(_QWORD *)(v6 + 16));
  *(_BYTE *)(v6 + 34) &= ~8u;
  v12 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_BYTE *)(v12 + 68) = 1;
  *(_QWORD *)(v6 + 16) = MiMakeDemandZeroPte(4LL);
  v13 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v14 = *(_QWORD **)(v6 + 8), *v14 != v6) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( a3 )
  {
    *(_QWORD *)(v6 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v6 + 16), 4294967293LL);
    if ( v6 + 48 < v6 + 48 * v8 )
    {
      v16 = (_QWORD *)(v6 + 64);
      do
      {
        updated = MiUpdatePageFileHighInPte(*v16, v15);
        *v18 = updated;
        v16 = v18 + 6;
      }
      while ( v19 != 1 );
    }
  }
  --*(_QWORD *)(v10 + 16 * v7 + 8);
  if ( a2 <= 1 )
  {
    v20 = 0;
  }
  else
  {
    v20 = ((unsigned int)dword_140388540 >> 4) & (a1 >> 4);
    v21 = v20 + 16 * ((unsigned int)v34 + 8LL * (a1 < 0x100000));
    --*(_QWORD *)(v10 + 8 * v21 + 5552);
  }
  v22 = (unsigned int)v34 + 8 * ((a1 < 0x100000) + 2 * v7);
  --*(_QWORD *)(v10 + 8 * v22 + 80);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 2176), -(__int64)v8);
  if ( dword_140388B14 == 1 )
  {
    v23 = a1 & 0x1F;
    v24 = v8;
    v25 = (volatile signed __int32 *)stru_140388B68.Buffer + (a1 >> 5);
    if ( v23 + v8 <= 0x20 )
    {
      if ( v8 == 32 )
      {
        *v25 = -1;
        goto LABEL_27;
      }
      v26 = ((1 << v8) - 1) << v23;
      goto LABEL_26;
    }
    if ( (a1 & 0x1F) != 0 )
    {
      _InterlockedOr(v25, ((1 << (32 - (a1 & 0x1F))) - 1) << v23);
      v24 = v8 - (32 - (unsigned int)(a1 & 0x1F));
      ++v25;
    }
    if ( v24 >= 0x20 )
    {
      v27 = v24 >> 5;
      v24 += -32LL * (v24 >> 5);
      do
      {
        *v25++ = -1;
        --v27;
      }
      while ( v27 );
    }
    if ( v24 )
    {
      v26 = (1 << v24) - 1;
LABEL_26:
      _InterlockedOr(v25, v26);
    }
  }
LABEL_27:
  *(_BYTE *)(v6 + 34) &= 0xF8u;
  LargePageListHead = MiGetLargePageListHead(a1, v10, a2, v34, 0);
  v29 = LargePageListHead;
  if ( (MiFlags & 0x30) != 0 )
  {
    if ( a2 == 1 && (unsigned int)MiAttemptHugePageCoalesce(a1) == 1 )
      goto LABEL_37;
    v30 = *(__int64 **)(v29 + 8);
    if ( *v30 != v29 )
      __fastfail(3u);
  }
  else
  {
    v30 = *(__int64 **)(LargePageListHead + 8);
    if ( *v30 != v29 )
      __fastfail(3u);
  }
  *(_QWORD *)v6 = v29;
  *(_QWORD *)(v6 + 8) = v30;
  *v30 = v6;
  *(_QWORD *)(v29 + 8) = v6;
  if ( a2 > 1 )
  {
    v31 = v20 + 16 * ((unsigned int)v34 + 8LL * (a1 < 0x100000));
    ++*(_QWORD *)(v10 + 8 * v31 + 5040);
  }
  v32 = (unsigned int)v34 + 8 * ((a1 < 0x100000) + 2 * v7);
  ++*(_QWORD *)(v10 + 8 * v32 + 48);
  ++*(_QWORD *)(v10 + 16 * v7);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 2112), v8);
LABEL_37:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
