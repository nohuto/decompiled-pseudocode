/*
 * XREFs of MiLargePageFreeToZero @ 0x1400B3450
 * Callers:
 *     MiZeroLargePage @ 0x1400B5CC0 (MiZeroLargePage.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiRemoveFaultNode @ 0x1400B3758 (MiRemoveFaultNode.c)
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLargePageFreeToZero(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r10
  volatile signed __int32 *v18; // r8
  unsigned int v19; // r9d
  unsigned __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 result; // rax
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v25; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 48 * a1 - 0x58000000000LL;
  v4 = a2;
  v5 = MiLargePageSizes[a2];
  v6 = *(_QWORD *)(v3 + 40);
  v7 = (v6 >> 36) & 3;
  v8 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v6 >> 40) & 0x3FF));
  v9 = *(_QWORD *)(v8 + 48) + 2184 * (v6 >> 58);
  v24 = 0LL;
  v25 = (volatile signed __int64 *)(v9 + 2176);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v24, v9 + 2176);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v9 + 2176), (__int64)&v24);
    if ( v10 )
      KxWaitForLockOwnerShip((__int64)&v24, v10);
  }
  MiRemoveFaultNode(*(_QWORD *)(v3 + 16));
  *(_BYTE *)(v3 + 34) &= ~8u;
  v11 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_BYTE *)(v11 + 68) = 1;
  *(_QWORD *)(v3 + 16) = MiMakeDemandZeroPte(4LL);
  v12 = *(_QWORD *)v3;
  v13 = *(_QWORD **)(v3 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v13 != v3 )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  v14 = 2 * v4;
  --*(_QWORD *)(v9 + 16 * v4 + 8);
  v15 = v7 + 8 * ((a1 < 0x100000) + 2 * v4);
  --*(_QWORD *)(v9 + 8 * v15 + 848);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2048), -(__int64)v5);
  if ( dword_14036C91C == 1 )
  {
    v16 = a1 & 0x1F;
    v17 = v5;
    v18 = (volatile signed __int32 *)stru_14036C970.Buffer + (a1 >> 5);
    if ( v16 + v5 <= 0x20 )
    {
      if ( v5 == 32 )
      {
        *v18 = -1;
        goto LABEL_20;
      }
      v19 = ((1 << v5) - 1) << v16;
      goto LABEL_19;
    }
    if ( (a1 & 0x1F) != 0 )
    {
      _InterlockedOr(v18, ((1 << (32 - (a1 & 0x1F))) - 1) << v16);
      v17 = v5 - (32 - (unsigned int)(a1 & 0x1F));
      ++v18;
    }
    if ( v17 >= 0x20 )
    {
      v20 = v17 >> 5;
      v17 += -32LL * (v17 >> 5);
      do
      {
        *v18++ = -1;
        --v20;
      }
      while ( v20 );
    }
    if ( v17 )
    {
      v19 = (1 << v17) - 1;
LABEL_19:
      _InterlockedOr(v18, v19);
    }
  }
LABEL_20:
  *(_BYTE *)(v3 + 34) &= 0xF8u;
  v21 = v9 + 16 * (v15 + 3);
  if ( (MiFlags & 0x30) == 0 )
  {
    v22 = *(__int64 **)(v21 + 8);
    if ( *v22 != v21 )
      __fastfail(3u);
LABEL_27:
    *(_QWORD *)v3 = v21;
    *(_QWORD *)(v3 + 8) = v22;
    *v22 = v3;
    *(_QWORD *)(v21 + 8) = v3;
    ++*(_QWORD *)(v9 + 8 * v15 + 816);
    ++*(_QWORD *)(v9 + 8 * v14);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1984), v5);
    goto LABEL_28;
  }
  if ( a2 != 1 || (unsigned int)MiAttemptHugePageCoalesce(a1) != 1 )
  {
    v22 = *(__int64 **)(v21 + 8);
    if ( *v22 != v21 )
      __fastfail(3u);
    goto LABEL_27;
  }
LABEL_28:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseQueuedSpinLockInstrumented(&v24, retaddr);
  _m_prefetchw(&v24);
  result = v24;
  if ( v24 )
  {
LABEL_34:
    v24 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    return result;
  }
  result = _InterlockedCompareExchange64(v25, 0LL, (signed __int64)&v24);
  if ( (__int64 *)result != &v24 )
  {
    result = KxWaitForLockChainValid(&v24);
    goto LABEL_34;
  }
  return result;
}
