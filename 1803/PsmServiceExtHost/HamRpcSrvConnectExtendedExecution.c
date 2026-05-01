/*
 * XREFs of HamRpcSrvConnectExtendedExecution @ 0x1800296D0
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

__int64 __fastcall HamRpcSrvConnectExtendedExecution(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  unsigned int v5; // r9d
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int ClientInformation; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  int v12; // [rsp+60h] [rbp-59h]
  unsigned int v13; // [rsp+64h] [rbp-55h]
  struct _HAM_CLIENT_CONTEXT *v14; // [rsp+68h] [rbp-51h]
  char v15[80]; // [rsp+70h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp+7h] BYREF
  int *p_ClientInformation; // [rsp+E0h] [rbp+27h]
  int v18; // [rsp+E8h] [rbp+2Fh]
  int v19; // [rsp+ECh] [rbp+33h]

  v14 = 0LL;
  Handle = 0LL;
  ClientInformation = CempRpcQueryClientInformation(a1, 0LL, (__int64)&Handle);
  v5 = ClientInformation;
  if ( ClientInformation >= 0 )
  {
    ClientInformation = HamSrvConnect((char *)RmSvcGlobals + 1312, v13, v15, Handle, v12, 2);
    v5 = ClientInformation;
    if ( ClientInformation < 0 )
    {
      v7 = v14;
    }
    else
    {
      v6 = v14;
      v7 = 0LL;
      *a2 = v14;
      v5 = 0;
      *a3 = *((_QWORD *)v6 + 13);
      ClientInformation = 0;
    }
    if ( !v7 )
      goto LABEL_5;
    HamSrvDisconnect(v7);
    goto LABEL_13;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v19 = 0;
    p_ClientInformation = &ClientInformation;
    v18 = 4;
    TlgWrite(v9, &unk_180083641, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v5 = ClientInformation;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)ClientInformation;
  }
  return v5;
}
