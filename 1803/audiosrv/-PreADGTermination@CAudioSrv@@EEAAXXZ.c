/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180007FE0
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180007DC4 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18009E520 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  int v1; // ecx
  _QWORD *v2; // rbx
  size_t cchDest; // [rsp+48h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v4; // [rsp+50h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+60h] [rbp-A8h]
  __int64 v7; // [rsp+68h] [rbp-A0h]
  wchar_t pszDest[1024]; // [rsp+78h] [rbp-90h] BYREF

  v7 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  LOBYTE(v6) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( qword_180189020 )
  {
    v4 = pszDest;
    cchDest = 1024LL;
    v1 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v4,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ");
    if ( v1 >= 0 )
    {
      v2 = (_QWORD *)g_VADServerList;
      if ( g_VADServerList )
      {
        while ( 1 )
        {
          v1 = StringCchPrintfExW(v4, cchDest, &v4, &cchDest, 0x800u, L"%p ", v2[2]);
          if ( v1 )
            break;
          v2 = (_QWORD *)*v2;
          if ( !v2 )
            goto LABEL_12;
        }
      }
      if ( (int)(v1 + 0x80000000) < 0 || v1 == -2147024774 )
LABEL_12:
        LogProductionAssert(0x6D58B0uLL, pszDest);
    }
  }
  if ( (_BYTE)v6 )
    LeaveCriticalSection(lpCriticalSection);
}
