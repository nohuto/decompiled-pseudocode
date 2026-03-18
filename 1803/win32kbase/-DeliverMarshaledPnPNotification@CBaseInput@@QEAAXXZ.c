/*
 * XREFs of ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C01225A4
 * Callers:
 *     ExecuteMarshaledPnpRequest @ 0x1C012DE70 (ExecuteMarshaledPnpRequest.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0120440 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     RimInputTypeToDeviceInputType @ 0x1C012E918 (RimInputTypeToDeviceInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::DeliverMarshaledPnPNotification(CBaseInput *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v12[32]; // [rsp+48h] [rbp-C0h] BYREF

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  RIMLockExclusive((__int64)this + 1064);
  v6 = (_QWORD *)*((_QWORD *)this + 132);
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  v10 = v6;
  ExReleasePushLockExclusiveEx((char *)this + 1064, 0LL);
  KeLeaveCriticalRegion();
  while ( v10 )
  {
    v7 = (__int64)(v10 - 2);
    v8 = *((unsigned int *)this + 34);
    v10 = (_QWORD *)*v10;
    LODWORD(v12[0]) = RimInputTypeToDeviceInputType(v8);
    memset((char *)v12 + 4, 0, 0xF4uLL);
    v9 = *(_DWORD *)(v7 + 8);
    v12[1] = *(_QWORD *)v7;
    LODWORD(v12[2]) = v9;
    Win32FreePool(v7);
    PushW32ThreadLock(&v10, v11, lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_);
    InputExtensibilityCallout::CallUserModeLockFree(
      gpInputExtensibilityCallout,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v12);
    PopW32ThreadLock(v11);
  }
}
