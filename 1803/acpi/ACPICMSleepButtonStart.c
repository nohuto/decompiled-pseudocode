/*
 * XREFs of ACPICMSleepButtonStart @ 0x1C0079080
 * Callers:
 *     <none>
 * Callees:
 *     ACPICMButtonStart @ 0x1C0078E7C (ACPICMButtonStart.c)
 */

__int64 __fastcall ACPICMSleepButtonStart(ULONG_PTR a1, __int64 a2)
{
  return ACPICMButtonStart(a1, a2, -2147483646);
}
