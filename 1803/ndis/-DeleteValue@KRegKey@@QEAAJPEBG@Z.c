/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEBG@Z @ 0x1C00FC784
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::DeleteValue(KRegKey *this, const unsigned __int16 *a2)
{
  __int64 v3; // rdx
  const wchar_t *v4; // rax
  NTSTATUS result; // eax
  __int16 v6; // cx
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"NetCfgInstanceId";
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
    v6 = 0x7FFF - v3;
  else
    v6 = 0;
  if ( v3 )
  {
    ValueName.Buffer = L"NetCfgInstanceId";
    ValueName.Length = 2 * v6;
    ValueName.MaximumLength = 2 * v6 + 2;
    return ZwDeleteValueKey(this->m_ptr, &ValueName);
  }
  return result;
}
