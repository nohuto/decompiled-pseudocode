/*
 * XREFs of McTemplateK0qzz @ 0x1C004F31C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0qzz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  const wchar_t *v12; // rcx
  bool v13; // zf
  _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-50h] BYREF
  int *v16; // [rsp+40h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-38h]
  const wchar_t *v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  int v24; // [rsp+A8h] [rbp+28h] BYREF

  v24 = a4;
  v6 = a5;
  v16 = &v24;
  v7 = -1LL;
  v17 = 4LL;
  v9 = 10;
  if ( a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a5[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v19 = v11;
  v20 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v18 = v6;
  v12 = a6;
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v22 = v9;
  v21 = v12;
  v23 = 0;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, &NDIS_PROVIDER_ID, 4u, &v15);
}
