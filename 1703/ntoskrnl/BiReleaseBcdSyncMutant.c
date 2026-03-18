/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14058BC08
 * Callers:
 *     BcdFlushStore @ 0x140578E8C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x14057B770 (BcdForciblyUnloadStore.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14058A484 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140734974 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14017E340 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
