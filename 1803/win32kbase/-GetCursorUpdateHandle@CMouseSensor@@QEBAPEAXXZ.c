/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0131880
 * Callers:
 *     GetCursorUpdateHandle @ 0x1C012E30C (GetCursorUpdateHandle.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     LockProcessByClientId @ 0x1C00BC244 (LockProcessByClientId.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C01228A4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  HANDLE v9; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  HANDLE SourceProcessHandle; // [rsp+60h] [rbp+20h] BYREF
  void *TargetHandle; // [rsp+68h] [rbp+28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = (void *)*((int *)this + 270);
  TargetHandle = (void *)-1LL;
  SourceProcessHandle = (HANDLE)-1LL;
  if ( LockProcessByClientId(v6, (PEPROCESS *)&Object) >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, 0LL, 0, &SourceProcessHandle);
    v8 = (__int64)SourceProcessHandle;
    if ( v7 < 0 )
      v8 = -1LL;
    SourceProcessHandle = (HANDLE)v8;
    ObfDereferenceObject(Object);
  }
  v9 = SourceProcessHandle;
  if ( SourceProcessHandle != (HANDLE)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 13LL, 0);
    if ( DispatcherHandleByName )
    {
      v11 = ZwDuplicateObject(v9, DispatcherHandleByName, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0x100000u, 0, 2u);
      v12 = (__int64)TargetHandle;
      if ( v11 < 0 )
        v12 = -1LL;
      TargetHandle = (void *)v12;
    }
    ZwClose(v9);
  }
  return TargetHandle;
}
