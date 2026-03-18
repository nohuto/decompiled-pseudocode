/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x1406FA220
 * Callers:
 *     TtmCleanupCurrentSession @ 0x14070F158 (TtmCleanupCurrentSession.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x140241124 (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( !Handle || *((_DWORD *)Handle + 4) != 1952797520 )
    return -1073741811;
  ExAcquireFastMutex(&PopSettingLock);
  if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
  {
    v1 = -1073741811;
    goto LABEL_16;
  }
  if ( *((_QWORD *)Handle + 3) )
  {
    if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
    {
      *((_BYTE *)Handle + 32) = 1;
      goto LABEL_16;
    }
    *((_BYTE *)Handle + 33) = 1;
    while ( *((_QWORD *)Handle + 3) )
    {
      KeReleaseGuardedMutex(&PopSettingLock);
      KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
      KeResetEvent(&PopPowerSettingCallbackReturned);
      ExAcquireFastMutex(&PopSettingLock);
    }
    *((_BYTE *)Handle + 33) = 0;
  }
  PopUnregisterPowerSettingCallback(Handle);
LABEL_16:
  KeReleaseGuardedMutex(&PopSettingLock);
  return v1;
}
