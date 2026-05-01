/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x18001DB90
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18000D608 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x18001DD00 (CempRpcQueryClientInformation.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(
        RPC_BINDING_HANDLE ClientBinding,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  NTSTATUS ClientInformation; // ebx
  unsigned int v8; // edi
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  DWORD v14; // ebx
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[80]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v21; // [rsp+100h] [rbp+0h]
  int v22; // [rsp+108h] [rbp+8h]
  int v23; // [rsp+10Ch] [rbp+Ch]

  v16 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, 0LL);
  v8 = v17;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800552A1, v9, v10, 3u, &pData);
  }
  if ( ClientInformation < 0 )
  {
    v11 = RtlNtStatusToDosError(ClientInformation);
    if ( v11 > 0 )
      v11 = (unsigned __int16)v11 | 0x80070000;
  }
  else
  {
    v11 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v6, v8, DestinationSid, a2, a3);
  }
  v16 = v11;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v23 = 0;
    v21 = &v16;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055591, v12, v13, 3u, &pData);
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  return v16;
}
