/*
 * XREFs of ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180026018
 * Callers:
 *     PbmRegisterAppManagerNotification @ 0x180022090 (PbmRegisterAppManagerNotification.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498 (-AddHead@-$CAtlList@PEAVCTrackedEndpoint@@V-$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QE.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationManager@@EAAJPEAU_ActiveMediaAppsNotificationContext@@@Z0@Z @ 0x180027B10 (--$QueueApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@YAJP8CApplicationMana.c)
 */

__int64 __fastcall TsSessionIdAddAppManagerClient(struct CProcess *a1)
{
  struct CProcess *v1; // rdi
  unsigned int v2; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // [rsp+28h] [rbp-20h] BYREF
  struct CProcess *v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h]
  int v11; // [rsp+60h] [rbp+18h]
  struct TSSession *v12; // [rsp+68h] [rbp+20h] BYREF

  v9 = a1;
  v1 = a1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v2 = TsSessionFromSessionId(*((_DWORD *)v1 + 55), 1, 0LL, &v12);
  v10 = v2;
  if ( v2 )
    goto LABEL_10;
  try
  {
    ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead((__int64 *)v12 + 7, &v9);
  }
  catch ( ATL::CAtlException *v8 )
  {
    v7 = v8;
    if ( *(_DWORD *)v8 == -1073741571 )
      _o__resetstkoflw();
    v11 = *(_DWORD *)v7;
    v2 = v10;
    if ( v11 >= 0 )
    {
      v1 = v9;
      goto LABEL_5;
    }
LABEL_10:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    result = v2;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 4uLL);
  if ( v4 )
    *v4 = 0;
  else
    v4 = 0LL;
  if ( v4 )
  {
    v5 = *((unsigned int *)v9 + 55);
    *v4 = v5;
    QueueApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>(v5);
  }
  goto LABEL_10;
}
