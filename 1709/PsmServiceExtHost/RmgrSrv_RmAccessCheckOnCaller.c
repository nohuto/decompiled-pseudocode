/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x18002FDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003174 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  unsigned int v4; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const GUID *v7; // r9
  const GUID *v8; // r8
  int v10; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-71h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-69h] BYREF
  char v14[56]; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v15; // [rsp+80h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+7h] BYREF
  unsigned int *v17; // [rsp+D0h] [rbp+27h]
  int v18; // [rsp+D8h] [rbp+2Fh]
  int v19; // [rsp+DCh] [rbp+33h]
  unsigned int *v20; // [rsp+E0h] [rbp+37h]
  int v21; // [rsp+E8h] [rbp+3Fh]
  int v22; // [rsp+ECh] [rbp+43h]

  v10 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v14, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v4 = v15;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v11;
    v20 = &v12;
    v11 = v4;
    v18 = 4;
    v12 = a2;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800555C5, v5, v6, 4u, &pData);
  }
  LODWORD(v7) = ExecutionModel::ResourceManager::RmAccessCheckEx(
                  (struct _RM_SERVICE_GLOBALS **)g_pResourceManager,
                  a2,
                  v4);
  v10 = (int)v7;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v19 = 0;
    v17 = (unsigned int *)&v10;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005523B, v8, v7, 3u, &pData);
    LODWORD(v7) = v10;
  }
  return (unsigned int)v7;
}
