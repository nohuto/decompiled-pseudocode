/*
 * XREFs of McTemplateK0zq @ 0x1C0057FB0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     ndisValidate60Protocol @ 0x1C00BF40C (ndisValidate60Protocol.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0zq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  int v6; // ecx
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  char *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v13 = 4LL;
  v9 = a4;
  v12 = &a5;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, &NDIS_PROVIDER_ID, 3u, &v8);
}
