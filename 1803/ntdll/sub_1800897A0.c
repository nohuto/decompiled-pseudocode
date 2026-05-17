/*
 * XREFs of sub_1800897A0 @ 0x1800897A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800897A0(__int64 a1, __int64 a2, __int64 a3)
{
  return ZwQueryInformationProcess(-1LL, a2, a3);
}
