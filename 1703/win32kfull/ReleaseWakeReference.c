/*
 * XREFs of ReleaseWakeReference @ 0x1C01E8990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWakeReference(__int64 a1)
{
  return PsReleaseProcessWakeCounter(a1, 0LL);
}
