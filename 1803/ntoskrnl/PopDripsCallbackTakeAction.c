/*
 * XREFs of PopDripsCallbackTakeAction @ 0x14076DE64
 * Callers:
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140274C18 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDeviceConstraintsEnforced @ 0x140281FE4 (PopDeviceConstraintsEnforced.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14075F754 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsNotify @ 0x140761720 (PopDirectedDripsNotify.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14076DF20 (PopDripsWatchdogInvokeDeviceCallbacks.c)
 */

void __fastcall PopDripsCallbackTakeAction(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 v5; // r10
  _QWORD *v6; // rbx
  int v7; // edi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 0x80u) != 0
    && ((byte_1403CDA6C & 1) == 0 || (a2 & 0x101) != 0)
    && PopDeviceConstraintsEnforced()
    && (int)PopFxBuildDripsBlockingDeviceList(v5, v8) >= 0 )
  {
    v6 = (_QWORD *)v8[0];
    if ( (_QWORD *)v8[0] != v8 )
    {
      v7 = a2 & 0x100;
      if ( v7 )
      {
        PopDirectedDripsNotify(0, 0LL);
        v6 = (_QWORD *)v8[0];
      }
      while ( v6 != v8 )
      {
        PopDripsWatchdogInvokeDeviceCallbacks(v6 - 94, a3);
        v6 = (_QWORD *)*v6;
      }
      if ( v7 )
        PopDirectedDripsNotify(1, 0LL);
    }
    PopFxDestroyDripsBlockingDeviceList(v8);
  }
}
