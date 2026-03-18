/*
 * XREFs of MiInPageSingleKernelStack @ 0x1400AD4B4
 * Callers:
 *     KeSwapProcessOrStack @ 0x140142E10 (KeSwapProcessOrStack.c)
 * Callees:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400AD9DC (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1400ADA38 (MiSetPfnKernelStack.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1402197B4 (MiDeleteKernelStackNode.c)
 *     MiKernelStackVaToStackNode @ 0x14021980C (MiKernelStackVaToStackNode.c)
 *     MiLogKernelStackEvent @ 0x140228320 (MiLogKernelStackEvent.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  unsigned __int16 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  void *v11; // r12
  __int64 result; // rax
  __int64 DemandZeroPte; // rax
  __int64 v14; // rdx
  int v15; // r10d
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rbx
  __int64 *v21; // rsi
  __int64 PteShadow; // rax
  unsigned int v23; // r13d
  ULONG_PTR v24; // rbx
  ULONG_PTR v25; // rdx
  ULONG_PTR v26; // r15
  signed __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rdi
  unsigned __int8 v36; // [rsp+30h] [rbp-D0h]
  unsigned int BugCheckParameter1; // [rsp+34h] [rbp-CCh]
  void *v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v41; // [rsp+50h] [rbp-B0h]
  unsigned __int64 i; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v44; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v45; // [rsp+70h] [rbp-90h]
  _QWORD *v46; // [rsp+78h] [rbp-88h]
  __int16 v47; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 *v48; // [rsp+88h] [rbp-78h]
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v52; // [rsp+A8h] [rbp-58h]
  signed __int64 v53; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-18h] BYREF

  v2 = a2[1];
  v4 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v46 = a2;
  v5 = *(_WORD *)(*(_QWORD *)(v4 + 192) + 146LL);
  v6 = *a2;
  v7 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v7;
  BugCheckParameter1 = 0;
  v8 = (((unsigned __int64)(v6 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (_QWORD *)((((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = 0LL;
  v45 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1452LL));
  if ( v45 == &MiSystemPartition )
  {
    v11 = 0LL;
    v39 = 0LL;
  }
  else
  {
    result = MiKernelStackVaToStackNode(v6 - 1);
    v39 = (void *)result;
    v11 = (void *)result;
    if ( !result )
      return result;
  }
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    MiReadPteShadow(v9, *v9);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v14 != DemandZeroPte )
  {
    if ( (v14 & 0x800) == 0 )
      v15 = 1;
    BugCheckParameter1 = v15;
  }
  MiMakeDemandZeroPte(24LL);
  v19 = MiMakeDemandZeroPte(31LL);
  v20 = v7;
  if ( v7 <= v8 )
  {
    v21 = &v54;
    do
    {
      PteShadow = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v20, *(_QWORD *)v20);
        v16 = 1LL;
      }
      if ( PteShadow != v17 && PteShadow != v18 && PteShadow != v19 && (PteShadow & 0x800) == 0 )
      {
        v10 += v16;
        *v21 = 4096LL;
        *(v21 - 1) = (__int64)(v20 << 25) >> 16;
        v21 += 2;
        if ( v10 == 18 )
          break;
      }
      v20 += 8LL;
    }
    while ( v20 <= v8 );
    v11 = v39;
    if ( v10 > v16 )
    {
      MiPrefetchVirtualMemory(v10, &v53, v16, 45LL);
      v16 = 1LL;
    }
  }
  v23 = 0;
  v40 = 0LL;
  v24 = a1;
  v25 = v16 | (unsigned __int64)&v47;
  v26 = ((unsigned __int64)v5 << 57) | 2;
  v27 = (__int64)(v8 << 25) >> 16;
  v44 = v26;
  v54 = 4096LL;
  for ( i = v16 | (unsigned __int64)&v47; v8 >= v41; v25 = i )
  {
    v28 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      LOWORD(v28) = MiReadPteShadow(v8, *(_QWORD *)v8);
      v25 = i;
      v16 = 1LL;
    }
    if ( (v28 & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v8, a1, 0LL);
    v49 = v16;
    v50 = 0LL;
    v51 = 0LL;
    v53 = v27;
    v47 = 4;
    v48 = &v53;
    v52 = v24;
    MmAccessFault(v26, v27, 0LL, v25);
    v16 = 1LL;
    if ( (*(_DWORD *)v8 & 1) != 0 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
          v31 = MiReadPteShadow(v8, *(_QWORD *)v8);
        v43 = v31;
        v32 = MI_GET_PFN_FROM_PTE(&v43, v29, v16, v30);
        LOBYTE(v29) = MiLockPageInline(v32);
        v36 = v29;
        v33 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v33 = MiReadPteShadow(v8, *(_QWORD *)v8);
          LOBYTE(v29) = v36;
        }
        if ( v31 == v33 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8((unsigned __int8)v29);
      }
      MiSetPfnKernelStack(v32, a1);
      *(_QWORD *)(v32 + 40) = *(_QWORD *)(v32 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v32 + 35) = *(_BYTE *)(v32 + 35) & 0xF8 | 5;
      v34 = MiReleaseWsSwapReservationPfn(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v36);
      v26 = v44;
      v11 = v39;
      if ( v34 )
        MiReleasePageFileInfo(v45, v34, 0LL);
      v24 = a1;
      v8 -= 8LL;
      v27 -= 4096LL;
      v16 = 1LL;
      v23 = ++v40;
    }
  }
  if ( v11 )
    MiDeleteKernelStackNode(v11);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v27 + 4096, v23, 1LL);
  v35 = v46;
  result = v46[2];
  if ( *(_QWORD *)(result - 8) != v24 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v35[2] - 8LL), 0LL, v35[2]);
  }
  return result;
}
