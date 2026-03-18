/*
 * XREFs of MiDeletePageTableHierarchy @ 0x1401052C0
 * Callers:
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 *     MiDecreaseUsedPtesCount @ 0x1401057E0 (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void *__fastcall MiDeletePageTableHierarchy(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  _KPROCESS *Process; // r13
  ULONG_PTR v6; // rbp
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rax
  _KPROCESS *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR UsedPtesHandle; // rbx
  int v16; // ebp
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  void *result; // rax
  __int64 v21; // [rsp+30h] [rbp-128h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp-120h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-108h] BYREF
  int v24; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v25; // [rsp+64h] [rbp-F4h]
  __int64 v26; // [rsp+68h] [rbp-F0h]
  __int64 v27; // [rsp+70h] [rbp-E8h]
  __int64 v28; // [rsp+78h] [rbp-E0h]

  v3 = 0LL;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v26 = 20LL;
  v24 = 1;
  v25 = 0;
  v27 = 0LL;
  v28 = 0LL;
  while ( 1 )
  {
    v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v21 = MI_READ_PTE_LOCK_FREE(v6);
    v7 = v21;
    v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v21);
    v10 = v9 + 48 * v8;
    v11 = v10;
    if ( v4 )
      v11 = v4;
    v4 = v11;
    MiTerminateWsle(&Process[1].IdealNode[12], a2, 4LL);
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != v6 )
      KeBugCheckEx(0x1Au, 0x401uLL, v6, v7, *(_QWORD *)(v10 + 8));
    MiInsertTbFlushEntry((__int64)&v24, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    ++v3;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
      break;
    UsedPtesHandle = MiGetUsedPtesHandle(a2, v12, v13, v14);
    MiDecreaseUsedPtesCount(UsedPtesHandle);
    if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) != 0 )
      break;
    a2 = v6 & 0xFFFFFFFFFFFFF000uLL;
  }
  MiFlushTbList((__int64)&v24, v12);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -v3);
  v16 = BYTE4(PerfGlobalGroupMask) & 1;
  do
  {
    v17 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v4);
    *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
    if ( v16 )
    {
      memset(v22, 0, sizeof(v22));
      MiIdentifyPfn((_OWORD *)v4, v22, v18);
    }
    v19 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v19 < 0x10000 )
    {
      if ( (unsigned int)MiDecrementShareCount(v4) != 3 )
        goto LABEL_16;
    }
    else
    {
      MiDecrementShareCount(v4);
    }
    MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL)), 1uLL, 4uLL);
LABEL_16:
    if ( v19 != 1 )
      *(_QWORD *)v4 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v17);
    result = (void *)MiDecrementShareCount(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v3;
    v4 = v17;
    if ( v16 )
    {
      v23[1] = 24LL;
      v23[0] = v22;
      result = EtwTraceKernelEvent((int)v23, 1, 0x20000001u, 631, 289413890);
    }
  }
  while ( v3 );
  return result;
}
