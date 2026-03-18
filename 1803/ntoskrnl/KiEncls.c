/*
 * XREFs of KiEncls @ 0x1401ABCB0
 * Callers:
 *     KeBlockEnclavePage @ 0x1402412BC (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14024130C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1402413D4 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402414DC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14024151C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1402415B0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1402415F4 (KeTrackEnclaveTbFlush.c)
 *     KeAddEnclavePage @ 0x140741D10 (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x140741E8C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14074204C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1407420D8 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
