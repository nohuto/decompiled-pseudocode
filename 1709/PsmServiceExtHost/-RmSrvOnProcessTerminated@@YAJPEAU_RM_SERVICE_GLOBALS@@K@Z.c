/*
 * XREFs of ?RmSrvOnProcessTerminated@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003422C
 * Callers:
 *     RmtSrv_RM_OnProcessTerminated @ 0x180030600 (RmtSrv_RM_OnProcessTerminated.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 */

__int64 __fastcall RmSrvOnProcessTerminated(ExecutionModel::ResourceManager **a1, int a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r9
  DWORD v8; // ebx
  int v10; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-A4h] BYREF
  char v12[80]; // [rsp+40h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-48h] BYREF
  int *v14; // [rsp+B0h] [rbp-28h]
  int v15; // [rsp+B8h] [rbp-20h]
  int v16; // [rsp+BCh] [rbp-1Ch]

  RmpUtilCheckStartLockTracking(v11, (struct _CEM_LOCK_TRACKER *)v12);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056C7A, v4, v5, 2u, &pData);
  ExecutionModel::ResourceManager::OnProcessTerminated(a1[237], a2);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v16 = 0;
    v14 = &v10;
    v10 = a2;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005636C, v6, v7, 3u, &pData);
  }
  if ( v11[0] )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, 0LL);
    }
  }
  return 0LL;
}
