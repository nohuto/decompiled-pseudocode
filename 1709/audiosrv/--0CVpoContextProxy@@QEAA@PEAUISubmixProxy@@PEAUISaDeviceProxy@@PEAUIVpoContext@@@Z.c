/*
 * XREFs of ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x18008A1B0
 * Callers:
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@X@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18008A0E0 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@X@std@@YA-AV-$unique_p.c)
 *     AudioServerGetStreamVpoContext @ 0x18008F790 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

CVpoContextProxy *__fastcall CVpoContextProxy::CVpoContextProxy(
        CVpoContextProxy *this,
        struct ISubmixProxy *a2,
        struct ISaDeviceProxy *a3,
        struct IVpoContext *a4)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
    (_QWORD *)this + 1,
    (__int64)a3);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
