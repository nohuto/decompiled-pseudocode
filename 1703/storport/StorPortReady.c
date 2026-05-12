/*
 * XREFs of StorPortReady @ 0x1C00331C0
 * Callers:
 *     StorPortReadyVrfy @ 0x1C0067620 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000D0E0 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY v2; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = **(union _SLIST_HEADER ***)(a1 - 16);
  if ( (qword_1C00551F8 & 0x200) != 0 )
    DbgLogRequest((__int64)v1, 19, retaddr, **(_QWORD **)(a1 - 16), 0LL, 0LL, 0LL);
  if ( v1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x16u,
        (__int64)&WPP_b8c4fabb6c503934ded1881555415092_Traceguids,
        v1);
    }
    v2 = ExpInterlockedPopEntrySList(v1 + 73);
    if ( v2 )
    {
      LODWORD(v2[1].Next) = 134684674;
      LODWORD(v2[2].Next) = 8;
      RaidQueueDeferredItem((__int64)&v1[68], v2);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00551F8 & 0x800) != 0 )
      DbgLogRequest((__int64)v1, 22, retaddr, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
