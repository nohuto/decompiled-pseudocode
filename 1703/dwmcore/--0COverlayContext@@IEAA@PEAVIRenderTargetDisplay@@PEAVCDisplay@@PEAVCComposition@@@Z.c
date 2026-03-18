/*
 * XREFs of ??0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z @ 0x180071E84
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA158 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

COverlayContext *__fastcall COverlayContext::COverlayContext(
        COverlayContext *this,
        struct IRenderTargetDisplay *a2,
        struct CDisplay *a3,
        struct CComposition *a4)
{
  __int64 v6; // rcx

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 9) = a3;
  *(_QWORD *)this = &COverlayContext::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = (char *)this + 304;
  *((_QWORD *)this + 35) = (char *)this + 304;
  *((_DWORD *)this + 72) = 2;
  *(_QWORD *)((char *)this + 292) = 2LL;
  *((_DWORD *)this + 148) = 0;
  *((_DWORD *)this + 165) = 0;
  *((_DWORD *)this + 182) = 0;
  `vector constructor iterator'(
    (COverlayContext *)((char *)this + 736),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 108) = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_WORD *)this + 456) = 0;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 122) = (char *)this + 984;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 139) = a4;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  `vector constructor iterator'(
    (COverlayContext *)((char *)this + 1136),
    0x4D8uLL,
    6uLL,
    (void *(*)(void *))COverlayContext::DbgOverlayStateInfo::DbgOverlayStateInfo);
  v6 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 2144) = -1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  (***((void (__fastcall ****)(_QWORD))this + 9))(*((_QWORD *)this + 9));
  return this;
}
