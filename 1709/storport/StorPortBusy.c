/*
 * XREFs of StorPortBusy @ 0x1C0033970
 * Callers:
 *     StorPortBusyVrfy @ 0x1C006B120 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  PSLIST_ENTRY v4; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(v3, 18, retaddr, **(_QWORD **)(a1 - 16), a2, 0LL, 0LL);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 5448);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v6) = a2;
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids,
        v3,
        v6);
    }
    v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v3 + 1168));
    if ( v4 )
    {
      LODWORD(v4[1].Next) = 134684674;
      LODWORD(v4[2].Next) = 7;
      *((_DWORD *)&v4[2].Next + 2) = a2;
      RaidQueueDeferredItem((char *)(v3 + 1088), v4);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v3, 22, retaddr, 1014LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
