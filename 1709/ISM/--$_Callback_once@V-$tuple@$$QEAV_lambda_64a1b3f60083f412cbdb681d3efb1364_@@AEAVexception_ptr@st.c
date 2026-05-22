/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18006A4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Callback_once<std::tuple<_lambda_64a1b3f60083f412cbdb681d3efb1364_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  _QWORD *v2; // rbx
  MPCHeadUpdateListener *v3; // rcx
  void *v5; // rbx
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v2 = operator new(0xB8uLL);
    memset(v2, 0, 0xB8uLL);
    *v2 = 0LL;
    InitializeSRWLock((PSRWLOCK)v2 + 1);
    InitializeSRWLock((PSRWLOCK)v2 + 2);
    v2[3] = 0LL;
    v2[4] = 0LL;
    *((_BYTE *)v2 + 104) = 0;
    v2[14] = 0LL;
    v2[15] = 0LL;
    *((_DWORD *)v2 + 32) = 10000;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 17), 0, 0);
    *((_WORD *)v2 + 88) = 0;
    *((_BYTE *)v2 + 178) = 0;
    *((_DWORD *)v2 + 45) = 0;
    MPCHeadUpdateListener::s_instance = (MPCHeadUpdateListener *)v2;
    MPCHeadUpdateListener::Initialize(v3);
  }
  catch ( ... )
  {
    v5 = *a2;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return 1LL;
}
