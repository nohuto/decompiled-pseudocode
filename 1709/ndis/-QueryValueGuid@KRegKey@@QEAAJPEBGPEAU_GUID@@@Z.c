/*
 * XREFs of ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00C7BD8
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C00205F0 (ndisIfReadNetworkGuidFromKey.c)
 * Callees:
 *     KRegKey::QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___ @ 0x1C00C7B30 (KRegKey--QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___.c)
 */

__int64 __fastcall KRegKey::QueryValueGuid(KRegKey *this, wchar_t *a2, struct _GUID *a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  __int64 result; // rax
  __int16 v7; // cx
  _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID *v9; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)&v8.Length = 0;
  v8.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_9;
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
    v8.Buffer = a2;
    v8.Length = 2 * v7;
    v8.MaximumLength = 2 * v7 + 2;
LABEL_9:
    v9 = a3;
    return KRegKey::QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___(&this->m_ptr, &v8, (_OWORD **)&v9);
  }
  return result;
}
