/*
 * XREFs of _anonymous_namespace_::Encoder::AppendToBlock @ 0x180006EF0
 * Callers:
 *     _anonymous_namespace_::Encoder::AppendValue @ 0x180007020 (_anonymous_namespace_--Encoder--AppendValue.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::EnsureZeroesAreSerialized @ 0x180006DD4 (_anonymous_namespace_--Encoder--EnsureZeroesAreSerialized.c)
 *     _anonymous_namespace_::Encoder::EncodeBlock @ 0x180006E30 (_anonymous_namespace_--Encoder--EncodeBlock.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::AppendToBlock(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // r8d
  __int64 result; // rax

  v2 = (unsigned __int8)a2;
  anonymous_namespace_::Encoder::EnsureZeroesAreSerialized(a1, a2);
  v4 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) |= v2 << (8 * (3 - v4));
  result = (unsigned int)(v4 + 1);
  *(_DWORD *)(a1 + 36) = result;
  if ( v4 == 3 )
  {
    result = anonymous_namespace_::Encoder::EncodeBlock(a1);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  return result;
}
