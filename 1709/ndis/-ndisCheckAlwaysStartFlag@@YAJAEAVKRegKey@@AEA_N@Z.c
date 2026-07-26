/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00AC470
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisCheckAlwaysStartFlag(struct KRegKey *a1, bool *a2)
{
  const wchar_t *v3; // rax
  int v4; // edi
  __int64 v5; // r8
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+4Ch] [rbp-2Ch]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v3 = L"AlwaysStartDevice";
  v4 = 0;
  v5 = 0x7FFFLL;
  while ( *v3 )
  {
    ++v3;
    if ( !--v5 )
      return -1073741811;
  }
  m_ptr = a1->m_ptr;
  ValueName.Buffer = L"AlwaysStartDevice";
  ValueName.Length = 2 * (0x7FFF - v5);
  ValueName.MaximumLength = ValueName.Length + 2;
  result = ZwQueryValueKey(m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( v11 == 4 )
    {
      if ( v12 == 4 )
      {
        v4 = v13;
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
  {
    *a2 = 0;
    return 0;
  }
  else if ( !result )
  {
    *a2 = v4 != 0;
    return 0;
  }
  return result;
}
