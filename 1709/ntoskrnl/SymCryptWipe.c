/*
 * XREFs of SymCryptWipe @ 0x14017A314
 * Callers:
 *     SymCryptSha256Result @ 0x140178900 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x14017A030 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x14017A0C0 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x14017A130 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x14017A328 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14017A5D8 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x14017A9A0 (SymCryptWipeAsm.c)
 */

__int64 SymCryptWipe()
{
  return SymCryptWipeAsm();
}
