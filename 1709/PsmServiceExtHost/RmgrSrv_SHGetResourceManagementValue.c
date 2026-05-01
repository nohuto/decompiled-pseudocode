/*
 * XREFs of RmgrSrv_SHGetResourceManagementValue @ 0x180030310
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x180031F50 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 */

__int64 __fastcall RmgrSrv_SHGetResourceManagementValue(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        unsigned __int64 *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  unsigned int v7; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  const GUID *v10; // r8
  const GUID *v11; // r9
  DWORD v12; // ebx
  unsigned int ResourceManagementValue; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *p_ResourceManagementValue; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 *v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  unsigned int v24; // [rsp+80h] [rbp-80h]
  _BYTE v25[80]; // [rsp+B0h] [rbp-50h] BYREF

  ResourceManagementValue = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( a3 )
  {
    v7 = v24;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
    {
      v20 = 0;
      v23 = 0;
      p_ResourceManagementValue = &v15;
      v21 = (unsigned __int64 *)&v16;
      v15 = v7;
      v19 = 4;
      v16 = a2;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055105, v8, v9, 4u, RpcCallAttributes);
    }
    ResourceManagementValue = ExecutionModel::ResourceManager::GetResourceManagementValue(v6, v7, a2, a3);
  }
  else
  {
    ResourceManagementValue = -2147024809;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v20 = 0;
    v23 = 0;
    p_ResourceManagementValue = &ResourceManagementValue;
    v19 = 4;
    v21 = a3;
    v22 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800551B0, v10, v11, 4u, RpcCallAttributes);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return ResourceManagementValue;
}
