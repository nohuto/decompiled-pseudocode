/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x18004CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002768 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  unsigned int v7; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-71h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-69h] BYREF
  char v11[56]; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v12; // [rsp+80h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+7h] BYREF
  unsigned int *v14; // [rsp+D0h] [rbp+27h]
  int v15; // [rsp+D8h] [rbp+2Fh]
  int v16; // [rsp+DCh] [rbp+33h]
  unsigned int *v17; // [rsp+E0h] [rbp+37h]
  int v18; // [rsp+E8h] [rbp+3Fh]
  int v19; // [rsp+ECh] [rbp+43h]

  v7 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v11, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v4 = v12;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v8;
    v17 = &v9;
    v8 = v4;
    v15 = 4;
    v9 = a2;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BBB9, 0LL, 0LL, 4u, &pData);
  }
  v5 = ExecutionModel::ResourceManager::RmAccessCheckEx((struct _RM_SERVICE_GLOBALS **)g_pResourceManager, a2, v4);
  v7 = v5;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v16 = 0;
    v14 = &v7;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B82F, 0LL, 0LL, 3u, &pData);
    return v7;
  }
  return v5;
}
