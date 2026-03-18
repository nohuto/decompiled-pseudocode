/*
 * XREFs of ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005CE1C
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BDFD8 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x18009E948 (--0CLightStack@@QEAA@XZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this, struct CComposition *a2)
{
  __int64 v3; // r8

  *(_QWORD *)this = &COcclusionContext::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 36) = 0;
  CLightStack::CLightStack((COcclusionContext *)((char *)this + 152));
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = (char *)this + 432;
  *((_QWORD *)this + 51) = (char *)this + 432;
  *((_DWORD *)this + 104) = 10;
  *(_QWORD *)((char *)this + 420) = 10LL;
  *((_QWORD *)this + 79) = v3;
  *((_DWORD *)this + 160) = 0;
  `vector constructor iterator'(
    (COcclusionContext *)((char *)this + 644),
    16LL,
    8LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_QWORD *)this + 101) = 0LL;
  *((_WORD *)this + 408) = 0;
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = (char *)this + 968;
  *((_DWORD *)this + 242) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 264) = 0;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_DWORD *)this + 272) = 0;
  *((_DWORD *)this + 276) = 0;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_DWORD *)this + 294) = 0;
  *((_QWORD *)this + 148) = 0LL;
  memset_0((char *)this + 644, 0, 0x80uLL);
  memset_0((char *)this + 772, 0, 0x20uLL);
  return this;
}
