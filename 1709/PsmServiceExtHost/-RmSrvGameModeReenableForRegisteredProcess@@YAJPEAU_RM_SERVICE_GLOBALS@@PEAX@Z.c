/*
 * XREFs of ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180033AAC
 * Callers:
 *     RmGameModeSrvReenableForRegisteredProcess @ 0x180034B10 (RmGameModeSrvReenableForRegisteredProcess.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180038C0C (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 */

__int64 __fastcall RmSrvGameModeReenableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  const GUID *v4; // r8
  const GUID *v5; // r9
  DWORD ProcessId; // eax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-59h] BYREF
  DWORD v12; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-51h] BYREF
  char v14[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  unsigned int *v16; // [rsp+B0h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+2Fh]
  int v18; // [rsp+BCh] [rbp+33h]
  DWORD *v19; // [rsp+C0h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+3Fh]
  int v21; // [rsp+CCh] [rbp+43h]

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v14);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005652C, v4, v5, 2u, &pData);
  v11 = RmpGameModeReenableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 1136), a2);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v18 = 0;
    v16 = &v11;
    v17 = 4;
    ProcessId = GetProcessId(a2);
    v21 = 0;
    v12 = ProcessId;
    v19 = &v12;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056A60, v7, v8, 4u, &pData);
  }
  if ( v13 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return v11;
}
