/*
 * XREFs of NtDeleteKey @ 0x14047207C
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14072CC00 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

NTSTATUS __stdcall NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // si
  __int64 v3; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r8d
  int v6; // r9d
  BOOLEAN v7; // r14
  __int64 v8; // rcx
  NTSTATUS v9; // edi
  int v10; // r8d
  int v11; // r9d
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  GUID *p_TransactionId; // r8
  int v20; // esi
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v27[4]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v28[3]; // [rsp+90h] [rbp+7h] BYREF
  GUID TransactionId; // [rsp+A8h] [rbp+1Fh] BYREF

  v23 = 0;
  v2 = 0;
  memset(v27, 0, sizeof(v27));
  v3 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v28, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v7 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = -1073741431;
    goto LABEL_49;
  }
  LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
  v9 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v5, v6, (__int64)&Object, (__int64)v24);
  if ( v9 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v23) )
  {
    LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
    v9 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v10, v11, (__int64)&Object, (__int64)v24);
    if ( v9 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      ObfDereferenceObject(Object);
      v9 = -1073741790;
    }
    v2 = 1;
  }
  v25[1] = v25;
  v25[0] = v25;
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  if ( v9 >= 0 )
  {
    v13 = Object;
    if ( CmpCallBackCount )
    {
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v27[0] = v13;
        LOBYTE(v14) = 1;
        v9 = CmpCallCallBacksEx(0, (unsigned int)v27, 0, v14, 15, (__int64)v13, (__int64)v25);
        if ( v9 < 0 )
        {
          ObfDereferenceObject(v13);
          if ( v9 == -1073740541 )
            v9 = 0;
          goto LABEL_48;
        }
      }
    }
    if ( CmpTraceRoutine && v13 )
      v3 = v13[1];
    ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey && v13[1] == *((_QWORD *)ExpControlKey + 1)
      || qword_14035E518 && v13[1] == *((_QWORD *)qword_14035E518 + 1) )
    {
      ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
      v9 = 0;
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
      v16 = v13[1];
      if ( (*(_DWORD *)(v16 + 4) & 0x80u) != 0
        || (v17 = *(_QWORD *)(v16 + 64)) != 0 && (*(_DWORD *)(v17 + 4) & 0x80u) != 0 )
      {
        v9 = -1073741790;
      }
      else
      {
        if ( v2 )
        {
          LOBYTE(v15) = KeGetCurrentThread()->PreviousMode;
          v18 = CmKeyBodyRemapToVirtual(&Object, v15, 0x10000LL);
          v13 = Object;
          v9 = v18;
          if ( v18 < 0 )
            goto LABEL_47;
          if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 176LL) & 0x1000000) == 0 )
            v9 = -1073741790;
        }
        if ( v9 < 0 )
          goto LABEL_47;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v13 = Object;
        v7 = 0;
        v9 = CmDeleteKey(Object);
      }
      if ( v9 >= 0 && (v24[0] & 4) != 0 )
      {
        if ( v13[7] || v13[8] )
        {
          CmpLockRegistry();
          v20 = CmpTransSearchAddTransFromKeyBody(v13, &v26);
          if ( v20 >= 0 )
            TransactionId = *(GUID *)(v26 + 88);
          CmpUnlockRegistry();
          if ( v20 < 0 )
            goto LABEL_47;
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v13, KeyHandle, p_TransactionId);
      }
    }
LABEL_47:
    v9 = CmPostCallbackNotificationEx(15, (_DWORD)v13, v9, (unsigned int)v27, 0LL, (__int64)v25);
    ObfDereferenceObject(v13);
  }
LABEL_48:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_49:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 12;
    CmpTraceRoutine(v8, v28, (unsigned int)v9, 0LL, v3, 0LL);
  }
  if ( v7 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v9;
}
