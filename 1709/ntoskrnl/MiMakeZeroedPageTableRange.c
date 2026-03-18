/*
 * XREFs of MiMakeZeroedPageTableRange @ 0x1400C3F64
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDemotePfnListChain @ 0x14022E394 (MiDemotePfnListChain.c)
 *     MxCopyPage @ 0x14082BAD0 (MxCopyPage.c)
 */

void __fastcall MiMakeZeroedPageTableRange(unsigned __int64 a1, _KPROCESS *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  int v6; // r11d
  unsigned int v7; // ebx
  bool v8; // zf
  __int64 PteShadow; // r10
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edx
  bool v20; // cc
  unsigned __int64 v21; // rbx
  char v22[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  _KPROCESS *i; // [rsp+58h] [rbp-A8h]
  BOOL v29; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v30; // [rsp+64h] [rbp-9Ch]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v27 = a3;
  v23 = a4;
  v8 = *(_DWORD *)(a5 + 48) == 2;
  v31 = 20LL;
  v30 = 0;
  v29 = v8;
  v32 = 0LL;
  v33 = 0LL;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a4) )
    v5 = *(_QWORD *)(a3 + 16LL * a4);
  if ( (unsigned __int64)a2 > *(_QWORD *)(a3 + 16LL * a4 + 8) )
    a2 = *(_KPROCESS **)(a3 + 16LL * a4 + 8);
  for ( i = a2; v5 <= (unsigned __int64)i; v5 += 8LL )
  {
    PteShadow = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v5, *(_QWORD *)v5);
    v25 = PteShadow;
    v24 = PteShadow & 1;
    if ( (PteShadow & 1) != 0
      && (v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v25), v10 != MiState[v11 + 573])
      && (v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v25), v12 != MiState[v13 + 569])
      && ((PteShadow & 0x800) != 0 || (PteShadow & 0x42) != 0) )
    {
      if ( !v7 || (PteShadow & 0x80u) == 0LL )
        goto LABEL_32;
    }
    else if ( !(unsigned int)MiMakeLargePageTable(v5, PteShadow, v6, v7, a5, (__int64)&v29) )
    {
      v14 = *(_QWORD **)(a5 + 16);
      v26 = v14;
      if ( !v14 )
      {
        MiDemotePfnListChain(a5, 2LL, 0LL);
        v14 = *(_QWORD **)(a5 + 16);
        v26 = v14;
      }
      *(_QWORD *)(a5 + 16) = *v14;
      v15 = (__int64)(v14 + 0xB000000000LL);
      if ( v24 )
      {
        v24 = (__int64)(v5 << 25) >> 16;
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v16 = MiMapPageInHyperSpaceWorker(v15 / 48, v22, 0x80000000LL);
          KeCopyPage(v16, v24);
          LOBYTE(v17) = v22[0];
          MiUnmapPageInHyperSpaceWorker(v16, v17, 0x80000000LL);
          v7 = v23;
        }
        else
        {
          MxCopyPage(v15 / 48);
        }
      }
      MiInitializeSystemPageTable(a5, v5, v26, &v29);
      if ( v7 == 3 && *(_DWORD *)(a5 + 48) != 2 )
      {
        v18 = v5;
        v19 = 3;
        do
        {
          v18 = v18 << 25 >> 16;
          --v19;
        }
        while ( v19 );
        MiReplicatePteChange(v18, v18);
      }
      ++*(_QWORD *)(a5 + 40);
      if ( *(_DWORD *)(a5 + 48) == 2 )
      {
LABEL_32:
        v20 = v7 <= *(_DWORD *)(a5 + 56);
      }
      else
      {
        v20 = v7 <= *(_DWORD *)(a5 + 56);
        if ( v7 == *(_DWORD *)(a5 + 56) )
        {
          MiFlushTbList((__int64)&v29, a2);
          v21 = *(unsigned __int8 *)(a5 + 60);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388924);
          __writecr8(v21);
          ExAcquireSpinLockExclusive(&dword_140388924);
          v7 = v23;
          goto LABEL_32;
        }
      }
      if ( !v20 )
      {
        MiFlushTbList((__int64)&v29, a2);
        MiMakeZeroedPageTableRange((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, v27, v7 - 1, a5);
      }
    }
    v6 = v27;
  }
  MiFlushTbList((__int64)&v29, a2);
}
