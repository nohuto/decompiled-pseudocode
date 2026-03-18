/*
 * XREFs of ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18009AFC4
 * Callers:
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this, struct CComposition *a2)
{
  char *v2; // rbx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v2 = (char *)this + 556;
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
  *((_QWORD *)this + 19) = (char *)this + 184;
  *((_QWORD *)this + 20) = (char *)this + 184;
  *((_DWORD *)this + 42) = 4;
  *(_QWORD *)((char *)this + 172) = 4LL;
  *((_BYTE *)this + 216) = 1;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = (char *)this + 344;
  *((_QWORD *)this + 40) = (char *)this + 344;
  *((_DWORD *)this + 82) = 10;
  *(_QWORD *)((char *)this + 332) = 10LL;
  *((_QWORD *)this + 68) = a2;
  *((_DWORD *)this + 138) = 0;
  `vector constructor iterator'(
    (COcclusionContext *)((char *)this + 556),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_QWORD *)this + 90) = 0LL;
  *((_WORD *)this + 364) = 0;
  *((_DWORD *)this + 199) = 0;
  *((_DWORD *)this + 216) = 0;
  *((_QWORD *)this + 109) = (char *)this + 880;
  *((_DWORD *)this + 220) = 0;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 240) = 0;
  *((_DWORD *)this + 244) = 0;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_DWORD *)this + 256) = 0;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 270) = 0;
  *((_QWORD *)this + 136) = 0LL;
  memset_0(v2, 0, 0x80uLL);
  memset_0((char *)this + 684, 0, 0x20uLL);
  return this;
}
