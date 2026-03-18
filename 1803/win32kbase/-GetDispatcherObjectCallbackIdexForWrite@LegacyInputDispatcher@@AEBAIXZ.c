/*
 * XREFs of ?GetDispatcherObjectCallbackIdexForWrite@LegacyInputDispatcher@@AEBAIXZ @ 0x1C0122950
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C01243F0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0030A3C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::GetDispatcherObjectCallbackIdexForWrite(
        LegacyInputDispatcher *this,
        __int64 a2)
{
  unsigned int v2; // edi

  v2 = 0;
  if ( !*((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_DWORD *)this + 13) >= *((_DWORD *)this + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
    return (unsigned int)(*((_DWORD *)this + 13) - *((_DWORD *)this + 10));
  return v2;
}
