/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x18002B230
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18001E170 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CempRpcQueryClientInformation @ 0x18002B3B0 (CempRpcQueryClientInformation.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(
        RPC_BINDING_HANDLE ClientBinding,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  NTSTATUS ClientInformation; // ebx
  unsigned int v8; // edi
  int v9; // eax
  DWORD v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[144]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v17; // [rsp+140h] [rbp+40h]
  int v18; // [rsp+148h] [rbp+48h]
  int v19; // [rsp+14Ch] [rbp+4Ch]

  v12 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, 0LL, 0LL);
  v8 = v13;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v19 = 0;
    v17 = &v13;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B895, 0LL, 0LL, 3u, &pData);
  }
  if ( ClientInformation < 0 )
  {
    v9 = RtlNtStatusToDosError(ClientInformation);
    if ( v9 > 0 )
      v9 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    v9 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v6, v8, v14, a2, a3);
  }
  v12 = v9;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v19 = 0;
    v17 = &v12;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BB85, 0LL, 0LL, 3u, &pData);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v12;
}
