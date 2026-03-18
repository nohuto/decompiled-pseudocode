/*
 * XREFs of RIMSetTestModeStatus @ 0x1C00FF200
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C00FFE60 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
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
            RIMEndAllActiveContacts(&i[-1], j[29].Blink, 0LL);
        }
        i[43].Flink = 0LL;
        ExReleasePushLockExclusiveEx(&i[42].Blink, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
