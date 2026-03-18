/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0030A3C
 * Callers:
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C0030A68 (-Dispatch@LegacyInputDispatcher@@QEBAJJ@Z.c)
 *     ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0122950 (-GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C0123C30 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C01243F0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(LegacyInputDispatcher *this)
{
  unsigned int v1; // eax
  unsigned int v3; // edx

  v1 = *((_DWORD *)this + 10);
  v3 = v1;
  if ( v1 >= *((_DWORD *)this + 13) && v1 != 64 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v1);
    v3 = *((_DWORD *)this + 10);
  }
  return v3 != 64;
}
