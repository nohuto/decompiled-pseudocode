/*
 * XREFs of MmDeleteKernelStack @ 0x140029590
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140028D80 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x1400AD320 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x140424040 (KeInitThread.c)
 *     KeUserModeCallback @ 0x1404943E0 (KeUserModeCallback.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     KeAllocateCalloutStackEx @ 0x1405D60F0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeFreeCalloutStack @ 0x1406D8290 (KeFreeCalloutStack.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x140228320 (MiLogKernelStackEvent.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14022A120 (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 PteShadow; // rax
  char v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  unsigned int v16; // r14d
  unsigned int v17; // ebp
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21; // si
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v25; // rcx
  signed __int64 result; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _SLIST_HEADER *v30; // rcx
  __int64 v31; // r15
  int v32; // ebp
  int v33; // r14d
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r13
  __int64 *v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+28h] [rbp-80h] BYREF
  __int64 v44; // [rsp+30h] [rbp-78h] BYREF
  __int64 v45; // [rsp+38h] [rbp-70h] BYREF
  _SLIST_ENTRY *v46; // [rsp+40h] [rbp-68h]
  unsigned __int64 v47; // [rsp+48h] [rbp-60h]
  __int64 v48; // [rsp+50h] [rbp-58h]
  PSLIST_HEADER ListHead; // [rsp+58h] [rbp-50h]
  int v50; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v51; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v52; // [rsp+C0h] [rbp+18h]
  int v53; // [rsp+C8h] [rbp+20h] BYREF

  v51 = a2;
  v3 = (unsigned int)a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v5 = (a2 & 1) == 0;
    v6 = 18LL;
    if ( v5 )
      v6 = (unsigned __int8)byte_14038900C;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v6 << 12), v6, 0LL);
    v3 = v51;
  }
  v7 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v8 = v7 - 0x98000000008LL;
  v47 = v7 - 0x98000000008LL;
  PteShadow = *(_QWORD *)(v7 - 0x98000000008LL);
  if ( (unsigned __int64)(v7 - 0x98000000008LL) >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v7 - 0x98000000008LL, *(_QWORD *)(v7 - 0x98000000008LL));
  v43 = PteShadow;
  if ( *(ULONG_PTR **)(qword_140388AF0 + 8 * ((*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v43, a2, a3, v3) + 40) >> 40) & 0x3FFLL)) != &MiSystemPartition
    || (v10 & 1) != 0 )
  {
    return MiDeleteKernelStack(v8, v51);
  }
  v11 = MI_GET_NODE_FROM_VALID_PTE(v7 - 0x98000000008LL);
  v15 = 0LL;
  LODWORD(v52) = v11;
  v16 = v11;
  v17 = 0;
  v18 = 2LL;
  if ( (v13 & 4) == 0 )
  {
LABEL_33:
    v27 = 0xFFFFF00000000001uLL;
    v28 = 400LL * v16;
    v29 = v17;
    v48 = v28;
    while ( 1 )
    {
      v52 = v29;
      v30 = (_SLIST_HEADER *)((char *)&qword_140388510[2 * v29 + 7] + v28);
      ListHead = v30;
      if ( LOWORD(v30->Alignment) < SLODWORD(v30[1].Alignment) )
      {
        v31 = (__int64)(v8 << 25) >> 16;
        v46 = (_SLIST_ENTRY *)v31;
        *(_QWORD *)(v31 + 0xFE0) = v31 ^ qword_140389280;
        if ( v29 == 1 )
          return (signed __int64)RtlpInterlockedPushEntrySList(v30, (PSLIST_ENTRY)(v31 + 4080));
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v32 = -1;
        v33 = 1;
        v34 = v8 - 8LL * (unsigned __int8)byte_14038900C;
        v35 = v34 + 8LL * ((unsigned int)(unsigned __int8)byte_14038900C + 1);
        v36 = (__int64 *)(v34 + 8);
        if ( (unsigned __int64)v36 >= v35 )
          goto LABEL_61;
        do
        {
          v37 = *v36;
          if ( (unsigned __int64)v36 >= v14 && (unsigned __int64)v36 <= 0xFFFFF6FB7DBED7F8uLL )
            v37 = MiReadPteShadow(v36, *v36);
          v45 = v37;
          if ( (v37 & 1) != 0 )
          {
            v38 = MI_GET_PFN_FROM_PTE(&v45, v29, v18, v27);
            v53 = v15;
            v39 = v38;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v53);
                while ( *(__int64 *)(v39 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
              v27 = 0xFFFFF00000000001uLL;
              v14 = 0xFFFFF6FB7DBED000uLL;
              v15 = 0LL;
            }
            v40 = *v36;
            if ( (unsigned __int64)v36 >= v14 && (unsigned __int64)v36 <= 0xFFFFF6FB7DBED7F8uLL )
              v40 = MiReadPteShadow(v36, *v36);
            if ( v37 == v40 )
            {
              v41 = *(_QWORD *)(v39 + 40) >> 58;
              if ( v32 == -1 )
              {
                v32 = (unsigned __int16)v41;
              }
              else if ( v32 != (unsigned __int16)v41 )
              {
                v33 = v15;
              }
              *(_QWORD *)v39 &= v27;
              ++v36;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            ++v36;
          }
        }
        while ( (unsigned __int64)v36 < v35 );
        v31 = (__int64)v46;
        v8 = v47;
        if ( v33 == 1 )
        {
LABEL_61:
          RtlpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)(v31 + 4080));
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          return result;
        }
        __writecr8(CurrentIrql);
        v29 = v52;
      }
      if ( v29 != 1 )
        return MiDeleteKernelStack(v8, v51);
      v28 = v48;
      v29 = v15;
      v18 = 2LL;
    }
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)v8;
    if ( v8 >= v14 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      v19 = MiReadPteShadow(v8, *(_QWORD *)v8);
    v44 = v19;
    v20 = MI_GET_PFN_FROM_PTE(&v44, v12, v18, v13);
    v21 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v50 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v50);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
      v14 = 0xFFFFF6FB7DBED000uLL;
      v15 = 0LL;
    }
    v22 = *(_QWORD *)v8;
    if ( v8 >= v14 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      v22 = MiReadPteShadow(v8, *(_QWORD *)v8);
    if ( v19 == v22 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v21);
  }
  if ( (*(_QWORD *)v20 & 0xFFFFFFFFFFELL) != 0 )
    v23 = 8 * (*(_QWORD *)v20 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v23 = v15;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v21);
  v16 = v52;
  if ( v23 != -32LL )
  {
LABEL_32:
    v18 = 2LL;
    goto LABEL_33;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] != (_DWORD)v52
    || CurrentPrcb->CachedStack
    || (v25 = (__int64)(v8 << 25) >> 16,
        *(_QWORD *)(v25 + 4064) = v25 ^ qword_140389280,
        (result = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentPrcb->CachedStack, v25 + 4080, 0LL)) != 0) )
  {
    v17 = 1;
    goto LABEL_32;
  }
  return result;
}
