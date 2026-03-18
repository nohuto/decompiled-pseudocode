/*
 * XREFs of ExpFindFastOwnerEntryForThread @ 0x14014E814
 * Callers:
 *     LdrpKrnGetDataTableEntry @ 0x140012970 (LdrpKrnGetDataTableEntry.c)
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     ExIsFastResourceHeldExclusive @ 0x14014D230 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14014D298 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 *     ExpFastResourceLegacyRelease @ 0x14014DBCC (ExpFastResourceLegacyRelease.c)
 *     ExIsFastResourceHeld @ 0x14014E2D0 (ExIsFastResourceHeld.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14025BFB8 (ExpFastResourceLegacyIsAcquiredShared.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpFindFastOwnerEntryForThread(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 *v4; // r8
  __int64 *i; // rcx
  __int64 *v7; // rdx

  v4 = (__int64 *)((a3 != 0 ? 0x18 : 0) + a1 + 2024);
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
