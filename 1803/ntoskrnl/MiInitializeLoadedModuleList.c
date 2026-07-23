/*
 * XREFs of MiInitializeLoadedModuleList @ 0x14089DE40
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x1405F958C (MiLockdownSections.c)
 *     NtSetDebugFilterState @ 0x14061D608 (NtSetDebugFilterState.c)
 *     MiBuildImportsForBootDrivers @ 0x14089DF48 (MiBuildImportsForBootDrivers.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x14089E270 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     MiLocateKernelSections @ 0x14089E300 (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  PVOID v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  qword_1403CB508 = (__int64)&qword_1403CB500;
  qword_1403CB500 = (__int64)&qword_1403CB500;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_14039E4E8 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1u);
  v2 = (__int64 *)(a1 + 16);
  v3 = *v2;
  MiLocateKernelSections(*v2);
  while ( 1 )
  {
    if ( (__int64 *)v3 == v2 )
    {
      MiBuildImportsForBootDrivers();
      return 1LL;
    }
    if ( (int)MiConstructLoaderEntry(v3, (const void **)(v3 + 88), (const void **)(v3 + 72), 0, 1, &v7) < 0 )
      break;
    v4 = v7;
    v5 = *(PVOID *)(v7 + 48);
    if ( v5 == PsNtosImageBase && (MiFlags & 0x80000) == 0 )
      RtlCreateInvertedFunctionTableCacheEntry(v5, *(unsigned int *)(v7 + 64));
    MiLockdownSections(v4);
    v3 = *(_QWORD *)v3;
  }
  return 0LL;
}
