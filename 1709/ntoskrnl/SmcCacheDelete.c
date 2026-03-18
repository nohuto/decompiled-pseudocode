/*
 * XREFs of SmcCacheDelete @ 0x14073C2CC
 * Callers:
 *     SmcProcessCreateRequest @ 0x14073950C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140739768 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14073D3E0 (SmcVolumePnpNotification.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     SmcCacheCleanup @ 0x14073C248 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14073C5B8 (SmcCacheRemove.c)
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
