/*
 * XREFs of MiCanStealKernelStack @ 0x140003BA8
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiCanStealKernelStack(__int64 a1)
{
  int IsPfnInline; // eax
  __int64 v2; // r9
  unsigned __int16 v3; // r10
  unsigned int v4; // edx
  __int64 LeafPfnBuddy; // rax

  IsPfnInline = MiIsPfnInline((a1 + 0x58000000000LL) / 48);
  v4 = 0;
  if ( !IsPfnInline )
    return 0LL;
  if ( ((*(_QWORD *)(v2 + 40) >> 54) & 7) != 2 )
    return 0LL;
  if ( (MiFlags & 0x800) != 0 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(v2);
    if ( LeafPfnBuddy == -32 || !LeafPfnBuddy )
      return 0LL;
  }
  if ( (*(_BYTE *)(v2 + 34) & 7) != 6 )
    return 0LL;
  LOBYTE(v4) = *(_WORD *)(v2 + 32) == v3;
  return v4;
}
