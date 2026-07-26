/*
 * XREFs of Template_jqxzqq @ 0x1C005EB18
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v11; // rax
  int v12; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v15; // [rsp+40h] [rbp-41h]
  __int64 v16; // [rsp+48h] [rbp-39h]
  char *v17; // [rsp+50h] [rbp-31h]
  __int64 v18; // [rsp+58h] [rbp-29h]
  const wchar_t *v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+6Ch] [rbp-15h]
  char *v22; // [rsp+70h] [rbp-11h]
  __int64 v23; // [rsp+78h] [rbp-9h]
  char *v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+88h] [rbp+7h]

  v9 = a7;
  UserData.Ptr = a4;
  v15 = &a5;
  v17 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v16 = 4LL;
  v18 = 8LL;
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
  v20 = v12;
  v21 = 0;
  if ( !a7 )
    v9 = L"NULL";
  v23 = 4LL;
  v19 = v9;
  v22 = &a8;
  v25 = 4LL;
  v24 = &a9;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 6u, &UserData);
}
