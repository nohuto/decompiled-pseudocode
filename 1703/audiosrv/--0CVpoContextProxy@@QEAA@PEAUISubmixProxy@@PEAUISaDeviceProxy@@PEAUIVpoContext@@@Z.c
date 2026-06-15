/*
 * XREFs of ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x18009FCF8
 * Callers:
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18009FC98 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@@std@@YA-AV-$unique_pt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 2) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
