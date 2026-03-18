/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C0123244
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0123400 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2)
{
  unsigned int v2; // ebx
  struct DEVICEINFO *i; // rax

  v2 = 0;
  if ( (struct _KTHREAD *)qword_1C01A1658 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((void **)i + 3) == a2 )
    {
      v2 = -__CFSHR__(*((_DWORD *)i + 46), 13);
      break;
    }
  }
  qword_1C01A1658 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
