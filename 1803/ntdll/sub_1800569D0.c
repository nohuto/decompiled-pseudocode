/*
 * XREFs of sub_1800569D0 @ 0x1800569D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800569D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 48));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return sub_18005907C(a2);
  return result;
}
