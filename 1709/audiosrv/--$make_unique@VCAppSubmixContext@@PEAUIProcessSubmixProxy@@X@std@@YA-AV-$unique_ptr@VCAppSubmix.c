/*
 * XREFs of ??$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@X@std@@YA?AV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@$$QEAPEAUIProcessSubmixProxy@@@Z @ 0x18009F078
 * Callers:
 *     asm_GetApplicationSubmixFromId @ 0x1800A08D0 (asm_GetApplicationSubmixFromId.c)
 *     asm_GetApplicationSubmixes @ 0x1800A09B0 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixContext,IProcessSubmixProxy *,void>(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax

  v4 = operator new(8uLL);
  v5 = v4;
  if ( v4 )
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(v4, *a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
