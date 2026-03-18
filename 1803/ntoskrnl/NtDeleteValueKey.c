/*
 * XREFs of NtDeleteValueKey @ 0x14049ACA0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x1400BCF08 (CmDoVirtualTest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1404A4878 (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v3; // r14
  __int64 v4; // r13
  char PreviousMode; // r12
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rdx
  int v11; // eax
  wchar_t *Buffer; // rcx
  unsigned __int16 v13; // bx
  char *v14; // rsi
  __int64 v15; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v17; // r15
  char v18; // r14
  char *i; // rcx
  struct _KTHREAD *v20; // rax
  int v21; // r9d
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  NTSTATUS v26; // ebx
  void **v27; // rcx
  char v28; // [rsp+40h] [rbp-128h]
  NTSTATUS v29; // [rsp+44h] [rbp-124h]
  BOOLEAN v30; // [rsp+4Ah] [rbp-11Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-118h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-108h] BYREF
  int v33; // [rsp+70h] [rbp-F8h] BYREF
  HANDLE v34; // [rsp+78h] [rbp-F0h]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-E8h]
  __int64 v36; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+90h] [rbp-D8h]
  _QWORD v38[3]; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v42[5]; // [rsp+F0h] [rbp-78h] BYREF
  LARGE_INTEGER v43[4]; // [rsp+118h] [rbp-50h] BYREF

  v34 = KeyHandle;
  memset(v42, 0, sizeof(v42));
  Src[0] = 0LL;
  Src[1] = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v33 = 0;
  memset(v43, 0, sizeof(v43));
  v4 = 0LL;
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v43, 0x20000u);
  v28 = 0;
  Object[0] = 0LL;
  v38[1] = v38;
  v38[0] = v38;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26 = -1073741431;
LABEL_53:
    v29 = v26;
    goto LABEL_54;
  }
  LOBYTE(v9) = PreviousMode;
  v26 = CmObReferenceObjectByHandle((_DWORD)v34, 2, v8, v9, (__int64)Object, (__int64)&v36);
  v29 = v26;
  if ( v26 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v33) )
      goto LABEL_52;
    LOBYTE(v25) = PreviousMode;
    v26 = CmObReferenceObjectByHandle((_DWORD)v34, 131097, v24, v25, (__int64)Object, (__int64)&v36);
    v29 = v26;
    if ( v26 < 0 )
      goto LABEL_54;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
    {
LABEL_52:
      v26 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v26 < 0 )
  {
LABEL_54:
    v17 = 0;
    v18 = 0;
    goto LABEL_36;
  }
  if ( CmpTraceRoutine && Object[0] )
  {
    v4 = *((_QWORD *)Object[0] + 1);
    v37 = v4;
  }
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)&ValueName->Length;
    LODWORD(v39) = v11;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v39 + 1) = Buffer;
    *(_OWORD *)Src = v39;
    if ( (_WORD)v11 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)Buffer + (unsigned __int16)v11;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v13 = (unsigned __int16)Src[0];
  v14 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v14;
  WORD1(Src[0]) = Src[0];
  if ( v14 && (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)PreviousMode, v14) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v15, v13, 0x62634D43u);
    v14 = (char *)TransientPoolWithQuotaTag;
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v26 = -1073741670;
      v29 = -1073741670;
      v6 = v3;
      v17 = 0;
      v18 = 0;
      goto LABEL_36;
    }
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v14;
    v13 = (unsigned __int16)Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v26 = -1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 4LL) & 0x80u) == 0 )
    {
      for ( i = &v14[2 * ((unsigned __int64)v13 >> 1) - 2]; v13 && !*(_WORD *)i; i -= 2 )
      {
        v13 -= 2;
        LOWORD(Src[0]) = v13;
      }
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v17 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v42[0] = Object[0];
        v42[1] = Src;
        LOBYTE(v21) = 1;
        v26 = CmpCallCallBacksEx(2, (unsigned int)v42, 0, v21, 17, (__int64)Object[0], (__int64)v38);
        if ( v26 < 0 )
        {
          if ( v26 == -1073740541 )
            v26 = 0;
          goto LABEL_68;
        }
        v28 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v10) = PreviousMode;
      v26 = CmKeyBodyRemapToVirtual((unsigned int)Object, v10, 2, (unsigned int)&SubjectContext, (__int64)&v33);
      v29 = v26;
      v6 = v3;
      if ( v26 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 176LL) & 0x1000000) != 0 )
      {
LABEL_33:
        v41 = *(_OWORD *)Src;
        v22 = (unsigned int)v36 >> 2;
        LOBYTE(v22) = (v36 & 4) != 0;
        v26 = CmDeleteValueKey(Object[0], &v41, v34, v22);
        v29 = v26;
LABEL_34:
        v6 = v3;
LABEL_35:
        v18 = v28;
        goto LABEL_36;
      }
      v26 = -1073741790;
LABEL_68:
      v29 = v26;
      goto LABEL_34;
    }
    v26 = -1073741790;
  }
  v29 = v26;
  v6 = v3;
  v17 = 0;
  v18 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v26 = CmPostCallbackNotificationEx(17, Object[0], v26, (unsigned int)v42, 0LL, (__int64)v38);
    v29 = v26;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26 = v29;
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( CmpTraceRoutine )
  {
    v27 = Src;
    LOBYTE(v27) = 15;
    CmpTraceRoutine(v27, v43, (unsigned int)v26, 0LL, v4, Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v30 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v29;
  }
  return v26;
}
