/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C0128654
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0128538 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  struct tagKbdLayer *result; // rax

  result = (struct tagKbdLayer *)Win32AllocPool(104LL, 0x746B7355u);
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)KbdTablesFallback;
    *((_OWORD *)result + 1) = unk_1C01D5040;
    *((_OWORD *)result + 2) = *(_OWORD *)&off_1C01D5050;
    *((_OWORD *)result + 3) = *(_OWORD *)&off_1C01D5060;
    *((_OWORD *)result + 4) = *(_OWORD *)&off_1C01D5070;
    *((_OWORD *)result + 5) = xmmword_1C01D5080;
    *((_QWORD *)result + 12) = qword_1C01D5090;
  }
  *((_QWORD *)a1 + 3) = result;
  *((_QWORD *)a1 + 6) = 0LL;
  return result;
}
