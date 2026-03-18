/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C01024D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_x @ 0x1C01039D8 (WPP_RECORDER_SF_x.c)
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
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x91u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v2 = i - 1;
    if ( i != (struct _LIST_ENTRY *)16 && (HIDWORD(v2[4].Blink) & 4) != 0 && v2[46].Flink > Flink )
      Flink = v2[46].Flink;
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v7, (char)Flink);
  return Flink;
}
