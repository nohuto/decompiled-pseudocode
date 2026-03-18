/*
 * XREFs of MiInPageSingleKernelStack @ 0x1400B2E48
 * Callers:
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400B330C (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x1400B334C (MiSetPfnKernelStack.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiKernelStackVaToStackNode @ 0x140152A98 (MiKernelStackVaToStackNode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x1402563B4 (MiDeleteKernelStackNode.c)
 *     MiLogKernelStackEvent @ 0x1402614BC (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  void *v11; // r12
  __int64 result; // rax
  __int64 DemandZeroPte; // rax
  __int64 v14; // r10
  int v15; // r11d
  unsigned __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r13
  ULONG_PTR v23; // r15
  signed __int64 v24; // rsi
  ULONG_PTR v25; // r9
  __int64 v26; // rbx
  unsigned __int64 v27; // r14
  unsigned __int8 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  unsigned __int16 v32; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v33; // [rsp+30h] [rbp-D0h]
  unsigned int BugCheckParameter1; // [rsp+34h] [rbp-CCh]
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  void *v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v39; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v40; // [rsp+60h] [rbp-A0h]
  ULONG_PTR *v41; // [rsp+68h] [rbp-98h]
  char *v42; // [rsp+70h] [rbp-90h]
  _QWORD *v43; // [rsp+78h] [rbp-88h]
  __int16 v44; // [rsp+80h] [rbp-80h] BYREF
  signed __int64 *v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v49; // [rsp+A8h] [rbp-58h]
  signed __int64 v50; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-18h] BYREF

  v2 = a1;
  v3 = a2[1];
  v5 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v43 = a2;
  v32 = *(_WORD *)(*(_QWORD *)(v5 + 192) + 146LL);
  v6 = *a2;
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = v7;
  BugCheckParameter1 = 0;
  v8 = (((unsigned __int64)(v6 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v41 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1454LL));
  if ( v41 == &MiSystemPartition )
  {
    v11 = 0LL;
    v37 = 0LL;
  }
  else
  {
    result = MiKernelStackVaToStackNode(v6 - 1);
    v37 = (void *)result;
    v11 = (void *)result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v9);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( v14 != DemandZeroPte )
  {
    if ( (v14 & 0x800) == 0 )
      v15 = 1;
    BugCheckParameter1 = v15;
  }
  MiMakeDemandZeroPte(24LL);
  v16 = v7;
  MiMakeDemandZeroPte(31LL);
  if ( v7 <= v8 )
  {
    v17 = &v51;
    do
    {
      v18 = MI_READ_PTE_LOCK_FREE(v16);
      if ( v18 != v21 && v18 != v19 && v18 != v20 && (v18 & 0x800) == 0 )
      {
        ++v10;
        *v17 = 4096LL;
        *(v17 - 1) = (__int64)(v16 << 25) >> 16;
        v17 += 2;
        if ( v10 == 18 )
          break;
      }
      v16 += 8LL;
    }
    while ( v16 <= v8 );
    if ( v10 > 1 )
      MiPrefetchVirtualMemory(v10, (__int64)&v50, 1LL, 45);
    v2 = a1;
  }
  v22 = 0LL;
  v38 = 0LL;
  v23 = ((unsigned __int64)v32 << 57) | 2;
  v24 = (__int64)(v8 << 25) >> 16;
  v40 = v23;
  v42 = (char *)&v44 + 1;
  v51 = 4096LL;
  while ( v8 >= v39 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v8, v2, 0LL);
    v47 = 0LL;
    v48 = 0LL;
    v45 = &v50;
    v50 = v24;
    v44 = 4;
    v46 = 1LL;
    v49 = v2;
    MmAccessFault(v23, v24, 0, v25);
    if ( (*(_DWORD *)v8 & 1) != 0 )
    {
      v36 = MI_READ_PTE_LOCK_FREE(v8);
      v26 = v36;
      v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      v33 = MiLockPageInline(v27);
      if ( v26 != MI_READ_PTE_LOCK_FREE(v8) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v28);
          v36 = MI_READ_PTE_LOCK_FREE(v8);
          v29 = v36;
          v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          MiLockPageInline(v27);
        }
        while ( v29 != MI_READ_PTE_LOCK_FREE(v8) );
        v23 = v40;
        v11 = v37;
        v22 = v38;
        v33 = v28;
      }
      MiSetPfnKernelStack(v27, a1);
      *(_QWORD *)(v27 + 40) = *(_QWORD *)(v27 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v27 + 35) = *(_BYTE *)(v27 + 35) & 0xF8 | 5;
      v30 = MiReleaseWsSwapReservationPfn(v27);
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v33);
      if ( v30 )
        MiReleasePageFileInfo(v41, v30, 0LL);
      v2 = a1;
      v8 -= 8LL;
      v24 -= 4096LL;
      v38 = ++v22;
    }
  }
  if ( v11 )
    MiDeleteKernelStackNode(v11);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v24 + 4096, (unsigned int)v22, 1LL);
  v31 = v43;
  result = v43[2];
  if ( *(_QWORD *)(result - 8) != v2 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v31[2] - 8LL), 0LL, v31[2]);
  }
  return result;
}
