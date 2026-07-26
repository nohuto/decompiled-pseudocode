/*
 * XREFs of McTemplateK0z @ 0x1C006154C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, &NDIS_PROVIDER_ID, 2u, &v7);
}
