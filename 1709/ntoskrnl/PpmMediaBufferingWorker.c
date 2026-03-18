/*
 * XREFs of PpmMediaBufferingWorker @ 0x14000D2B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x14070B9A0 (PpmPdcNotifyMediaBufferingUpdate.c)
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
    v2 = byte_140366AC9;
    v3 = v1;
    if ( byte_140366AC9 == byte_1403661EC )
      break;
    byte_1403661EC = byte_140366AC9;
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
    PpmAcquireLock(&PpmPerfPolicyLock);
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
  byte_140366AC8 = 0;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  result = v3;
  __writecr8(v3);
  return result;
}
