/*
 * XREFs of McTemplateK0qhq @ 0x1C00E32A8
 * Callers:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C001139C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     EtwTraceDisplayReqChange @ 0x1C0076EA8 (EtwTraceDisplayReqChange.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qhq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4, char a5, char a6)
{
  unsigned int v7; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  char *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v7 = gSessionId;
  v10 = 4LL;
  v9 = &v7;
  v11 = &a5;
  v13 = &a6;
  v12 = 2LL;
  v14 = 4LL;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 4u, &v8);
}
