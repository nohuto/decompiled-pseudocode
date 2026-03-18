/*
 * XREFs of NtEnumerateValueKey @ 0x140596600
 * Callers:
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpBounceContextCleanup @ 0x1404ACA20 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x140561AD4 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v10; // si
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v12; // esi
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rax
  int v15; // r9d
  int v16; // eax
  ULONG v17; // eax
  __int64 v18; // rcx
  NTSTATUS v20; // ebx
  _QWORD *v21; // rdi
  ULONG v22; // r14d
  __int64 v23; // r12
  BOOLEAN v24; // [rsp+50h] [rbp-1D8h]
  char v25; // [rsp+51h] [rbp-1D7h]
  char v26; // [rsp+52h] [rbp-1D6h]
  PVOID v28; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-1C0h]
  ULONG v31; // [rsp+70h] [rbp-1B8h]
  PVOID v32; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-1A8h]
  _QWORD v34[2]; // [rsp+88h] [rbp-1A0h] BYREF
  PVOID v35; // [rsp+98h] [rbp-190h] BYREF
  PVOID Object[3]; // [rsp+A0h] [rbp-188h] BYREF
  _QWORD v37[7]; // [rsp+B8h] [rbp-170h] BYREF
  _QWORD v38[8]; // [rsp+F0h] [rbp-138h] BYREF
  LARGE_INTEGER v39[4]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+150h] [rbp-D8h] BYREF
  void *v41; // [rsp+158h] [rbp-D0h]
  char v42; // [rsp+160h] [rbp-C8h]
  _BYTE v43[48]; // [rsp+1B0h] [rbp-78h] BYREF

  v31 = Index;
  memset(v39, 0, sizeof(v39));
  v30 = 0LL;
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v39, 0x20000u);
  v25 = 0;
  v26 = 0;
  memset(v38, 0, sizeof(v38));
  v28 = 0LL;
  LODWORD(v29) = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v34[1] = v34;
  v34[0] = v34;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v24 = v10;
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = -1073741431;
    v21 = v28;
    v22 = Index;
    v23 = 0LL;
    goto LABEL_36;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( CmpTraceRoutine
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v35,
           0LL) >= 0 )
    {
      v23 = *((_QWORD *)v35 + 1);
      ObfDereferenceObject(v35);
    }
    else
    {
      v23 = 0LL;
    }
    v20 = -1073741811;
    v21 = v28;
    v22 = Index;
    goto LABEL_36;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL);
  v21 = Object[0];
  v28 = Object[0];
  if ( v20 >= 0 && *(_DWORD *)Object[0] != 1803104306 )
  {
    v20 = -1073741816;
    ObfDereferenceObject(Object[0]);
    v21 = 0LL;
    v28 = 0LL;
  }
  if ( v20 < 0 )
  {
    v22 = Index;
    v23 = 0LL;
    goto LABEL_36;
  }
  if ( CmpTraceRoutine && v21 )
  {
    v30 = v21[1];
    v33 = v30;
  }
  if ( PreviousMode == 1 )
  {
    v12 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v13 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
  }
  else
  {
    v12 = Length;
  }
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v26 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v21 = v28;
    v38[0] = v28;
    v38[1] = __PAIR64__(KeyValueInformationClass, Index);
    v38[2] = KeyValueInformation;
    LODWORD(v38[3]) = v12;
    v38[4] = ResultLength;
    LOBYTE(v15) = 1;
    v16 = CmpCallCallBacksEx(6, (unsigned int)v38, 0, v15, 21, (__int64)v28, (__int64)v34);
    v20 = v16;
    if ( v16 < 0 )
    {
      v10 = v24;
      v22 = Index;
      v23 = v30;
      if ( v16 == -1073740541 )
        v20 = 0;
      goto LABEL_36;
    }
    v25 = 1;
  }
  v20 = CmKeyBodyRemapToVirtualForEnum(&v28, (unsigned __int8)PreviousMode, 1LL, &v32);
  if ( v20 < 0
    || (v20 = CmpBounceContextStart(
                (__int64)&v40,
                (unsigned __int64)KeyValueInformation,
                v12,
                (unsigned int)PreviousMode,
                1),
        v20 < 0) )
  {
    v21 = v28;
    v22 = Index;
LABEL_54:
    v23 = v30;
    v10 = v24;
    goto LABEL_36;
  }
  if ( v32 )
  {
    CmpAttachToRegistryProcess((__int64)v43);
    v22 = Index;
    v21 = v28;
    v20 = CmEnumerateValueKeyFromMergedView(
            (int)v28,
            (int)v32,
            0,
            Index,
            KeyValueInformationClass,
            v41,
            v12,
            (__int64)&v29,
            0LL);
    KiUnstackDetachProcess((__int64)v43, 0LL);
  }
  else
  {
    v22 = Index;
    v21 = v28;
    v20 = CmEnumerateValueKey(v28, Index, KeyValueInformationClass, v41, v12, (__int64)&v29);
  }
  if ( v20 < 0 && v20 != -2147483643 && v20 != -1073741789 )
    goto LABEL_54;
  v17 = v29;
  *ResultLength = v29;
  if ( v20 != -1073741789 )
  {
    if ( v12 >= v17 )
      v12 = v17;
    CmpBounceContextCopyDataToCallerBuffer((__int64)&v40, v12);
  }
  v10 = v24;
  v23 = v30;
LABEL_36:
  if ( v32 )
    ObfDereferenceObject(v32);
  if ( v25
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v34[0] != v34 )
  {
    memset(v37, 0, sizeof(v37));
    v37[0] = v21;
    LODWORD(v37[1]) = v20;
    LODWORD(v37[3]) = v20;
    v37[2] = v38;
    Object[1] = v37;
    Object[2] = 0LL;
    CmpCallCallBacksEx(21, (unsigned int)v37, 0, 0, 21, (__int64)v21, (__int64)v34);
    v20 = v37[3];
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = v28;
  }
  if ( v21 )
    ObfDereferenceObject(v21);
  CmpBounceContextCleanup((__int64)&v40);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v18) = 18;
    CmpTraceRoutine(v18, v39, (unsigned int)v20, v22, v23, 0LL);
  }
  if ( v10 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v20;
}
