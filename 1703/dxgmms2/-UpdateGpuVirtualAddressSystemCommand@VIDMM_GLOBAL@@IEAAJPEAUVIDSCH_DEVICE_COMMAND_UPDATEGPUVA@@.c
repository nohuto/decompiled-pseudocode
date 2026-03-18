/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001EED0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchGetPagingContext @ 0x1C0029E98 (VidSchGetPagingContext.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0051460 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C009B6B0 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C009D094 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DD.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        char *P,
        struct VIDMM_ALLOC **a3)
{
  VIDMM_GLOBAL *v4; // rsi
  unsigned int v5; // ebx
  int v6; // r14d
  CVirtualAddressAllocator *v7; // r13
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rax
  struct VIDMM_ALLOC *v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rdx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // r15
  __int64 v22; // rcx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v23; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 **v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 **v37; // r15
  __int64 v38; // rsi
  __int64 **v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r14d
  struct _MDL *FullMDL; // rax
  unsigned __int64 v45; // rcx
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  struct VIDMM_MAPPED_VA_RANGE *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 *v62; // rcx
  __int64 *v63; // rax
  volatile signed __int32 *v64; // rcx
  __int64 v65; // r11
  struct _MDL *v66; // r10
  __int64 v67; // rcx
  char v68; // al
  unsigned __int64 AllocationOffsetInBytes; // r9
  int v70; // r13d
  int v71; // eax
  struct _MDL *v72; // rax
  __int64 v73; // rax
  unsigned int v74; // ecx
  __int64 **v75; // r12
  struct VIDMM_MAPPED_VA_RANGE *v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  struct _LIST_ENTRY *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  _QWORD *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int64 v95; // [rsp+40h] [rbp-69h]
  unsigned __int64 v96; // [rsp+48h] [rbp-61h]
  CVirtualAddressAllocator *v97; // [rsp+50h] [rbp-59h]
  struct _LIST_ENTRY v98; // [rsp+58h] [rbp-51h] BYREF
  struct _LIST_ENTRY v99; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v100; // [rsp+78h] [rbp-31h]
  struct _MDL *v101; // [rsp+80h] [rbp-29h]
  struct VIDMM_ALLOC *v102; // [rsp+88h] [rbp-21h]
  __int64 v103; // [rsp+90h] [rbp-19h]
  __int64 PagingContext; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v105; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v106[88]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int v108; // [rsp+118h] [rbp+6Fh]
  __int64 v110; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = this;
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 8011);
  v5 = 0;
  v6 = 0;
  LOBYTE(v108) = 0;
  v7 = (CVirtualAddressAllocator *)**((_QWORD **)P + 11);
  v97 = v7;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v106, (struct _KTHREAD **)v7 + 7);
  if ( !*((_QWORD *)P + 14) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    WdLogEvent5_WdEvent(v10);
    v6 = -1073741823;
    LOBYTE(v108) = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)P + 8);
  if ( P[176] )
  {
    if ( !*((_QWORD *)P + 15) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v11);
      WdLogEvent5_WdEvent(v13);
      v6 = -1073741823;
      LOBYTE(v108) = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)(P + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v106);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v15 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 160), 0, 0) )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    v22 = v108;
    goto LABEL_33;
  }
  v16 = -1LL;
  v17 = *((_QWORD *)P + 14);
  v18 = *((unsigned int *)P + 4);
  v105 = v18;
  v95 = -1LL;
  v96 = 0LL;
  PagingContext = 3 * (v18 + 4);
  v19 = (struct _LIST_ENTRY *)(v17 + 24 * (v18 + 4));
  Flink = v19->Flink;
  v99.Blink = v19;
  if ( Flink == v19 )
  {
    Blink = (struct _LIST_ENTRY *)(v17 + 24 * (v105 + 4));
    v98.Flink = v19;
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v17 + 24 * v18 + 112);
    if ( !Blink )
      Blink = Flink;
    v98.Flink = Blink;
  }
  v22 = *((unsigned int *)P + 9);
  LODWORD(v110) = v22;
  if ( (unsigned int)v22 < *((_DWORD *)P + 5) )
  {
    while ( 1 )
    {
      v23 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)P + 3)
                                                               + ((unsigned __int64)(unsigned int)v22 << 6));
      OperationType = v23->OperationType;
      if ( v23->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
        {
          if ( *((_QWORD *)this + 5115) )
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
              this,
              **((struct _EPROCESS ***)v7 + 11),
              0LL,
              (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)P + 3)
                                                                 + ((unsigned __int64)(unsigned int)v22 << 6)));
          v25 = (__int64 **)(P + 96);
          v26 = *((_QWORD *)P + 12) - 8LL;
          if ( (*(_BYTE *)(v26 + 88) & 8) != 0 )
          {
            v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v7, (struct VIDMM_MAPPED_VA_RANGE *)v26, a3, 0);
            if ( v6 < 0 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27);
              v29[3] = *(_QWORD *)(v26 + 96);
              v30 = *(_QWORD *)(v26 + 104);
              v29[5] = 22950LL;
              goto LABEL_28;
            }
LABEL_36:
            v33 = v96;
            if ( v16 >= *(_QWORD *)(v26 + 96) )
              v16 = *(_QWORD *)(v26 + 96);
            v95 = v16;
            if ( v96 <= *(_QWORD *)(v26 + 104) )
              v33 = *(_QWORD *)(v26 + 104);
            v96 = v33;
            v34 = **v25;
            if ( (__int64 **)(*v25)[1] != v25 || *(__int64 **)(v34 + 8) != *v25 )
              __fastfail(3u);
            *v25 = (__int64 *)v34;
            *(_QWORD *)(v34 + 8) = v25;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = 0LL;
            v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                   (struct _KTHREAD **)v7,
                   *((struct VIDMM_VAD **)P + 14),
                   *((_DWORD *)P + 4),
                   0LL,
                   (struct _LIST_ENTRY **)v26);
            if ( v6 >= 0 )
            {
LABEL_43:
              Blink = v99.Blink->Flink;
              v98.Flink = v99.Blink->Flink;
              goto LABEL_130;
            }
            v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35);
          }
          else
          {
            v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v7,
                   (struct VIDMM_MAPPED_VA_RANGE *)v26,
                   0,
                   -2,
                   0LL,
                   0LL,
                   0,
                   a3);
            if ( v6 >= 0 )
              goto LABEL_36;
            v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31);
            v29[3] = *(_QWORD *)(v26 + 96);
            v30 = *(_QWORD *)(v26 + 104);
            v29[5] = 22964LL;
LABEL_28:
            v29[4] = v30;
          }
          WdLogEvent5_WdWarning(v29);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v26);
          goto LABEL_30;
        }
        if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
          goto LABEL_131;
        if ( *((_QWORD *)this + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
            this,
            **((struct _EPROCESS ***)v7 + 11),
            0LL,
            (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)P + 3)
                                                               + ((unsigned __int64)(unsigned int)v22 << 6)));
        v37 = (__int64 **)(P + 48);
        if ( *v37 == (__int64 *)v37 )
          v6 = CVirtualAddressAllocator::BuildVaRangeList(
                 v7,
                 *((struct VIDMM_VAD **)P + 15),
                 *((struct VIDMM_VAD **)P + 14),
                 *((_DWORD *)P + 4),
                 (struct _LIST_ENTRY *)P + 3,
                 v23->Map.BaseAddress,
                 v23->Map.BaseAddress + v23->Map.SizeInBytes,
                 v23->Unmap.Protection.Value);
        if ( v6 < 0 )
        {
LABEL_84:
          if ( v6 != -1073741267 )
          {
            while ( *v37 != (__int64 *)v37 )
            {
              v62 = *v37;
              v63 = (__int64 *)**v37;
              if ( (__int64 **)(*v37)[1] != v37 || (__int64 *)v63[1] != v62 )
                __fastfail(3u);
              *v37 = v63;
              v64 = (volatile signed __int32 *)(v62 - 1);
              v63[1] = (__int64)v37;
              *((_QWORD *)v64 + 1) = 0LL;
              *((_QWORD *)v64 + 2) = 0LL;
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v64);
            }
          }
          goto LABEL_43;
        }
        v99.Flink = *(struct _LIST_ENTRY **)(*((_QWORD *)P + 14) + 8 * PagingContext);
        while ( 2 )
        {
          if ( *v37 == (__int64 *)v37 || v6 < 0 )
            goto LABEL_84;
          v38 = (__int64)(*v37 - 1);
          v39 = *(__int64 ***)(v38 + 56);
          if ( v39 )
          {
            v40 = **v39;
            if ( (*((_DWORD *)v39 + 7) & 3) == 2 )
            {
              v41 = *(_QWORD *)(v40 + 136);
              v42 = *(_DWORD *)(v41 + 80);
              if ( (v42 & 0x1001) != 0 )
              {
                v43 = 0;
                FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v40, 0LL);
                v45 = *(_QWORD *)(v38 + 72);
              }
              else
              {
                if ( (v42 & 0x1000) != 0 )
                  v43 = 0;
                else
                  v43 = *(_DWORD *)(v41 + 16) + 1;
                FullMDL = 0LL;
                v45 = *(_QWORD *)(v38 + 72) + *(_QWORD *)(v40 + 144);
              }
              v46 = *(_DWORD *)(v40 + 76) & 0x3F;
              v7 = v97;
              v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v97,
                     (struct VIDMM_MAPPED_VA_RANGE *)v38,
                     v46,
                     v43,
                     v45,
                     FullMDL,
                     0,
                     a3);
              if ( v6 < 0 )
              {
                v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47);
                v49[3] = *(_QWORD *)(v38 + 96);
                v49[4] = *(_QWORD *)(v38 + 104);
                v49[5] = 23054LL;
                WdLogEvent5_WdWarning(v49);
              }
              if ( v16 >= *(_QWORD *)(v38 + 96) )
                v16 = *(_QWORD *)(v38 + 96);
              v95 = v16;
              if ( v96 <= *(_QWORD *)(v38 + 104) )
                v96 = *(_QWORD *)(v38 + 104);
            }
            else
            {
              v7 = v97;
            }
LABEL_79:
            if ( v6 >= 0 )
            {
              v58 = **v37;
              if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v58 + 8) != *v37 )
                __fastfail(3u);
              *v37 = (__int64 *)v58;
              *(_QWORD *)(v58 + 8) = v37;
              *(_QWORD *)(v38 + 8) = 0LL;
              *(_QWORD *)(v38 + 16) = 0LL;
              v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                     (struct _KTHREAD **)v7,
                     *((struct VIDMM_VAD **)P + 14),
                     *((_DWORD *)P + 4),
                     &v99,
                     (struct _LIST_ENTRY **)v38);
              if ( v6 < 0 )
              {
                v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59);
                v61[3] = *(_QWORD *)(v38 + 96);
                v61[4] = *(_QWORD *)(v38 + 104);
                v61[5] = 23094LL;
                WdLogEvent5_WdWarning(v61);
                VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v38);
              }
            }
            continue;
          }
          break;
        }
        v50 = (struct VIDMM_MAPPED_VA_RANGE *)(*v37 - 1);
        if ( (*(_BYTE *)(v38 + 88) & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v7, v50, a3, 0);
          if ( v6 < 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51);
            v53[3] = *(_QWORD *)(v38 + 96);
            v54 = *(_QWORD *)(v38 + 104);
            v53[5] = 23067LL;
            goto LABEL_72;
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(v7, v50, 0, -2, 0LL, 0LL, 0, a3);
          if ( v6 < 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55);
            v53[3] = *(_QWORD *)(v38 + 96);
            v54 = *(_QWORD *)(v38 + 104);
            v53[5] = 23080LL;
LABEL_72:
            v53[4] = v54;
            WdLogEvent5_WdWarning(v53);
          }
        }
        v57 = v96;
        if ( v16 >= *(_QWORD *)(v38 + 96) )
          v16 = *(_QWORD *)(v38 + 96);
        v95 = v16;
        if ( v96 <= *(_QWORD *)(v38 + 104) )
          v57 = *(_QWORD *)(v38 + 104);
        v96 = v57;
        goto LABEL_79;
      }
      v14 = *(struct VIDMM_ALLOC **)(*((_QWORD *)P + 8) + 8LL * v23->Map.hAllocation);
      v102 = v14;
      v65 = **(_QWORD **)v14;
      v103 = v65;
      if ( *((_QWORD *)this + 5115) )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(this, **((struct _EPROCESS ***)v7 + 11), v14, v23);
        v14 = v102;
        v65 = v103;
      }
      v66 = 0LL;
      v67 = *(_QWORD *)(v65 + 136);
      v68 = *((_DWORD *)v14 + 7) & 3;
      v101 = 0LL;
      AllocationOffsetInBytes = 0LL;
      v100 = 0LL;
      v70 = 0;
      if ( v68 == 2 )
      {
        v71 = *(_DWORD *)(v67 + 80);
        if ( (v71 & 0x1001) != 0 )
        {
          v72 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v65, 0LL);
          AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes;
          v66 = v72;
          v14 = v102;
          v65 = v103;
        }
        else
        {
          if ( (v71 & 0x1000) == 0 )
            v70 = *(_DWORD *)(v67 + 16) + 1;
          AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes + *(_QWORD *)(v65 + 144);
        }
        v100 = AllocationOffsetInBytes;
        v101 = v66;
      }
      if ( (*((_BYTE *)this + 40873) & 2) != 0 )
        v73 = 1LL;
      else
        v73 = v23->Map.SizeInBytes / v23->Map.AllocationSizeInBytes;
      v74 = *((_DWORD *)P + 10);
      v99.Flink = (struct _LIST_ENTRY *)v73;
      LODWORD(v98.Blink) = v74;
      if ( v74 >= (unsigned int)v73 )
        goto LABEL_129;
      v75 = (__int64 **)(P + 96);
      while ( 1 )
      {
        v76 = (struct VIDMM_MAPPED_VA_RANGE *)(*v75 - 1);
        if ( (*((_DWORD *)v14 + 7) & 3) == 2 )
          break;
        v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v97, v76, a3, 0);
        if ( v6 < 0 )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v78, v77);
          v88[3] = *((_QWORD *)v76 + 12);
          v89 = *((_QWORD *)v76 + 13);
          goto LABEL_127;
        }
        v79 = v95;
        v80 = (struct _LIST_ENTRY *)*((_QWORD *)v76 + 12);
        if ( v95 >= (unsigned __int64)v80 )
          v79 = *((_QWORD *)v76 + 12);
        v95 = v79;
        if ( v96 <= *((_QWORD *)v76 + 13) )
          v96 = *((_QWORD *)v76 + 13);
LABEL_115:
        if ( v99.Blink->Flink != v99.Blink )
        {
          if ( v80 < Blink[5].Blink )
            Blink = v99.Blink->Flink;
          v98.Flink = Blink;
        }
        v85 = **v75;
        if ( (__int64 **)(*v75)[1] != v75 || *(__int64 **)(v85 + 8) != *v75 )
          __fastfail(3u);
        *v75 = (__int64 *)v85;
        *(_QWORD *)(v85 + 8) = v75;
        *((_QWORD *)v76 + 1) = 0LL;
        *((_QWORD *)v76 + 2) = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               (struct _KTHREAD **)v97,
               *((struct VIDMM_VAD **)P + 14),
               *((_DWORD *)P + 4),
               &v98,
               (struct _LIST_ENTRY **)v76);
        if ( v6 < 0 )
        {
          v90 = WdLogNewEntry5_WdWarning(v87, v86);
          WdLogEvent5_WdWarning(v90);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v76);
          Blink = v98.Flink;
          goto LABEL_128;
        }
        Blink = v98.Flink->Blink;
        v98.Flink = Blink;
        *(_QWORD *)(*((_QWORD *)P + 14) + 24 * v105 + 112) = Blink;
        if ( ++LODWORD(v98.Blink) >= LODWORD(v99.Flink) )
          goto LABEL_128;
        AllocationOffsetInBytes = v100;
        v66 = v101;
        v14 = v102;
        v65 = v103;
      }
      v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             v97,
             v76,
             *(_DWORD *)(v65 + 76) & 0x3F,
             v70,
             AllocationOffsetInBytes,
             v66,
             0,
             a3);
      if ( v6 >= 0 )
        break;
      v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v81);
      v88[3] = *((_QWORD *)v76 + 12);
      v89 = *((_QWORD *)v76 + 13);
      v88[5] = 22886LL;
LABEL_127:
      v88[4] = v89;
      WdLogEvent5_WdWarning(v88);
LABEL_128:
      v16 = v95;
LABEL_129:
      v7 = v97;
LABEL_130:
      LODWORD(v22) = v110;
LABEL_131:
      if ( v6 >= 0 )
      {
        LODWORD(v22) = v22 + 1;
        *((_DWORD *)P + 10) = 0;
        LODWORD(v110) = v22;
        if ( (unsigned int)v22 < *((_DWORD *)P + 5) )
          continue;
      }
LABEL_30:
      if ( v16 < v96 )
        CVirtualAddressAllocator::FlushGpuVaTlb(v7, *((_DWORD *)P + 4), v16, v96);
      v4 = this;
      v22 = (unsigned int)v110;
      goto LABEL_33;
    }
    v83 = v95;
    v84 = v96;
    v80 = (struct _LIST_ENTRY *)*((_QWORD *)v76 + 12);
    if ( v95 >= (unsigned __int64)v80 )
      v83 = *((_QWORD *)v76 + 12);
    v95 = v83;
    if ( v96 <= *((_QWORD *)v76 + 13) )
      v84 = *((_QWORD *)v76 + 13);
    v96 = v84;
    goto LABEL_115;
  }
LABEL_33:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)P + 9) = v22;
  }
  else
  {
    if ( *((_QWORD *)P + 9) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v4, *((_DWORD *)P + 4), 0, 0LL, 0LL, 0, 0);
      PagingContext = VidSchGetPagingContext(*(_QWORD *)(*((_QWORD *)v4 + 2) + 416LL), *((_DWORD *)P + 4));
      v105 = *((_QWORD *)P + 9);
      v110 = *((_QWORD *)P + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(1LL, &PagingContext, 1u, (void **)&v105, 0x80000000, &v110) < 0 )
      {
        v93 = WdLogNewEntry5_WdAssertion(v92, v91);
        *(_QWORD *)(v93 + 24) = 23183LL;
        WdLogEvent5_WdAssertion(v93);
      }
    }
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)P);
  }
  if ( !(_BYTE)v108 )
    v5 = v6;
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, (__int64)v14, 8011);
  return v5;
}
