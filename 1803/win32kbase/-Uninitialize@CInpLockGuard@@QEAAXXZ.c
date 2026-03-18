/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0124DC4
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C012D7E4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::Uninitialize(CInpLockGuard *this, __int64 a2)
{
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_DWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteResourceLite(*(PERESOURCE *)this);
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
