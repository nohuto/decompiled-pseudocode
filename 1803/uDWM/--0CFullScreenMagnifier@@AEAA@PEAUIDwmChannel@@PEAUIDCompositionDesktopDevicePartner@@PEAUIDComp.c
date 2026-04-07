/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@@Z @ 0x18003E030
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003DECC (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct IDwmChannel *a2,
        struct IDCompositionDesktopDevicePartner *a3,
        struct IDCompositionDesktopTargetPartner *a4,
        struct CVisual *a5)
{
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 72) = xmmword_1800B7110;
  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  *(_OWORD *)((char *)this + 172) = xmmword_1800B7110;
  *((_QWORD *)this + 6) = 0x3FF0000000000000LL;
  *(_OWORD *)((char *)this + 88) = xmmword_1800B7120;
  *((_DWORD *)this + 2) = 1;
  *(_OWORD *)((char *)this + 188) = xmmword_1800B7120;
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)((char *)this + 104) = xmmword_1800B7130;
  *(_OWORD *)((char *)this + 204) = xmmword_1800B7130;
  *(_OWORD *)((char *)this + 120) = xmmword_1800B7140;
  *(_OWORD *)((char *)this + 220) = xmmword_1800B7140;
  *(_OWORD *)((char *)this + 136) = xmmword_1800B7150;
  *(_OWORD *)((char *)this + 236) = xmmword_1800B7150;
  *(_OWORD *)((char *)this + 152) = xmmword_1800B7160;
  *((_DWORD *)this + 42) = 1065353216;
  *(_OWORD *)((char *)this + 252) = xmmword_1800B7160;
  *((_DWORD *)this + 67) = 1065353216;
  *((_QWORD *)this + 5) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((_QWORD *)this + 4) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
