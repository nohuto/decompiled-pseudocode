/*
 * XREFs of sub_1800575F0 @ 0x1800575F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800594E0 @ 0x1800594E0 (sub_1800594E0.c)
 */

__int64 __fastcall sub_1800575F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 24));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return sub_1800594E0(a2);
  return result;
}
