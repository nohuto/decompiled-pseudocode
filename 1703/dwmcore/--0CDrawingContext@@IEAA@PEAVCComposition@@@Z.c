/*
 * XREFs of ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x1800A9C48
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003F8F0 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800C23E4 (--0CContextState@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  bool v4; // dl
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  CDrawingContext *result; // rax
  __int128 v8; // xmm0

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CBitmapOfDeviceBitmaps::AddRef(*((CBitmapOfDeviceBitmaps **)a2 + 2));
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 2);
  CContextState::CContextState((CDrawingContext *)((char *)this + 80), v4);
  *((_DWORD *)this + 102) = DisplayId::Invalid;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_QWORD *)this + 67) = (char *)this + 568;
  *((_QWORD *)this + 68) = (char *)this + 568;
  *((_DWORD *)this + 138) = 4;
  *(_QWORD *)((char *)this + 556) = 4LL;
  *((_QWORD *)this + 75) = (char *)this + 632;
  *((_QWORD *)this + 76) = (char *)this + 632;
  *((_DWORD *)this + 154) = 4;
  *(_QWORD *)((char *)this + 620) = 4LL;
  *((_QWORD *)this + 83) = (char *)this + 696;
  *((_QWORD *)this + 84) = (char *)this + 696;
  *((_DWORD *)this + 170) = 4;
  *(_QWORD *)((char *)this + 684) = 4LL;
  *((_BYTE *)this + 728) = 1;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 202) = 0;
  *((_QWORD *)this + 102) = (char *)this + 848;
  *((_QWORD *)this + 103) = (char *)this + 848;
  *((_DWORD *)this + 208) = 4;
  *(_QWORD *)((char *)this + 836) = 4LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 226) = 0;
  *((_QWORD *)this + 114) = (char *)this + 944;
  *((_QWORD *)this + 115) = (char *)this + 944;
  *((_DWORD *)this + 232) = 10;
  *(_QWORD *)((char *)this + 932) = 10LL;
  *((_QWORD *)this + 218) = (char *)this + 1776;
  *((_QWORD *)this + 219) = (char *)this + 1776;
  *((_DWORD *)this + 440) = 10;
  *(_QWORD *)((char *)this + 1764) = 10LL;
  *((_QWORD *)this + 372) = 0LL;
  *((_QWORD *)this + 374) = 0LL;
  *((_DWORD *)this + 746) = 0;
  *((_DWORD *)this + 750) = 0;
  *((_QWORD *)this + 376) = 0LL;
  *((_QWORD *)this + 378) = 0LL;
  *((_DWORD *)this + 754) = 0;
  *((_DWORD *)this + 758) = 0;
  *((_QWORD *)this + 386) = 0LL;
  *((_QWORD *)this + 388) = 0LL;
  *((_DWORD *)this + 774) = 0;
  *((_DWORD *)this + 778) = 0;
  *(_QWORD *)((char *)this + 3084) = 1LL;
  *((_DWORD *)this + 765) = 0;
  *((_QWORD *)this + 383) = 0LL;
  *((_QWORD *)this + 384) = 0LL;
  *((_DWORD *)this + 800) = 0;
  *((_QWORD *)this + 401) = 0LL;
  *((_QWORD *)this + 403) = 0LL;
  *((_DWORD *)this + 804) = 0;
  *((_DWORD *)this + 808) = 0;
  *((_QWORD *)this + 409) = 0LL;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_DWORD *)this + 824) = 0;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 414) = 0LL;
  *((_QWORD *)this + 415) = 0LL;
  *((_DWORD *)this + 832) = 0;
  *((_QWORD *)this + 417) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_QWORD *)this + 419) = 0LL;
  *((_DWORD *)this + 840) = 0;
  *((_OWORD *)this + 211) = _xmm;
  *((_WORD *)this + 1720) = 32085;
  *((_OWORD *)this + 212) = _xmm;
  *((_OWORD *)this + 213) = _xmm;
  *((_OWORD *)this + 214) = _xmm;
  *((_DWORD *)this + 881) = 0;
  *((_DWORD *)this + 898) = 0;
  *((_DWORD *)this + 927) = 0;
  *((_DWORD *)this + 945) = 0;
  *((_DWORD *)this + 962) = 0;
  *((_DWORD *)this + 991) = 0;
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3984));
  *((_DWORD *)this + 1634) = 0;
  *((_QWORD *)this + 819) = 0LL;
  *((_QWORD *)this + 820) = 0LL;
  *((_QWORD *)this + 821) = 0LL;
  *((_DWORD *)this + 1644) = 0;
  *((_QWORD *)this + 826) = (char *)this + 6640;
  *((_QWORD *)this + 827) = (char *)this + 6640;
  *((_DWORD *)this + 1656) = 5;
  *(_QWORD *)((char *)this + 6628) = 5LL;
  (***((void (__fastcall ****)(_QWORD))this + 4))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 456) = a2;
  *((_BYTE *)this + 3456) = 0;
  *((_DWORD *)this + 916) = 0;
  *(_OWORD *)((char *)this + 3528) = _xmm;
  *((_WORD *)this + 1796) = 32085;
  *(_OWORD *)((char *)this + 3544) = _xmm;
  *(_OWORD *)((char *)this + 3560) = _xmm;
  *(_OWORD *)((char *)this + 3576) = _xmm;
  v5 = *(_OWORD *)((char *)a2 + 324);
  *((_QWORD *)this + 488) = a2;
  *(_OWORD *)((char *)this + 3684) = v5;
  v6 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)this + 3712) = 1;
  *((_DWORD *)this + 980) = 1;
  *((_OWORD *)this + 243) = v6;
  *(_OWORD *)((char *)this + 3784) = _xmm;
  *((_WORD *)this + 1924) = 32085;
  result = this;
  *(_OWORD *)((char *)this + 3800) = _xmm;
  *(_OWORD *)((char *)this + 3816) = _xmm;
  *(_OWORD *)((char *)this + 3832) = _xmm;
  v8 = *(_OWORD *)((char *)a2 + 324);
  *((_WORD *)this + 3384) = 257;
  *((_DWORD *)this + 1636) = 0x7FFFFFFF;
  *(_OWORD *)((char *)this + 3940) = v8;
  *((_DWORD *)this + 1678) = 0;
  *((_OWORD *)this + 422) = _xmm;
  *((_BYTE *)this + 6774) = 1;
  *((_QWORD *)this + 824) = (char *)this + 6584;
  *((_QWORD *)this + 823) = (char *)this + 6584;
  return result;
}
