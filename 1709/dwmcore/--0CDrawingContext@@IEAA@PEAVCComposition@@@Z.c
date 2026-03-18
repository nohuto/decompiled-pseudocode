/*
 * XREFs of ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180040B1C
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x18009E948 (--0CLightStack@@QEAA@XZ.c)
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800B887C (--0CContextState@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  __int64 v4; // r8
  __int128 v5; // xmm0
  CDrawingContext *result; // rax

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CContextState::CContextState((CDrawingContext *)((char *)this + 72), (bool)a2);
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 110) = 1065353216;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = (char *)this + 576;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_DWORD *)this + 140) = 4;
  *(_QWORD *)((char *)this + 564) = 4LL;
  *((_QWORD *)this + 76) = (char *)this + 640;
  *((_QWORD *)this + 77) = (char *)this + 640;
  *((_DWORD *)this + 156) = 4;
  *(_QWORD *)((char *)this + 628) = 4LL;
  CLightStack::CLightStack((CDrawingContext *)((char *)this + 672));
  *((_DWORD *)this + 232) = v4;
  *(_QWORD *)((char *)this + 932) = v4;
  *((_QWORD *)this + 114) = (char *)this + 944;
  *((_QWORD *)this + 115) = (char *)this + 944;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_DWORD *)this + 250) = 0;
  *((_QWORD *)this + 126) = (char *)this + 1040;
  *((_QWORD *)this + 127) = (char *)this + 1040;
  *((_DWORD *)this + 256) = 10;
  *(_QWORD *)((char *)this + 1028) = 10LL;
  *((_QWORD *)this + 230) = (char *)this + 1872;
  *((_QWORD *)this + 231) = (char *)this + 1872;
  *((_DWORD *)this + 464) = 10;
  *(_QWORD *)((char *)this + 1860) = 10LL;
  *((_QWORD *)this + 384) = 0LL;
  *((_QWORD *)this + 386) = 0LL;
  *((_DWORD *)this + 770) = 0;
  *((_DWORD *)this + 774) = 0;
  *((_QWORD *)this + 388) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_DWORD *)this + 778) = 0;
  *((_DWORD *)this + 782) = 0;
  *((_QWORD *)this + 398) = 0LL;
  *((_QWORD *)this + 400) = 0LL;
  *((_DWORD *)this + 798) = 0;
  *((_DWORD *)this + 802) = 0;
  *(_QWORD *)((char *)this + 3180) = 1LL;
  *((_DWORD *)this + 789) = 0;
  *((_QWORD *)this + 395) = 0LL;
  *((_QWORD *)this + 396) = 0LL;
  *((_DWORD *)this + 824) = 0;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 415) = 0LL;
  *((_DWORD *)this + 828) = 0;
  *((_DWORD *)this + 832) = 0;
  *((_QWORD *)this + 421) = 0LL;
  *((_QWORD *)this + 422) = 0LL;
  *((_QWORD *)this + 423) = 0LL;
  *((_DWORD *)this + 848) = 0;
  *((_QWORD *)this + 425) = 0LL;
  *((_QWORD *)this + 426) = 0LL;
  *((_QWORD *)this + 427) = 0LL;
  *((_DWORD *)this + 856) = 0;
  *((_QWORD *)this + 429) = 0LL;
  *((_QWORD *)this + 430) = 0LL;
  *((_QWORD *)this + 431) = 0LL;
  *((_DWORD *)this + 864) = 0;
  *((_OWORD *)this + 217) = _xmm;
  *((_WORD *)this + 1768) = 32085;
  *((_OWORD *)this + 218) = _xmm;
  *((_OWORD *)this + 219) = _xmm;
  *((_OWORD *)this + 220) = _xmm;
  *((_DWORD *)this + 905) = 0;
  *((_DWORD *)this + 922) = 0;
  *((_DWORD *)this + 947) = 0;
  *((_DWORD *)this + 965) = 0;
  *((_DWORD *)this + 982) = 0;
  *((_DWORD *)this + 1007) = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawingContext *)((char *)this + 4048));
  *((_DWORD *)this + 1650) = 0;
  *((_QWORD *)this + 827) = 0LL;
  *((_QWORD *)this + 828) = 0LL;
  *((_QWORD *)this + 829) = 0LL;
  *((_DWORD *)this + 1660) = 0;
  *((_QWORD *)this + 834) = (char *)this + 6704;
  *((_QWORD *)this + 835) = (char *)this + 6704;
  *((_DWORD *)this + 1672) = 5;
  *(_QWORD *)((char *)this + 6692) = 5LL;
  (***((void (__fastcall ****)(_QWORD))this + 4))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 468) = a2;
  *((_BYTE *)this + 3552) = 0;
  *((_DWORD *)this + 940) = 0;
  *(_OWORD *)((char *)this + 3624) = _xmm;
  *((_WORD *)this + 1844) = 32085;
  *(_OWORD *)((char *)this + 3640) = _xmm;
  *(_OWORD *)((char *)this + 3656) = _xmm;
  *(_OWORD *)((char *)this + 3672) = _xmm;
  *((_QWORD *)this + 498) = a2;
  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *((_BYTE *)this + 3792) = 1;
  *((_DWORD *)this + 1000) = 1;
  *((_OWORD *)this + 248) = v5;
  *((_WORD *)this + 1964) = 32085;
  *(_OWORD *)((char *)this + 3864) = _xmm;
  *(_OWORD *)((char *)this + 3880) = _xmm;
  *(_OWORD *)((char *)this + 3896) = _xmm;
  *(_OWORD *)((char *)this + 3912) = _xmm;
  *((_WORD *)this + 3412) = 257;
  *(_OWORD *)((char *)this + 6808) = _xmm;
  *((_DWORD *)this + 1652) = 0x7FFFFFFF;
  *((_BYTE *)this + 6830) = 1;
  result = this;
  *((_DWORD *)this + 100) = DisplayId::Invalid;
  *((_DWORD *)this + 101) = 0;
  *((_QWORD *)this + 832) = (char *)this + 6648;
  *((_QWORD *)this + 831) = (char *)this + 6648;
  return result;
}
