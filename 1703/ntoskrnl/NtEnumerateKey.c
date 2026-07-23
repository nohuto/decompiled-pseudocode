/*
 * XREFs of NtEnumerateKey @ 0x1404FD330
 * Callers:
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 */

NTSTATUS __stdcall NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  unsigned __int8 v12; // r15
  int v13; // ebx
  ULONG v14; // edi
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  int v17; // r9d
  PVOID v18; // rdi
  PVOID v19; // rsi
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v27; // rbx
  __int64 v28; // rcx
  ULONG HandleInformation; // [rsp+28h] [rbp-160h]
  PVOID v31; // [rsp+48h] [rbp-140h] BYREF
  ULONG v32; // [rsp+50h] [rbp-138h]
  KEY_INFORMATION_CLASS v33; // [rsp+58h] [rbp-130h]
  PVOID v34; // [rsp+60h] [rbp-128h] BYREF
  __int64 v35; // [rsp+68h] [rbp-120h]
  _QWORD v36[2]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v37; // [rsp+80h] [rbp-108h]
  PVOID v38; // [rsp+88h] [rbp-100h] BYREF
  PVOID Object[5]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v40[7]; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD v41[8]; // [rsp+F0h] [rbp-98h] BYREF
  LARGE_INTEGER v42[3]; // [rsp+130h] [rbp-58h] BYREF

  v32 = Index;
  v33 = KeyInformationClass;
  Object[1] = KeyInformation;
  Object[2] = ResultLength;
  memset(v41, 0, sizeof(v41));
  memset(v42, 0, sizeof(v42));
  v35 = 0LL;
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v42, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v25) = 17;
      CmpTraceRoutine(v25, v42, 3221225865LL, Index, 0LL, 0LL);
    }
    return -1073741431;
  }
  if ( (unsigned int)KeyInformationClass <= KeyFullInformation )
  {
    v12 = KeGetCurrentThread()->gap0[10];
    v13 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, v12, Object, 0LL);
    v31 = Object[0];
    if ( v13 >= 0 && *(_DWORD *)Object[0] != 1803104306 )
    {
      v13 = -1073741816;
      ObfDereferenceObject(Object[0]);
      v31 = 0LL;
    }
    if ( v13 >= 0 )
    {
      if ( CmpTraceRoutine && v31 )
      {
        v35 = *((_QWORD *)v31 + 1);
        v37 = v35;
      }
      if ( v12 == 1 )
      {
        v14 = Length;
        ProbeForWrite(KeyInformation, Length, 4u);
        v15 = (__int64)ResultLength;
        if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v15 = *(_DWORD *)v15;
      }
      else
      {
        v14 = Length;
      }
      v36[1] = v36;
      v36[0] = v36;
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v41[0] = v31;
        v41[1] = __PAIR64__(KeyInformationClass, Index);
        v41[2] = KeyInformation;
        LODWORD(v41[3]) = v14;
        v41[4] = ResultLength;
        LOBYTE(v17) = 1;
        v13 = CmpCallCallBacksEx(5, (unsigned int)v41, 0, v17, 20, (__int64)v31, (__int64)v36);
      }
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v13 = 0;
      }
      else
      {
        v34 = 0LL;
        v13 = CmKeyBodyRemapToVirtualForEnum(&v31, v12, 8LL, &v34);
        if ( v13 < 0 )
        {
          v19 = v31;
          v18 = v34;
        }
        else
        {
          HandleInformation = v14;
          v18 = v34;
          v19 = v31;
          v13 = CmEnumerateKey(
                  (_DWORD)v31,
                  (_DWORD)v34,
                  Index,
                  KeyInformationClass,
                  (__int64)KeyInformation,
                  HandleInformation,
                  (__int64)ResultLength);
        }
        if ( v18 )
          ObfDereferenceObject(v18);
        if ( CmpCallBackCount
          && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
          && (_QWORD *)v36[0] != v36 )
        {
          memset(&v40[1], 0, 0x30uLL);
          v40[0] = v19;
          LODWORD(v40[1]) = v13;
          LODWORD(v40[3]) = v13;
          v40[2] = v41;
          Object[3] = v40;
          Object[4] = 0LL;
          CmpCallCallBacksEx(20, (unsigned int)v40, 0, 0, 20, (__int64)v19, (__int64)v36);
          v13 = v40[3];
        }
      }
      v20 = KeGetCurrentThread();
      v21 = v20->KernelApcDisable + 1;
      v20->KernelApcDisable = v21;
      if ( !v21
        && ($69CD3F157F9F39B6F7113F2231989901 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
        && !v20->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v20);
      }
      ObfDereferenceObject(v31);
    }
    if ( CmpTraceRoutine )
    {
      v28 = v35;
      LOBYTE(v28) = 17;
      CmpTraceRoutine(v28, v42, (unsigned int)v13, Index, v35, 0LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($69CD3F157F9F39B6F7113F2231989901 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v22);
    }
    return v13;
  }
  v26 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_45;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v38,
         0LL) < 0 )
  {
    v26 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_45:
    v27 = 0LL;
    goto LABEL_46;
  }
  v27 = *((_QWORD *)v38 + 1);
  ObfDereferenceObject(v38);
  v26 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_46:
  if ( v26 )
  {
    LOBYTE(v11) = 17;
    v26(v11, v42, 3221225485LL, Index, v27, 0LL);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
