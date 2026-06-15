/*
 * XREFs of ??0CProcess@@IEAA@XZ @ 0x180013B9C
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z @ 0x1800139AC (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010160 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXXZ @ 0x180018234 (-UpdateRehashThresholds@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAX.c)
 */

// Hidden C++ exception states: #wind=19
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
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 4;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 376));
  *((_QWORD *)this + 52) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 424));
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 4LL;
  *((_DWORD *)this + 134) = 1;
  *(_QWORD *)((char *)this + 548) = 0LL;
  *((_DWORD *)this + 139) = 0;
  *((GUID *)this + 35) = GUID_00000000_0000_0000_0000_000000000000;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 576));
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 632));
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_DWORD *)this + 172) = 17;
  *((_QWORD *)this + 88) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 180) = 0;
  *((_DWORD *)this + 181) = 10;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 173) = 1061158912;
  *((_DWORD *)this + 174) = 1048576000;
  *((_DWORD *)this + 175) = 1074790400;
  ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::UpdateRehashThresholds((char *)this + 672);
  *((_QWORD *)this + 93) = 0LL;
  *((_WORD *)this + 376) = 0;
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 272);
  do
  {
    *v3 = -2147023728;
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
  v4 = 0;
  v5 = (_DWORD *)((char *)this + 540);
  do
  {
    *v5 = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  return this;
}
