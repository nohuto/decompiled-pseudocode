/*
 * XREFs of ExpFindFastOwnerEntryForThread @ 0x1401593C4
 * Callers:
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     ExIsFastResourceHeldExclusive @ 0x140157D10 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140157D78 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyRelease @ 0x140157EE0 (ExpFastResourceLegacyRelease.c)
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExIsFastResourceHeld @ 0x1401588D0 (ExIsFastResourceHeld.c)
 *     ExDisownFastResource @ 0x140158940 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1402B9F08 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpFindFastOwnerEntryForThread(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 *v4; // r8
  __int64 *i; // rcx
  __int64 *v7; // rdx

  v4 = (__int64 *)((a3 != 0 ? 0x18 : 0) + a1 + 2032);
  for ( i = (__int64 *)*v4; ; i = (__int64 *)*i )
  {
    if ( i == v4 )
      return 0LL;
    if ( i[3] == a2 )
      break;
  }
  if ( a4 && (*((_BYTE *)i + 17) & 2) == 0 )
  {
    v7 = i + 5;
    for ( i = (__int64 *)i[5]; i != v7; i = (__int64 *)*i )
    {
      if ( (*((_BYTE *)i + 17) & 2) != 0 )
        return i;
    }
    return 0LL;
  }
  return i;
}
