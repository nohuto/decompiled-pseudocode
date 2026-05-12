/*
 * XREFs of StorpInitializeTimer @ 0x1C001B900
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeTimer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  char *Pool; // rax
  char *v6; // rsi

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 69LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v4 = **(_QWORD **)(a1 - 16);
    if ( v4 && !*(_DWORD *)v4 )
    {
      Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0xA0uLL, 0x54416152u, *(_QWORD *)(v4 + 8));
      v6 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0xA0uLL);
        *(_QWORD *)v6 = v4;
        KeInitializeTimer((PKTIMER)(v6 + 8));
        KeInitializeDpc((PRKDPC)(v6 + 72), (PKDEFERRED_ROUTINE)StorportTimerDpc, v6);
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 4208));
        *a2 = v6;
      }
      else
      {
        return (unsigned int)-1056964605;
      }
      return v2;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 71LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a1);
    }
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 70LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
  }
  return 3238002696LL;
}
