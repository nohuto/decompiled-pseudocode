/*
 * XREFs of StorPortPauseDevice @ 0x1C0001C50
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C006B690 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     RaidPauseUnitQueue @ 0x1C0001F3C (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 *     McTemplateK0pqqccc @ 0x1C0032C58 (McTemplateK0pqqccc.c)
 */

char __fastcall StorPortPauseDevice(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 Unit; // rax
  __int64 v12; // rbp
  _DWORD *v13; // rdi
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v16; // [rsp+90h] [rbp+8h]

  v8 = a1;
  v9 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(
      **(_QWORD **)(a1 - 16),
      16,
      (_DWORD)retaddr,
      v9,
      a5,
      a4 | (unsigned __int64)((a3 | (a2 << 8)) << 8),
      0LL);
  v10 = 255;
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
    McTemplateK0pqqccc(v10, a2, a3, v8, a5, v10, a2, a3, a4);
  if ( v9 )
  {
    LOBYTE(v16) = a2;
    BYTE1(v16) = a3;
    BYTE2(v16) = a4;
    Unit = RaidAdapterFindUnit(v9, v16);
    v12 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 1864);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids,
          a2,
          a3,
          a4);
      }
      v13 = (_DWORD *)(v12 + 1040);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 1056), 134684676, 134684677) != 134684677 )
        v13 = 0LL;
      if ( v13 )
      {
        v13[8] = 5;
        v13[9] = v16;
        v13[10] = a5;
        RaidPauseUnitQueue(v12);
        RaidQueueDeferredItem((PVOID)(v9 + 1088));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0056210 & 0x800) != 0 )
        DbgLogRequest(v9, 22, (_DWORD)retaddr, 530, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_ddd(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a2, a3, a4);
    }
  }
  return 0;
}
