/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C0123C30
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0030A3C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
  {
    v3 = *((unsigned int *)this + 10);
    v4 = *((_DWORD *)this + 13) - v3;
    if ( !v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      v3 = *((unsigned int *)this + 10);
    }
    memset((void *)(*((_QWORD *)this + 1) + 8 * v3), 0, 8LL * v4);
    memset(*((void **)this + 4), 0, 16LL * v4);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
