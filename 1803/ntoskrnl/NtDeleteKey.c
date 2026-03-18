/*
 * XREFs of NtDeleteKey @ 0x14056D9C4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x1400BCF08 (CmDoVirtualTest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140790EB0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // r14
  __int64 v3; // rbx
  char v4; // r12
  char v5; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // r8
  __int64 v9; // rcx
  int v10; // edi
  void *v11; // r8
  _QWORD *v12; // rbx
  int v13; // eax
  struct _KTHREAD *v14; // rax
  int v15; // r9d
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  GUID *v20; // r8
  BOOLEAN v22; // [rsp+48h] [rbp-89h]
  PVOID Object; // [rsp+50h] [rbp-81h] BYREF
  int v24; // [rsp+58h] [rbp-79h] BYREF
  __int64 v25; // [rsp+60h] [rbp-71h]
  struct _OBJECT_HANDLE_INFORMATION v26; // [rsp+68h] [rbp-69h] BYREF
  __int64 v27; // [rsp+70h] [rbp-61h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v30[4]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v31; // [rsp+D0h] [rbp-1h] BYREF
  LARGE_INTEGER v32[4]; // [rsp+E0h] [rbp+Fh] BYREF

  v24 = 0;
  v2 = 0;
  memset(v30, 0, sizeof(v30));
  memset(v32, 0, sizeof(v32));
  v3 = 0LL;
  v25 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v32, 0x20000u);
  Object = 0LL;
  v4 = 0;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28[1] = v28;
  v28[0] = v28;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v22 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v22 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
    goto LABEL_56;
  }
  v10 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v8, PreviousMode, &Object, &v26);
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v24) )
    {
      v10 = -1073741790;
      v12 = Object;
LABEL_48:
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_49;
    }
    v13 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v11, PreviousMode, &Object, &v26);
    v12 = Object;
    v10 = v13;
    if ( v13 < 0 )
      goto LABEL_48;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v10 = -1073741790;
      goto LABEL_48;
    }
    v2 = 1;
  }
  else
  {
    v12 = Object;
  }
  if ( v10 >= 0 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v12 = Object;
    v10 = 0;
    v5 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v30[0] = v12;
      LOBYTE(v15) = 1;
      v16 = CmpCallCallBacksEx(0, (unsigned int)v30, 0, v15, 15, (__int64)v12, (__int64)v28);
      v10 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073740541 )
          v10 = 0;
        goto LABEL_47;
      }
      v4 = 1;
      v10 = 0;
    }
    if ( CmpTraceRoutine && v12 )
      v25 = v12[1];
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v12[1] == *((_QWORD *)ExpControlKey + 1)
      || qword_1403A1B48 && v12[1] == *((_QWORD *)qword_1403A1B48 + 1) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v12 = Object;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v12 = Object;
      v9 = *((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(v9 + 4) & 0x80u) != 0 )
        goto LABEL_46;
      v18 = *(_QWORD *)(v9 + 64);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 4) & 0x80u) != 0 )
          goto LABEL_46;
      }
      if ( !v2 )
        goto LABEL_39;
      LOBYTE(v17) = PreviousMode;
      v19 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v17, 0x10000, (unsigned int)&SubjectContext, (__int64)&v24);
      v12 = Object;
      v10 = v19;
      if ( v19 < 0 )
        goto LABEL_47;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 176LL) & 0x1000000) == 0 )
      {
LABEL_46:
        v10 = -1073741790;
      }
      else
      {
LABEL_39:
        v10 = CmDeleteKey(v12);
        if ( v10 >= 0 && (v26.HandleAttributes & 4) != 0 )
        {
          if ( v12[7] || v12[8] )
          {
            CmpLockRegistry();
            CmpTransSearchAddTransFromKeyBody(v12, &v27);
            v31 = *(_OWORD *)(v27 + 88);
            CmpUnlockRegistry();
            v20 = (GUID *)&v31;
          }
          else
          {
            v20 = 0LL;
          }
          SeDeleteObjectAuditAlarmWithTransaction(v12, KeyHandle, v20);
        }
      }
    }
  }
LABEL_47:
  if ( v2 )
    goto LABEL_48;
LABEL_49:
  if ( v4 )
    v10 = CmPostCallbackNotificationEx(15, (__int64)v12, v10, (__int64)v30, 0LL, v28);
  if ( v5 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = Object;
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  v3 = v25;
LABEL_56:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v9) = 12;
    CmpTraceRoutine(v9, v32, (unsigned int)v10, 0LL, v3, 0LL);
  }
  if ( v22 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v10;
}
