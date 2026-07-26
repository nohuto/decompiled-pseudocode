/*
 * XREFs of Template_z @ 0x1C0061694
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

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
  UserData.Size = v5;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (unsigned __int64)a4;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, &NDIS_PROVIDER_ID, 1u, &UserData);
}
