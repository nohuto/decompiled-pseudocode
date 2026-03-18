/*
 * XREFs of Template_qhq @ 0x1C00DC790
 * Callers:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C004949C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     EtwTraceDisplayReqChange @ 0x1C0064654 (EtwTraceDisplayReqChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4, char a5, char a6)
{
  int v7; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  char *v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  char *v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]

  v7 = gSessionId;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &a5;
  v11 = &a6;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  v12 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 3u, &UserData);
}
