/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180001620
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002930 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 a11)
{
  int *v11; // rsi
  int v15; // r13d
  int v16; // ebx
  __int64 v17; // r9
  bool v18; // r14
  HANDLE CurrentProcess; // rbx
  HANDLE v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rbx
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  signed int LastError; // eax
  char v27[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+64h] [rbp-9Ch] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-8Ch] BYREF
  int v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  HANDLE TargetHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE hSourceHandle; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]

  v11 = a10;
  hSourceHandle = a7;
  v34 = a3;
  v35 = a11;
  v28 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v15 = a9;
  v16 = (int)v43;
  TargetHandle = 0LL;
  v27[0] = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v29 = v16;
    v39 = &v29;
    v41 = &v30;
    v43 = (int *)&v31;
    v45 = (int *)&v32;
    v47 = &a8;
    v49 = &v33;
    v40 = v17;
    v30 = a5;
    v42 = v17;
    v31 = a2;
    v44 = v17;
    v32 = a4;
    v46 = v17;
    v48 = v17;
    v33 = v15;
    v50 = v17;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BA37, 0LL, 0LL, 8u, RpcCallAttributes);
  }
  v18 = a5 == v16;
  CurrentProcess = GetCurrentProcess();
  v20 = GetCurrentProcess();
  if ( DuplicateHandle(v20, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v22 = (__int64 *)v35;
    v28 = ExecutionModel::ResourceManager::RmAcquireResources(
            v21,
            a2,
            v34,
            a4,
            a5,
            a6,
            TargetHandle,
            a8,
            v15,
            v18,
            v27,
            v35);
    v23 = v28;
    if ( v28 >= 0 )
      *v11 = v27[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    v23 = LastError;
    if ( LastError > 0 )
      v23 = (unsigned __int16)LastError | 0x80070000;
    v22 = (__int64 *)v35;
    v28 = v23;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v39 = &v28;
    v34 = *v22;
    v41 = (int *)&v34;
    v40 = v24;
    v42 = 8LL;
    v43 = v11;
    v44 = v24;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007B9AA, 0LL, 0LL, 5u, RpcCallAttributes);
    return (unsigned int)v28;
  }
  return v23;
}
