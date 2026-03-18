/*
 * XREFs of MiInPageSingleKernelStack @ 0x140011AE8
 * Callers:
 *     KeSwapProcessOrStack @ 0x14015C090 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiReleaseWsSwapReservationPfn @ 0x140012054 (MiReleaseWsSwapReservationPfn.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiPrefetchVirtualMemory @ 0x140108070 (MiPrefetchVirtualMemory.c)
 *     MiKernelStackVaToStackNode @ 0x14013D064 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x140211E9C (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x14021BA2C (MiLogKernelStackEvent.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 result; // rax
  __int64 DemandZeroPte; // rax
  __int64 v14; // r9
  ULONG_PTR v15; // rbx
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r10
  unsigned int v21; // r13d
  ULONG_PTR v22; // r12
  ULONG_PTR v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  unsigned __int8 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rbx
  unsigned __int16 v36; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v37; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v40; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v42; // [rsp+58h] [rbp-A8h]
  ULONG_PTR *v43; // [rsp+60h] [rbp-A0h]
  char *v44; // [rsp+68h] [rbp-98h]
  _QWORD *v45; // [rsp+70h] [rbp-90h]
  __int16 v46; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v51; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v52; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-18h] BYREF

  v2 = a1;
  v3 = a2[1];
  v5 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v45 = a2;
  v36 = *(_WORD *)(*(_QWORD *)(v5 + 192) + 146LL);
  v6 = *a2;
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v7;
  v8 = (((unsigned __int64)(v6 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v43 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1452LL));
  if ( v43 == &MiSystemPartition )
  {
    v11 = 0LL;
  }
  else
  {
    result = MiKernelStackVaToStackNode(v6 - 1);
    v11 = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v9);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  BugCheckParameter1 = 0LL;
  if ( v14 != DemandZeroPte )
    BugCheckParameter1 = (v14 & 0x800) == 0;
  MiMakeDemandZeroPte(24LL);
  v15 = v7;
  MiMakeDemandZeroPte(31LL);
  if ( v7 <= v8 )
  {
    v16 = &v53;
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE(v15);
      if ( v17 != v20 && v17 != v18 && v17 != v19 && (v17 & 0x800) == 0 )
      {
        ++v10;
        *v16 = 4096LL;
        *(v16 - 1) = (__int64)(v15 << 25) >> 16;
        v16 += 2;
        if ( v10 == 18 )
          break;
      }
      v15 += 8LL;
    }
    while ( v15 <= v8 );
    if ( v10 > 1 )
      MiPrefetchVirtualMemory(v10, &v52, 1LL, 45LL);
    v2 = a1;
  }
  v21 = 0;
  v22 = ((unsigned __int64)v36 << 57) | 2;
  v23 = (__int64)(v8 << 25) >> 16;
  v42 = v22;
  v44 = (char *)&v46 + 1;
  v53 = 4096LL;
  while ( v8 >= v40 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v8, v2, 0LL);
    v49 = 0LL;
    v50 = 0LL;
    v47 = &v52;
    v52 = v23;
    v46 = 4;
    v48 = 1LL;
    v51 = v2;
    MmAccessFault(v22, v23);
    if ( (*(_DWORD *)v8 & 1) != 0 )
    {
      v39 = MI_READ_PTE_LOCK_FREE(v8);
      v24 = v39;
      v28 = MI_GET_PFN_FROM_PTE(&v39, v25, v26, v27);
      v37 = MiLockPageInline(v28);
      if ( v24 != MI_READ_PTE_LOCK_FREE(v8) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v29);
          v39 = MI_READ_PTE_LOCK_FREE(v8);
          v30 = v39;
          v28 = MI_GET_PFN_FROM_PTE(&v39, v31, v32, v33);
          MiLockPageInline(v28);
        }
        while ( v30 != MI_READ_PTE_LOCK_FREE(v8) );
        v22 = v42;
        v37 = v29;
      }
      *(_QWORD *)v28 = a1 | 1;
      *(_QWORD *)(v28 + 40) = *(_QWORD *)(v28 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v28 + 35) = *(_BYTE *)(v28 + 35) & 0xF8 | 5;
      v34 = MiReleaseWsSwapReservationPfn(v28);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v37);
      if ( v34 )
        MiReleasePageFileInfo(v43, v34, 0LL);
      v2 = a1;
      v8 -= 8LL;
      v23 -= 4096LL;
      ++v21;
    }
  }
  if ( v11 )
    MiDeleteKernelStackNode(v11);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v23 + 4096, v21, 1LL);
  v35 = v45;
  result = v45[2];
  if ( *(_QWORD *)(result - 8) != v2 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v35[2] - 8LL), 0LL, v35[2]);
  }
  return result;
}
