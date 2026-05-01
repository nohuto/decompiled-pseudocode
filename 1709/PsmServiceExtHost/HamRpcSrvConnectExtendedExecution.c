/*
 * XREFs of HamRpcSrvConnectExtendedExecution @ 0x18001DAC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001CAA4 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CL.c)
 *     CempRpcQueryClientInformation @ 0x18001DD00 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F3E8 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectExtendedExecution(void *a1, _QWORD *a2, _QWORD *a3)
{
  const GUID *v5; // r9
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int ClientInformation; // [rsp+30h] [rbp-69h] BYREF
  unsigned int TokenInformation[3]; // [rsp+34h] [rbp-65h] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+40h] [rbp-59h] BYREF
  _BYTE DestinationSid[80]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+7h] BYREF
  int *p_ClientInformation; // [rsp+C0h] [rbp+27h]
  int v17; // [rsp+C8h] [rbp+2Fh]
  int v18; // [rsp+CCh] [rbp+33h]

  v13 = 0LL;
  ClientInformation = CempRpcQueryClientInformation(a1, DestinationSid, TokenInformation, 0LL);
  LODWORD(v5) = ClientInformation;
  if ( ClientInformation < 0 )
  {
    if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
      return (unsigned int)v5;
    v18 = 0;
    p_ClientInformation = &ClientInformation;
    v17 = 4;
    TlgWrite(v9, &unk_18005B96E, v10, v5, 3u, &pData);
LABEL_11:
    LODWORD(v5) = ClientInformation;
    return (unsigned int)v5;
  }
  ClientInformation = HamSrvConnect(
                        (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1288),
                        TokenInformation[1],
                        (union _RM_SID *)DestinationSid,
                        TokenInformation[0],
                        1u,
                        &v13);
  LODWORD(v5) = ClientInformation;
  if ( ClientInformation < 0 )
  {
    v7 = v13;
  }
  else
  {
    v6 = v13;
    v7 = 0LL;
    *a2 = v13;
    LODWORD(v5) = 0;
    *a3 = *((_QWORD *)v6 + 13);
    ClientInformation = 0;
  }
  if ( v7 )
  {
    HamSrvDisconnect(v7);
    goto LABEL_11;
  }
  return (unsigned int)v5;
}
