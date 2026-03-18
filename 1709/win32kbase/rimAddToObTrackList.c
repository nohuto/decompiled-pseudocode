/*
 * XREFs of rimAddToObTrackList @ 0x1C001AF9C
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1C000D72C (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C0095308 (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0107CA4 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  int v2; // eax
  bool v3; // zf
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY **v5; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == 1 )
  {
    Blink = gObRimList.Blink;
    v7 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink != &gObRimList )
      __fastfail(3u);
    v7->Flink = &gObRimList;
    *(_QWORD *)(a1 + 24) = Blink;
    Blink->Flink = v7;
    gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
  }
  else
  {
    v3 = v2 == 2;
    v4 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( v3 )
    {
      v5 = (struct _LIST_ENTRY **)qword_1C0193668;
      if ( *(__int64 **)qword_1C0193668 != &gObRimDevList )
        __fastfail(3u);
      v4->Flink = (struct _LIST_ENTRY *)&gObRimDevList;
      *(_QWORD *)(a1 + 24) = v5;
      *v5 = v4;
      qword_1C0193668 = a1 + 16;
    }
    else
    {
      v8 = gObRimInputObserverList.Blink;
      if ( gObRimInputObserverList.Blink->Flink != &gObRimInputObserverList )
        __fastfail(3u);
      v4->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v8;
      v8->Flink = v4;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
