/*
 * XREFs of MiDeleteBatch @ 0x1400C8490
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r15
  _QWORD *v5; // rdx
  unsigned __int8 i; // si
  __int64 v7; // rdx
  char v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  char v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // dl
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int8 j; // bl
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int64 *v23; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v26 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)(qword_14036C8F8
                 + 8
                 * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFLL)
                               - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  v22 = 0LL;
  v23 = (volatile signed __int64 *)(v4 + 6176);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v22, v4 + 6176);
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v4 + 6176), (__int64)&v22);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)&v22, v5);
  }
  for ( i = 0; i < *a1; ++i )
  {
    v26 = *(_QWORD *)&a1[8 * i + 16];
    v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v26);
    v11 = *(_BYTE *)(v7 + v10 + 34);
    v12 = v7 + v10;
    if ( (v11 & 7) != 6 )
    {
      v21 = (__int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
      KeBugCheckEx(0x4Eu, 0x99uLL, v21 + (v21 >> 63), *(_BYTE *)(v12 + 34) & 7, v9 & *(_QWORD *)(v12 + 24));
    }
    v13 = 0LL;
    if ( (v8 & 0x42) != 0 && (v11 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 && (v11 & 8) == 0 )
      {
        v13 = MiCapturePageFileInfoInline((_QWORD *)(v12 + 16), 1, 0);
        v9 = 0x3FFFFFFFFFFFFFFFLL;
      }
      *(_BYTE *)(v12 + 34) |= 0x10u;
    }
    *(_QWORD *)&a1[8 * i + 16] = v13;
    *(_QWORD *)(v12 + 24) ^= v9 & (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) - 1LL));
    if ( (v9 & *(_QWORD *)(v12 + 24)) == 0
      && (unsigned int)MiPfnShareCountIsZero(v12, 1uLL) == 3
      && (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v22);
    v14 = v22;
    if ( !v22 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v23, 0LL, (signed __int64)&v22) == &v22 )
        goto LABEL_26;
      v14 = KxWaitForLockChainValid(&v22);
    }
    v22 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    goto LABEL_26;
  }
  KiReleaseQueuedSpinLockInstrumented(&v22, retaddr);
LABEL_26:
  v15 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
  }
  v16 = *(_BYTE *)(v15 + 34);
  v17 = *(_QWORD *)(v15 + 24);
  if ( (v16 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, v16 & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  v18 = *a1;
  if ( (v17 & 0x3FFFFFFFFFFFFFFFuLL) < v18 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v15 + 0x58000000000LL) / 48, v16 & 7, v17 & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v15 + 24) = v17 ^ (v17 ^ (v17 - v18)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( j = 0; j < *a1; ++j )
  {
    v20 = *(_QWORD *)&a1[8 * j + 16];
    if ( v20 )
      MiReleasePageFileInfo((struct _KEVENT *)v4, v20, 1);
  }
  result = v3;
  *a1 = 0;
  return result;
}
