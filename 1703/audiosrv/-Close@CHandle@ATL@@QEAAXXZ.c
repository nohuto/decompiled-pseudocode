/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x1800D8B7C
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x1800B14C8 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800B14DC (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x1800B532C (--1CMonitor@@IEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800B80E0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
