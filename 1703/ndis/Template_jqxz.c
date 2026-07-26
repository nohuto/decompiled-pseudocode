/*
 * XREFs of Template_jqxz @ 0x1C005C3A4
 * Callers:
 *     NdisCloseAdapter @ 0x1C00FB7F0 (NdisCloseAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxz(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v12; // [rsp+40h] [rbp-11h]
  __int64 v13; // [rsp+48h] [rbp-9h]
  char *v14; // [rsp+50h] [rbp-1h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  const wchar_t *v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+6Ch] [rbp+1Bh]

  v7 = a7;
  UserData.Ptr = a4;
  v12 = &a5;
  *(_QWORD *)&UserData.Size = 16LL;
  v14 = &a6;
  v15 = 8LL;
  v13 = 4LL;
  if ( a7 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  v17 = v9;
  v18 = 0;
  if ( !a7 )
    v7 = L"NULL";
  v16 = v7;
  return EtwWrite(Microsoft_Windows_NDISHandle, &CloseAdapter, a3, 4u, &UserData);
}
