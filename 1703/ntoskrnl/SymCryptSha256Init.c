/*
 * XREFs of SymCryptSha256Init @ 0x1401790A0
 * Callers:
 *     SymCryptSha256 @ 0x1401778AC (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x14017A670 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x14017A8F0 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14029B898;
  *(_OWORD *)(a1 + 112) = xmmword_14029B8A8;
}
