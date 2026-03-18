/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0005084 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0023740 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchGetPagingContext @ 0x1C002E8C8 (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C005B1F0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005BAA8 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00AA9B8 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00AC600 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00AC76C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v3; // ebx
  VIDMM_GLOBAL *v5; // r14
  int v6; // esi
  struct _KTHREAD **v7; // r13
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // rdx
  struct _LIST_ENTRY **v18; // rax
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *v20; // r15
  VIDMM_GLOBAL *v21; // r10
  unsigned int v22; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v23; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD **v25; // r15
  _QWORD *v26; // r13
  volatile signed __int32 *v27; // r14
  struct VIDMM_MAPPED_VA_RANGE *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char *v41; // r15
  struct _LIST_ENTRY *v42; // rdx
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v45; // r13
  struct _LIST_ENTRY *Blink; // rcx
  int v47; // eax
  int v48; // esi
  struct _MDL *FullMDL; // rax
  unsigned __int64 v50; // rcx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  struct _LIST_ENTRY *v55; // rax
  unsigned __int64 v56; // rax
  struct VIDMM_MAPPED_VA_RANGE *v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  volatile signed __int32 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  volatile signed __int32 *v67; // rax
  __int64 v68; // rcx
  struct VIDMM_ALLOC *v69; // r8
  _QWORD *v70; // r11
  struct _MDL *v71; // r10
  char v72; // al
  unsigned __int64 AllocationOffsetInBytes; // r9
  int v74; // r13d
  __int64 v75; // rcx
  int v76; // eax
  struct _MDL *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // ecx
  struct VIDMM_MAPPED_VA_RANGE *v80; // r14
  struct VIDMM_MAPPED_VA_RANGE *v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct _LIST_ENTRY *v84; // rdx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v90; // rdx
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v91; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // r8
  unsigned __int64 v109; // [rsp+40h] [rbp-79h]
  CVirtualAddressAllocator *v110; // [rsp+48h] [rbp-71h]
  struct _LIST_ENTRY *v111; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v112; // [rsp+58h] [rbp-61h]
  __int64 PagingContext; // [rsp+60h] [rbp-59h] BYREF
  _DWORD *v114; // [rsp+68h] [rbp-51h] BYREF
  struct _LIST_ENTRY *v115; // [rsp+70h] [rbp-49h] BYREF
  struct _LIST_ENTRY **v116; // [rsp+78h] [rbp-41h]
  unsigned __int64 v117; // [rsp+80h] [rbp-39h]
  struct _MDL *v118; // [rsp+88h] [rbp-31h]
  __int64 v119; // [rsp+90h] [rbp-29h] BYREF
  _QWORD *v120; // [rsp+98h] [rbp-21h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-19h] BYREF
  int v122; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v123; // [rsp+B0h] [rbp-9h]
  _BYTE v124[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v126; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v128; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v5 = this;
  v123 = 0LL;
  v122 = 8011;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 8011);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = 0;
  LOBYTE(v126) = 0;
  v7 = (struct _KTHREAD **)**((_QWORD **)a2 + 11);
  v110 = (CVirtualAddressAllocator *)v7;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v124, v7 + 7);
  if ( !*((_QWORD *)a2 + 14) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    WdLogEvent5_WdEvent(v10);
    v6 = -1073741823;
    LOBYTE(v126) = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v11);
      WdLogEvent5_WdEvent(v13);
      v6 = -1073741823;
      LOBYTE(v126) = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v124);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 188) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 184), 0, 0) )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    v22 = v126;
    goto LABEL_35;
  }
  v15 = -1LL;
  v16 = *((_QWORD *)a2 + 14);
  v17 = *((unsigned int *)a2 + 4);
  v121 = v17;
  v109 = 0LL;
  v119 = 3 * (v17 + 4);
  v18 = (struct _LIST_ENTRY **)(v16 + 24 * (v17 + 4));
  v19 = *v18;
  v116 = v18;
  if ( v19 == (struct _LIST_ENTRY *)v18 )
  {
    v20 = (struct _LIST_ENTRY *)(v16 + 24 * (v121 + 4));
  }
  else
  {
    v20 = *(struct _LIST_ENTRY **)(v16 + 24 * v17 + 112);
    if ( !v20 )
      v20 = v19;
  }
  v21 = this;
  v111 = v20;
  if ( *((_QWORD *)this + 5187) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v7[11],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v21 = this;
  }
  v22 = *((_DWORD *)a2 + 9);
  LODWORD(v128) = v22;
  if ( v22 >= *((_DWORD *)a2 + 5) )
    goto LABEL_34;
  while ( 2 )
  {
    v23 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v22 << 6));
    OperationType = v23->OperationType;
    if ( v23->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( *((_QWORD *)v21 + 5187) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v23);
        v25 = (_QWORD **)((char *)a2 + 96);
        v26 = (_QWORD *)*((_QWORD *)a2 + 12);
        v27 = (volatile signed __int32 *)(v26 - 1);
        v28 = (struct VIDMM_MAPPED_VA_RANGE *)(v26 - 1);
        if ( (v26[10] & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v110, v28, a3, 0);
          if ( v6 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29);
            v31[3] = *((_QWORD *)v27 + 12);
            v32 = *((_QWORD *)v27 + 13);
            v31[5] = 23913LL;
LABEL_29:
            v31[4] = v32;
LABEL_30:
            WdLogEvent5_WdWarning(v31);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v27);
            break;
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(v110, v28, 0, -2, 0LL, 0LL, 0, a3);
          if ( v6 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
            v31[3] = *((_QWORD *)v27 + 12);
            v32 = *((_QWORD *)v27 + 13);
            v31[5] = 23927LL;
            goto LABEL_29;
          }
        }
        v35 = *((_QWORD *)v27 + 12);
        v36 = *v25;
        if ( v15 < v35 )
          v35 = v15;
        v15 = v35;
        v37 = *((_QWORD *)v27 + 13);
        if ( v109 > v37 )
          v37 = v109;
        v109 = v37;
        if ( (_QWORD **)v36[1] != v25 || (v38 = (_QWORD *)*v36, *(_QWORD **)(*v36 + 8LL) != v36) )
          __fastfail(3u);
        *v25 = v38;
        v38[1] = v25;
        *v26 = 0LL;
        v7 = (struct _KTHREAD **)v110;
        *((_QWORD *)v27 + 2) = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               (struct _KTHREAD **)v110,
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               0LL,
               (struct VIDMM_MAPPED_VA_RANGE *)v27);
        if ( v6 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39);
          goto LABEL_30;
        }
LABEL_45:
        v20 = *v116;
        v111 = *v116;
        goto LABEL_125;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_126;
      if ( *((_QWORD *)v21 + 5187) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v23);
      v41 = (char *)a2 + 48;
      if ( *(char **)v41 == v41 )
        v6 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v7,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v23->Map.BaseAddress,
               v23->Map.BaseAddress + v23->Map.SizeInBytes,
               v23->Unmap.Protection.Value);
      if ( v6 < 0 )
      {
LABEL_81:
        if ( v6 != -1073741267 )
        {
          while ( 1 )
          {
            v67 = *(volatile signed __int32 **)v41;
            if ( *(char **)v41 == v41 )
              break;
            if ( *((char **)v67 + 1) != v41
              || (v68 = *(_QWORD *)v67, *(volatile signed __int32 **)(*(_QWORD *)v67 + 8LL) != v67) )
            {
              __fastfail(3u);
            }
            *(_QWORD *)v41 = v68;
            *(_QWORD *)(v68 + 8) = v41;
            *((_QWORD *)v67 + 1) = 0LL;
            *(_QWORD *)v67 = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v67 - 2);
          }
        }
        goto LABEL_45;
      }
      v115 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v119);
      while ( 1 )
      {
        v42 = *(struct _LIST_ENTRY **)v41;
        v111 = v42;
        if ( v42 == (struct _LIST_ENTRY *)v41 || v6 < 0 )
          goto LABEL_81;
        p_Blink = &v42[-1].Blink;
        Flink = v42[3].Flink;
        if ( !Flink )
          break;
        v45 = Flink->Flink->Flink;
        if ( (HIDWORD(Flink[1].Blink) & 3) != 2 )
        {
          v7 = (struct _KTHREAD **)v110;
          goto LABEL_76;
        }
        Blink = v45[8].Blink;
        v47 = (int)Blink[5].Flink;
        if ( (v47 & 0x1001) != 0 )
        {
          v48 = 0;
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v45, 0LL);
          v50 = (unsigned __int64)p_Blink[9];
        }
        else
        {
          if ( (v47 & 0x1000) != 0 )
            v48 = 0;
          else
            v48 = LODWORD(Blink[1].Flink) + 1;
          FullMDL = 0LL;
          v50 = (unsigned __int64)p_Blink[9] + (unsigned __int64)v45[9].Flink;
        }
        v51 = HIDWORD(v45[4].Blink) & 0x3F;
        v7 = (struct _KTHREAD **)v110;
        v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               v110,
               (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
               v51,
               v48,
               v50,
               FullMDL,
               0,
               a3);
        if ( v6 < 0 )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52);
          v54[3] = p_Blink[12];
          v55 = p_Blink[13];
          v54[5] = 24017LL;
LABEL_65:
          v54[4] = v55;
          WdLogEvent5_WdWarning(v54);
        }
LABEL_66:
        v56 = (unsigned __int64)p_Blink[12];
        v42 = v111;
        if ( v15 < v56 )
          v56 = v15;
        v15 = v56;
        if ( v109 <= (unsigned __int64)p_Blink[13] )
          v109 = (unsigned __int64)p_Blink[13];
LABEL_76:
        if ( v6 >= 0 )
        {
          v62 = *(volatile signed __int32 **)v41;
          if ( *(char **)(*(_QWORD *)v41 + 8LL) != v41
            || (v63 = *(_QWORD *)v62, *(volatile signed __int32 **)(*(_QWORD *)v62 + 8LL) != v62) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v41 = v63;
          *(_QWORD *)(v63 + 8) = v41;
          v42->Flink = 0LL;
          p_Blink[2] = 0LL;
          v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 v7,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v115,
                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink);
          if ( v6 < 0 )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64);
            v66[3] = p_Blink[12];
            v66[4] = p_Blink[13];
            v66[5] = 24057LL;
            WdLogEvent5_WdWarning(v66);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)p_Blink);
          }
        }
      }
      v57 = (struct VIDMM_MAPPED_VA_RANGE *)&v42[-1].Blink;
      if ( ((_BYTE)p_Blink[11] & 8) != 0 )
      {
        v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange((CVirtualAddressAllocator *)v7, v57, a3, 0);
        if ( v6 >= 0 )
          goto LABEL_66;
        v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58);
        v54[3] = p_Blink[12];
        v55 = p_Blink[13];
        v54[5] = 24030LL;
      }
      else
      {
        v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v7,
               v57,
               0,
               -2,
               0LL,
               0LL,
               0,
               a3);
        if ( v6 >= 0 )
          goto LABEL_66;
        v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60);
        v54[3] = p_Blink[12];
        v55 = p_Blink[13];
        v54[5] = 24043LL;
      }
      goto LABEL_65;
    }
    v69 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v23->Map.hAllocation);
    PagingContext = (__int64)v69;
    v70 = **(_QWORD ***)v69;
    v114 = v70;
    if ( *((_QWORD *)v21 + 5187) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, v69, v23);
      v69 = (struct VIDMM_ALLOC *)PagingContext;
      v70 = v114;
    }
    v71 = 0LL;
    v72 = *((_DWORD *)v69 + 7) & 3;
    v118 = 0LL;
    v117 = 0LL;
    AllocationOffsetInBytes = 0LL;
    v74 = 0;
    if ( v72 == 2 )
    {
      v75 = v70[17];
      v76 = *(_DWORD *)(v75 + 80);
      if ( (v76 & 0x1001) != 0 )
      {
        v77 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v70, 0LL);
        AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes;
        v71 = v77;
        v69 = (struct VIDMM_ALLOC *)PagingContext;
      }
      else
      {
        if ( (v76 & 0x1000) == 0 )
          v74 = *(_DWORD *)(v75 + 16) + 1;
        AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes + v70[18];
      }
      v117 = AllocationOffsetInBytes;
      v118 = v71;
    }
    if ( (*((_BYTE *)this + 41449) & 4) != 0 )
      v78 = 1LL;
    else
      v78 = v23->Map.SizeInBytes / v23->Map.AllocationSizeInBytes;
    v79 = *((_DWORD *)a2 + 10);
    v115 = (struct _LIST_ENTRY *)v78;
    v112 = v79;
    if ( v79 >= (unsigned int)v78 )
      goto LABEL_124;
    while ( 1 )
    {
      v120 = (_QWORD *)*((_QWORD *)a2 + 12);
      v80 = (struct VIDMM_MAPPED_VA_RANGE *)(v120 - 1);
      v81 = (struct VIDMM_MAPPED_VA_RANGE *)(v120 - 1);
      if ( (*((_DWORD *)v69 + 7) & 3) == 2 )
        break;
      v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v110, v81, a3, 0);
      if ( v6 < 0 )
      {
        v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82);
        v96[3] = *((_QWORD *)v80 + 12);
        v97 = *((_QWORD *)v80 + 13);
        goto LABEL_123;
      }
      v84 = (struct _LIST_ENTRY *)*((_QWORD *)v80 + 12);
      v85 = *((_QWORD *)v80 + 13);
      v86 = (unsigned __int64)v84;
      if ( v15 < (unsigned __int64)v84 )
        v86 = v15;
      v15 = v86;
      if ( v109 > v85 )
        v85 = v109;
      v109 = v85;
LABEL_111:
      if ( *v116 != (struct _LIST_ENTRY *)v116 )
      {
        if ( v84 < v20[5].Blink )
          v20 = *v116;
        v111 = v20;
      }
      v90 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)((char *)a2 + 96);
      v91 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)*((_QWORD *)a2 + 12);
      if ( v91[1] != (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)((char *)a2 + 96)
        || (v92 = *v91, *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA ***)*v91 + 1) != v91) )
      {
        __fastfail(3u);
      }
      v93 = v120;
      *v90 = v92;
      *((_QWORD *)v92 + 1) = v90;
      *v93 = 0LL;
      *((_QWORD *)v80 + 2) = 0LL;
      v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             (struct _KTHREAD **)v110,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v111,
             v80);
      if ( v6 < 0 )
      {
        v98 = WdLogNewEntry5_WdWarning(v95, v94);
        WdLogEvent5_WdWarning(v98);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v80);
        v20 = v111;
        goto LABEL_124;
      }
      v20 = v111->Blink;
      v111 = v20;
      *(_QWORD *)(*((_QWORD *)a2 + 14) + 24 * v121 + 112) = v20;
      if ( ++v112 >= (unsigned int)v115 )
        goto LABEL_124;
      AllocationOffsetInBytes = v117;
      v71 = v118;
      v69 = (struct VIDMM_ALLOC *)PagingContext;
    }
    v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           v110,
           v81,
           v114[19] & 0x3F,
           v74,
           AllocationOffsetInBytes,
           v71,
           0,
           a3);
    if ( v6 >= 0 )
    {
      v84 = (struct _LIST_ENTRY *)*((_QWORD *)v80 + 12);
      v89 = (unsigned __int64)v84;
      if ( v15 < (unsigned __int64)v84 )
        v89 = v15;
      v15 = v89;
      if ( v109 <= *((_QWORD *)v80 + 13) )
        v109 = *((_QWORD *)v80 + 13);
      goto LABEL_111;
    }
    v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v88, v87);
    v96[3] = *((_QWORD *)v80 + 12);
    v97 = *((_QWORD *)v80 + 13);
    v96[5] = 23849LL;
LABEL_123:
    v96[4] = v97;
    WdLogEvent5_WdWarning(v96);
LABEL_124:
    v7 = (struct _KTHREAD **)v110;
LABEL_125:
    v22 = v128;
LABEL_126:
    if ( v6 >= 0 )
    {
      ++v22;
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v128) = v22;
      if ( v22 < *((_DWORD *)a2 + 5) )
      {
        v21 = this;
        continue;
      }
    }
    break;
  }
  if ( v15 < v109 )
    CVirtualAddressAllocator::FlushGpuVaTlb(v110, *((_DWORD *)a2 + 4), v15, v109);
  v22 = v128;
LABEL_34:
  v5 = this;
LABEL_35:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v22;
    goto LABEL_144;
  }
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v99 = *((unsigned int *)a2 + 4);
    v100 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 528LL);
    v120 = *(_QWORD **)(*(_QWORD *)(v100 + 256) + 8 * v99);
    if ( v120 )
    {
      v121 = *((_QWORD *)a2 + 9);
      v128 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v120, 1u, (__int64)&v121, 0x80000000, &v128) < 0 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v102, v101);
        *(_QWORD *)(v103 + 24) = 24145LL;
        goto LABEL_142;
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v100, v99);
      v114 = (_DWORD *)*((_QWORD *)a2 + 9);
      v119 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(0LL, 0LL, 1, &PagingContext, 1u, (void **)&v114, 0x80000000, &v119) < 0 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v105, v104);
        *(_QWORD *)(v103 + 24) = 24173LL;
LABEL_142:
        WdLogEvent5_WdAssertion(v103);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_144:
  if ( !(_BYTE)v126 )
    v3 = v6;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v106, (__int64)&EventProfilerExit, v107, v122);
  return v3;
}
