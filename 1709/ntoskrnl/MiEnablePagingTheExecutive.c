/*
 * XREFs of MiEnablePagingTheExecutive @ 0x140829664
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x1405B2C7C (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1408296B4 (MiLockPagableSections.c)
 */

__int64 MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    MiEnablePagingOfDriver((__int64)i);
    result = MiLockPagableSections(i, 1LL);
  }
  return result;
}
