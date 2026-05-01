/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180003F20
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003174 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // r9
  const GUID *v9; // r8
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v16[56]; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v19; // [rsp+D0h] [rbp-30h]
  int v20; // [rsp+D8h] [rbp-28h]
  int v21; // [rsp+DCh] [rbp-24h]
  unsigned int *v22; // [rsp+E0h] [rbp-20h]
  int v23; // [rsp+E8h] [rbp-18h]
  int v24; // [rsp+ECh] [rbp-14h]
  unsigned int *v25; // [rsp+F0h] [rbp-10h]
  int v26; // [rsp+F8h] [rbp-8h]
  int v27; // [rsp+FCh] [rbp-4h]

  v11 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v16, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v12 = v17;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v20 = 4;
    v13 = a3;
    v23 = 4;
    v14 = a2;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055162, v6, v7, 5u, &pData);
  }
  LODWORD(v8) = ExecutionModel::ResourceManager::RmAccessCheckEx(
                  (struct _RM_SERVICE_GLOBALS **)g_pResourceManager,
                  a2,
                  a3);
  v11 = (int)v8;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v21 = 0;
    v19 = &v11;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055272, v9, v8, 3u, &pData);
    LODWORD(v8) = v11;
  }
  return (unsigned int)v8;
}
