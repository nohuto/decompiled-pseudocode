/*
 * XREFs of McTemplateK0jqxzqq @ 0x1C005E450
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0101810 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C003D074 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v11; // rax
  int v12; // edx
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+40h] [rbp-41h]
  __int64 v16; // [rsp+48h] [rbp-39h]
  char *v17; // [rsp+50h] [rbp-31h]
  __int64 v18; // [rsp+58h] [rbp-29h]
  char *v19; // [rsp+60h] [rbp-21h]
  __int64 v20; // [rsp+68h] [rbp-19h]
  const wchar_t *v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+7Ch] [rbp-5h]
  char *v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  char *v26; // [rsp+90h] [rbp+Fh]
  __int64 v27; // [rsp+98h] [rbp+17h]

  v9 = a7;
  v15 = a4;
  v17 = &a5;
  v16 = 16LL;
  v19 = &a6;
  v18 = 4LL;
  v20 = 8LL;
  if ( a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a7[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v22 = v12;
  v23 = 0;
  if ( !a7 )
    v9 = L"NULL";
  v25 = 4LL;
  v21 = v9;
  v24 = &a8;
  v27 = 4LL;
  v26 = &a9;
  return McGenEventWriteKM(NDIS_PROVIDER_ID_Context, a2, a3, 7u, &v14);
}
