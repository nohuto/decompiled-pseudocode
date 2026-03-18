/*
 * XREFs of SymCryptWipe @ 0x1401A4B94
 * Callers:
 *     SymCryptSha256Result @ 0x1401A3150 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x1401A48B0 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x1401A4940 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401A49B0 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x1401A4BA8 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1401A4E60 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x1401A5270 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
