/*
 * XREFs of NtSetValueKey @ 0x14048EDA0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x140455E24 (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     IopStoreSystemPartitionInformation @ 0x1407FA794 (IopStoreSystemPartitionInformation.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140807834 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140810DD4 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     CmpAddDockingInfo @ 0x14081E5F0 (CmpAddDockingInfo.c)
 *     InitSafeBoot @ 0x140831A70 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140832250 (CmpSetNetworkValue.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r14
  unsigned __int8 v11; // r15
  int v12; // r8d
  NTSTATUS v13; // ebx
  unsigned __int16 v14; // dx
  char *v15; // r8
  ULONG v16; // edi
  ULONG v17; // esi
  unsigned int v18; // ebx
  unsigned int v19; // eax
  char *v20; // rsi
  void *v21; // rbx
  struct _KTHREAD *v22; // rax
  int v23; // r9d
  PVOID v24; // rbx
  char v25; // si
  signed int v26; // eax
  int v28; // r8d
  int v29; // eax
  PVOID v30; // rsi
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // [rsp+30h] [rbp-188h]
  NTSTATUS v35; // [rsp+40h] [rbp-178h]
  char v36; // [rsp+44h] [rbp-174h]
  void *Src[2]; // [rsp+50h] [rbp-168h] BYREF
  PVOID Object; // [rsp+60h] [rbp-158h] BYREF
  void *v39; // [rsp+68h] [rbp-150h]
  void *v40; // [rsp+70h] [rbp-148h]
  int v41; // [rsp+78h] [rbp-140h] BYREF
  PVOID P; // [rsp+80h] [rbp-138h]
  ULONG v43; // [rsp+88h] [rbp-130h]
  _BYTE v44[8]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v45; // [rsp+98h] [rbp-120h]
  _QWORD v46[2]; // [rsp+A0h] [rbp-118h] BYREF
  char *v47; // [rsp+B0h] [rbp-108h]
  __int128 v48; // [rsp+C0h] [rbp-F8h]
  _QWORD v49[8]; // [rsp+D0h] [rbp-E8h] BYREF
  LARGE_INTEGER v50[4]; // [rsp+110h] [rbp-A8h] BYREF
  _BYTE v51[64]; // [rsp+130h] [rbp-88h] BYREF

  v43 = TitleIndex;
  v39 = Data;
  memset(v50, 0, 24);
  v45 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v50, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v31) = 14;
      CmpTraceRoutine(v31, v50, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  memset(v49, 0, sizeof(v49));
  Src[0] = 0LL;
  Src[1] = 0LL;
  v40 = 0LL;
  v47 = 0LL;
  v41 = 0;
  v36 = 0;
  P = 0LL;
  v10 = 1;
  v11 = KeGetCurrentThread()->gap0[10];
  v13 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 2, v12, v11, (__int64)&Object, (__int64)v44);
  v35 = v13;
  if ( v13 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v41) )
  {
    v29 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v28, v11, (__int64)&Object, (__int64)v44);
    v13 = v29;
    v35 = v29;
    if ( v29 >= 0 )
    {
      v30 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v30);
        v13 = -1073741790;
        v35 = -1073741790;
      }
    }
    v36 = 1;
  }
  if ( v13 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v45 = *((_QWORD *)Object + 1);
    if ( v11 == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v48) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v48 + 1) = ValueName->Buffer;
      *(_OWORD *)Src = v48;
      WORD1(Src[0]) = v48;
      v14 = v48;
      if ( (_WORD)v48 )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (char *)Src[1] + (unsigned __int16)v48;
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v14 = (unsigned __int16)Src[0];
        }
      }
      v16 = DataSize;
      if ( !DataSize || (unsigned __int64)v39 + DataSize <= 0x7FFFFFFF0000LL && (char *)v39 + DataSize >= v39 )
      {
LABEL_18:
        if ( v14 > 0x7FFFu || ((__int64)Src[0] & 1) != 0 || v16 > 0x7FFFF000 )
        {
          v13 = -1073741811;
          v35 = -1073741811;
        }
        else
        {
          v17 = v14;
          v18 = (v14 + 7) & 0xFFFFFFF8;
          v19 = v18 + v16;
          if ( v18 + v16 < v16 )
          {
            v13 = -1073741811;
            v35 = -1073741811;
          }
          else
          {
            if ( v11 != 1 )
            {
LABEL_57:
              if ( v14 )
              {
                do
                {
                  if ( *((_WORD *)Src[1] + ((unsigned __int64)v14 >> 1) - 1) )
                    break;
                  v32 = v14 == 2;
                  v14 -= 2;
                  LOWORD(Src[0]) = v14;
                }
                while ( !v32 );
              }
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
              {
                v13 = -1073741790;
                v35 = -1073741790;
              }
              else
              {
                v46[1] = v46;
                v46[0] = v46;
                v22 = KeGetCurrentThread();
                --v22->KernelApcDisable;
                if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                {
                  v25 = 1;
                  v26 = v35;
                  v24 = Object;
                }
                else
                {
                  v24 = Object;
                  v49[0] = Object;
                  v49[1] = Src;
                  v49[2] = __PAIR64__(Type, v43);
                  v49[3] = v39;
                  LODWORD(v49[4]) = v16;
                  LOBYTE(v23) = 1;
                  v25 = 1;
                  v26 = CmpCallCallBacksEx(1, (unsigned int)v49, 0, v23, 16, (__int64)Object, (__int64)v46);
                }
                if ( v26 < 0 )
                {
                  if ( v26 == -1073740541 )
                    v26 = 0;
                }
                else
                {
                  if ( v36 )
                  {
                    v26 = CmKeyBodyReplicateToVirtual(&Object, v11, 2LL, &v41);
                    v24 = Object;
                  }
                  if ( v26 >= 0 )
                  {
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v10 = 0;
                    if ( (v44[0] & 4) == 0 )
                      v25 = 0;
                    LOBYTE(v34) = v25;
                    v24 = Object;
                    v26 = CmSetValueKey(Object, Src, Type, v39, v16, KeyHandle, v34);
                  }
                  v26 = CmPostCallbackNotificationEx(16, (__int64)v24, v26, (__int64)v49, 0LL, v46);
                }
                v35 = v26;
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v13 = v35;
              }
              goto LABEL_72;
            }
            if ( !v19 )
            {
              v20 = v47;
              goto LABEL_26;
            }
            if ( v19 <= 0x40 )
              goto LABEL_25;
            if ( v16 <= 0x40 )
            {
              if ( v14 <= 0x40u && v16 < v14 )
                v17 = v16;
            }
            else
            {
              v17 = v18 + v16;
              if ( v14 <= 0x40u )
                v17 = v16;
            }
            if ( !v17 )
            {
LABEL_25:
              v40 = v51;
              v20 = &v51[v18];
              goto LABEL_26;
            }
            P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v17, 0x6E566D43u);
            if ( P )
            {
              v14 = (unsigned __int16)Src[0];
              if ( v17 == v16 )
              {
                v40 = v51;
                v20 = (char *)P;
              }
              else
              {
                v40 = P;
                if ( v17 == LOWORD(Src[0]) )
                  v20 = v51;
                else
                  v20 = (char *)P + v18;
              }
LABEL_26:
              if ( v14 )
              {
                v21 = v40;
                memmove(v40, Src[1], v14);
                Src[1] = v21;
                v14 = (unsigned __int16)Src[0];
              }
              else
              {
                Src[1] = 0LL;
              }
              if ( v16 )
              {
                memmove(v20, v39, v16);
                v39 = v20;
                v14 = (unsigned __int16)Src[0];
              }
              else
              {
                v39 = 0LL;
              }
              goto LABEL_57;
            }
            v13 = -1073741670;
            v35 = -1073741670;
          }
        }
LABEL_72:
        ObfDereferenceObject(Object);
        goto LABEL_73;
      }
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v40 = 0LL;
      v16 = DataSize;
    }
    v14 = (unsigned __int16)Src[0];
    goto LABEL_18;
  }
LABEL_73:
  if ( CmpTraceRoutine )
  {
    v33 = v45;
    LOBYTE(v33) = 14;
    CmpTraceRoutine(v33, v50, (unsigned int)v13, 0LL, v45, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v35;
  }
  return v13;
}
