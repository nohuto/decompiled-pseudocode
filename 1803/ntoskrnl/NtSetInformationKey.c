/*
 * XREFs of NtSetInformationKey @ 0x140596B30
 * Callers:
 *     <none>
 * Callees:
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
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v7; // r13
  char v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  char *v11; // rdx
  ACCESS_MASK v12; // edx
  struct _KTHREAD *v13; // rax
  int v14; // r9d
  char v15; // r12
  char v16; // si
  __int64 v17; // r13
  __int64 v19; // rcx
  int v20; // ebx
  _QWORD *v21; // rdi
  __int32 v22; // esi
  __int32 v23; // esi
  __int32 v24; // esi
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  char v28; // [rsp+40h] [rbp-178h]
  unsigned __int8 v29; // [rsp+41h] [rbp-177h]
  BOOLEAN v30; // [rsp+45h] [rbp-173h]
  PVOID v31; // [rsp+48h] [rbp-170h] BYREF
  __int64 v32; // [rsp+50h] [rbp-168h]
  __int64 v33; // [rsp+58h] [rbp-160h] BYREF
  int v34; // [rsp+60h] [rbp-158h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-150h]
  ULONG v36; // [rsp+70h] [rbp-148h]
  _QWORD v37[2]; // [rsp+78h] [rbp-140h] BYREF
  PVOID v38; // [rsp+88h] [rbp-130h] BYREF
  PVOID v39; // [rsp+90h] [rbp-128h] BYREF
  PVOID Object; // [rsp+98h] [rbp-120h] BYREF
  PVOID v41[4]; // [rsp+A0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD v43[7]; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v44[7]; // [rsp+118h] [rbp-A0h] BYREF
  LARGE_INTEGER v45[4]; // [rsp+150h] [rbp-68h] BYREF

  v36 = KeySetInformationLength;
  Handle = KeyHandle;
  memset(v45, 0, sizeof(v45));
  v32 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v45, 0x20000u);
  v31 = 0LL;
  v7 = 0;
  memset(v44, 0, sizeof(v44));
  v37[1] = v37;
  v37[0] = v37;
  v34 = 0;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = -1073741431;
    v21 = v31;
LABEL_44:
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    goto LABEL_6;
  if ( KeySetInformationClass )
  {
    if ( KeySetInformationClass != KeyWow64FlagsInformation )
    {
      if ( KeySetInformationClass == KeyControlFlagsInformation
        || (v19 = (unsigned int)(KeySetInformationClass - 3), KeySetInformationClass == KeySetVirtualizationInformation) )
      {
LABEL_6:
        v28 = 0;
LABEL_7:
        v19 = 4LL;
        goto LABEL_8;
      }
      if ( KeySetInformationClass != KeySetDebugInformation )
      {
        if ( CmpTraceRoutine
          && (v19 = (__int64)Handle) != 0
          && ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v38,
               0LL) >= 0 )
        {
          v17 = *((_QWORD *)v38 + 1);
          ObfDereferenceObject(v38);
        }
        else
        {
          v17 = 0LL;
        }
        v20 = -1073741821;
        v21 = v31;
        v15 = 0;
        v16 = 0;
        goto LABEL_28;
      }
    }
    v28 = 1;
    goto LABEL_7;
  }
  v19 = 8LL;
  v28 = 1;
LABEL_8:
  if ( KeySetInformationLength == (_DWORD)v19 )
  {
    v33 = 0LL;
    if ( PreviousMode )
    {
      v11 = (char *)KeySetInformation + (unsigned int)v19;
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < KeySetInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(&v33, KeySetInformation, (unsigned int)v19);
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
      v12 = 0;
    else
      v12 = 2;
    v20 = ObReferenceObjectByHandle(Handle, v12, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
    v21 = Object;
    v31 = Object;
    if ( v20 != -1073741790 )
    {
LABEL_16:
      v8 = v7;
      if ( v20 < 0 )
        goto LABEL_44;
      if ( CmpTraceRoutine && v21 )
        v32 = v21[1];
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
      {
        v19 = v21[1];
        if ( (*(_DWORD *)(v19 + 4) & 0x80u) != 0 )
        {
          v20 = -1073741790;
          v8 = v7;
          v15 = 0;
          v16 = 0;
          goto LABEL_27;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v19 + 24) + 160LL) & 0x100000) != 0 )
        {
          v20 = -1073741790;
          v8 = v7;
          v15 = 0;
          v16 = 0;
          goto LABEL_27;
        }
      }
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      if ( CmpCallBackCount )
      {
        v21 = v31;
        if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v44[0] = v31;
          LODWORD(v44[1]) = KeySetInformationClass;
          v44[2] = KeySetInformation;
          LODWORD(v44[3]) = v36;
          LOBYTE(v14) = 1;
          v20 = CmpCallCallBacksEx(3, (unsigned int)v44, 0, v14, 18, (__int64)v31, (__int64)v37);
          if ( v20 < 0 )
          {
            if ( v20 == -1073740541 )
              v20 = 0;
            v15 = 0;
            goto LABEL_94;
          }
          v15 = 1;
LABEL_23:
          if ( v7 )
          {
            v20 = CmKeyBodyReplicateToVirtual(&v31, v29, 2LL, &SubjectContext, &v34);
            v8 = v7;
            v21 = v31;
            if ( v20 < 0 )
              goto LABEL_26;
          }
          v8 = v7;
          if ( KeySetInformationClass == KeySetHandleTagsInformation )
          {
            *((_WORD *)v21 + 25) = v33;
            v20 = 0;
LABEL_26:
            v16 = 1;
LABEL_27:
            v17 = v32;
            goto LABEL_28;
          }
          if ( KeySetInformationClass )
          {
            v22 = KeySetInformationClass - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  if ( v24 != 1 )
                    goto LABEL_26;
                  v25 = (unsigned int)v33;
                  v26 = 4LL;
                }
                else
                {
                  v25 = (unsigned int)v33;
                  v26 = 3LL;
                }
              }
              else
              {
                v25 = (unsigned int)v33;
                v26 = 2LL;
              }
            }
            else
            {
              v25 = (unsigned int)v33;
              v26 = 1LL;
            }
            v27 = CmSetKeyFlags(v21, v26, v25);
          }
          else
          {
            v27 = CmSetLastWriteTimeKey(v21, &v33);
          }
          v20 = v27;
LABEL_94:
          v8 = v7;
          goto LABEL_26;
        }
      }
      else
      {
        v21 = v31;
      }
      v15 = 0;
      goto LABEL_23;
    }
    if ( v28 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      v8 = 1;
      if ( CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v34) )
      {
        v20 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v29, v41, 0LL);
        v21 = v41[0];
        v31 = v41[0];
        if ( v20 < 0 )
          goto LABEL_44;
        if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(v41[0]) )
        {
          v20 = 0;
          v7 = 1;
          goto LABEL_16;
        }
        v20 = -1073741790;
        v15 = 0;
        v16 = 0;
        v17 = 0LL;
      }
      else
      {
        v20 = -1073741790;
        v15 = 0;
        v16 = 0;
        v17 = 0LL;
      }
    }
    else
    {
      v20 = -1073741790;
      v15 = 0;
      v16 = 0;
      v17 = 0LL;
    }
  }
  else
  {
    if ( CmpTraceRoutine
      && (v19 = (__int64)Handle) != 0
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v39,
           0LL) >= 0 )
    {
      v17 = *((_QWORD *)v39 + 1);
      ObfDereferenceObject(v39);
    }
    else
    {
      v17 = 0LL;
    }
    v20 = -1073741820;
    v21 = v31;
    v15 = 0;
    v16 = 0;
  }
LABEL_28:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v15
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v37[0] != v37 )
  {
    memset(v43, 0, sizeof(v43));
    v43[0] = v21;
    LODWORD(v43[1]) = v20;
    LODWORD(v43[3]) = v20;
    v43[2] = v44;
    v41[2] = v43;
    v41[3] = 0LL;
    CmpCallCallBacksEx(18, (unsigned int)v43, 0, 0, 18, (__int64)v21, (__int64)v37);
    v20 = v43[3];
  }
  if ( v16 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = v31;
  }
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v19) = 20;
    CmpTraceRoutine(v19, v45, (unsigned int)v20, 0LL, v17, 0LL);
  }
  if ( v30 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v20;
}
