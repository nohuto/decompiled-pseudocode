/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00FF520
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C01002E0 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *j; // rdi

  RIMLockExclusive((__int64)&gObListLock);
  gbTestModeOn = a1;
  if ( !a1 )
  {
    for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
    {
      if ( (HIDWORD(i[3].Blink) & 0x14) != 0 )
      {
        RIMLockExclusive((__int64)&i[42].Blink);
        for ( j = i[33].Blink; j; j = j[2].Blink )
        {
          if ( ((__int64)j[11].Blink & 0x1000) != 0 )
            RIMEndAllActiveContacts((__int64)&i[-1], (__int64)j[29].Blink, 0LL);
        }
        i[43].Flink = 0LL;
        ExReleasePushLockExclusiveEx(&i[42].Blink, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
