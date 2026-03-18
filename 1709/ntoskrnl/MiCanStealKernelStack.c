/*
 * XREFs of MiCanStealKernelStack @ 0x1400CE71C
 * Callers:
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 */

__int64 __fastcall MiCanStealKernelStack(__int64 a1)
{
  int IsPfnInline; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 v4; // r10
  unsigned int v5; // edx
  __int64 LeafPfnBuddy; // rax

  IsPfnInline = MiIsPfnInline((a1 + 0x58000000000LL) / 48);
  v5 = 0;
  if ( !IsPfnInline )
    return 0LL;
  if ( ((*(_QWORD *)(v3 + 40) >> 54) & 7) != 2 )
    return 0LL;
  if ( (MiFlags & 0x800) != 0 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(v3, 0LL, v2, v3);
    if ( LeafPfnBuddy == -32 || !LeafPfnBuddy )
      return 0LL;
  }
  if ( (*(_BYTE *)(v3 + 34) & 7) != 6 )
    return 0LL;
  LOBYTE(v5) = *(_WORD *)(v3 + 32) == v4;
  return v5;
}
