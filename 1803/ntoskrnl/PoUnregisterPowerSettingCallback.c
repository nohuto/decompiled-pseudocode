/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x1405E8D90
 * Callers:
 *     TtmCleanupCurrentSession @ 0x14077292C (TtmCleanupCurrentSession.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x14014D33C (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( Handle && *((_DWORD *)Handle + 4) == 1952797520 )
  {
    ExAcquireFastMutex(&PopSettingLock);
    if ( *((_BYTE *)Handle + 33) || *((_BYTE *)Handle + 32) || *(PVOID *)Handle == Handle )
    {
      v1 = -1073741811;
    }
    else
    {
      if ( *((_QWORD *)Handle + 3) )
      {
        if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
        {
          *((_BYTE *)Handle + 32) = 1;
          goto LABEL_8;
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
    }
LABEL_8:
    KeReleaseGuardedMutex(&PopSettingLock);
    return v1;
  }
  return -1073741811;
}
