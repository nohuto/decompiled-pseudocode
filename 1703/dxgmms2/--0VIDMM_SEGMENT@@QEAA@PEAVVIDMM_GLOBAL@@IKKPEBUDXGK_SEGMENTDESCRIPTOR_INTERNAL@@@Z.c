/*
 * XREFs of ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C0075DD8
 * Callers:
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C0047064 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::VIDMM_SEGMENT(
        VIDMM_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        int a3,
        int a4,
        unsigned int a5,
        const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  int v13; // eax

  *(_QWORD *)this = &VIDMM_SEGMENT::`vftable';
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a5;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 3) = *((_QWORD *)a6 + 1);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = *(_DWORD *)a6;
  *((_DWORD *)this + 21) = *((_DWORD *)a6 + 14);
  *((_DWORD *)this + 22) = *((_DWORD *)a6 + 23);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = *((_QWORD *)a6 + 4);
  *((_QWORD *)this + 22) = 0LL;
  v7 = *((_QWORD *)a6 + 3);
  *((_DWORD *)this + 98) = -1;
  *((_QWORD *)this + 29) = v7;
  *((_DWORD *)this + 101) = a3;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_BYTE *)this + 396) = 1;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 472) = 1;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_WORD *)this + 248) = 0;
  *((_DWORD *)this + 125) = 2;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 24) = (char *)this + 184;
  *((_QWORD *)this + 23) = (char *)this + 184;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 39) = (char *)this + 304;
  *((_QWORD *)this + 38) = (char *)this + 304;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_QWORD *)this + 18) = 0LL;
  memset((char *)this + 336, 0, 0x38uLL);
  memset((char *)this + 440, 0, 0x20uLL);
  v8 = *((_QWORD *)a6 + 2);
  v9 = dword_1C003C160[a5];
  if ( (_DWORD)v9 && v8 >= v9 )
    v8 = dword_1C003C160[a5];
  *((_QWORD *)this + 8) = v8;
  *((_QWORD *)this + 7) = v8;
  if ( (*(_DWORD *)a6 & 0x10000) == 0 )
  {
    v10 = 0x10000000LL;
    if ( v8 < 0x10000000 )
      v10 = v8;
    *((_QWORD *)this + 7) = v10;
  }
  *((_DWORD *)this + 100) = (*(_DWORD *)a6 & 0x800) != 0 ? 0x10000 : 4096;
  if ( (*(_DWORD *)a6 & 0x80000) != 0 )
  {
    *((_DWORD *)this + 125) = 0;
  }
  else
  {
    v13 = *((_DWORD *)this + 125);
    if ( (*(_DWORD *)a6 & 0x100000) != 0 )
      v13 = 1;
    *((_DWORD *)this + 125) = v13;
  }
  v11 = (*((_DWORD *)this + 20) & 0x2000) == 0;
  *((_QWORD *)this + 4) = *((_QWORD *)a6 + 5);
  if ( !v11 )
    *((_DWORD *)this + 10) = *((_DWORD *)a6 + 12);
  return this;
}
