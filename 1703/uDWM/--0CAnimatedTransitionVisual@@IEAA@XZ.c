/*
 * XREFs of ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x18003800C
 * Callers:
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::CAnimatedTransitionVisual(
        CAnimatedTransitionVisual *this)
{
  _QWORD *v2; // rcx

  CRenderDataVisual::CRenderDataVisual((CAnimatedTransitionVisual *)((char *)this + 8));
  *((_DWORD *)this + 187) = -1082130432;
  *((_QWORD *)this + 36) = 0LL;
  *v2 = &CAnimatedTransitionVisual::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  *((_DWORD *)this + 232) = 1065353216;
  *((_DWORD *)this + 233) = 1065353216;
  *((_DWORD *)this + 191) = 1065353216;
  *((_DWORD *)this + 192) = 1065353216;
  *((_DWORD *)this + 193) = 1065353216;
  *((_DWORD *)this + 203) = 1065353216;
  *((_DWORD *)this + 204) = 1065353216;
  *((_DWORD *)this + 205) = 1065353216;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 117) = 1066192077LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_WORD *)this + 484) = 0;
  *(_DWORD *)((char *)this + 971) = 0;
  *(_WORD *)((char *)this + 975) = 0;
  *((_DWORD *)this + 245) = 0;
  *((_QWORD *)this + 123) = 0LL;
  *((_BYTE *)this + 1000) = 0;
  *((_BYTE *)this + 1016) = 0;
  *(_QWORD *)((char *)this + 1020) = 2LL;
  *((_WORD *)this + 518) = 256;
  *(_QWORD *)((char *)this + 788) = 0LL;
  *(_QWORD *)((char *)this + 796) = 0LL;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *((_DWORD *)this + 194) = 1056964608;
  *(_QWORD *)((char *)this + 780) = 1056964608LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *(_QWORD *)((char *)this + 1028) = 0LL;
  memset_0((char *)this + 616, 0, 0x38uLL);
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  return this;
}
