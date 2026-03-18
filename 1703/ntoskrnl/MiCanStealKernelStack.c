/*
 * XREFs of MiCanStealKernelStack @ 0x14002C25C
 * Callers:
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiCanStealKernelStack(__int64 a1)
{
  int IsPfnInline; // eax
  __int64 v2; // r9
  unsigned __int16 v3; // r10
  unsigned int v4; // ecx

  IsPfnInline = MiIsPfnInline(
                  (a1 + 0x58000000000LL) / 48,
                  (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
                  a1 + 0x58000000000LL,
                  a1);
  v4 = 0;
  if ( !IsPfnInline
    || ((*(_QWORD *)(v2 + 40) >> 54) & 7) != 2
    || (MiFlags & 0x800) != 0 && (*(_QWORD *)v2 == -5LL || (*(_QWORD *)v2 & 1) == 0)
    || (*(_BYTE *)(v2 + 34) & 7) != 6 )
  {
    return 0LL;
  }
  LOBYTE(v4) = *(_WORD *)(v2 + 32) == v3;
  return v4;
}
