/*
 * XREFs of MiGetValidAweProtection @ 0x1402626A8
 * Callers:
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetValidAweProtection(__int16 a1)
{
  if ( (a1 & 4) != 0 )
    return (a1 & 0x800) != 0LL ? 4 : 1;
  else
    return 24LL;
}
