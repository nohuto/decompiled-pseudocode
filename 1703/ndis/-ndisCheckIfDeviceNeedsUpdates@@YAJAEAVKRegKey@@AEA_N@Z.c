/*
 * XREFs of ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00A9400
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisCheckIfDeviceNeedsUpdates(struct KRegKey *a1, bool *a2)
{
  bool v2; // bl
  const wchar_t *v4; // rax
  int v5; // esi
  __int64 v6; // r8
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v12; // [rsp+4Ch] [rbp-2Ch]
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]

  v2 = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v4 = L"DriverUpdated";
  v5 = 0;
  v6 = 0x7FFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v6 )
      return -1073741811;
  }
  m_ptr = a1->m_ptr;
  ValueName.Buffer = L"DriverUpdated";
  ValueName.Length = 2 * (0x7FFF - v6);
  ValueName.MaximumLength = ValueName.Length + 2;
  result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v12 == 4 )
    {
      if ( v13 == 4 )
      {
        v5 = v14;
        result = 0;
      }
      else
      {
        result = -1073741789;
      }
    }
    else
    {
      result = -1073741788;
    }
  }
  if ( result == -1073741772 )
    goto LABEL_10;
  if ( !result )
  {
    v2 = v5 != 0;
LABEL_10:
    *a2 = v2;
    return 0;
  }
  return result;
}
