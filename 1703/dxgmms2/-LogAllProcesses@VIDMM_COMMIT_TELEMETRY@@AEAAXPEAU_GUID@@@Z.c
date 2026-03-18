/*
 * XREFs of ?LogAllProcesses@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00A59F8
 * Callers:
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00A608C (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A65E4 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002508 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00A676C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllProcesses(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  _QWORD **v4; // rax
  _QWORD *v5; // rdi

  if ( *((_BYTE *)this + 24) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)this + 40968LL));
    v4 = (_QWORD **)(*(_QWORD *)this + 41008LL);
    v5 = *v4;
    while ( v5 != v4 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, (struct VIDMM_PROCESS_ADAPTER_INFO *)(v5 - 3), a2);
      v5 = (_QWORD *)*v5;
      v4 = (_QWORD **)(*(_QWORD *)this + 41008LL);
    }
    ExReleasePushLockSharedEx(*(_QWORD *)this + 40968LL, 0LL);
    KeLeaveCriticalRegion();
  }
}
