/*
 * XREFs of NtQueryKey @ 0x14059E7B0
 * Callers:
 *     PiDevCfgConfigureDeviceLocation @ 0x1405E8480 (PiDevCfgConfigureDeviceLocation.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072DDF0 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  size_t v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KTHREAD *v17; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  int v19; // r9d
  unsigned __int16 *v20; // r15
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rcx
  bool v25; // zf
  void *v26; // rcx
  struct _KTHREAD *v27; // rcx
  NTSTATUS v29; // [rsp+40h] [rbp-1A8h]
  char v30; // [rsp+44h] [rbp-1A4h]
  char v31; // [rsp+45h] [rbp-1A3h]
  BOOLEAN v32; // [rsp+46h] [rbp-1A2h]
  KPROCESSOR_MODE v33; // [rsp+47h] [rbp-1A1h]
  PVOID v34; // [rsp+50h] [rbp-198h] BYREF
  PVOID v35; // [rsp+58h] [rbp-190h] BYREF
  ACCESS_MASK v36; // [rsp+60h] [rbp-188h]
  ULONG v37; // [rsp+64h] [rbp-184h] BYREF
  PVOID v38; // [rsp+68h] [rbp-180h] BYREF
  __int64 v39; // [rsp+70h] [rbp-178h]
  _QWORD v40[2]; // [rsp+78h] [rbp-170h] BYREF
  PVOID Object; // [rsp+88h] [rbp-160h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-158h] BYREF
  _QWORD *v43; // [rsp+98h] [rbp-150h]
  __int64 v44; // [rsp+A0h] [rbp-148h]
  _QWORD v45[3]; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-128h]
  __int64 v47; // [rsp+C8h] [rbp-120h]
  __int64 v48; // [rsp+D0h] [rbp-118h]
  __int64 v49; // [rsp+D8h] [rbp-110h]
  PVOID v50; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-100h]
  PVOID v52; // [rsp+F0h] [rbp-F8h]
  __int64 v53; // [rsp+F8h] [rbp-F0h]
  PULONG v54; // [rsp+100h] [rbp-E8h]
  __int64 v55; // [rsp+108h] [rbp-E0h]
  __int64 v56; // [rsp+110h] [rbp-D8h]
  __int64 v57; // [rsp+118h] [rbp-D0h]
  LARGE_INTEGER v58[4]; // [rsp+120h] [rbp-C8h] BYREF
  void *v59; // [rsp+140h] [rbp-A8h] BYREF
  void *Src; // [rsp+148h] [rbp-A0h]
  char v61; // [rsp+150h] [rbp-98h]
  char v62; // [rsp+151h] [rbp-97h] BYREF

  v5 = Length;
  memset(v58, 0, sizeof(v58));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v58, 0x20000u);
  v30 = 0;
  v31 = 0;
  v34 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  Src = 0LL;
  v61 = 0;
  v40[1] = v40;
  v40[0] = v40;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v32 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
LABEL_57:
    v29 = v10;
    goto LABEL_58;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( CmpTraceRoutine
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &Object,
           0LL) >= 0 )
    {
      v39 = *((_QWORD *)Object + 1);
      ObfDereferenceObject(Object);
    }
    v10 = -1073741811;
    goto LABEL_57;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v12 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v13 || v13 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v12 = *(_BYTE *)v12;
          v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v12 != v14 );
      }
    }
    v15 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  v36 = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
  v10 = ObReferenceObjectByHandle(KeyHandle, v36, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v35, &HandleInformation);
  v16 = v35;
  v34 = v35;
  v29 = v10;
  if ( v10 >= 0 )
  {
    if ( *(_DWORD *)v35 != 1803104306 )
    {
      if ( KeyInformationClass != KeyCachedInformation )
      {
        v10 = -1073741816;
        goto LABEL_57;
      }
      *ResultLength = 40;
      if ( (unsigned int)v5 < 0x28 )
      {
        v10 = -1073741789;
        v29 = -1073741789;
        goto LABEL_58;
      }
      *(_QWORD *)KeyInformation = 0LL;
      *((_QWORD *)KeyInformation + 1) = 0LL;
      *((_QWORD *)KeyInformation + 2) = 0LL;
      *((_QWORD *)KeyInformation + 3) = 0LL;
      *((_QWORD *)KeyInformation + 4) = 0LL;
      *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v16[1] + 88LL);
      goto LABEL_34;
    }
    if ( CmpTraceRoutine )
      v39 = *((_QWORD *)v35 + 1);
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
    {
      v10 = -1073741790;
      goto LABEL_57;
    }
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v31 = 1;
    if ( CmpCallBackCount )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
      v20 = (unsigned __int16 *)v35;
      if ( !IsResourceAcquiredSharedLite )
      {
        v50 = v35;
        LODWORD(v51) = KeyInformationClass;
        v52 = KeyInformation;
        LODWORD(v53) = v5;
        v54 = ResultLength;
        LOBYTE(v19) = 1;
        v21 = CmpCallCallBacksEx(7, (unsigned int)&v50, 0, v19, 22, (__int64)v35, (__int64)v40);
        v10 = v21;
        v29 = v21;
        if ( v21 < 0 )
        {
          if ( v21 != -1073740541 )
            goto LABEL_58;
LABEL_34:
          v10 = 0;
          goto LABEL_57;
        }
        v30 = 1;
      }
    }
    else
    {
      v20 = (unsigned __int16 *)v35;
    }
    if ( KeyInformationClass == KeyHandleTagsInformation )
    {
      *ResultLength = 4;
      if ( (unsigned int)v5 < 4 )
      {
        v10 = -1073741789;
        v29 = -1073741789;
        goto LABEL_58;
      }
      *(_DWORD *)KeyInformation = v20[25];
      goto LABEL_34;
    }
    v10 = CmKeyBodyRemapToVirtualForEnum(&v34, (unsigned __int8)v33, v36, &v38);
    v29 = v10;
    if ( v10 >= 0 )
    {
      v10 = CmpBounceContextStart((__int64)&v59, (unsigned __int64)KeyInformation, v5, (unsigned int)v33, 2);
      v29 = v10;
      if ( v10 >= 0 )
      {
        v22 = CmQueryKey((__int64)v34, (__int64)v38, KeyInformationClass, (unsigned int *)Src, v5, &v37);
        v10 = v22;
        v29 = v22;
        if ( v22 >= 0 || v22 == -1073741789 || v22 == -2147483643 )
        {
          v23 = v37;
          *ResultLength = v37;
          if ( v10 != -1073741789 )
          {
            if ( (unsigned int)v5 < v23 )
              v23 = v5;
            if ( v59 != Src )
              memmove(v59, Src, v23);
          }
        }
      }
    }
  }
LABEL_58:
  if ( v38 )
    ObfDereferenceObject(v38);
  if ( v30 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
    {
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      v45[0] = v34;
      v45[1] = (unsigned int)v10;
      v46 = (unsigned int)v10;
      v45[2] = &v50;
      v43 = v45;
      v44 = 0LL;
      CmpCallCallBacksEx(22, (unsigned int)v45, 0, 0, 22, (__int64)v34, (__int64)v40);
      v10 = v46;
    }
    v29 = v10;
  }
  if ( v31 )
  {
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable++ == -1;
    if ( v25
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v10 = v29;
  }
  if ( v34 )
    ObfDereferenceObject(v34);
  v26 = Src;
  if ( Src && Src != v59 && Src != &v62 )
  {
    if ( (v61 & 1) != 0 )
    {
      ++dword_1403D1E1C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) < (unsigned __int16)word_1403D1E10 )
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
      else
      {
        ++dword_1403D1E20;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1403D1E38)(Src, &CmpBounceBufferLookaside);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v26) = 13;
    CmpTraceRoutine(v26, v58, (unsigned int)v10, (unsigned int)KeyInformationClass, v39, 0LL);
  }
  if ( v32 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v27 = KeGetCurrentThread();
    v25 = v27->KernelApcDisable++ == -1;
    if ( v25
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v29;
  }
  return v10;
}
