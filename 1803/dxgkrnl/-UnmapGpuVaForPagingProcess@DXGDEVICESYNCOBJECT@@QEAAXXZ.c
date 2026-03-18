/*
 * XREFs of ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C3964
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BE760 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00167AC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v2 = *(_QWORD *)(v1 + 552);
  v3 = *(_QWORD *)(v1 + 544);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*((DXGSYNCOBJECT **)this + 4));
  (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v3 + 8) + 968LL))(
    v2,
    MonitoredFenceStorage);
}
