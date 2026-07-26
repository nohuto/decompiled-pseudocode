/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00B18D8
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B0330 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00B14CC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUshort(KRegKey *this, const unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v5; // rdx
  const wchar_t *v6; // rax
  NTSTATUS result; // eax
  __int16 v8; // cx
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  *(_DWORD *)&v9.Length = 0;
  v9.Buffer = 0LL;
  v5 = 0x7FFFLL;
  v6 = L"*IfType";
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = 0x7FFF - v5;
  else
    v8 = 0;
  if ( v5 )
  {
    v9.Buffer = L"*IfType";
    v9.Length = 2 * v8;
    v9.MaximumLength = 2 * v8 + 2;
    result = KRegKey::QueryValueUlong(this, &v9, (unsigned int *)&v10);
    if ( result >= 0 )
    {
      if ( (unsigned int)v10 > 0xFFFF )
      {
        return -1073741675;
      }
      else
      {
        *a3 = (unsigned __int16)v10;
        return 0;
      }
    }
  }
  return result;
}
