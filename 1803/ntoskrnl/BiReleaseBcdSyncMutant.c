/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140609030
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1406077C0 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140607C5C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x1407E17D0 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1407E1868 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1401A78C0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
