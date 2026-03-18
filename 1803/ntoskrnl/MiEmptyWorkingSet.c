/*
 * XREFs of MiEmptyWorkingSet @ 0x140253634
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14052D3D4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x1400839D0 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
