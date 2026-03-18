/*
 * XREFs of NtQueryValueKey @ 0x1404A8B80
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 *     CmpSetSystemValues @ 0x14083CDF0 (CmpSetSystemValues.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x1408570AC (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140868964 (InitSafeBoot.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v13; // ebx
  int v14; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int16 v17; // ax
  _BYTE *PoolWithQuotaTag; // rbx
  ULONG v19; // esi
  __int64 v20; // rcx
  unsigned __int16 i; // cx
  KEY_VALUE_INFORMATION_CLASS v22; // r12d
  struct _KTHREAD *v23; // rax
  int v24; // r9d
  int v25; // eax
  int ValueKey; // ebx
  PVOID v27; // rdi
  PVOID v28; // rsi
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  struct _KTHREAD *v31; // rax
  $B476B70DB57F76B110DA5B9238C3E934 *v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  ULONG Object; // [rsp+20h] [rbp-218h]
  NTSTATUS v38; // [rsp+40h] [rbp-1F8h]
  void *Src[2]; // [rsp+50h] [rbp-1E8h] BYREF
  PVOID v41; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE *v42; // [rsp+68h] [rbp-1D0h]
  KEY_VALUE_INFORMATION_CLASS v43; // [rsp+70h] [rbp-1C8h]
  PVOID v44; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v45; // [rsp+80h] [rbp-1B8h]
  _QWORD v46[2]; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v47; // [rsp+98h] [rbp-1A0h]
  PVOID v48; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v49[3]; // [rsp+A8h] [rbp-190h] BYREF
  PVOID v50; // [rsp+C0h] [rbp-178h] BYREF
  void **v51; // [rsp+C8h] [rbp-170h]
  __int64 v52; // [rsp+D0h] [rbp-168h]
  PVOID v53; // [rsp+D8h] [rbp-160h]
  __int64 v54; // [rsp+E0h] [rbp-158h]
  PULONG v55; // [rsp+E8h] [rbp-150h]
  __int64 v56; // [rsp+F0h] [rbp-148h]
  __int64 v57; // [rsp+F8h] [rbp-140h]
  __int64 v58; // [rsp+100h] [rbp-138h]
  _QWORD v59[3]; // [rsp+110h] [rbp-128h] BYREF
  __int64 v60; // [rsp+128h] [rbp-110h]
  __int64 v61; // [rsp+130h] [rbp-108h]
  __int64 v62; // [rsp+138h] [rbp-100h]
  __int64 v63; // [rsp+140h] [rbp-F8h]
  __int128 v64; // [rsp+150h] [rbp-E8h]
  _QWORD *v65; // [rsp+160h] [rbp-D8h]
  __int64 v66; // [rsp+168h] [rbp-D0h]
  __int128 v67; // [rsp+170h] [rbp-C8h] BYREF
  __int128 v68; // [rsp+180h] [rbp-B8h] BYREF
  __int64 v69[4]; // [rsp+190h] [rbp-A8h] BYREF
  _BYTE v70[64]; // [rsp+1B0h] [rbp-88h] BYREF

  v43 = KeyValueInformationClass;
  v49[1] = KeyValueInformation;
  v49[2] = ResultLength;
  Src[0] = 0LL;
  Src[1] = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v42 = 0LL;
  memset(v69, 0, 24);
  v45 = 0LL;
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v69, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v34) = 16;
      CmpTraceRoutine(v34, v69, 3221225865LL, (unsigned int)KeyValueInformationClass, 0LL, 0LL);
    }
    return -1073741431;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformationAlign64 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v49, 0LL);
    v41 = v49[0];
    if ( v13 >= 0 && *(_DWORD *)v49[0] != 1803104306 )
    {
      v13 = -1073741816;
      ObfDereferenceObject(v49[0]);
      v41 = 0LL;
    }
    v38 = v13;
    if ( v13 < 0 )
    {
      v22 = KeyValueInformationClass;
    }
    else
    {
      if ( CmpTraceRoutine && v41 )
      {
        v45 = *((_QWORD *)v41 + 1);
        v47 = v45;
      }
      if ( PreviousMode == 1 )
      {
        if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
          ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
        v14 = *(_DWORD *)&ValueName->Length;
        LODWORD(v64) = v14;
        Buffer = ValueName->Buffer;
        *((_QWORD *)&v64 + 1) = Buffer;
        *(_OWORD *)Src = v64;
        if ( (_WORD)v14 )
        {
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = (unsigned __int64)Buffer + (unsigned __int16)v14;
          if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)Buffer )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v17 = (unsigned __int16)Src[0];
        if ( LOWORD(Src[0]) )
        {
          if ( LOWORD(Src[0]) > 0x40u )
          {
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x6E764D43u);
            v42 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v38 = -1073741670;
              v22 = KeyValueInformationClass;
LABEL_61:
              if ( CmpTraceRoutine )
              {
                v36 = v45;
                LOBYTE(v36) = 16;
                CmpTraceRoutine(v36, v69, (unsigned int)v38, (unsigned int)v22, v45, Src);
              }
              if ( PoolWithQuotaTag && PoolWithQuotaTag != v70 )
                ExFreePoolWithTag(PoolWithQuotaTag, 0);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              v31 = KeGetCurrentThread();
              v30 = v31->KernelApcDisable++ == -1;
              if ( v30 )
              {
                v32 = &v31->152;
                if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v32->ApcState.ApcListHead[0].Flink != v32
                  && !v31->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery((__int64)v32);
                }
              }
              return v38;
            }
            v17 = (unsigned __int16)Src[0];
          }
          else
          {
            PoolWithQuotaTag = v70;
            v42 = v70;
          }
          memmove(PoolWithQuotaTag, Src[1], v17);
          Src[1] = PoolWithQuotaTag;
          v17 = (unsigned __int16)Src[0];
        }
        WORD1(Src[0]) = v17;
        v19 = Length;
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
        v20 = (__int64)ResultLength;
        if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v20 = *(_DWORD *)v20;
      }
      else
      {
        *(UNICODE_STRING *)Src = *ValueName;
        v19 = Length;
      }
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        v38 = -1073741811;
      }
      else
      {
        for ( i = (unsigned __int16)Src[0]; i && !*((_WORD *)Src[1] + ((unsigned __int64)i >> 1) - 1); LOWORD(Src[0]) = i )
          i -= 2;
      }
      if ( v38 < 0 )
      {
        v22 = KeyValueInformationClass;
      }
      else
      {
        v46[1] = v46;
        v46[0] = v46;
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v25 = v38;
        }
        else
        {
          v50 = v41;
          v51 = Src;
          LODWORD(v52) = KeyValueInformationClass;
          v53 = KeyValueInformation;
          LODWORD(v54) = v19;
          v55 = ResultLength;
          LOBYTE(v24) = 1;
          v25 = CmpCallCallBacksEx(8, (unsigned int)&v50, 0, v24, 23, (__int64)v41, (__int64)v46);
        }
        if ( v25 < 0 )
        {
          if ( v25 == -1073740541 )
            v25 = 0;
          v38 = v25;
          v22 = KeyValueInformationClass;
        }
        else
        {
          v44 = 0LL;
          ValueKey = CmKeyBodyRemapToVirtualForEnum((__int64 *)&v41, PreviousMode, 1u, (__int64 *)&v44);
          v27 = v44;
          v22 = KeyValueInformationClass;
          if ( ValueKey >= 0
            && (!v44
             || (v67 = *(_OWORD *)Src,
                 ValueKey = CmQueryValueKey(
                              (_DWORD)v44,
                              (unsigned int)&v67,
                              KeyValueInformationClass,
                              (_DWORD)KeyValueInformation,
                              v19,
                              (__int64)ResultLength),
                 ValueKey == -1073741772)) )
          {
            v68 = *(_OWORD *)Src;
            Object = v19;
            v28 = v41;
            ValueKey = CmQueryValueKey(
                         (_DWORD)v41,
                         (unsigned int)&v68,
                         KeyValueInformationClass,
                         (_DWORD)KeyValueInformation,
                         Object,
                         (__int64)ResultLength);
          }
          else
          {
            v28 = v41;
          }
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (_QWORD *)v46[0] != v46 )
          {
            v61 = 0LL;
            v62 = 0LL;
            v63 = 0LL;
            v59[0] = v28;
            v59[1] = (unsigned int)ValueKey;
            v60 = (unsigned int)ValueKey;
            v59[2] = &v50;
            v65 = v59;
            v66 = 0LL;
            CmpCallCallBacksEx(23, (unsigned int)v59, 0, 0, 23, (__int64)v28, (__int64)v46);
            ValueKey = v60;
          }
          v38 = ValueKey;
          if ( v27 )
            ObfDereferenceObject(v27);
        }
        v29 = KeGetCurrentThread();
        v30 = v29->KernelApcDisable++ == -1;
        if ( v30
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
          && !v29->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v29);
        }
      }
      ObfDereferenceObject(v41);
    }
    PoolWithQuotaTag = v42;
    goto LABEL_61;
  }
  if ( CmpTraceRoutine
    && KeyHandle
    && ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v48,
         0LL) >= 0 )
  {
    v35 = *((_QWORD *)v48 + 1);
    ObfDereferenceObject(v48);
  }
  else
  {
    v35 = 0LL;
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v11) = 16;
    CmpTraceRoutine(v11, v69, 3221225485LL, (unsigned int)KeyValueInformationClass, v35, 0LL);
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return -1073741811;
}
