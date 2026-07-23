/*
 * XREFs of NtQueryKey @ 0x140507B00
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140592C98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14069B6D4 (PiDevCfgQueryPolicyStringList.c)
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
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // rbx
  ACCESS_MASK v9; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  BOOLEAN v12; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  _QWORD *v19; // rbx
  int v20; // ecx
  struct _KTHREAD *v21; // rax
  int v22; // r9d
  int v23; // eax
  int Key; // ebx
  unsigned int *v25; // r9
  PVOID v26; // rsi
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  __int64 v29; // rbx
  struct _KTHREAD *v30; // rax
  __int16 v31; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v32; // rcx
  __int64 v34; // rcx
  void (__fastcall *v35)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v36; // rbx
  unsigned int v37; // [rsp+40h] [rbp-158h]
  __int64 v39; // [rsp+50h] [rbp-148h]
  PVOID v40; // [rsp+60h] [rbp-138h] BYREF
  __int64 v41; // [rsp+68h] [rbp-130h]
  PVOID v42; // [rsp+70h] [rbp-128h] BYREF
  _QWORD v43[2]; // [rsp+78h] [rbp-120h] BYREF
  PVOID Object; // [rsp+88h] [rbp-110h] BYREF
  PVOID v45; // [rsp+90h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-100h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-F8h] BYREF
  PVOID v48; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-E0h]
  PVOID v50; // [rsp+C0h] [rbp-D8h]
  __int64 v51; // [rsp+C8h] [rbp-D0h]
  PULONG v52; // [rsp+D0h] [rbp-C8h]
  __int64 v53; // [rsp+D8h] [rbp-C0h]
  __int64 v54; // [rsp+E0h] [rbp-B8h]
  __int64 v55; // [rsp+E8h] [rbp-B0h]
  _QWORD v56[3]; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+108h] [rbp-90h]
  __int64 v58; // [rsp+110h] [rbp-88h]
  __int64 v59; // [rsp+118h] [rbp-80h]
  __int64 v60; // [rsp+120h] [rbp-78h]
  _QWORD *v61; // [rsp+128h] [rbp-70h]
  __int64 v62; // [rsp+130h] [rbp-68h]
  LARGE_INTEGER v63[3]; // [rsp+138h] [rbp-60h] BYREF

  v5 = Length;
  Handle = KeyHandle;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v9 = 0;
  v42 = 0LL;
  memset(v63, 0, sizeof(v63));
  v39 = 0LL;
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v63, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v37 = -1073741431;
LABEL_57:
    v29 = 0LL;
    goto LABEL_45;
  }
  if ( (unsigned int)KeyInformationClass <= KeyTrustInformation )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( (_DWORD)v5 )
      {
        v14 = (unsigned __int64)KeyInformation;
        if ( ((unsigned __int8)KeyInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)KeyInformation + v5 - 1;
        if ( (unsigned __int64)KeyInformation > v15 || v15 >= 0x7FFFFFFF0000LL )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v14 = *(_BYTE *)v14;
            v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v14 != v16 );
        }
      }
      v17 = (__int64)ResultLength;
      if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0 )
      v9 = 1;
    v18 = ObReferenceObjectByHandle(
            Handle,
            v9,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v19 = Object;
    v40 = Object;
    v37 = v18;
    if ( v18 < 0 )
      goto LABEL_57;
    v20 = *(_DWORD *)Object;
    if ( *(_DWORD *)Object == 1803104306 )
    {
      if ( CmpTraceRoutine )
      {
        v39 = *((_QWORD *)Object + 1);
        v41 = v39;
      }
      if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 )
      {
        if ( HandleInformation.GrantedAccess )
          goto LABEL_29;
        v37 = -1073741790;
LABEL_43:
        v29 = v39;
LABEL_44:
        ObfDereferenceObject(v40);
LABEL_45:
        if ( CmpTraceRoutine )
        {
          LOBYTE(v34) = 13;
          CmpTraceRoutine(v34, v63, v37, (unsigned int)KeyInformationClass, v29, 0LL);
        }
        if ( v12 )
        {
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          v30 = KeGetCurrentThread();
          v31 = v30->KernelApcDisable + 1;
          v30->KernelApcDisable = v31;
          if ( !v31 )
          {
            v32 = &v30->152;
            if ( ($69CD3F157F9F39B6F7113F2231989901 *)v32->ApcState.ApcListHead[0].Flink != v32
              && !v30->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery((__int64)v32);
            }
          }
        }
        return v37;
      }
      if ( KeyInformationClass != KeyCachedInformation )
      {
LABEL_29:
        v43[1] = v43;
        v43[0] = v43;
        v21 = KeGetCurrentThread();
        --v21->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v23 = v37;
        }
        else
        {
          v48 = Object;
          LODWORD(v49) = KeyInformationClass;
          v50 = KeyInformation;
          LODWORD(v51) = Length;
          v52 = ResultLength;
          LOBYTE(v22) = 1;
          v23 = CmpCallCallBacksEx(7, (unsigned int)&v48, 0, v22, 22, (__int64)Object, (__int64)v43);
        }
        if ( v23 < 0 )
        {
          if ( v23 == -1073740541 )
            v23 = 0;
          v37 = v23;
        }
        else
        {
          Key = CmKeyBodyRemapToVirtualForEnum(&v40, PreviousMode, v9, &v42);
          if ( Key < 0 )
          {
            v26 = v40;
          }
          else
          {
            v25 = (unsigned int *)KeyInformation;
            v26 = v40;
            Key = CmQueryKey((__int64)v40, (__int64)v42, KeyInformationClass, v25, Length, ResultLength);
          }
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (_QWORD *)v43[0] != v43 )
          {
            v58 = 0LL;
            v59 = 0LL;
            v60 = 0LL;
            v56[0] = v26;
            v56[1] = (unsigned int)Key;
            v57 = (unsigned int)Key;
            v56[2] = &v48;
            v61 = v56;
            v62 = 0LL;
            CmpCallCallBacksEx(22, (unsigned int)v56, 0, 0, 22, (__int64)v26, (__int64)v43);
            Key = v57;
          }
          v37 = Key;
        }
        v27 = KeGetCurrentThread();
        v28 = v27->KernelApcDisable + 1;
        v27->KernelApcDisable = v28;
        if ( !v28
          && ($69CD3F157F9F39B6F7113F2231989901 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
          && !v27->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v27);
        }
        if ( v42 )
          ObfDereferenceObject(v42);
        goto LABEL_43;
      }
    }
    else if ( KeyInformationClass != KeyCachedInformation )
    {
      v37 = -1073741816;
      goto LABEL_43;
    }
    if ( v20 != 1803104306 )
    {
      *ResultLength = 40;
      if ( Length < 0x28 )
      {
        v37 = -1073741789;
      }
      else
      {
        memset(KeyInformation, 0, 0x28uLL);
        *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v19[1] + 88LL);
      }
      v29 = v39;
      goto LABEL_44;
    }
    goto LABEL_29;
  }
  v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_70;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v45,
         0LL) < 0 )
  {
    v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_70:
    v36 = 0LL;
    goto LABEL_71;
  }
  v36 = *((_QWORD *)v45 + 1);
  ObfDereferenceObject(v45);
  v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_71:
  if ( v35 )
  {
    LOBYTE(v11) = 13;
    v35(v11, v63, 3221225485LL, (unsigned int)KeyInformationClass, v36, 0LL);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
