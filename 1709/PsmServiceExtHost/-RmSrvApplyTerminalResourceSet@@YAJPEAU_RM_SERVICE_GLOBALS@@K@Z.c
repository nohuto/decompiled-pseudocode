/*
 * XREFs of ?RmSrvApplyTerminalResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180032A48
 * Callers:
 *     RmtSrv_RM_ApplyTerminalResourceSet @ 0x180030560 (RmtSrv_RM_ApplyTerminalResourceSet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x180031D04 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 */

__int64 __fastcall RmSrvApplyTerminalResourceSet(struct _RM_SERVICE_GLOBALS ***a1, DWORD a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  DWORD v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-69h] BYREF
  DWORD v12; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-61h] BYREF
  char v14[80]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-9h] BYREF
  unsigned int *v16; // [rsp+B0h] [rbp+17h]
  __int64 v17; // [rsp+B8h] [rbp+1Fh]
  DWORD *v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]

  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v14);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800565AC, v4, v5, 2u, &pData);
  v6 = ExecutionModel::ResourceManager::ApplyTerminalResourceSet(a1[237], a2);
  if ( v6 >= 0 )
    v6 = 0;
  v11 = v6;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v17 = 4LL;
    v16 = &v11;
    v18 = &v12;
    v12 = a2;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056772, v7, v8, 4u, &pData);
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
