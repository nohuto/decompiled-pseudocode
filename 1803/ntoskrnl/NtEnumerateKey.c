/*
 * XREFs of NtEnumerateKey @ 0x1404AC500
 * Callers:
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpBounceContextCleanup @ 0x1404ACA20 (CmpBounceContextCleanup.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
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
  KPROCESSOR_MODE PreviousMode; // r14
  ULONG v11; // esi
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  int v14; // r9d
  int v15; // eax
  KEY_INFORMATION_CLASS v16; // r9d
  ULONG v17; // eax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rcx
  int v23; // ebx
  _QWORD *v24; // rdi
  ULONG v25; // r12d
  __int64 v26; // rsi
  char v27; // [rsp+40h] [rbp-1B8h]
  char v28; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v30; // [rsp+48h] [rbp-1B0h]
  PVOID v31; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1A0h]
  _DWORD v33[4]; // [rsp+60h] [rbp-198h] BYREF
  __int64 v34; // [rsp+70h] [rbp-188h]
  PVOID v35; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-178h] BYREF
  PVOID v37; // [rsp+90h] [rbp-168h] BYREF
  PVOID Object[3]; // [rsp+98h] [rbp-160h] BYREF
  _QWORD v39[8]; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v40[8]; // [rsp+F0h] [rbp-108h] BYREF
  LARGE_INTEGER v41[4]; // [rsp+130h] [rbp-C8h] BYREF
  void *v42; // [rsp+150h] [rbp-A8h] BYREF
  void *Src; // [rsp+158h] [rbp-A0h]
  char v44; // [rsp+160h] [rbp-98h]

  v33[2] = Index;
  memset(v41, 0, sizeof(v41));
  v32 = 0LL;
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v41, 0x20000u);
  v27 = 0;
  v28 = 0;
  memset(v40, 0, sizeof(v40));
  v31 = 0LL;
  v33[0] = 0;
  v42 = 0LL;
  Src = 0LL;
  v44 = 0;
  v36[1] = v36;
  v36[0] = v36;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v30 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = -1073741431;
    v24 = v31;
    v25 = Index;
    v26 = 0LL;
    goto LABEL_28;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( CmpTraceRoutine
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v37,
           0LL) >= 0 )
    {
      v26 = *((_QWORD *)v37 + 1);
      ObfDereferenceObject(v37);
    }
    else
    {
      v26 = 0LL;
    }
    v23 = -1073741811;
    v24 = v31;
    v25 = Index;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL);
  v24 = Object[0];
  v31 = Object[0];
  if ( v23 >= 0 && *(_DWORD *)Object[0] != 1803104306 )
  {
    v23 = -1073741816;
    ObfDereferenceObject(Object[0]);
    v24 = 0LL;
    v31 = 0LL;
  }
  if ( v23 < 0 )
  {
    v25 = Index;
    v26 = 0LL;
    goto LABEL_28;
  }
  if ( CmpTraceRoutine && v24 )
  {
    v32 = v24[1];
    v34 = v32;
  }
  if ( PreviousMode == 1 )
  {
    v11 = Length;
    ProbeForWrite(KeyInformation, Length, 4u);
    v12 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  else
  {
    v11 = Length;
  }
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v28 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v24 = v31;
    v40[0] = v31;
    v40[1] = __PAIR64__(KeyInformationClass, Index);
    v40[2] = KeyInformation;
    LODWORD(v40[3]) = v11;
    v40[4] = ResultLength;
    LOBYTE(v14) = 1;
    v15 = CmpCallCallBacksEx(5, (unsigned int)v40, 0, v14, 20, (__int64)v31, (__int64)v36);
    v23 = v15;
    if ( v15 < 0 )
    {
      v25 = Index;
      v26 = v32;
      if ( v15 == -1073740541 )
        v23 = 0;
      goto LABEL_28;
    }
    v27 = 1;
  }
  v23 = CmKeyBodyRemapToVirtualForEnum(&v31, (unsigned __int8)PreviousMode, 8LL, &v35);
  if ( v23 < 0 || (v23 = CmpBounceContextStart(&v42, KeyInformation, v11, (unsigned int)PreviousMode, 0), v23 < 0) )
  {
    v24 = v31;
    v25 = Index;
LABEL_48:
    v26 = v32;
    goto LABEL_28;
  }
  v16 = KeyInformationClass;
  v25 = Index;
  v24 = v31;
  v23 = CmEnumerateKey((_DWORD)v31, (_DWORD)v35, Index, v16, (__int64)Src, v11, (__int64)v33);
  if ( v23 < 0 && v23 != -2147483643 && v23 != -1073741789 )
    goto LABEL_48;
  v17 = v33[0];
  *ResultLength = v33[0];
  if ( v23 != -1073741789 )
  {
    if ( v11 >= v17 )
      v11 = v17;
    if ( v42 != Src )
      memmove(v42, Src, v11);
  }
  v26 = v32;
LABEL_28:
  if ( v35 )
    ObfDereferenceObject(v35);
  if ( v27
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v36[0] != v36 )
  {
    memset(v39, 0, 0x38uLL);
    v39[0] = v24;
    LODWORD(v39[1]) = v23;
    LODWORD(v39[3]) = v23;
    v39[2] = v40;
    Object[1] = v39;
    Object[2] = 0LL;
    CmpCallCallBacksEx(20, (unsigned int)v39, 0, 0, 20, (__int64)v24, (__int64)v36);
    v23 = v39[3];
  }
  if ( v28 )
  {
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable++ == -1;
    if ( v19
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v24 = v31;
  }
  if ( v24 )
    ObfDereferenceObject(v24);
  CmpBounceContextCleanup(&v42);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v20) = 17;
    CmpTraceRoutine(v20, v41, (unsigned int)v23, v25, v26, 0LL);
  }
  if ( v30 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v21 = KeGetCurrentThread();
    v19 = v21->KernelApcDisable++ == -1;
    if ( v19
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v23;
}
