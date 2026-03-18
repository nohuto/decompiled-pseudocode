/*
 * XREFs of KiEncls @ 0x1401825E0
 * Callers:
 *     KeAddEnclavePage @ 0x1406ACB18 (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x1406ACC60 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406ACE00 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1406ACE8C (KeInitializeEnclave.c)
 *     KeRemoveEnclavePage @ 0x1406ACF40 (KeRemoveEnclavePage.c)
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
