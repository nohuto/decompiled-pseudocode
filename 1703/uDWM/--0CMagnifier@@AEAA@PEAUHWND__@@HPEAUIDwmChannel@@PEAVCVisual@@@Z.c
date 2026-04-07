/*
 * XREFs of ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@@Z @ 0x18007CDE4
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007CF40 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUIDwmChannel@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMagnifier *__fastcall CMagnifier::CMagnifier(
        CMagnifier *this,
        HWND a2,
        int a3,
        struct IDwmChannel *a4,
        struct CVisual *a5)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMagnifier::`vftable';
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 8) = a2;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 72) = a3 != 0;
  *(_OWORD *)((char *)this + 76) = gMilColorTransfIdentity;
  *(_OWORD *)((char *)this + 92) = xmmword_1800C06E0;
  *(_OWORD *)((char *)this + 108) = xmmword_1800C06F0;
  *(_OWORD *)((char *)this + 124) = xmmword_1800C0700;
  *(_OWORD *)((char *)this + 140) = xmmword_1800C0710;
  *(_OWORD *)((char *)this + 156) = xmmword_1800C0720;
  *((_DWORD *)this + 43) = dword_1800C0730;
  *((_QWORD *)this + 3) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  return this;
}
