/*
 * XREFs of NtEnumerateValueKey @ 0x1404FF290
 * Callers:
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v11; // rcx
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v13; // ebx
  _QWORD *v14; // rcx
  ULONG v15; // esi
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  PVOID v19; // rdi
  PVOID v20; // rsi
  __int64 v22; // rcx
  void (__fastcall *v23)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  ULONG Object; // [rsp+20h] [rbp-178h]
  int v27; // [rsp+30h] [rbp-168h]
  PVOID v29; // [rsp+58h] [rbp-140h] BYREF
  ULONG v30; // [rsp+60h] [rbp-138h]
  KEY_VALUE_INFORMATION_CLASS v31; // [rsp+68h] [rbp-130h]
  PVOID v32; // [rsp+70h] [rbp-128h] BYREF
  __int64 v33; // [rsp+78h] [rbp-120h]
  _QWORD v34[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v35; // [rsp+90h] [rbp-108h]
  PVOID v36; // [rsp+98h] [rbp-100h] BYREF
  PVOID v37[5]; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v38[7]; // [rsp+C8h] [rbp-D0h] BYREF
  _QWORD v39[8]; // [rsp+100h] [rbp-98h] BYREF
  LARGE_INTEGER v40[3]; // [rsp+140h] [rbp-58h] BYREF

  v30 = Index;
  v31 = KeyValueInformationClass;
  v37[1] = KeyValueInformation;
  v37[2] = ResultLength;
  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  v33 = 0LL;
  v35 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v40, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v22) = 18;
      CmpTraceRoutine(v22, v40, 3221225865LL, Index, 0LL, 0LL);
    }
    return -1073741431;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformation )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v37, 0LL);
    v14 = v37[0];
    v29 = v37[0];
    if ( v13 >= 0 && *(_DWORD *)v37[0] != 1803104306 )
    {
      v13 = -1073741816;
      ObfDereferenceObject(v37[0]);
      v14 = 0LL;
      v29 = 0LL;
    }
    if ( v13 >= 0 )
    {
      if ( CmpTraceRoutine && v14 )
      {
        v33 = v14[1];
        v35 = v33;
      }
      if ( PreviousMode == 1 )
      {
        v15 = Length;
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
        v16 = (__int64)ResultLength;
        if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v16 = *(_DWORD *)v16;
      }
      else
      {
        v15 = Length;
      }
      v34[1] = v34;
      v34[0] = v34;
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v39[0] = v29;
        v39[1] = __PAIR64__(KeyValueInformationClass, Index);
        v39[2] = KeyValueInformation;
        LODWORD(v39[3]) = v15;
        v39[4] = ResultLength;
        LOBYTE(v18) = 1;
        v13 = CmpCallCallBacksEx(6, (unsigned int)v39, 0, v18, 21, (__int64)v29, (__int64)v34);
      }
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v13 = 0;
      }
      else
      {
        v32 = 0LL;
        v13 = CmKeyBodyRemapToVirtualForEnum(&v29, PreviousMode, 1u, &v32);
        v19 = v32;
        if ( v13 < 0 )
        {
          v20 = v29;
        }
        else if ( v32 )
        {
          v27 = v15;
          v20 = v29;
          v13 = CmEnumerateValueKeyFromMergedView(
                  (int)v29,
                  (int)v32,
                  0,
                  Index,
                  KeyValueInformationClass,
                  KeyValueInformation,
                  v27,
                  (__int64)ResultLength,
                  0LL);
        }
        else
        {
          Object = v15;
          v20 = v29;
          v13 = CmEnumerateValueKey(
                  (_DWORD)v29,
                  Index,
                  KeyValueInformationClass,
                  (_DWORD)KeyValueInformation,
                  Object,
                  (__int64)ResultLength);
        }
        if ( v19 )
          ObfDereferenceObject(v19);
        if ( CmpCallBackCount
          && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
          && (_QWORD *)v34[0] != v34 )
        {
          memset(&v38[1], 0, 0x30uLL);
          v38[0] = v20;
          LODWORD(v38[1]) = v13;
          LODWORD(v38[3]) = v13;
          v38[2] = v39;
          v37[3] = v38;
          v37[4] = 0LL;
          CmpCallCallBacksEx(21, (unsigned int)v38, 0, 0, 21, (__int64)v20, (__int64)v34);
          v13 = v38[3];
        }
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v29);
    }
    if ( CmpTraceRoutine )
    {
      v25 = v33;
      LOBYTE(v25) = 18;
      CmpTraceRoutine(v25, v40, (unsigned int)v13, Index, v33, 0LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v13;
  }
  v23 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_49;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v36,
         0LL) < 0 )
  {
    v23 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_49:
    v24 = 0LL;
    goto LABEL_50;
  }
  v24 = *((_QWORD *)v36 + 1);
  ObfDereferenceObject(v36);
  v23 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_50:
  if ( v23 )
  {
    LOBYTE(v11) = 18;
    v23(v11, v40, 3221225485LL, Index, v24, 0LL);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
