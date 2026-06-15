/*
 * XREFs of ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@X@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18008A0E0
 * Callers:
 *     AudioServerGetEndpointVpoContext @ 0x18008EF70 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x18008F790 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x18008A1B0 (--0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 */

CVpoContextProxy **__fastcall std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,void>(
        CVpoContextProxy **a1,
        struct ISubmixProxy **a2,
        struct ISaDeviceProxy **a3,
        struct IVpoContext **a4)
{
  CVpoContextProxy *v8; // rcx
  CVpoContextProxy *v9; // rax

  v8 = (CVpoContextProxy *)operator new(0x18uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = CVpoContextProxy::CVpoContextProxy(v8, *a2, *a3, *a4);
  *a1 = v9;
  return a1;
}
