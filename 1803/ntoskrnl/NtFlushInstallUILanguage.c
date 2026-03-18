/*
 * XREFs of NtFlushInstallUILanguage @ 0x1406536A4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1402BCE20 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x140605E60 (MUIInitializeResourceLock.c)
 */

__int64 __fastcall NtFlushInstallUILanguage(int a1, int a2)
{
  unsigned int v3; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int v6; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return 3221225473LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( PsUILanguageComitted )
    return *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != a1 ? 0xC0000001 : 0;
  if ( !MUIRefreshCachedUILock )
  {
    v6 = MUIInitializeResourceLock((volatile signed __int64 *)&MUIRefreshCachedUILock);
    if ( (v6 & 0xC0000000) == 0xC0000000 )
      return v6;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
  if ( a2 )
    PsUILanguageComitted = 1;
  if ( (_WORD)a1 != *(_WORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    *(_WORD *)((char *)&NlsMbCodePageTag + 3) = a1;
    PsMachineUILanguageId = a1;
    v3 = MigrateOOBELanguageToInstallationLanguage();
  }
  ExReleaseResourceLite(MUIRefreshCachedUILock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
