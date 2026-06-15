/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180023E70
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18001730C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18007F8DC (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x180080C1C (-GetAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADS.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180081EEC (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  __int64 v1; // rcx
  _QWORD *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  size_t cchDest; // [rsp+48h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v9; // [rsp+50h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h]
  __int64 v12; // [rsp+68h] [rbp-A0h]
  wchar_t pszDest[1024]; // [rsp+78h] [rbp-90h] BYREF

  v12 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  LOBYTE(v11) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( qword_18012AE70 )
  {
    v9 = pszDest;
    cchDest = 1024LL;
    v2 = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(v1, 0LL);
    v3 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v9,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ",
           *v2);
    v4 = (unsigned int)v3;
    if ( v3 >= 0 )
    {
      v5 = (_QWORD *)g_VADServerList;
      if ( g_VADServerList )
      {
        while ( 1 )
        {
          v6 = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(v4, v5);
          v7 = StringCchPrintfExW(v9, cchDest, &v9, &cchDest, 0x800u, L"%p ", *v6);
          v4 = v7;
          if ( v7 )
            break;
          v5 = (_QWORD *)*v5;
          if ( !v5 )
            goto LABEL_12;
        }
      }
      if ( (int)(v4 + 0x80000000) < 0 || (_DWORD)v4 == -2147024774 )
LABEL_12:
        LogProductionAssert(0x6D58B0uLL, pszDest);
    }
  }
  if ( (_BYTE)v11 )
    LeaveCriticalSection(lpCriticalSection);
}
