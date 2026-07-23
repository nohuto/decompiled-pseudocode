/*
 * XREFs of MmCreateKernelStack @ 0x140029020
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140028D80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x140424040 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1404943E0 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1405D60F0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiMarkPfnTradable @ 0x1400ADA78 (MiMarkPfnTradable.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140228320 (MiLogKernelStackEvent.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned __int16 a2, unsigned __int64 a3)
{
  unsigned int v4; // r10d
  ULONG_PTR *v5; // rsi
  unsigned int v6; // edi
  unsigned __int64 v7; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rax
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r15
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v14; // r15
  __int64 i; // rbx
  _SLIST_HEADER *v16; // rdi
  __int16 Alignment; // r14
  unsigned __int8 CurrentIrql; // r13
  PSLIST_ENTRY v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  ULONG_PTR Next; // r9
  ULONG_PTR v23; // rsi
  ULONG_PTR v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // r9
  unsigned __int64 v27; // rbp
  __int64 PteShadow; // rbx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v33; // rbx
  unsigned int v34; // ebp
  __int64 v35; // rax
  __int64 v36; // rdi
  int v37; // r14d
  int v38; // [rsp+30h] [rbp-68h]
  unsigned __int64 v39; // [rsp+38h] [rbp-60h]
  unsigned __int64 v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+50h] [rbp-48h] BYREF
  __int64 v42; // [rsp+58h] [rbp-40h]
  int v44; // [rsp+B8h] [rbp+20h] BYREF

  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v39 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1452LL));
  }
  else if ( a3 )
  {
    v39 = a3;
    v5 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1452LL));
  }
  else
  {
    v39 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v6 = 18;
    v7 = 6LL;
    v38 = 18;
    if ( (a1 & 4) != 0 )
      v7 = 18LL;
LABEL_59:
    v33 = v6;
    if ( (unsigned int)MiChargeCommit(v5, v6, (v4 >> 1) & 1) )
    {
      v34 = v6 + 1;
      v35 = MiReservePtes(&unk_140388FA0, v6 + 1);
      v36 = v35;
      if ( v35 )
      {
        v37 = v35;
        v14 = (__int64)((v35 << 25) + ((v33 + 1) << 28)) >> 16;
        if ( (a1 & 5) == 1 )
          v37 = v35 + 96;
        if ( (unsigned int)MiChargeResident(v5, v7, 0LL) )
        {
          if ( (unsigned int)MiAllocateKernelStackPages((_DWORD)v5, v37 + 8, v7, v39, a2, a1) )
          {
            if ( v5 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_1403893F8, v33);
            goto LABEL_50;
          }
          if ( v5 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 752, v7);
        }
        MiReleasePtes(&unk_140388FA0, v36, v34);
      }
      MiReturnCommit(v5, v33);
    }
    return 0LL;
  }
  v6 = (unsigned __int8)byte_14038900C;
  v38 = (unsigned __int8)byte_14038900C;
  v7 = (unsigned __int8)byte_14038900C;
  v40 = (unsigned __int8)byte_14038900C;
  if ( (a1 & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 1;
    if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == a2 )
    {
      if ( CurrentPrcb->CachedStack )
      {
        v10 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 - 16);
          v12 = v10 - 4080;
          BugCheckParameter4 = (v10 - 4080) ^ qword_140389280;
          if ( v11 != BugCheckParameter4 )
            KeBugCheckEx(0x1Au, 0x3470uLL, v12, v11, BugCheckParameter4);
          v14 = (__int64)(((v12 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
          goto LABEL_51;
        }
      }
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v5 != &MiSystemPartition )
    goto LABEL_59;
  for ( i = v9; ; i = 0LL )
  {
    v16 = &qword_140388510[25 * a2 + 2 * i];
    Alignment = v16[7].Alignment;
    if ( !Alignment )
      goto LABEL_24;
    if ( i == 1 )
    {
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v19 = RtlpInterlockedPopEntrySList(v16 + 7);
    if ( v19 )
      break;
    if ( i != 1 )
      __writecr8(CurrentIrql);
LABEL_24:
    ++*((_DWORD *)&v16[8].HeaderX64 + 1);
    if ( i != 1 )
    {
      v7 = v40;
      v6 = v38;
      v4 = a1;
      goto LABEL_59;
    }
    v9 = 0;
  }
  if ( Alignment == 1 && !*((_DWORD *)&v16[8].HeaderX64 + 3) )
    *((_DWORD *)&v16[8].HeaderX64 + 3) = 1;
  Next = (ULONG_PTR)v19[-1].Next;
  v23 = (ULONG_PTR)&v19[-255];
  v24 = (unsigned __int64)&v19[-255] ^ qword_140389280;
  if ( Next != v24 )
    KeBugCheckEx(0x1Au, 0x3470uLL, v23, Next, v24);
  v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = (__int64)((v25 << 25) + 0x10000000) >> 16;
  v42 = v14;
  if ( v9 != 1 )
  {
    v26 = 0xFFFFFFFFFFELL;
    v27 = v25 - 8LL * (unsigned __int8)byte_14038900C + 8;
    do
    {
      PteShadow = *(_QWORD *)v25;
      if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v25, *(_QWORD *)v25);
      v41 = PteShadow;
      v29 = MI_GET_PFN_FROM_PTE(&v41, v20, v21, v26);
      v44 = 0;
      v30 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
        v26 = 0xFFFFFFFFFFELL;
      }
      v31 = *(_QWORD *)v25;
      if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        v31 = MiReadPteShadow(v25, *(_QWORD *)v25);
      if ( PteShadow == v31 )
      {
        *(_QWORD *)v30 ^= v26 & (*(_QWORD *)v30 ^ (v39 >> 3));
        if ( (*(_BYTE *)v30 & 1) == 0 )
        {
          MiMarkPfnTradable(v30, 1LL);
          v26 = 0xFFFFFFFFFFELL;
        }
        v25 -= 8LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v25 >= v27 );
    __writecr8(CurrentIrql);
    v14 = v42;
  }
  LODWORD(v7) = v40;
LABEL_50:
  LOBYTE(v4) = a1;
  v6 = v38;
LABEL_51:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 8) != 0 )
    MiLogKernelStackEvent(v14 - (v6 << 12), (unsigned int)v7, 1LL);
  return v14;
}
