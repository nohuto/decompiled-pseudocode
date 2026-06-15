/*
 * XREFs of ??0CApplication@@IEAA@K@Z @ 0x18000B7B4
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000B6A4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000B37C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
CApplication *__fastcall CApplication::CApplication(CApplication *this, int a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CApplication::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
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
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = a2;
  *((_DWORD *)this + 44) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
  *((_QWORD *)this + 28) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 6);
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 296));
  *((_QWORD *)this + 42) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 344));
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 10);
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 456));
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 4LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *(_QWORD *)((char *)this + 548) = 1LL;
  *((_DWORD *)this + 139) = 0;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  return this;
}
