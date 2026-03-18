/*
 * XREFs of SmcCacheDelete @ 0x14079F2D0
 * Callers:
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x14079C9A0 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1407A03E0 (SmcVolumePnpNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x14079F24C (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14079F5C0 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
