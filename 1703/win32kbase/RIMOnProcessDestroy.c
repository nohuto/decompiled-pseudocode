/*
 * XREFs of RIMOnProcessDestroy @ 0x1C0051800
 * Callers:
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMOnProcessDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rax

  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( i[1].Flink == a1 )
      BYTE1(i[-1].Blink) = 1;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return RIMUnregisterCurrentProcessForInput();
}
