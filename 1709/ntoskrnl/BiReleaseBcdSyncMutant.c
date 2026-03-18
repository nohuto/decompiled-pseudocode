/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1405AFE48
 * Callers:
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140778A44 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14017DCC0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
