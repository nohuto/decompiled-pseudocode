/*
 * XREFs of SymCryptSha256Init @ 0x1401788D0
 * Callers:
 *     SymCryptSha256 @ 0x1401770F0 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x140179EA8 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x14017A130 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1402BF498;
  *(_OWORD *)(a1 + 112) = xmmword_1402BF4A8;
}
