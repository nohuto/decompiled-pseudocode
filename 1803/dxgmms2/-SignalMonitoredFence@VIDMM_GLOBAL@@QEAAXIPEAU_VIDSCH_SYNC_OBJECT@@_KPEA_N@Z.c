/*
 * XREFs of ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA118 (-GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STO.c)
 */

void __fastcall VIDMM_GLOBAL::SignalMonitoredFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        SIZE_T a4,
        bool *a5)
{
  __int64 v6; // r14
  struct _VIDSCH_SYNC_OBJECT *v9; // r15
  struct VIDMM_PROCESS *v10; // r9
  VIDMM_FENCE_STORAGE_PAGE *v11; // rcx
  D3DGPU_VIRTUAL_ADDRESS ProcessGpuVa; // rax
  ADAPTER_RENDER *v13; // rcx
  int v14; // esi
  struct _DXGKARG_BUILDPAGINGBUFFER v15; // [rsp+40h] [rbp-168h] BYREF

  v6 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 54LL)
    && !*((_BYTE *)this + 7072)
    && *((_QWORD *)this + a2 + 143)
    && (*(_DWORD *)(*((_QWORD *)this + a2 + 79) + 32LL) & 4) != 0 )
  {
    v9 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + a2 + 746);
    if ( v9 == (struct _VIDSCH_SYNC_OBJECT *)a3 )
    {
      if ( *((_BYTE *)this + a2 + 4617) )
      {
        *a5 = 1;
        return;
      }
      *((_BYTE *)this + a2 + 4617) = 1;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v15);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v6, 0LL, &v15);
      v10 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5112);
      v11 = a3[6];
      v15.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
      v15.Fill.FillSize = a4;
      ProcessGpuVa = VIDMM_FENCE_STORAGE_PAGE::GetProcessGpuVa(
                       v11,
                       this,
                       (struct VIDMM_MONITORED_FENCE_STORAGE *)(a3 + 6),
                       v10);
      v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v15.UpdateContextAllocation.ContextAllocation = ProcessGpuVa;
      v14 = ADAPTER_RENDER::DdiBuildPagingBuffer(v13, &v15);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v6, 0LL, &v15, v14, 0, 0LL);
    }
    while ( v14 == -1071775743 );
    *a5 = v14 >= 0;
    if ( v9 == (struct _VIDSCH_SYNC_OBJECT *)a3 )
      *((_BYTE *)this + v6 + 4617) = 0;
  }
  else
  {
    *a5 = 0;
  }
}
