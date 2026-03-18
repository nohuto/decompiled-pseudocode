/*
 * XREFs of MiGetUltraMapping @ 0x14015C940
 * Callers:
 *     MiMapLargePagesToZero @ 0x140129880 (MiMapLargePagesToZero.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14015C7C0 (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindSetBitsAndClearEx @ 0x14015CB70 (RtlFindSetBitsAndClearEx.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memset @ 0x140192D80 (memset.c)
 */

KSPIN_LOCK __fastcall MiGetUltraMapping(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rdi
  KSPIN_LOCK *v3; // rsi
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 SetBitsAndClear; // rax
  __int64 v13; // r14
  KSPIN_LOCK v14; // rdi
  unsigned __int64 *v15; // rsi
  __int64 v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1[10];
  v3 = (KSPIN_LOCK *)a1[18];
  if ( v2 != -1LL )
  {
    if ( a2 == 1 )
    {
      v6 = a1[11];
      if ( v6 != 512 )
        return v3[17] + (((v2 << 9) + v6) << 21);
      goto LABEL_6;
    }
    if ( a2 == -1 )
    {
LABEL_6:
      v8 = (_QWORD *)((((v3[17] + (v2 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL);
      *v8 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v8) )
        MiWritePteShadow(v9);
    }
  }
  KeAcquireInStackQueuedSpinLock(v3 + 3, &LockHandle);
  if ( v2 != -1LL )
    _bittestandset64(*(signed __int64 **)(v3[20] + 8), v2);
  if ( a2 == -1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(v3[19], 1LL, v3[18]);
      v13 = SetBitsAndClear;
      if ( SetBitsAndClear != -1 )
        break;
      KeFlushTb(0, 1u);
      v10 = 0LL;
      v11 = *(_QWORD *)v3[19] >> 6;
      if ( v11 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(v3[19] + 8) + 8 * v10) |= *(_QWORD *)(*(_QWORD *)(v3[20] + 8) + 8 * v10);
          ++v10;
        }
        while ( v10 < v11 );
      }
      v3[18] = 0LL;
      memset(*(void **)(v3[20] + 8), 0, 4 * ((*(_QWORD *)v3[20] >> 5) + ((*(_QWORD *)v3[20] & 0x1F) != 0)));
    }
    v3[18] = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v14 = v3[17] + (v13 << 30);
    if ( a2 )
    {
      v15 = (unsigned __int64 *)(((v14 >> 27) & 0x1FFFF8) - 0x90482600000LL);
      *v15 = MiMakeValidPte((unsigned __int64)v15, a1[12], -1207959548);
      if ( (unsigned int)MiPteInShadowRange(v15) )
        MiWritePteShadow(v16);
      a1[11] = 0LL;
      a1[10] = v13;
    }
    return v14;
  }
}
