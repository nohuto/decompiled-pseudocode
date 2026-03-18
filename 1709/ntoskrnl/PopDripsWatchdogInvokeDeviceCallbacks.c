/*
 * XREFs of PopDripsWatchdogInvokeDeviceCallbacks @ 0x14070A844
 * Callers:
 *     PopDripsCallbackTakeAction @ 0x14070A6BC (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     PopFxInvokeDripsWatchdogCallback @ 0x1406F8690 (PopFxInvokeDripsWatchdogCallback.c)
 */

char __fastcall PopDripsWatchdogInvokeDeviceCallbacks(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 i; // rbx

  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a2;
      for ( i = *a2; !PopFxInvokeDripsWatchdogCallback(i, v8, a4) && *(_QWORD *)(i + 80) != a1; i = *(_QWORD *)(i + 16) )
        ;
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  return PopFxInvokeDripsWatchdogCallback(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48), a4);
}
