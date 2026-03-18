/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x1400B7DD4
 * Callers:
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiInitializeUnusablePfns @ 0x140137634 (MiInitializeUnusablePfns.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x1405B43F8 (MiMapNewSession.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiInitializeBootProcess @ 0x140855684 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiSetPageTablePfnBuddy(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 result; // al

  if ( a3 )
    result = 17;
  else
    result = MiLockPageInline(a1);
  *(_QWORD *)a1 ^= (*(_QWORD *)a1 ^ (a2 << 13)) & 0xFFFFFFFFFFE0000LL;
  if ( result != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(result);
  }
  return result;
}
