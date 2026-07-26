/*
 * XREFs of ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C00EAAD8
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

__int64 __fastcall ndisCheckAlwaysStartFlag(struct KRegKey *a1, bool *a2)
{
  __int64 v3; // r8
  int v5; // edi
  const wchar_t *v6; // rax
  NTSTATUS v7; // ecx
  __int16 v8; // dx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v3 = 0x7FFFLL;
  v5 = 0;
  v6 = L"AlwaysStartDevice";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v3;
  }
  while ( v3 );
  v7 = -1073741811;
  if ( v3 )
    v7 = 0;
  v8 = 0x7FFF - v3;
  if ( v3 )
  {
    ValueName.Buffer = L"AlwaysStartDevice";
    ValueName.Length = 2 * v8;
    ValueName.MaximumLength = 2 * v8 + 2;
    v7 = ZwQueryValueKey(a1->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v7 >= 0 )
    {
      if ( v13 == 4 )
      {
        if ( v14 == 4 )
        {
          v5 = v15;
          v7 = 0;
        }
        else
        {
          v7 = -1073741789;
        }
      }
      else
      {
        v7 = -1073741788;
      }
    }
  }
  if ( v7 == -1073741772 )
  {
    *a2 = 0;
  }
  else
  {
    if ( v7 )
      return (unsigned int)v7;
    *a2 = v5 != 0;
  }
  return 0LL;
}
