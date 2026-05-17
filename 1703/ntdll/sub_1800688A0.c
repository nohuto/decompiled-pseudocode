/*
 * XREFs of sub_1800688A0 @ 0x1800688A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800688A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return ZwQueryInformationProcess(-1LL, a2, a3, a4, a5);
}
