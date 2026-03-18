/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x1404C146C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14004D470 (FsRtlCreateSectionForDataScan.c)
 *     MiCallCreateSectionFilters @ 0x1404C18A4 (MiCallCreateSectionFilters.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(struct _FILE_OBJECT *a1, char a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // edi
  PFAST_MUTEX *FsContext; // rbx
  struct _FAST_MUTEX *v9; // rcx

  *a3 = 0;
  *a4 = 0;
  v6 = FsRtlAcquireFileExclusiveCommon(a1);
  if ( v6 >= 0 && (a2 & 0x44) != 0 )
  {
    FsContext = (PFAST_MUTEX *)a1->FsContext;
    if ( FsContext )
    {
      ExAcquireFastMutex(FsContext[6]);
      v9 = FsContext[6];
      *((_BYTE *)FsContext + 6) |= 0x10u;
      KeReleaseGuardedMutex(v9);
    }
  }
  return (unsigned int)v6;
}
