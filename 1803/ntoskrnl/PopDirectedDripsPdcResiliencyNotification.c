/*
 * XREFs of PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8
 * Callers:
 *     PopDirectedDripsNotify @ 0x140761720 (PopDirectedDripsNotify.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopQueueDirectedDripsWork @ 0x140278830 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsPdcResiliencyNotification(__int64 a1, char a2)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  signed __int32 v5; // ett

  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    _m_prefetchw(&PopDirectedDripsState);
    v3 = PopDirectedDripsState;
    if ( a2 )
    {
      do
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange(&PopDirectedDripsState, v3 | 0x100, v3);
      }
      while ( v4 != v3 );
      if ( (v3 & 0x100) == 0 )
      {
LABEL_8:
        PopDeepSleepSetDisengageReason(8);
        byte_1403AAFC8 = a2;
        KeResetEvent(&stru_1403AAFE8);
        PopQueueDirectedDripsWork(
          (__int64)&PopDirectedDripsState,
          (-(__int64)(a2 != 0) & 0xFFFFFFEB00000200uLL) + 0x1502020000LL);
        KeWaitForSingleObject(&stru_1403AAFE8, Executive, 0, 0, 0LL);
        PopDeepSleepClearDisengageReason(8);
      }
    }
    else
    {
      do
      {
        v5 = v3;
        v3 = _InterlockedCompareExchange(&PopDirectedDripsState, v3 & 0xFFFFFEFF, v3);
      }
      while ( v5 != v3 );
      if ( (v3 & 0x100) != 0 )
        goto LABEL_8;
    }
  }
  return 0LL;
}
