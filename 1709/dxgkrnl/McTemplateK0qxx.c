/*
 * XREFs of McTemplateK0qxx @ 0x1C00289BC
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000D744 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxx(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 8LL;
  v8 = &v14;
  v13 = 8LL;
  v10 = &a5;
  v12 = &a6;
  v9 = 4LL;
  return McGenEventWriteKM(&DxgkControlGuid_Context, &EventMakeResidentEnd, a3, 4u, &v7);
}
