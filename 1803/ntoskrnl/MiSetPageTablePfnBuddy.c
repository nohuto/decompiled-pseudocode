/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x140071888
 * Callers:
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     MiInitializeUnusablePfns @ 0x14016F97C (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x140512C1C (MiAllocateTopLevelPage.c)
 *     MiMapNewSession @ 0x14060B454 (MiMapNewSession.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiInitializeBootProcess @ 0x14089E3A8 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
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
