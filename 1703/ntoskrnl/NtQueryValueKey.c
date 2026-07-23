/*
 * XREFs of NtQueryValueKey @ 0x1405074B0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     IopProtectSystemPartition @ 0x140825828 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x140831A70 (InitSafeBoot.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  struct _KTHREAD *v22; // rax
  int v23; // r9d
  int v24; // eax
  int ValueKey; // ebx
  PVOID v26; // rdi
  PVOID v27; // rsi
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  struct _KTHREAD *v30; // rax
  __int16 v31; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v32; // rcx
  __int64 v34; // rcx
  void (__fastcall *v35)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  unsigned int Object; // [rsp+20h] [rbp-218h]
  NTSTATUS v39; // [rsp+40h] [rbp-1F8h]
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
  __int128 v50; // [rsp+C0h] [rbp-178h]
  _QWORD *v51; // [rsp+D0h] [rbp-168h]
  __int64 v52; // [rsp+D8h] [rbp-160h]
  _QWORD v53[8]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v54; // [rsp+120h] [rbp-118h] BYREF
  __int128 v55; // [rsp+130h] [rbp-108h] BYREF
  _QWORD v56[10]; // [rsp+140h] [rbp-F8h] BYREF
  LARGE_INTEGER v57[4]; // [rsp+190h] [rbp-A8h] BYREF
  _BYTE v58[64]; // [rsp+1B0h] [rbp-88h] BYREF

  v43 = KeyValueInformationClass;
  v49[1] = KeyValueInformation;
  v49[2] = ResultLength;
  Src[0] = 0LL;
  Src[1] = 0LL;
  memset(v56, 0, 0x48uLL);
  v42 = 0LL;
  memset(v57, 0, 24);
  v45 = 0LL;
  v47 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v57, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v34) = 16;
      CmpTraceRoutine(v34, v57, 3221225865LL, (unsigned int)KeyValueInformationClass, 0LL, 0LL);
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
    v39 = v13;
    if ( v13 >= 0 )
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
        LODWORD(v50) = v14;
        Buffer = ValueName->Buffer;
        *((_QWORD *)&v50 + 1) = Buffer;
        *(_OWORD *)Src = v50;
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
              v39 = -1073741670;
LABEL_61:
              if ( CmpTraceRoutine )
              {
                v37 = v45;
                LOBYTE(v37) = 16;
                CmpTraceRoutine(v37, v57, (unsigned int)v39, (unsigned int)KeyValueInformationClass, v45, Src);
              }
              if ( PoolWithQuotaTag && PoolWithQuotaTag != v58 )
                ExFreePoolWithTag(PoolWithQuotaTag, 0);
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
              return v39;
            }
            v17 = (unsigned __int16)Src[0];
          }
          else
          {
            PoolWithQuotaTag = v58;
            v42 = v58;
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
        v39 = -1073741811;
      }
      else
      {
        for ( i = (unsigned __int16)Src[0]; i && !*((_WORD *)Src[1] + ((unsigned __int64)i >> 1) - 1); LOWORD(Src[0]) = i )
          i -= 2;
      }
      if ( v39 >= 0 )
      {
        v46[1] = v46;
        v46[0] = v46;
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v24 = v39;
        }
        else
        {
          v56[0] = v41;
          v56[1] = Src;
          LODWORD(v56[2]) = KeyValueInformationClass;
          v56[3] = KeyValueInformation;
          LODWORD(v56[4]) = v19;
          v56[5] = ResultLength;
          LOBYTE(v23) = 1;
          v24 = CmpCallCallBacksEx(8, (unsigned int)v56, 0, v23, 23, (__int64)v41, (__int64)v46);
        }
        if ( v24 < 0 )
        {
          if ( v24 == -1073740541 )
            v24 = 0;
          v39 = v24;
        }
        else
        {
          v44 = 0LL;
          ValueKey = CmKeyBodyRemapToVirtualForEnum(&v41, PreviousMode, 1u, &v44);
          v26 = v44;
          if ( ValueKey >= 0
            && (!v44
             || (v54 = *(_OWORD *)Src,
                 ValueKey = CmQueryValueKey(
                              (__int64)v44,
                              (unsigned __int16 *)&v54,
                              KeyValueInformationClass,
                              KeyValueInformation,
                              v19,
                              (int *)ResultLength),
                 ValueKey == -1073741772)) )
          {
            v55 = *(_OWORD *)Src;
            Object = v19;
            v27 = v41;
            ValueKey = CmQueryValueKey(
                         (__int64)v41,
                         (unsigned __int16 *)&v55,
                         KeyValueInformationClass,
                         KeyValueInformation,
                         Object,
                         (int *)ResultLength);
          }
          else
          {
            v27 = v41;
          }
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (_QWORD *)v46[0] != v46 )
          {
            memset(&v53[1], 0, 0x30uLL);
            v53[0] = v27;
            LODWORD(v53[1]) = ValueKey;
            LODWORD(v53[3]) = ValueKey;
            v53[2] = v56;
            v51 = v53;
            v52 = 0LL;
            CmpCallCallBacksEx(23, (unsigned int)v53, 0, 0, 23, (__int64)v27, (__int64)v46);
            ValueKey = v53[3];
          }
          v39 = ValueKey;
          if ( v26 )
            ObfDereferenceObject(v26);
        }
        v28 = KeGetCurrentThread();
        v29 = v28->KernelApcDisable + 1;
        v28->KernelApcDisable = v29;
        if ( !v29
          && ($69CD3F157F9F39B6F7113F2231989901 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
          && !v28->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v28);
        }
      }
      ObfDereferenceObject(v41);
    }
    PoolWithQuotaTag = v42;
    goto LABEL_61;
  }
  v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_80;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v48,
         0LL) < 0 )
  {
    v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_80:
    v36 = 0LL;
    goto LABEL_81;
  }
  v36 = *((_QWORD *)v48 + 1);
  ObfDereferenceObject(v48);
  v35 = (void (__fastcall *)(__int64, LARGE_INTEGER *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_81:
  if ( v35 )
  {
    LOBYTE(v11) = 16;
    v35(v11, v57, 3221225485LL, (unsigned int)KeyValueInformationClass, v36, 0LL);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
