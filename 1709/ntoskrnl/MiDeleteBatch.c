/*
 * XREFs of MiDeleteBatch @ 0x140051140
 * Callers:
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDeleteBatch(unsigned __int8 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int8 i; // di
  char v7; // r9
  __int64 v8; // r10
  unsigned __int8 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 j; // di
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int64 *v21; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF

  if ( !*a1 )
    return 0LL;
  v3 = 0LL;
  v24 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD *)(qword_140388AF0
                 + 8 * ((*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
  v20 = 0LL;
  v21 = (volatile signed __int64 *)(v4 + 6368);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v20, v4 + 6368);
  }
  else
  {
    v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 6368), (__int64)&v20);
    if ( v5 )
      KxWaitForLockOwnerShip(&v20);
  }
  for ( i = 0; i < *a1; ++i )
  {
    v24 = *(_QWORD *)&a1[8 * i + 16];
    v5 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24);
    v9 = *(_BYTE *)(v5 - 0x58000000000LL + 34);
    v10 = v5 - 0x58000000000LL;
    if ( (v9 & 7) != 6 )
    {
      v19 = (__int64)((unsigned __int128)(v5 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
      KeBugCheckEx(0x4Eu, 0x99uLL, v19 + (v19 >> 63), v9 & 7, v8 & *(_QWORD *)(v10 + 24));
    }
    v11 = 0LL;
    if ( (v7 & 0x42) != 0 && (v9 & 0x10) == 0 )
    {
      LOBYTE(v5) = (*(_QWORD *)(v10 + 16) & 0x400LL) == 0;
      if ( ((unsigned __int8)v5 & (unsigned __int8)~(v9 >> 3)) != 0 )
      {
        v11 = MiCapturePageFileInfoInline(v10 + 16, 1LL);
        v8 = 0x3FFFFFFFFFFFFFFFLL;
      }
      *(_BYTE *)(v10 + 34) |= 0x10u;
    }
    *(_QWORD *)&a1[8 * i + 16] = v11;
    v12 = *(_QWORD *)(v10 + 24) ^ v8 & (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) - 1LL));
    *(_QWORD *)(v10 + 24) = v12;
    if ( (v12 & v8) == 0
      && (unsigned int)MiPfnShareCountIsZero(v10, 1uLL) == 3
      && (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v3;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v20, retaddr);
    goto LABEL_16;
  }
  _m_prefetchw(&v20);
  v13 = v20;
  if ( v20 )
    goto LABEL_26;
  if ( (__int64 *)_InterlockedCompareExchange64(v21, 0LL, (signed __int64)&v20) != &v20 )
  {
    v13 = KxWaitForLockChainValid(&v20, v5);
LABEL_26:
    v20 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_16:
  v14 = *((_QWORD *)a1 + 1);
  if ( a1[1] == 1 )
  {
    MiLockNestedPageAtDpcInline(*((_QWORD *)a1 + 1));
  }
  else
  {
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
  }
  v15 = *(_QWORD *)(v14 + 24);
  if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v14 + 0x58000000000LL) / 48, *(_BYTE *)(v14 + 34) & 7, v15 & 0x3FFFFFFFFFFFFFFFLL);
  v16 = *a1;
  if ( (v15 & 0x3FFFFFFFFFFFFFFFuLL) < v16 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v14 + 0x58000000000LL) / 48, *(_BYTE *)(v14 + 34) & 7, v15 & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v14 + 24) = v15 ^ (v15 ^ (v15 - v16)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  for ( j = 0; j < *a1; ++j )
  {
    v18 = *(_QWORD *)&a1[8 * j + 16];
    if ( v18 )
      MiReleasePageFileInfo(v4, v18, 1LL);
  }
  result = v3;
  *a1 = 0;
  return result;
}
