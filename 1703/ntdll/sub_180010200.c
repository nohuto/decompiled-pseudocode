/*
 * XREFs of sub_180010200 @ 0x180010200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010228 @ 0x180010228 (sub_180010228.c)
 */

__int64 __fastcall sub_180010200(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 24));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return sub_180010228(a2);
  return result;
}
