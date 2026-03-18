/*
 * XREFs of BiLogMessage @ 0x140609614
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1402C5E00 (BiLogFileOwnerProcess.c)
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     BiLoadSystemStore @ 0x14060637C (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14060649C (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 *     BiLoadHive @ 0x140606838 (BiLoadHive.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x140606FFC (BcdGetSystemStorePath.c)
 *     BcdOpenStore @ 0x1406077C0 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     BiCreateObject @ 0x1407E1B88 (BiCreateObject.c)
 *     BiAddBootEntry @ 0x1407E2CA0 (BiAddBootEntry.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1407E316C (BiBindEfiEntries.c)
 *     BiBindEfiNamespaceObjects @ 0x1407E33A4 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1407E3DA8 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1407E42EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1407E4364 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1407E446C (BiEnumerateBootEntries.c)
 *     BiExportBcdObjects @ 0x1407E4568 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiExportStoreAlterationsToEfi @ 0x1407E49E0 (BiExportStoreAlterationsToEfi.c)
 *     BiModifyBootEntry @ 0x1407E5290 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1407E52F8 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1407E5550 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407E55C0 (BiSetBootOptions.c)
 *     BiTranslateBootEntryId @ 0x1407E5630 (BiTranslateBootEntryId.c)
 *     BiTranslateObjectIdentifier @ 0x1407E5870 (BiTranslateObjectIdentifier.c)
 *     BiUpdateEfiEntry @ 0x1407E5BDC (BiUpdateEfiEntry.c)
 * Callees:
 *     <none>
 */

__int64 BiLogMessage(_QWORD a1, _QWORD a2, ...)
{
  return 0LL;
}
