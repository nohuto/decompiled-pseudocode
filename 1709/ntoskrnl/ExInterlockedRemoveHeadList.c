/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x1401080C0
 * Callers:
 *     WheapWorkQueueWorkerRoutine @ 0x14028A360 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x140567CD0 (WmipEventNotification.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *v2; // rsi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v7; // rax
  __int16 v8; // [rsp+30h] [rbp-8h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v9 = 0;
  _disable();
  while ( _interlockedbittestandset64((volatile signed __int32 *)Lock, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v9);
    while ( *Lock );
    _disable();
  }
  Flink = ListHead->Flink;
  if ( ListHead->Flink != ListHead )
  {
    v2 = ListHead->Flink;
    if ( Flink->Blink != ListHead || (v7 = Flink->Flink, v7->Blink != v2) )
      __fastfail(3u);
    ListHead->Flink = v7;
    v7->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( (v8 & 0x200) != 0 )
    _enable();
  return v2;
}
