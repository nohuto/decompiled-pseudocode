/*
 * XREFs of McTemplateK0jqxzq @ 0x1C00653E8
 * Callers:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003BD2C (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v10; // rax
  int v11; // edx
  _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  char *v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  char *v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  const wchar_t *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  char *v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v8 = a7;
  v14 = a4;
  v16 = &a5;
  v15 = 16LL;
  v18 = &a6;
  v17 = 4LL;
  v19 = 8LL;
  if ( a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v21 = v11;
  v22 = 0;
  if ( !a7 )
    v8 = L"NULL";
  v24 = 4LL;
  v20 = v8;
  v23 = &a8;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 6u, &v13);
}
