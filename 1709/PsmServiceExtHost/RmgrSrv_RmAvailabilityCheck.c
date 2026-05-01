/*
 * XREFs of RmgrSrv_RmAvailabilityCheck @ 0x18002FF40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800323F8 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 */

__int64 __fastcall RmgrSrv_RmAvailabilityCheck(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // r9
  const GUID *v13; // r8
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[56]; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+ECh] [rbp-14h]
  int *v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+FCh] [rbp-4h]
  int *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+10Ch] [rbp+Ch]
  int *v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+118h] [rbp+18h]
  int v35; // [rsp+11Ch] [rbp+1Ch]

  v15 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v21, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v16 = v22;
    v24 = &v16;
    v27 = &v17;
    v30 = (int *)&v18;
    v33 = (int *)&v19;
    v25 = 4;
    v17 = a5;
    v28 = 4;
    v18 = a2;
    v31 = 4;
    v19 = a4;
    v34 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055350, v10, v11, 6u, &pData);
  }
  LODWORD(v12) = ExecutionModel::ResourceManager::RmAvailabilityCheck(v9, a2, a3, a4, a5);
  v15 = (int)v12;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v26 = 0;
    v24 = &v15;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055522, v13, v12, 3u, &pData);
    LODWORD(v12) = v15;
  }
  return (unsigned int)v12;
}
