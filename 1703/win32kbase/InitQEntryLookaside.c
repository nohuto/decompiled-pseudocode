/*
 * XREFs of InitQEntryLookaside @ 0x1C01D7438
 * Callers:
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C0075E30 (Win32AllocPagedLookasideList.c)
 */

__int64 InitQEntryLookaside()
{
  QEntryLookaside = Win32AllocPagedLookasideList(160LL, 0x616C7355u, 0x6D717355u, 0x10u);
  if ( !QEntryLookaside )
    return 3221225495LL;
  QLookaside = (void *)Win32AllocPagedLookasideList(440LL, 0x616C7355u, 0x75717355u, 0x10u);
  return QLookaside == 0LL ? 0xC0000017 : 0;
}
