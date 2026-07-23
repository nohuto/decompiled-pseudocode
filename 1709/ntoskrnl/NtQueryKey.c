/*
 * XREFs of NtQueryKey @ 0x1404A8630
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // rbx
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  BOOLEAN v12; // si
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
  PVOID v26; // rdi
  struct _KTHREAD *v27; // rcx
  bool v28; // zf
  struct _KTHREAD *v29; // rax
  $B476B70DB57F76B110DA5B9238C3E934 *v30; // rcx
  __int64 v32; // rcx
  unsigned int v33; // [rsp+40h] [rbp-148h]
  PVOID v35; // [rsp+58h] [rbp-130h] BYREF
  __int64 v36; // [rsp+60h] [rbp-128h]
  PVOID v37; // [rsp+68h] [rbp-120h] BYREF
  __int64 v38; // [rsp+70h] [rbp-118h]
  _QWORD v39[2]; // [rsp+78h] [rbp-110h] BYREF
  PVOID Object; // [rsp+88h] [rbp-100h] BYREF
  PVOID v41; // [rsp+90h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-F0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD *v44; // [rsp+A8h] [rbp-E0h]
  __int64 v45; // [rsp+B0h] [rbp-D8h]
  _QWORD v46[7]; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD v47[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v48[3]; // [rsp+130h] [rbp-58h] BYREF

  v5 = Length;
  Handle = KeyHandle;
  memset(v47, 0, sizeof(v47));
  v37 = 0LL;
  memset(v48, 0, sizeof(v48));
  v9 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v48, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v33 = -1073741431;
LABEL_42:
    if ( CmpTraceRoutine )
    {
      LOBYTE(v32) = 13;
      CmpTraceRoutine(v32, v48, v33, (unsigned int)KeyInformationClass, v9, 0LL);
    }
    if ( v12 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      v29 = KeGetCurrentThread();
      v28 = v29->KernelApcDisable++ == -1;
      if ( v28 )
      {
        v30 = &v29->152;
        if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v30->ApcState.ApcListHead[0].Flink != v30 && !v29->SpecialApcDisable )
          KiCheckForKernelApcDelivery((__int64)v30);
      }
    }
    return v33;
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
          if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
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
    v18 = ObReferenceObjectByHandle(
            Handle,
            ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v19 = Object;
    v35 = Object;
    v33 = v18;
    if ( v18 < 0 )
    {
      v9 = 0LL;
      goto LABEL_42;
    }
    v20 = *(_DWORD *)Object;
    if ( *(_DWORD *)Object == 1803104306 )
    {
      if ( CmpTraceRoutine )
      {
        v38 = *((_QWORD *)Object + 1);
        v36 = v38;
      }
      if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 )
      {
        if ( HandleInformation.GrantedAccess )
          goto LABEL_27;
        v33 = -1073741790;
LABEL_41:
        ObfDereferenceObject(v35);
        v9 = v38;
        goto LABEL_42;
      }
      if ( KeyInformationClass != KeyCachedInformation )
      {
LABEL_27:
        v39[1] = v39;
        v39[0] = v39;
        v21 = KeGetCurrentThread();
        --v21->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v23 = v33;
        }
        else
        {
          v47[0] = Object;
          LODWORD(v47[1]) = KeyInformationClass;
          v47[2] = KeyInformation;
          LODWORD(v47[3]) = Length;
          v47[4] = ResultLength;
          LOBYTE(v22) = 1;
          v23 = CmpCallCallBacksEx(7, (unsigned int)v47, 0, v22, 22, (__int64)Object, (__int64)v39);
          v33 = v23;
        }
        if ( v23 < 0 )
        {
          if ( v23 == -1073740541 )
            v33 = 0;
        }
        else
        {
          Key = CmKeyBodyRemapToVirtualForEnum(
                  (__int64 *)&v35,
                  PreviousMode,
                  ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
                  (__int64 *)&v37);
          if ( Key < 0 )
          {
            v26 = v35;
          }
          else
          {
            v25 = (unsigned int *)KeyInformation;
            v26 = v35;
            Key = CmQueryKey((__int64)v35, (__int64)v37, KeyInformationClass, v25, Length, ResultLength);
          }
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (_QWORD *)v39[0] != v39 )
          {
            memset(&v46[1], 0, 0x30uLL);
            v46[0] = v26;
            LODWORD(v46[1]) = Key;
            LODWORD(v46[3]) = Key;
            v46[2] = v47;
            v44 = v46;
            v45 = 0LL;
            CmpCallCallBacksEx(22, (unsigned int)v46, 0, 0, 22, (__int64)v26, (__int64)v39);
            Key = v46[3];
          }
          v33 = Key;
        }
        v27 = KeGetCurrentThread();
        v28 = v27->KernelApcDisable++ == -1;
        if ( v28
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
          && !v27->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v27);
        }
        if ( v37 )
          ObfDereferenceObject(v37);
        goto LABEL_41;
      }
    }
    else if ( KeyInformationClass != KeyCachedInformation )
    {
      v33 = -1073741816;
      goto LABEL_41;
    }
    if ( v20 != 1803104306 )
    {
      *ResultLength = 40;
      if ( Length < 0x28 )
      {
        v33 = -1073741789;
      }
      else
      {
        memset(KeyInformation, 0, 0x28uLL);
        *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v19[1] + 88LL);
      }
      goto LABEL_41;
    }
    goto LABEL_27;
  }
  if ( CmpTraceRoutine
    && KeyHandle
    && ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v41,
         0LL) >= 0 )
  {
    v9 = *((_QWORD *)v41 + 1);
    ObfDereferenceObject(v41);
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v11) = 13;
    CmpTraceRoutine(v11, v48, 3221225485LL, (unsigned int)KeyInformationClass, v9, 0LL);
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741811;
}
