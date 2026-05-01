/*
 * XREFs of HamRpcSrvConnectDebugging @ 0x180036AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800297C4 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_L.c)
 *     CempRpcQueryClientInformation @ 0x18002B3B0 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034610 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectDebugging(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  unsigned int v5; // r9d
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-89h]
  __int64 v11; // [rsp+38h] [rbp-81h]
  int v12; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  int v14; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v15; // [rsp+64h] [rbp-55h] BYREF
  struct _HAM_CLIENT_CONTEXT *v16; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp+7h] BYREF
  int *v19; // [rsp+E0h] [rbp+27h]
  int v20; // [rsp+E8h] [rbp+2Fh]
  int v21; // [rsp+ECh] [rbp+33h]

  v16 = 0LL;
  Handle = 0LL;
  v12 = CempRpcQueryClientInformation(a1, (__int64)v17, &v14, &v15, 0LL, &Handle);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v12 = HamSrvConnect(
            (__int64)RmSvcGlobals + 1312,
            v15,
            (__int64)v17,
            (__int64)Handle,
            v14,
            1,
            v10,
            v11,
            (__int64)&v16);
    v5 = v12;
    if ( v12 < 0 )
    {
      v7 = v16;
    }
    else
    {
      v6 = v16;
      v7 = 0LL;
      *a2 = v16;
      v5 = 0;
      *a3 = *((_QWORD *)v6 + 13);
      v12 = 0;
    }
    if ( !v7 )
      goto LABEL_5;
    HamSrvDisconnect(v7);
    goto LABEL_13;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v21 = 0;
    v19 = &v12;
    v20 = 4;
    TlgWrite(v9, &unk_1800835CA, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v5 = v12;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)v12;
  }
  return v5;
}
