/*
 * XREFs of NtRenameKey @ 0x1406EC3E0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmDoVirtualTest @ 0x1400BCF08 (CmDoVirtualTest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1404A4878 (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // si
  KPROCESSOR_MODE PreviousMode; // r12
  char v5; // r13
  char v6; // r15
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // bx
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rcx
  void *v16; // r8
  unsigned int v17; // ecx
  void *v18; // rsi
  void *v19; // r8
  struct _KTHREAD *v20; // rax
  int v21; // eax
  _QWORD *v22; // rbx
  int v23; // ecx
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  int v26; // ecx
  __int64 v27; // r8
  NTSTATUS v29; // [rsp+44h] [rbp-114h]
  BOOLEAN v30; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  int v32; // [rsp+58h] [rbp-100h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-F8h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-E8h]
  _SLIST_ENTRY v35; // [rsp+78h] [rbp-E0h] BYREF
  HANDLE v36; // [rsp+88h] [rbp-D0h]
  __int128 v37; // [rsp+90h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v40[5]; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v41[48]; // [rsp+F8h] [rbp-60h] BYREF

  v36 = KeyHandle;
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  v6 = 0;
  memset(v40, 0, sizeof(v40));
  *((_QWORD *)&v35.Next + 1) = &v35;
  v35.Next = &v35;
  v32 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v30 )
  {
    if ( PreviousMode == 1 )
    {
      if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
        NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)&NewName->Length;
      LODWORD(v37) = v10;
      Buffer = NewName->Buffer;
      *((_QWORD *)&v37 + 1) = Buffer;
      *(_OWORD *)Src = v37;
      if ( (_WORD)v10 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      *(UNICODE_STRING *)Src = *NewName;
    }
    v13 = (unsigned __int16)Src[0];
    if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu || ((__int64)Src[0] & 1) != 0 )
    {
      v9 = -1073741811;
      v29 = -1073741811;
      v6 = 0;
      goto LABEL_52;
    }
    v14 = (PPRIVILEGE_SET)Src[1];
    if ( CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)Src[1]) )
    {
      Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, LOWORD(Src[0]), 0x426E4D43u);
      if ( !Privileges )
      {
        v9 = -1073741670;
        v29 = -1073741670;
        v3 = 0;
        v6 = 0;
        goto LABEL_52;
      }
      v14 = Privileges;
      memmove(Privileges, Src[1], LOWORD(Src[0]));
      Src[1] = Privileges;
      v13 = (unsigned __int16)Src[0];
      WORD1(Src[0]) = Src[0];
    }
    v17 = 0;
    if ( v13 >> 1 )
    {
      while ( *((_WORD *)&v14->PrivilegeCount + v17) != 92 )
      {
        if ( ++v17 >= v13 >> 1 )
          goto LABEL_23;
      }
      v9 = -1073741811;
      goto LABEL_27;
    }
LABEL_23:
    v18 = v36;
    v9 = CmObReferenceObjectByHandle(v36, 0x20006u, v16, PreviousMode, &Object, 0LL);
    v29 = v9;
    if ( v9 == -1073741790 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 1;
      if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v32) )
        goto LABEL_25;
      v9 = CmObReferenceObjectByHandle(v18, 0x20019u, v19, PreviousMode, &Object, 0LL);
      v29 = v9;
      if ( v9 < 0 )
        goto LABEL_28;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
LABEL_25:
        v9 = -1073741790;
LABEL_27:
        v29 = v9;
LABEL_28:
        v3 = 0;
        v6 = 0;
        goto LABEL_52;
      }
      v6 = 1;
    }
    v7 = v6;
    if ( v9 < 0 )
      goto LABEL_28;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v3 = 0;
    }
    else
    {
      v40[0] = Object;
      v40[1] = Src;
      v21 = CmpCallCallBacksEx(4u, (__int64)v40, 0LL, 1, 0x13u, (__int64)Object, &v35);
      v9 = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          v9 = 0;
        v3 = 0;
        goto LABEL_39;
      }
      v3 = 1;
    }
    CmpLockRegistryExclusive();
    v5 = 1;
    v22 = Object;
    CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
    v23 = *(_DWORD *)(v22[1] + 4LL);
    if ( (v23 & 0x80u) == 0 && (v23 & 0x100) == 0 )
    {
      if ( !v6 )
        goto LABEL_49;
      CmpUnlockRegistry();
      v5 = 0;
      LOBYTE(v24) = PreviousMode;
      v9 = CmKeyBodyReplicateToVirtual(&Object, v24, 131078LL, &SubjectContext, &v32);
      v29 = v9;
      v7 = v6;
      if ( v9 < 0 )
        goto LABEL_40;
      CmpLockRegistryExclusive();
      v5 = 1;
      v25 = Object;
      CmpFlushNotifiesOnKeyBodyList(*((_QWORD *)Object + 1), 0LL, 1);
      v26 = *(_DWORD *)(v25[1] + 4LL);
      if ( (v26 & 0x80u) == 0 && (v26 & 0x100) == 0 )
      {
LABEL_49:
        CmpAttachToRegistryProcess((__int64)v41);
        v39 = *(_OWORD *)Src;
        LOBYTE(v27) = PreviousMode;
        v9 = CmRenameKey(Object, &v39, v27);
        v29 = v9;
        KiUnstackDetachProcess((__int64)v41, 0LL);
        v7 = v6;
        v5 = 1;
        v6 = 1;
        goto LABEL_52;
      }
    }
    v9 = -1073741790;
LABEL_39:
    v7 = v6;
    v29 = v9;
LABEL_40:
    v6 = 1;
    goto LABEL_52;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v9 = -1073741431;
  v29 = -1073741431;
LABEL_52:
  if ( v5 )
    CmpUnlockRegistry();
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v9 = CmPostCallbackNotificationEx(19, (__int64)Object, v9, (__int64)v40, 0LL, &v35);
    v29 = v9;
  }
  if ( v6 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = v29;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v29;
  }
  return v9;
}
