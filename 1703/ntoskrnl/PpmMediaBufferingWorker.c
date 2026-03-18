/*
 * XREFs of PpmMediaBufferingWorker @ 0x140130970
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x1406D5C2C (PpmPdcNotifyMediaBufferingUpdate.c)
 */

__int64 PpmMediaBufferingWorker()
{
  bool v0; // di
  KIRQL v1; // al
  char v2; // bl
  KIRQL v3; // si
  REGHANDLE v4; // rsi
  __int64 v5; // rcx
  __int64 result; // rax
  BOOL v7; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  while ( 1 )
  {
    v0 = 1;
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v2 = byte_14034C129;
    v3 = v1;
    if ( byte_14034C129 == byte_14034BB6C )
      break;
    byte_14034BB6C = byte_14034C129;
    KxReleaseSpinLock(&PpmMediaBufferingWork);
    __writecr8(v3);
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v7 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v7;
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
  byte_14034C128 = 0;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  result = v3;
  __writecr8(v3);
  return result;
}
