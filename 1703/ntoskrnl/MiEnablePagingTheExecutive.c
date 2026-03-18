/*
 * XREFs of MiEnablePagingTheExecutive @ 0x140803AD0
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x1405A21C0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
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
