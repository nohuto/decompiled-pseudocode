/*
 * XREFs of HamRpcSrvConnect @ 0x18001DF50
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

__int64 __fastcall HamRpcSrvConnect(void *a1, _QWORD *a2, _QWORD *a3)
{
  const GUID *v5; // r9
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v11; // [rsp+30h] [rbp-69h] BYREF
  unsigned int TokenInformation; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-61h] BYREF
  struct _HAM_CLIENT_CONTEXT *v14; // [rsp+40h] [rbp-59h] BYREF
  _BYTE DestinationSid[80]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+7h] BYREF
  int *v17; // [rsp+C0h] [rbp+27h]
  int v18; // [rsp+C8h] [rbp+2Fh]
  int v19; // [rsp+CCh] [rbp+33h]

  v14 = 0LL;
  v11 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v13, 0LL);
  LODWORD(v5) = v11;
  if ( v11 < 0 )
  {
    if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
      return (unsigned int)v5;
    v19 = 0;
    v17 = &v11;
    v18 = 4;
    TlgWrite(v9, &unk_18005B8EF, v10, v5, 3u, &pData);
LABEL_11:
    LODWORD(v5) = v11;
    return (unsigned int)v5;
  }
  v11 = HamSrvConnect(
          (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1288),
          v13,
          (union _RM_SID *)DestinationSid,
          TokenInformation,
          0,
          &v14);
  LODWORD(v5) = v11;
  if ( v11 < 0 )
  {
    v7 = v14;
  }
  else
  {
    v6 = v14;
    v7 = 0LL;
    *a2 = v14;
    LODWORD(v5) = 0;
    *a3 = *((_QWORD *)v6 + 13);
    v11 = 0;
  }
  if ( v7 )
  {
    HamSrvDisconnect(v7);
    goto LABEL_11;
  }
  return (unsigned int)v5;
}
