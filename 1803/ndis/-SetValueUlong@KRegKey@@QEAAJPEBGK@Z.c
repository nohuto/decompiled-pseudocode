/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00FC814
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C3820 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, int a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  NTSTATUS result; // eax
  __int16 v7; // cx
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_10;
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v7;
    ValueName.MaximumLength = 2 * v7 + 2;
LABEL_10:
    m_ptr = this->m_ptr;
    Data = a3;
    return ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
  }
  return result;
}
