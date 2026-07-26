/*
 * XREFs of Template_zq @ 0x1C0059AE4
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ndisValidate60Protocol @ 0x1C00B84FC (ndisValidate60Protocol.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4, char a5)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

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
  UserData.Size = v6;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v10 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v9 = &a5;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, &NDIS_PROVIDER_ID, 2u, &UserData);
}
