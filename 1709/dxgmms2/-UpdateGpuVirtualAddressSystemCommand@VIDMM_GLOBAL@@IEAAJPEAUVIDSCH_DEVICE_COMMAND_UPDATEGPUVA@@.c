/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0020FC0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchGetPagingContext @ 0x1C002B878 (VidSchGetPagingContext.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00728B4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00A3998 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00A5224 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00A5394 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  VIDMM_GLOBAL *v4; // rsi
  unsigned int v5; // ebx
  int v6; // r14d
  struct _KTHREAD **v7; // r13
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
  VIDMM_GLOBAL *v22; // r10
  __int64 v23; // rcx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v24; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  char *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  char *v36; // r15
  __int64 v37; // rsi
  __int64 **v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rcx
  int v41; // eax
  int v42; // r14d
  struct _MDL *FullMDL; // rax
  unsigned __int64 v44; // rcx
  int v45; // r8d
  __int64 v46; // rcx
  _QWORD *v47; // rax
  struct VIDMM_MAPPED_VA_RANGE *v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 *v60; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v61; // r11
  struct _MDL *v62; // r10
  char v63; // al
  unsigned __int64 AllocationOffsetInBytes; // r9
  int v65; // r13d
  __int64 v66; // rcx
  int v67; // eax
  struct _MDL *v68; // rax
  __int64 v69; // rax
  unsigned int v70; // ecx
  char *v71; // r12
  struct VIDMM_MAPPED_VA_RANGE *v72; // rsi
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  struct _LIST_ENTRY *v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __int64 *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  unsigned __int64 v89; // [rsp+40h] [rbp-69h]
  unsigned __int64 v90; // [rsp+48h] [rbp-61h]
  CVirtualAddressAllocator *v91; // [rsp+50h] [rbp-59h]
  struct _LIST_ENTRY *v92; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v93; // [rsp+60h] [rbp-49h]
  struct _LIST_ENTRY *v94; // [rsp+68h] [rbp-41h] BYREF
  struct _LIST_ENTRY **p_Flink; // [rsp+70h] [rbp-39h]
  unsigned __int64 v96; // [rsp+78h] [rbp-31h]
  struct _MDL *v97; // [rsp+80h] [rbp-29h]
  struct VIDMM_ALLOC *v98; // [rsp+88h] [rbp-21h]
  __int64 PagingContext; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v100; // [rsp+98h] [rbp-11h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v101; // [rsp+A0h] [rbp-9h]
  _BYTE v102[88]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned int v104; // [rsp+118h] [rbp+6Fh]
  __int64 v106; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = this;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 8011);
  v5 = 0;
  v6 = 0;
  LOBYTE(v104) = 0;
  v7 = (struct _KTHREAD **)**((_QWORD **)a2 + 11);
  v91 = (CVirtualAddressAllocator *)v7;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v102, v7 + 7);
  if ( !*((_QWORD *)a2 + 14) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    WdLogEvent5_WdEvent(v10);
    v6 = -1073741823;
    LOBYTE(v104) = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v11);
      WdLogEvent5_WdEvent(v13);
      v6 = -1073741823;
      LOBYTE(v104) = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v102);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v15 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 160), 0, 0) )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    v23 = v104;
    goto LABEL_36;
  }
  v16 = -1LL;
  v17 = *((_QWORD *)a2 + 14);
  v18 = *((unsigned int *)a2 + 4);
  v100 = v18;
  v89 = -1LL;
  v90 = 0LL;
  PagingContext = 3 * (v18 + 4);
  v19 = (struct _LIST_ENTRY *)(v17 + 24 * (v18 + 4));
  Flink = v19->Flink;
  p_Flink = &v19->Flink;
  if ( Flink == v19 )
  {
    Blink = (struct _LIST_ENTRY *)(v17 + 24 * (v100 + 4));
    v92 = v19;
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v17 + 24 * v18 + 112);
    if ( !Blink )
      Blink = Flink;
    v92 = Blink;
  }
  v22 = this;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v7[11],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v22 = this;
  }
  v23 = *((unsigned int *)a2 + 9);
  LODWORD(v106) = v23;
  if ( (unsigned int)v23 >= *((_DWORD *)a2 + 5) )
    goto LABEL_35;
  while ( 2 )
  {
    v24 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3)
                                                             + ((unsigned __int64)(unsigned int)v23 << 6));
    OperationType = v24->OperationType;
    if ( v24->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( *((_QWORD *)v22 + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v24);
        v26 = (char *)a2 + 96;
        v27 = *((_QWORD *)a2 + 12) - 8LL;
        if ( (*(_BYTE *)(v27 + 88) & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 (struct VIDMM_MAPPED_VA_RANGE *)v27,
                 a3,
                 0);
          if ( v6 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28);
            v29[3] = *(_QWORD *)(v27 + 96);
            v30 = *(_QWORD *)(v27 + 104);
            v29[5] = 23572LL;
LABEL_30:
            v29[4] = v30;
LABEL_31:
            WdLogEvent5_WdWarning(v29);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v27);
            break;
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 (struct VIDMM_MAPPED_VA_RANGE *)v27,
                 0,
                 -2,
                 0LL,
                 0LL,
                 0,
                 a3);
          if ( v6 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v31);
            v29[3] = *(_QWORD *)(v27 + 96);
            v30 = *(_QWORD *)(v27 + 104);
            v29[5] = 23586LL;
            goto LABEL_30;
          }
        }
        v32 = v90;
        if ( v16 >= *(_QWORD *)(v27 + 96) )
          v16 = *(_QWORD *)(v27 + 96);
        v89 = v16;
        if ( v90 <= *(_QWORD *)(v27 + 104) )
          v32 = *(_QWORD *)(v27 + 104);
        v90 = v32;
        v33 = *(__int64 **)v26;
        if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 || (v34 = *v33, *(__int64 **)(*v33 + 8) != v33) )
          __fastfail(3u);
        *(_QWORD *)v26 = v34;
        *(_QWORD *)(v34 + 8) = v26;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               v7,
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               0LL,
               (struct VIDMM_MAPPED_VA_RANGE *)v27);
        if ( v6 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v35);
          goto LABEL_31;
        }
LABEL_46:
        Blink = *p_Flink;
        v92 = *p_Flink;
        goto LABEL_133;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_134;
      if ( *((_QWORD *)v22 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v24);
      v36 = (char *)a2 + 48;
      if ( *(char **)v36 == v36 )
        v6 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v7,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v24->Map.BaseAddress,
               v24->Map.BaseAddress + v24->Map.SizeInBytes,
               v24->Unmap.Protection.Value);
      if ( v6 < 0 )
      {
LABEL_87:
        if ( v6 != -1073741267 )
        {
          while ( *(char **)v36 != v36 )
          {
            v58 = *(__int64 **)v36;
            if ( *(char **)(*(_QWORD *)v36 + 8LL) != v36 || (v59 = *v58, *(__int64 **)(*v58 + 8) != v58) )
              __fastfail(3u);
            *(_QWORD *)v36 = v59;
            v60 = v58 - 1;
            *(_QWORD *)(v59 + 8) = v36;
            v60[1] = 0LL;
            v60[2] = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v60);
          }
        }
        goto LABEL_46;
      }
      v94 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * PagingContext);
      while ( 1 )
      {
        if ( *(char **)v36 == v36 || v6 < 0 )
          goto LABEL_87;
        v37 = *(_QWORD *)v36 - 8LL;
        v38 = *(__int64 ***)(v37 + 56);
        if ( v38 )
        {
          v39 = **v38;
          if ( (*((_DWORD *)v38 + 7) & 3) == 2 )
          {
            v40 = *(_QWORD *)(v39 + 136);
            v41 = *(_DWORD *)(v40 + 80);
            if ( (v41 & 0x1001) != 0 )
            {
              v42 = 0;
              FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v39, 0LL);
              v44 = *(_QWORD *)(v37 + 72);
            }
            else
            {
              if ( (v41 & 0x1000) != 0 )
                v42 = 0;
              else
                v42 = *(_DWORD *)(v40 + 16) + 1;
              FullMDL = 0LL;
              v44 = *(_QWORD *)(v37 + 72) + *(_QWORD *)(v39 + 144);
            }
            v45 = *(_DWORD *)(v39 + 76) & 0x3F;
            v7 = (struct _KTHREAD **)v91;
            v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v91,
                   (struct VIDMM_MAPPED_VA_RANGE *)v37,
                   v45,
                   v42,
                   v44,
                   FullMDL,
                   0,
                   a3);
            if ( v6 < 0 )
            {
              v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v46);
              v47[3] = *(_QWORD *)(v37 + 96);
              v47[4] = *(_QWORD *)(v37 + 104);
              v47[5] = 23676LL;
              WdLogEvent5_WdWarning(v47);
            }
            if ( v16 >= *(_QWORD *)(v37 + 96) )
              v16 = *(_QWORD *)(v37 + 96);
            v89 = v16;
            if ( v90 <= *(_QWORD *)(v37 + 104) )
              v90 = *(_QWORD *)(v37 + 104);
          }
          else
          {
            v7 = (struct _KTHREAD **)v91;
          }
          goto LABEL_82;
        }
        v48 = (struct VIDMM_MAPPED_VA_RANGE *)(*(_QWORD *)v36 - 8LL);
        if ( (*(_BYTE *)(v37 + 88) & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v7, v48, a3, 0);
          if ( v6 < 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v49);
            v50[3] = *(_QWORD *)(v37 + 96);
            v51 = *(_QWORD *)(v37 + 104);
            v50[5] = 23689LL;
LABEL_75:
            v50[4] = v51;
            WdLogEvent5_WdWarning(v50);
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 v48,
                 0,
                 -2,
                 0LL,
                 0LL,
                 0,
                 a3);
          if ( v6 < 0 )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v52);
            v50[3] = *(_QWORD *)(v37 + 96);
            v51 = *(_QWORD *)(v37 + 104);
            v50[5] = 23702LL;
            goto LABEL_75;
          }
        }
        v53 = v90;
        if ( v16 >= *(_QWORD *)(v37 + 96) )
          v16 = *(_QWORD *)(v37 + 96);
        v89 = v16;
        if ( v90 <= *(_QWORD *)(v37 + 104) )
          v53 = *(_QWORD *)(v37 + 104);
        v90 = v53;
LABEL_82:
        if ( v6 >= 0 )
        {
          v54 = *(__int64 **)v36;
          if ( *(char **)(*(_QWORD *)v36 + 8LL) != v36 || (v55 = *v54, *(__int64 **)(*v54 + 8) != v54) )
            __fastfail(3u);
          *(_QWORD *)v36 = v55;
          *(_QWORD *)(v55 + 8) = v36;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = 0LL;
          v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 v7,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v94,
                 (struct VIDMM_MAPPED_VA_RANGE *)v37);
          if ( v6 < 0 )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v56);
            v57[3] = *(_QWORD *)(v37 + 96);
            v57[4] = *(_QWORD *)(v37 + 104);
            v57[5] = 23716LL;
            WdLogEvent5_WdWarning(v57);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v37);
          }
        }
      }
    }
    v14 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v24->Map.hAllocation);
    v98 = v14;
    v61 = **(struct _VIDMM_GLOBAL_ALLOC ***)v14;
    v101 = v61;
    if ( *((_QWORD *)v22 + 5115) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v22, v7[11], *(struct _VIDSCH_CONTEXT **)a2, v14, v24);
      v14 = v98;
      v61 = v101;
    }
    v62 = 0LL;
    v63 = *((_DWORD *)v14 + 7) & 3;
    v97 = 0LL;
    v96 = 0LL;
    AllocationOffsetInBytes = 0LL;
    v65 = 0;
    if ( v63 == 2 )
    {
      v66 = *((_QWORD *)v61 + 17);
      v67 = *(_DWORD *)(v66 + 80);
      if ( (v67 & 0x1001) != 0 )
      {
        v68 = VidMmGetFullMDL(v61, 0LL);
        AllocationOffsetInBytes = v24->Map.AllocationOffsetInBytes;
        v62 = v68;
        v14 = v98;
      }
      else
      {
        if ( (v67 & 0x1000) == 0 )
          v65 = *(_DWORD *)(v66 + 16) + 1;
        AllocationOffsetInBytes = v24->Map.AllocationOffsetInBytes + *((_QWORD *)v61 + 18);
      }
      v96 = AllocationOffsetInBytes;
      v97 = v62;
    }
    if ( (*((_BYTE *)this + 40873) & 2) != 0 )
      v69 = 1LL;
    else
      v69 = v24->Map.SizeInBytes / v24->Map.AllocationSizeInBytes;
    v70 = *((_DWORD *)a2 + 10);
    v94 = (struct _LIST_ENTRY *)v69;
    v93 = v70;
    if ( v70 >= (unsigned int)v69 )
      goto LABEL_132;
    v71 = (char *)a2 + 96;
    while ( 1 )
    {
      v72 = (struct VIDMM_MAPPED_VA_RANGE *)(*(_QWORD *)v71 - 8LL);
      if ( (*((_DWORD *)v14 + 7) & 3) == 2 )
        break;
      v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v91, v72, a3, 0);
      if ( v6 < 0 )
      {
        v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v73);
        v82[3] = *((_QWORD *)v72 + 12);
        v83 = *((_QWORD *)v72 + 13);
        goto LABEL_130;
      }
      v74 = v89;
      v75 = (struct _LIST_ENTRY *)*((_QWORD *)v72 + 12);
      if ( v89 >= (unsigned __int64)v75 )
        v74 = *((_QWORD *)v72 + 12);
      v89 = v74;
      if ( v90 <= *((_QWORD *)v72 + 13) )
        v90 = *((_QWORD *)v72 + 13);
LABEL_118:
      if ( *p_Flink != (struct _LIST_ENTRY *)p_Flink )
      {
        if ( v75 < Blink[5].Blink )
          Blink = *p_Flink;
        v92 = Blink;
      }
      v79 = *(__int64 **)v71;
      if ( *(char **)(*(_QWORD *)v71 + 8LL) != v71 || (v80 = *v79, *(__int64 **)(*v79 + 8) != v79) )
        __fastfail(3u);
      *(_QWORD *)v71 = v80;
      *(_QWORD *)(v80 + 8) = v71;
      *((_QWORD *)v72 + 1) = 0LL;
      *((_QWORD *)v72 + 2) = 0LL;
      v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             (struct _KTHREAD **)v91,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v92,
             v72);
      if ( v6 < 0 )
      {
        v84 = WdLogNewEntry5_WdWarning(v81);
        WdLogEvent5_WdWarning(v84);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v72);
        Blink = v92;
        goto LABEL_131;
      }
      Blink = v92->Blink;
      v92 = Blink;
      *(_QWORD *)(*((_QWORD *)a2 + 14) + 24 * v100 + 112) = Blink;
      if ( ++v93 >= (unsigned int)v94 )
        goto LABEL_131;
      AllocationOffsetInBytes = v96;
      v62 = v97;
      v14 = v98;
    }
    v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           v91,
           v72,
           *((_DWORD *)v101 + 19) & 0x3F,
           v65,
           AllocationOffsetInBytes,
           v62,
           0,
           a3);
    if ( v6 >= 0 )
    {
      v77 = v89;
      v78 = v90;
      v75 = (struct _LIST_ENTRY *)*((_QWORD *)v72 + 12);
      if ( v89 >= (unsigned __int64)v75 )
        v77 = *((_QWORD *)v72 + 12);
      v89 = v77;
      if ( v90 <= *((_QWORD *)v72 + 13) )
        v78 = *((_QWORD *)v72 + 13);
      v90 = v78;
      goto LABEL_118;
    }
    v82 = (_QWORD *)WdLogNewEntry5_WdWarning(v76);
    v82[3] = *((_QWORD *)v72 + 12);
    v83 = *((_QWORD *)v72 + 13);
    v82[5] = 23508LL;
LABEL_130:
    v82[4] = v83;
    WdLogEvent5_WdWarning(v82);
LABEL_131:
    v16 = v89;
LABEL_132:
    v7 = (struct _KTHREAD **)v91;
LABEL_133:
    LODWORD(v23) = v106;
LABEL_134:
    if ( v6 >= 0 )
    {
      LODWORD(v23) = v23 + 1;
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v106) = v23;
      if ( (unsigned int)v23 < *((_DWORD *)a2 + 5) )
      {
        v22 = this;
        continue;
      }
    }
    break;
  }
  if ( v16 < v90 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v7, *((_DWORD *)a2 + 4), v16, v90);
  v23 = (unsigned int)v106;
LABEL_35:
  v4 = this;
LABEL_36:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v23;
  }
  else
  {
    if ( *((_QWORD *)a2 + 9) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v4, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
      PagingContext = VidSchGetPagingContext(*(_QWORD *)(*((_QWORD *)v4 + 2) + 512LL), *((_DWORD *)a2 + 4));
      v100 = *((_QWORD *)a2 + 9);
      v106 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(1LL, &PagingContext, 1u, (void **)&v100, 0x80000000, &v106) < 0 )
      {
        v87 = WdLogNewEntry5_WdAssertion(v86, v85);
        *(_QWORD *)(v87 + 24) = 23805LL;
        WdLogEvent5_WdAssertion(v87);
      }
    }
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
  }
  if ( !(_BYTE)v104 )
    v5 = v6;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, (__int64)&EventProfilerExit, (__int64)v14, 8011);
  return v5;
}
