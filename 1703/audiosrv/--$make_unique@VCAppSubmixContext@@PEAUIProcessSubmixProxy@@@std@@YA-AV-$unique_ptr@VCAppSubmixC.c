/*
 * XREFs of ??$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@@std@@YA?AV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@$$QEAPEAUIProcessSubmixProxy@@@Z @ 0x1800AEC9C
 * Callers:
 *     asm_GetApplicationSubmixFromId @ 0x1800AFF00 (asm_GetApplicationSubmixFromId.c)
 *     asm_GetApplicationSubmixes @ 0x1800AFFE0 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800B10A8 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixContext,IProcessSubmixProxy *>(_QWORD *a1, _QWORD *a2)
{
  LPVOID v4; // rax
  LPVOID v5; // rbx
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
