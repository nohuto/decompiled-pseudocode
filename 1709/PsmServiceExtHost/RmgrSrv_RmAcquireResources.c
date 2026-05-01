/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180001CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002984 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
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
        __int64 *a11)
{
  int *v11; // rsi
  __int64 *v13; // r14
  int v16; // ebx
  const GUID *v17; // r8
  const GUID *v18; // r9
  bool v19; // r15
  HANDLE CurrentProcess; // rbx
  HANDLE v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r9
  const GUID *v24; // r8
  const GUID *v25; // r10
  signed int LastError; // eax
  char v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-8Ch] BYREF
  int v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  const GUID *v40; // [rsp+C8h] [rbp-38h]
  int *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int *v43; // [rsp+E0h] [rbp-20h]
  const GUID *v44; // [rsp+E8h] [rbp-18h]
  int *v45; // [rsp+F0h] [rbp-10h]
  const GUID *v46; // [rsp+F8h] [rbp-8h]
  int *v47; // [rsp+100h] [rbp+0h]
  const GUID *v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  const GUID *v50; // [rsp+118h] [rbp+18h]

  v11 = a10;
  v13 = a11;
  v35 = a3;
  hSourceHandle = a7;
  v29 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v16 = (int)v43;
  TargetHandle = 0LL;
  v28[0] = 0;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v30 = v16;
    v39 = &v30;
    v41 = &v31;
    v43 = (int *)&v32;
    v45 = (int *)&v33;
    v47 = &a8;
    v34 = a9;
    v49 = &v34;
    v40 = v18;
    v31 = a5;
    v42 = (__int64)v18;
    v32 = a2;
    v44 = v18;
    v33 = a4;
    v46 = v18;
    v48 = v18;
    v50 = v18;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055443, v17, v18, 8u, RpcCallAttributes);
  }
  v19 = a5 == v16;
  CurrentProcess = GetCurrentProcess();
  v21 = GetCurrentProcess();
  if ( DuplicateHandle(v21, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v29 = ExecutionModel::ResourceManager::RmAcquireResources(
            v22,
            a2,
            v35,
            a4,
            a5,
            a6,
            TargetHandle,
            a8,
            a9,
            v19,
            v28,
            v13);
    LODWORD(v23) = v29;
    if ( v29 >= 0 )
      *v11 = v28[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(v23) = LastError;
    if ( LastError > 0 )
    {
      LODWORD(v23) = (unsigned __int16)LastError | 0x80070000;
      v29 = (int)v23;
    }
    else
    {
      v29 = LastError;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v40 = v25;
    v39 = &v29;
    v35 = *v13;
    v41 = (int *)&v35;
    v42 = 8LL;
    v43 = v11;
    v44 = v25;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800553B6, v24, v23, 5u, RpcCallAttributes);
    LODWORD(v23) = v29;
  }
  return (unsigned int)v23;
}
