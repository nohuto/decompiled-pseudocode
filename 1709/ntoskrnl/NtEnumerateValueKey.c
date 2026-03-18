/*
 * XREFs of NtEnumerateValueKey @ 0x14047E270
 * Callers:
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int8 v12; // r13
  int v13; // ebx
  _QWORD *v14; // rcx
  ULONG v15; // esi
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  PVOID v19; // rdi
  PVOID v20; // rsi
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  ULONG Object; // [rsp+20h] [rbp-178h]
  int v26; // [rsp+30h] [rbp-168h]
  PVOID v28; // [rsp+58h] [rbp-140h] BYREF
  ULONG v29; // [rsp+60h] [rbp-138h]
  KEY_VALUE_INFORMATION_CLASS v30; // [rsp+68h] [rbp-130h]
  PVOID v31; // [rsp+70h] [rbp-128h] BYREF
  __int64 v32; // [rsp+78h] [rbp-120h]
  _QWORD v33[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v34; // [rsp+90h] [rbp-108h]
  PVOID v35; // [rsp+98h] [rbp-100h] BYREF
  PVOID v36[5]; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v37[7]; // [rsp+C8h] [rbp-D0h] BYREF
  _QWORD v38[8]; // [rsp+100h] [rbp-98h] BYREF
  __int64 v39[3]; // [rsp+140h] [rbp-58h] BYREF

  v29 = Index;
  v30 = KeyValueInformationClass;
  v36[1] = KeyValueInformation;
  v36[2] = ResultLength;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v32 = 0LL;
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v39, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
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
      if ( CmpTraceRoutine )
      {
        LOBYTE(v11) = 18;
        CmpTraceRoutine(v11, v39, 3221225485LL, Index, v23, 0LL);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return -1073741811;
    }
    else
    {
      v12 = KeGetCurrentThread()->gap0[10];
      v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v12, v36, 0LL);
      v14 = v36[0];
      v28 = v36[0];
      if ( v13 >= 0 && *(_DWORD *)v36[0] != 1803104306 )
      {
        v13 = -1073741816;
        ObfDereferenceObject(v36[0]);
        v14 = 0LL;
        v28 = 0LL;
      }
      if ( v13 >= 0 )
      {
        if ( CmpTraceRoutine && v14 )
        {
          v32 = v14[1];
          v34 = v32;
        }
        if ( v12 == 1 )
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
        v33[1] = v33;
        v33[0] = v33;
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v38[0] = v28;
          v38[1] = __PAIR64__(KeyValueInformationClass, Index);
          v38[2] = KeyValueInformation;
          LODWORD(v38[3]) = v15;
          v38[4] = ResultLength;
          LOBYTE(v18) = 1;
          v13 = CmpCallCallBacksEx(6, (unsigned int)v38, 0, v18, 21, (__int64)v28, (__int64)v33);
        }
        if ( v13 < 0 )
        {
          if ( v13 == -1073740541 )
            v13 = 0;
        }
        else
        {
          v31 = 0LL;
          v13 = CmKeyBodyRemapToVirtualForEnum(&v28, v12, 1LL, &v31);
          v19 = v31;
          if ( v13 < 0 )
          {
            v20 = v28;
          }
          else if ( v31 )
          {
            v26 = v15;
            v20 = v28;
            v13 = CmEnumerateValueKeyFromMergedView(
                    (int)v28,
                    (int)v31,
                    0,
                    Index,
                    KeyValueInformationClass,
                    KeyValueInformation,
                    v26,
                    (__int64)ResultLength,
                    0LL);
          }
          else
          {
            Object = v15;
            v20 = v28;
            v13 = CmEnumerateValueKey(
                    v28,
                    Index,
                    (unsigned int)KeyValueInformationClass,
                    KeyValueInformation,
                    Object,
                    ResultLength);
          }
          if ( v19 )
            ObfDereferenceObject(v19);
          if ( CmpCallBackCount
            && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
            && (_QWORD *)v33[0] != v33 )
          {
            memset(&v37[1], 0, 0x30uLL);
            v37[0] = v20;
            LODWORD(v37[1]) = v13;
            LODWORD(v37[3]) = v13;
            v37[2] = v38;
            v36[3] = v37;
            v36[4] = 0LL;
            CmpCallCallBacksEx(21, (unsigned int)v37, 0, 0, 21, (__int64)v20, (__int64)v33);
            v13 = v37[3];
          }
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v28);
      }
      if ( CmpTraceRoutine )
      {
        v24 = v32;
        LOBYTE(v24) = 18;
        CmpTraceRoutine(v24, v39, (unsigned int)v13, Index, v32, 0LL);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v13;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v22) = 18;
      CmpTraceRoutine(v22, v39, 3221225865LL, Index, 0LL, 0LL);
    }
    return -1073741431;
  }
}
