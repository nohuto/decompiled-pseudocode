/*
 * XREFs of SymCryptWipe @ 0x14017AAD4
 * Callers:
 *     SymCryptSha256Result @ 0x1401790D0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256Result1 @ 0x14017A7F0 (SymCryptParallelSha256Result1.c)
 *     SymCryptParallelSha256Result2 @ 0x14017A880 (SymCryptParallelSha256Result2.c)
 *     SymCryptParallelSha256ResultDone @ 0x14017A8F0 (SymCryptParallelSha256ResultDone.c)
 *     SymCryptParallelHashProcess @ 0x14017AAE0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14017AD90 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SymCryptWipe(__int64 a1, __int64 a2)
{
  return SymCryptWipeAsm(a1, a2);
}
