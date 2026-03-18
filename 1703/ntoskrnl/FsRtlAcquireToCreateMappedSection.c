/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x140510090
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14005E8F0 (FsRtlCreateSectionForDataScan.c)
 *     MiCallCreateSectionFilters @ 0x14050FFB8 (MiCallCreateSectionFilters.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
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
