/*
 * XREFs of NtDeleteKey @ 0x1404CF43C
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406F51A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // si
  __int64 v3; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // r8
  BOOLEAN v6; // r14
  __int64 v7; // rcx
  int v8; // edi
  void *v9; // r8
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  GUID *p_TransactionId; // r8
  int v18; // esi
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  int v21; // [rsp+48h] [rbp-41h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v22; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-19h] BYREF
  LARGE_INTEGER v26[3]; // [rsp+90h] [rbp+7h] BYREF
  GUID TransactionId; // [rsp+A8h] [rbp+1Fh] BYREF

  v21 = 0;
  v2 = 0;
  memset(v25, 0, sizeof(v25));
  v3 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v26, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v6 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = -1073741431;
    goto LABEL_49;
  }
  v8 = CmObReferenceObjectByHandle(KeyHandle, 0x10000u, v5, KeGetCurrentThread()->PreviousMode, &Object, &v22);
  if ( v8 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v21) )
  {
    v8 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v9, KeGetCurrentThread()->PreviousMode, &Object, &v22);
    if ( v8 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      ObfDereferenceObject(Object);
      v8 = -1073741790;
    }
    v2 = 1;
  }
  v23[1] = v23;
  v23[0] = v23;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  if ( v8 >= 0 )
  {
    v11 = Object;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v25[0] = v11;
        LOBYTE(v12) = 1;
        v8 = CmpCallCallBacksEx(0, (unsigned int)v25, 0, v12, 15, (__int64)v11, (__int64)v23);
        if ( v8 < 0 )
        {
          ObfDereferenceObject(v11);
          if ( v8 == -1073740541 )
            v8 = 0;
          goto LABEL_48;
        }
      }
    }
    if ( CmpTraceRoutine && v11 )
      v3 = v11[1];
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v11[1] == *((_QWORD *)ExpControlKey + 1)
      || qword_140344A18 && v11[1] == *((_QWORD *)qword_140344A18 + 1) )
    {
      ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
      v8 = 0;
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
      v14 = v11[1];
      if ( (*(_DWORD *)(v14 + 4) & 0x80u) != 0
        || (v15 = *(_QWORD *)(v14 + 64)) != 0 && (*(_DWORD *)(v15 + 4) & 0x80u) != 0 )
      {
        v8 = -1073741790;
      }
      else
      {
        if ( v2 )
        {
          LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
          v16 = CmKeyBodyRemapToVirtual(&Object, v13, 0x10000LL);
          v11 = Object;
          v8 = v16;
          if ( v16 < 0 )
            goto LABEL_47;
          if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 176LL) & 0x1000000) == 0 )
            v8 = -1073741790;
        }
        if ( v8 < 0 )
          goto LABEL_47;
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v11 = Object;
        v6 = 0;
        v8 = CmDeleteKey(Object);
      }
      if ( v8 >= 0 && (v22.HandleAttributes & 4) != 0 )
      {
        if ( v11[7] || v11[8] )
        {
          CmpLockRegistry(v14);
          v18 = CmpTransSearchAddTransFromKeyBody((__int64)v11, &v24);
          if ( v18 >= 0 )
            TransactionId = *(GUID *)(v24 + 88);
          CmpUnlockRegistry();
          if ( v18 < 0 )
            goto LABEL_47;
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v11, KeyHandle, p_TransactionId);
      }
    }
LABEL_47:
    v8 = CmPostCallbackNotificationEx(15, (__int64)v11, v8, (__int64)v25, 0LL, v23);
    ObfDereferenceObject(v11);
  }
LABEL_48:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_49:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 12;
    CmpTraceRoutine(v7, v26, (unsigned int)v8, 0LL, v3, 0LL);
  }
  if ( v6 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v8;
}
