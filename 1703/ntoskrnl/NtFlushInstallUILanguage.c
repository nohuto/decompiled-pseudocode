/*
 * XREFs of NtFlushInstallUILanguage @ 0x1405D41F4
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14025EF18 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS v3; // edi
  int v4; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS v6; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  v4 = InstallUILanguage;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741823;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741790;
  if ( PsUILanguageComitted )
    return *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != v4 ? 0xC0000001 : 0;
  if ( !MUIRefreshCachedUILock )
  {
    v6 = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock);
    if ( (v6 & 0xC0000000) == 0xC0000000 )
      return v6;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
  if ( SetComittedFlag )
    PsUILanguageComitted = 1;
  if ( (_WORD)v4 != *(_WORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v4;
    PsMachineUILanguageId = v4;
    v3 = MigrateOOBELanguageToInstallationLanguage();
  }
  ExReleaseResourceLite(MUIRefreshCachedUILock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
