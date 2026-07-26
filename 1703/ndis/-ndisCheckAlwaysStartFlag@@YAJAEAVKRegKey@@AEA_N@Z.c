/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00DEF30
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

__int64 __fastcall ndisCheckAlwaysStartFlag(struct KRegKey *a1, bool *a2)
{
  bool v2; // bl
  int v5; // esi
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  NTSTATUS v8; // ecx
  __int16 v9; // r8
  __int64 result; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+4Ch] [rbp-2Ch]
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]

  v2 = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v5 = 0;
  v6 = 0x7FFFLL;
  v7 = L"AlwaysStartDevice";
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = -1073741811;
  if ( v6 )
  {
    v8 = 0;
    v9 = 0x7FFF - v6;
  }
  else
  {
    v9 = 0;
  }
  if ( v6 )
  {
    ValueName.Buffer = L"AlwaysStartDevice";
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
  }
  if ( v8 >= 0 )
  {
    v8 = ZwQueryValueKey(a1->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v8 >= 0 )
    {
      if ( v14 == 4 )
      {
        if ( v15 == 4 )
        {
          v5 = v16;
          v8 = 0;
        }
        else
        {
          v8 = -1073741789;
        }
      }
      else
      {
        v8 = -1073741788;
      }
    }
  }
  if ( v8 != -1073741772 )
  {
    if ( v8 )
      return (unsigned int)v8;
    v2 = v5 != 0;
  }
  result = 0LL;
  *a2 = v2;
  return result;
}
