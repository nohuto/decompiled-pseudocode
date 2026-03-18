/*
 * XREFs of MiDeletePageTableHierarchy @ 0x1400EB190
 * Callers:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiDecreaseUsedPtesCount @ 0x1400EB520 (MiDecreaseUsedPtesCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiDeletePageTableHierarchy(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _KPROCESS *Process; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 PteShadow; // r9
  __int64 v10; // rax
  ULONG_PTR v11; // r9
  __int64 v12; // r10
  _KPROCESS *v13; // rdx
  ULONG_PTR UsedPtesHandle; // rdi
  int v15; // r14d
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // [rsp+30h] [rbp-128h] BYREF
  __int64 v20[3]; // [rsp+38h] [rbp-120h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-108h] BYREF
  int v22; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+64h] [rbp-F4h]
  __int64 v24; // [rsp+68h] [rbp-F0h]
  __int64 v25; // [rsp+70h] [rbp-E8h]
  __int64 v26; // [rsp+78h] [rbp-E0h]

  v4 = 0LL;
  v5 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v24 = 20LL;
  v22 = 1;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  while ( 1 )
  {
    v7 = 0x7FFFFFFFF8LL;
    v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    PteShadow = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v8);
    v19 = PteShadow;
    v10 = MI_GET_PFN_FROM_PTE(&v19, v7, a3, PteShadow);
    if ( !v5 )
      v5 = v10;
    if ( (v12 | *(_QWORD *)(v10 + 8)) != v8 )
      KeBugCheckEx(0x1Au, 0x401uLL, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v11, *(_QWORD *)(v10 + 8));
    if ( (unsigned int)MiTerminateWsle((__int64)&Process[1].IdealNode[12], a2, 0) )
      MiInsertTbFlushEntry(&v22, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
    ++v4;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBEDFFFuLL )
      break;
    UsedPtesHandle = MiGetUsedPtesHandle(a2);
    MiDecreaseUsedPtesCount(UsedPtesHandle);
    if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) != 0 )
      break;
    a2 = v8 & 0xFFFFFFFFFFFFF000uLL;
  }
  MiFlushTbList((__int64)&v22, v13);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -v4);
  v15 = BYTE4(PerfGlobalGroupMask) & 1;
  do
  {
    v16 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiLockPageAtDpcInline(v5);
    *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
    if ( v15 )
    {
      memset(v20, 0, sizeof(v20));
      MiIdentifyPfn((_OWORD *)v5, v20);
    }
    v17 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v17 < 0x10000 )
    {
      if ( (unsigned int)MiDecrementShareCount(v5) != 3 )
        goto LABEL_21;
    }
    else
    {
      MiDecrementShareCount(v5);
    }
    MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL)), 1uLL, 4LL, v18);
LABEL_21:
    if ( v17 != 1 )
      *(_QWORD *)v5 &= ~1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v16);
    MiDecrementShareCount(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v4;
    v5 = v16;
    if ( v15 )
    {
      v21[1] = 24LL;
      v21[0] = v20;
      EtwTraceKernelEvent((__int64)v21, 1u, 0x20000001u, 0x277u, 0x11401B02u);
    }
  }
  while ( v4 );
}
