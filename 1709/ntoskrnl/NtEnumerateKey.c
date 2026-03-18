/*
 * XREFs of NtEnumerateKey @ 0x140481BE0
 * Callers:
 *     AdtpObjsInitialize @ 0x1405D1148 (AdtpObjsInitialize.c)
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
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
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
  bool v21; // zf
  struct _KTHREAD *v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  ULONG HandleInformation; // [rsp+28h] [rbp-160h]
  PVOID v29; // [rsp+48h] [rbp-140h] BYREF
  ULONG v30; // [rsp+50h] [rbp-138h]
  KEY_INFORMATION_CLASS v31; // [rsp+58h] [rbp-130h]
  PVOID v32; // [rsp+60h] [rbp-128h] BYREF
  __int64 v33; // [rsp+68h] [rbp-120h]
  _QWORD v34[2]; // [rsp+70h] [rbp-118h] BYREF
  __int64 v35; // [rsp+80h] [rbp-108h]
  PVOID v36; // [rsp+88h] [rbp-100h] BYREF
  PVOID Object[5]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v38[7]; // [rsp+B8h] [rbp-D0h] BYREF
  _QWORD v39[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v40[3]; // [rsp+130h] [rbp-58h] BYREF

  v30 = Index;
  v31 = KeyInformationClass;
  Object[1] = KeyInformation;
  Object[2] = ResultLength;
  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  v33 = 0LL;
  v35 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v40, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( (unsigned int)KeyInformationClass > KeyFullInformation )
    {
      if ( CmpTraceRoutine
        && KeyHandle
        && ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v36,
             0LL) >= 0 )
      {
        v25 = *((_QWORD *)v36 + 1);
        ObfDereferenceObject(v36);
      }
      else
      {
        v25 = 0LL;
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v11) = 17;
        CmpTraceRoutine(v11, v40, 3221225485LL, Index, v25, 0LL);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return -1073741811;
    }
    else
    {
      v12 = KeGetCurrentThread()->gap0[10];
      v13 = ObReferenceObjectByHandle(KeyHandle, 8u, (POBJECT_TYPE)CmKeyObjectType, v12, Object, 0LL);
      v29 = Object[0];
      if ( v13 >= 0 && *(_DWORD *)Object[0] != 1803104306 )
      {
        v13 = -1073741816;
        ObfDereferenceObject(Object[0]);
        v29 = 0LL;
      }
      if ( v13 >= 0 )
      {
        if ( CmpTraceRoutine && v29 )
        {
          v33 = *((_QWORD *)v29 + 1);
          v35 = v33;
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
        v34[1] = v34;
        v34[0] = v34;
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
        {
          v39[0] = v29;
          v39[1] = __PAIR64__(KeyInformationClass, Index);
          v39[2] = KeyInformation;
          LODWORD(v39[3]) = v14;
          v39[4] = ResultLength;
          LOBYTE(v17) = 1;
          v13 = CmpCallCallBacksEx(5, (unsigned int)v39, 0, v17, 20, (__int64)v29, (__int64)v34);
        }
        if ( v13 < 0 )
        {
          if ( v13 == -1073740541 )
            v13 = 0;
        }
        else
        {
          v32 = 0LL;
          v13 = CmKeyBodyRemapToVirtualForEnum(&v29, v12, 8LL, &v32);
          if ( v13 < 0 )
          {
            v19 = v29;
            v18 = v32;
          }
          else
          {
            HandleInformation = v14;
            v18 = v32;
            v19 = v29;
            v13 = CmEnumerateKey(
                    (_DWORD)v29,
                    (_DWORD)v32,
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
            && (_QWORD *)v34[0] != v34 )
          {
            memset(&v38[1], 0, 0x30uLL);
            v38[0] = v19;
            LODWORD(v38[1]) = v13;
            LODWORD(v38[3]) = v13;
            v38[2] = v39;
            Object[3] = v38;
            Object[4] = 0LL;
            CmpCallCallBacksEx(20, (unsigned int)v38, 0, 0, 20, (__int64)v19, (__int64)v34);
            v13 = v38[3];
          }
        }
        v20 = KeGetCurrentThread();
        v21 = v20->KernelApcDisable++ == -1;
        if ( v21
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
          && !v20->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v20);
        }
        ObfDereferenceObject(v29);
      }
      if ( CmpTraceRoutine )
      {
        v26 = v33;
        LOBYTE(v26) = 17;
        CmpTraceRoutine(v26, v40, (unsigned int)v13, Index, v33, 0LL);
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      v22 = KeGetCurrentThread();
      v21 = v22->KernelApcDisable++ == -1;
      if ( v21
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v22);
      }
      return v13;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v24) = 17;
      CmpTraceRoutine(v24, v40, 3221225865LL, Index, 0LL, 0LL);
    }
    return -1073741431;
  }
}
