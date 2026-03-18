/*
 * XREFs of PpmMediaBufferingWorker @ 0x140144040
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x14076EE78 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

void PpmMediaBufferingWorker()
{
  bool v0; // di
  KIRQL v1; // al
  char v2; // bl
  unsigned __int64 v3; // rsi
  REGHANDLE v4; // rsi
  __int64 v5; // rcx
  BOOL v6; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  while ( 1 )
  {
    v0 = 1;
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v2 = byte_1403AB289;
    v3 = v1;
    if ( byte_1403AB289 == byte_1403AAA6C )
      break;
    byte_1403AAA6C = byte_1403AB289;
    KxReleaseSpinLock(&PpmMediaBufferingWork);
    __writecr8(v3);
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v6 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v6;
        EtwWriteEx(v4, &PPM_ETW_MEDIA_BUFFERING_NOTIFY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( !PpmLowPowerProfile )
    {
      if ( v2 )
        v0 = 0;
      else
        v0 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v0 )
    {
      LOBYTE(v5) = v2;
      PpmPdcMediaEngaged = v2;
      PpmPdcNotifyMediaBufferingUpdate(v5);
    }
  }
  byte_1403AB288 = 0;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  __writecr8(v3);
}
