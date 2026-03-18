/*
 * XREFs of NtFlushInstallUILanguage @ 0x1405F0254
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x140288AD0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1404F3344 (MUIInitializeResourceLock.c)
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
