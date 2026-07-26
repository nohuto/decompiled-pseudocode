/*
 * XREFs of McTemplateK0cjjp @ 0x1C007540C
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0cjjp(__int64 a1, __int64 a2, const GUID *a3, char a4, int a5, __int64 a6, char a7)
{
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  GUID *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  char v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 1LL;
  v9 = &v17;
  v12 = 16LL;
  v11 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING;
  v13 = a6;
  v15 = &a7;
  v14 = 16LL;
  v16 = 8LL;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, &MiniportSleepStudyDevicePdo, a3, 5u, &v8);
}
