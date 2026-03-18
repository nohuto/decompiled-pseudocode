/*
 * XREFs of KiEncls @ 0x140182060
 * Callers:
 *     KeAddEnclavePage @ 0x1406D7E00 (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x1406D7F48 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406D80E8 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1406D8174 (KeInitializeEnclave.c)
 *     KeRemoveEnclavePage @ 0x1406D8230 (KeRemoveEnclavePage.c)
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
