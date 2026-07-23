/*
 * XREFs of sub_1800846E0 @ 0x1800846E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __fastcall sub_1800846E0(__int64 a1, __int64 a2)
{
  LOGICAL result; // eax

  _m_prefetchw((const void *)(a2 + 48));
  result = _InterlockedOr((volatile signed __int32 *)(a2 + 48), 2u);
  if ( (result & 1) == 0 )
    return sub_18001052C(a2);
  return result;
}
