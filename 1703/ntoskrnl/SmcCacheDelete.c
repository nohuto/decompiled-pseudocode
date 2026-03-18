/*
 * XREFs of SmcCacheDelete @ 0x140703FC8
 * Callers:
 *     SmcProcessCreateRequest @ 0x140701444 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1407016A0 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x140705110 (SmcVolumePnpNotification.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x140703F48 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1407042B4 (SmcCacheRemove.c)
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
  MiDeleteSubsection(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
