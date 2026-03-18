/*
 * XREFs of NtSetValueKey @ 0x1404A3E60
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x14057A3E4 (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     CmpAddDockingInfo @ 0x1408AECD4 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1408BBA7C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     InitSafeBoot @ 0x1408DD13C (InitSafeBoot.c)
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
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1404A4878 (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  int v7; // edi
  char v8; // r13
  unsigned __int8 v9; // r14
  char v10; // si
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r8d
  BOOLEAN v13; // r15
  unsigned __int16 Length; // di
  wchar_t *v15; // rdx
  ULONG v16; // ebx
  void *v17; // r12
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  __int64 v21; // rcx
  PPRIVILEGE_SET v22; // rsi
  size_t v23; // r8
  wchar_t *v24; // rdi
  char v25; // r13
  char v26; // bl
  struct _KTHREAD *v27; // rax
  int v28; // r9d
  ULONG v29; // esi
  int v30; // r14d
  int v32; // r8d
  int v33; // edi
  bool v34; // zf
  __int64 v35; // rcx
  BOOLEAN v36; // [rsp+40h] [rbp-1A8h]
  char v37; // [rsp+41h] [rbp-1A7h]
  NTSTATUS v38; // [rsp+44h] [rbp-1A4h]
  signed __int8 v39; // [rsp+48h] [rbp-1A0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-198h] BYREF
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *Src; // [rsp+68h] [rbp-180h]
  ULONG v43; // [rsp+70h] [rbp-178h]
  void *v44; // [rsp+78h] [rbp-170h]
  int v45; // [rsp+80h] [rbp-168h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-160h]
  ULONG v47; // [rsp+90h] [rbp-158h]
  _BYTE v48[8]; // [rsp+98h] [rbp-150h] BYREF
  HANDLE v49; // [rsp+A0h] [rbp-148h]
  __int64 v50; // [rsp+A8h] [rbp-140h]
  _QWORD v51[2]; // [rsp+B0h] [rbp-138h] BYREF
  struct _PRIVILEGE_SET *v52; // [rsp+C0h] [rbp-128h]
  __int128 v53; // [rsp+D0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-108h] BYREF
  _QWORD v55[8]; // [rsp+100h] [rbp-E8h] BYREF
  LARGE_INTEGER v56[4]; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v57[64]; // [rsp+160h] [rbp-88h] BYREF

  v43 = Type;
  v47 = TitleIndex;
  v7 = (int)KeyHandle;
  v49 = KeyHandle;
  Src = Data;
  memset(v56, 0, sizeof(v56));
  v50 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v56, 0x20000u);
  Object = 0LL;
  v8 = 0;
  v37 = 0;
  v51[1] = v51;
  v51[0] = v51;
  memset(v55, 0, sizeof(v55));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v44 = 0LL;
  v52 = 0LL;
  v45 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->gap0[10];
  v39 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v36 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v33 = -1073741431;
    v38 = -1073741431;
LABEL_88:
    v25 = 0;
    v26 = 0;
    goto LABEL_70;
  }
  v33 = CmObReferenceObjectByHandle(v7, 2, v12, v9, (__int64)&Object, (__int64)v48);
  v38 = v33;
  if ( v33 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v33 < 0 )
      goto LABEL_88;
    if ( CmpTraceRoutine && Object )
      v50 = *((_QWORD *)Object + 1);
    if ( v9 == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v53) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v53 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v53;
      DestinationString.MaximumLength = v53;
      Length = v53;
      if ( (_WORD)v53 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v53);
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v16 = DataSize;
      v17 = Src;
      if ( !DataSize || (unsigned __int64)Src + DataSize <= 0x7FFFFFFF0000LL && (char *)Src + DataSize >= Src )
      {
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
        {
          v33 = -1073741811;
          v38 = -1073741811;
          v10 = v8;
          v25 = 0;
          v26 = 0;
          goto LABEL_70;
        }
        v18 = Length;
        v19 = (Length + 7) & 0xFFFFFFF8;
        v20 = v19 + v16;
        if ( v19 + v16 < v16 )
        {
          v33 = -1073741811;
          v38 = -1073741811;
          v10 = v8;
          v13 = v36;
          v25 = 0;
          v26 = 0;
          goto LABEL_70;
        }
        if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v39, DestinationString.Buffer)
          || (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v39, v17) )
        {
          if ( v20 )
          {
            if ( v20 <= 0x40 )
              goto LABEL_25;
            if ( v16 <= 0x40 )
            {
              if ( Length <= 0x40u && v16 < Length )
                v18 = v16;
            }
            else
            {
              v18 = v19 + v16;
              if ( Length <= 0x40u )
                v18 = v16;
            }
            if ( v18 )
            {
              Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v21, v18, 0x6E566D43u);
              if ( !Privileges )
              {
                v33 = -1073741670;
                v38 = -1073741670;
                v10 = v37;
                v13 = v36;
                v25 = 0;
                v26 = 0;
                goto LABEL_70;
              }
              Length = DestinationString.Length;
              if ( v18 == v16 )
              {
                v44 = v57;
                v22 = Privileges;
              }
              else
              {
                v44 = Privileges;
                if ( v18 == DestinationString.Length )
                  v22 = (PPRIVILEGE_SET)v57;
                else
                  v22 = (PPRIVILEGE_SET)((char *)Privileges + v19);
              }
            }
            else
            {
LABEL_25:
              v44 = v57;
              v22 = (PPRIVILEGE_SET)&v57[v19];
            }
          }
          else
          {
            v22 = v52;
          }
          if ( Length )
          {
            v23 = Length;
            v24 = (wchar_t *)v44;
            memmove(v44, DestinationString.Buffer, v23);
            DestinationString.Buffer = v24;
            Length = DestinationString.Length;
          }
          else
          {
            DestinationString.Buffer = 0LL;
          }
          if ( v16 )
          {
            memmove(v22, v17, v16);
            Src = v22;
            Length = DestinationString.Length;
          }
          else
          {
            Src = 0LL;
          }
        }
        if ( Length )
        {
          do
          {
            if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
              break;
            v34 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v34 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
        {
          v33 = -1073741790;
          v38 = -1073741790;
          v10 = v37;
          v25 = 0;
          v26 = 0;
          goto LABEL_69;
        }
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v30 = (int)Src;
          v25 = 0;
          v29 = v43;
        }
        else
        {
          v55[0] = Object;
          v55[1] = &DestinationString;
          v55[2] = __PAIR64__(v43, v47);
          v29 = v43;
          v30 = (int)Src;
          v55[3] = Src;
          LODWORD(v55[4]) = v16;
          LOBYTE(v28) = 1;
          v33 = CmpCallCallBacksEx(1, (unsigned int)v55, 0, v28, 16, (__int64)Object, (__int64)v51);
          if ( v33 < 0 )
          {
            if ( v33 == -1073740541 )
              v33 = 0;
            v38 = v33;
            v10 = v37;
            v25 = 0;
            goto LABEL_68;
          }
          v25 = 1;
        }
        if ( v37 )
        {
          v33 = CmKeyBodyReplicateToVirtual(&Object, (unsigned __int8)v39, 2LL, &SubjectContext, &v45);
          v38 = v33;
          v10 = v37;
          if ( v33 < 0 )
            goto LABEL_68;
          v29 = v43;
        }
        v33 = CmSetValueKey(
                (_DWORD)Object,
                (unsigned int)&DestinationString,
                v29,
                v30,
                v16,
                (__int64)v49,
                (v48[0] & 4) != 0);
        v38 = v33;
        v10 = v37;
LABEL_68:
        v26 = 1;
LABEL_69:
        v13 = v36;
        goto LABEL_70;
      }
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      DestinationString = *ValueName;
      v44 = 0LL;
      v16 = DataSize;
      v17 = Src;
    }
    Length = DestinationString.Length;
    goto LABEL_18;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v45) )
  {
    v33 = -1073741790;
    v38 = -1073741790;
    v25 = 0;
    v26 = 0;
    goto LABEL_70;
  }
  v33 = CmObReferenceObjectByHandle((_DWORD)v49, 131097, v32, v9, (__int64)&Object, (__int64)v48);
  v38 = v33;
  if ( v33 < 0 )
    goto LABEL_88;
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
  {
    v8 = 1;
    v37 = 1;
    goto LABEL_6;
  }
  v33 = -1073741790;
  v38 = -1073741790;
  v25 = 0;
  v26 = 0;
LABEL_70:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v25 )
  {
    v33 = CmPostCallbackNotificationEx(16, (__int64)Object, v33, (__int64)v55, 0LL, v51);
    v38 = v33;
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v33 = v38;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v35 = v50;
    LOBYTE(v35) = 14;
    CmpTraceRoutine(v35, v56, (unsigned int)v33, 0LL, v50, &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v13 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v38;
  }
  return v33;
}
