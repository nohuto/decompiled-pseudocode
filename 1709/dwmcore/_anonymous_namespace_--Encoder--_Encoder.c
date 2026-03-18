/*
 * XREFs of _anonymous_namespace_::Encoder::_Encoder @ 0x180007330
 * Callers:
 *     _anonymous_namespace_::Encoder::Serialize @ 0x1800059DC (_anonymous_namespace_--Encoder--Serialize.c)
 *     _anonymous_namespace_::Encoder::Serialize_0 @ 0x1800064D8 (_anonymous_namespace_--Encoder--Serialize_0.c)
 *     _anonymous_namespace_::Encoder::Serialize_1 @ 0x180006624 (_anonymous_namespace_--Encoder--Serialize_1.c)
 * Callees:
 *     _anonymous_namespace_::Encoder::EnsureZeroesAreSerialized @ 0x180006DD4 (_anonymous_namespace_--Encoder--EnsureZeroesAreSerialized.c)
 *     _anonymous_namespace_::Encoder::EncodeBlock @ 0x180006E30 (_anonymous_namespace_--Encoder--EncodeBlock.c)
 */

__int64 __fastcall anonymous_namespace_::Encoder::_Encoder(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = anonymous_namespace_::Encoder::EnsureZeroesAreSerialized(a1, a2);
  if ( *(_DWORD *)(a1 + 36) )
    return anonymous_namespace_::Encoder::EncodeBlock(a1);
  return result;
}
