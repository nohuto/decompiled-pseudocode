/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C0101CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_x @ 0x1C0103958 (WPP_RECORDER_SF_x.c)
 */

struct _LIST_ENTRY *RIMGetLastInvertedPenTime()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v2; // rcx
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v7; // [rsp+20h] [rbp-18h]

  Flink = 0LL;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    140,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v2 = i - 1;
    if ( i != (struct _LIST_ENTRY *)16 && (HIDWORD(v2[4].Blink) & 4) != 0 && v2[46].Flink > Flink )
      Flink = v2[46].Flink;
  }
  qword_1C018EC88 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v7, (char)Flink);
  return Flink;
}
