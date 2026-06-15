/*
 * XREFs of ??0CProcess@@IEAA@XZ @ 0x18000E570
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z @ 0x18000E3A0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000B37C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=11
CProcess *__fastcall CProcess::CProcess(CProcess *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // rcx
  unsigned int v4; // eax
  _DWORD *v5; // rcx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 168));
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 4;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 368));
  *((_QWORD *)this + 51) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 416));
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 4LL;
  *((_DWORD *)this + 132) = 1;
  *(_QWORD *)((char *)this + 540) = 0LL;
  *(GUID *)((char *)this + 548) = GUID_00000000_0000_0000_0000_000000000000;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 568));
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 264);
  do
  {
    *v3 = -2147023728;
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
  v4 = 0;
  v5 = (_DWORD *)((char *)this + 532);
  do
  {
    *v5 = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  return this;
}
