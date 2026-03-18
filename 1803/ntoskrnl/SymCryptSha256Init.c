/*
 * XREFs of SymCryptSha256Init @ 0x1401A3120
 * Callers:
 *     SymCryptSha256 @ 0x1401A18B0 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1401A4734 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401A49B0 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1402F8198;
  *(_OWORD *)(a1 + 112) = xmmword_1402F81A8;
}
