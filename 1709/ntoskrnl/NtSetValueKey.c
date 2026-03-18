/*
 * XREFs of NtSetValueKey @ 0x14047AFF0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x140592BA8 (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140839930 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x14083CD84 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x14083CDF0 (CmpSetSystemValues.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     CmpAddDockingInfo @ 0x14083D5A0 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140844774 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140868964 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x140869144 (CmpSetNetworkValue.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v11; // r14
  unsigned __int8 v12; // r15
  void *v13; // r8
  NTSTATUS v14; // ebx
  unsigned __int16 v15; // dx
  char *v16; // r8
  ULONG v17; // edi
  ULONG v18; // esi
  unsigned int v19; // ebx
  unsigned int v20; // eax
  char *v21; // rsi
  void *v22; // rbx
  struct _KTHREAD *v23; // rax
  int v24; // r9d
  int v25; // ebx
  int v26; // eax
  __int64 v28; // rcx
  void *v29; // r8
  PVOID v30; // rsi
  bool v31; // zf
  void **v32; // rcx
  int v33; // [rsp+30h] [rbp-188h]
  NTSTATUS v34; // [rsp+40h] [rbp-178h]
  char v35; // [rsp+44h] [rbp-174h]
  void *Src[2]; // [rsp+50h] [rbp-168h] BYREF
  PVOID Object; // [rsp+60h] [rbp-158h] BYREF
  __int64 v38; // [rsp+68h] [rbp-150h]
  void *v39; // [rsp+70h] [rbp-148h]
  void *v40; // [rsp+78h] [rbp-140h]
  int v41; // [rsp+80h] [rbp-138h] BYREF
  PVOID P; // [rsp+88h] [rbp-130h]
  ULONG v43; // [rsp+90h] [rbp-128h]
  struct _OBJECT_HANDLE_INFORMATION v44; // [rsp+98h] [rbp-120h] BYREF
  _QWORD v45[2]; // [rsp+A0h] [rbp-118h] BYREF
  char *v46; // [rsp+B0h] [rbp-108h]
  __int128 v47; // [rsp+C0h] [rbp-F8h]
  _QWORD v48[8]; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v49[4]; // [rsp+110h] [rbp-A8h] BYREF
  _BYTE v50[64]; // [rsp+130h] [rbp-88h] BYREF

  v43 = TitleIndex;
  v39 = Data;
  memset(v49, 0, 24);
  v9 = 0LL;
  v38 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v49, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v28) = 14;
      CmpTraceRoutine(v28, v49, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  memset(v48, 0, sizeof(v48));
  Src[0] = 0LL;
  Src[1] = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  v41 = 0;
  v35 = 0;
  P = 0LL;
  v11 = 1;
  v12 = KeGetCurrentThread()->gap0[10];
  v14 = CmObReferenceObjectByHandle(KeyHandle, 2u, v13, v12, &Object, &v44);
  v34 = v14;
  if ( v14 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v41) )
  {
    v14 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v29, v12, &Object, &v44);
    v34 = v14;
    if ( v14 >= 0 )
    {
      v30 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v30);
        v14 = -1073741790;
        v34 = -1073741790;
      }
      v9 = v38;
    }
    v35 = 1;
  }
  if ( v14 >= 0 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Object )
      {
        v9 = *((_QWORD *)Object + 1);
        v38 = v9;
      }
      else
      {
        v9 = v38;
      }
    }
    if ( v12 == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v47) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v47 + 1) = ValueName->Buffer;
      *(_OWORD *)Src = v47;
      WORD1(Src[0]) = v47;
      v15 = v47;
      if ( (_WORD)v47 )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (char *)Src[1] + (unsigned __int16)v47;
        if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Src[1] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v15 = (unsigned __int16)Src[0];
        }
      }
      v17 = DataSize;
      if ( !DataSize || (unsigned __int64)v39 + DataSize <= 0x7FFFFFFF0000LL && (char *)v39 + DataSize >= v39 )
      {
LABEL_18:
        if ( v15 > 0x7FFFu || ((__int64)Src[0] & 1) != 0 || v17 > 0x7FFFF000 )
        {
          v14 = -1073741811;
          v34 = -1073741811;
        }
        else
        {
          v18 = v15;
          v19 = (v15 + 7) & 0xFFFFFFF8;
          v20 = v19 + v17;
          if ( v19 + v17 < v17 )
          {
            v14 = -1073741811;
            v34 = -1073741811;
            v9 = v38;
          }
          else
          {
            if ( v12 != 1 )
            {
LABEL_57:
              if ( v15 )
              {
                do
                {
                  if ( *((_WORD *)Src[1] + ((unsigned __int64)v15 >> 1) - 1) )
                    break;
                  v31 = v15 == 2;
                  v15 -= 2;
                  LOWORD(Src[0]) = v15;
                }
                while ( !v31 );
              }
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
              {
                v14 = -1073741790;
                v34 = -1073741790;
              }
              else
              {
                v45[1] = v45;
                v45[0] = v45;
                v23 = KeGetCurrentThread();
                --v23->KernelApcDisable;
                if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
                {
                  v26 = v34;
                  v25 = (int)Object;
                }
                else
                {
                  v25 = (int)Object;
                  v48[0] = Object;
                  v48[1] = Src;
                  v48[2] = __PAIR64__(Type, v43);
                  v48[3] = v39;
                  LODWORD(v48[4]) = v17;
                  LOBYTE(v24) = 1;
                  v26 = CmpCallCallBacksEx(1, (unsigned int)v48, 0, v24, 16, (__int64)Object, (__int64)v45);
                }
                if ( v26 < 0 )
                {
                  if ( v26 == -1073740541 )
                    v26 = 0;
                }
                else
                {
                  if ( v35 )
                  {
                    v26 = CmKeyBodyReplicateToVirtual(&Object, v12, 2LL, &v41);
                    v25 = (int)Object;
                  }
                  if ( v26 >= 0 )
                  {
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                    v11 = 0;
                    LOBYTE(v33) = (v44.HandleAttributes & 4) != 0;
                    v25 = (int)Object;
                    v26 = CmSetValueKey(Object, Src, Type, v39, v17, KeyHandle, v33);
                  }
                  v26 = CmPostCallbackNotificationEx(16, v25, v26, (unsigned int)v48, 0LL, (__int64)v45);
                }
                v34 = v26;
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v14 = v34;
              }
              v9 = v38;
              goto LABEL_71;
            }
            if ( !v20 )
            {
              v21 = v46;
              goto LABEL_26;
            }
            if ( v20 <= 0x40 )
              goto LABEL_25;
            if ( v17 <= 0x40 )
            {
              if ( v15 <= 0x40u && v17 < v15 )
                v18 = v17;
            }
            else
            {
              v18 = v19 + v17;
              if ( v15 <= 0x40u )
                v18 = v17;
            }
            if ( !v18 )
            {
LABEL_25:
              v40 = v50;
              v21 = &v50[v19];
              goto LABEL_26;
            }
            P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v18, 0x6E566D43u);
            if ( P )
            {
              v15 = (unsigned __int16)Src[0];
              if ( v18 == v17 )
              {
                v40 = v50;
                v21 = (char *)P;
              }
              else
              {
                v40 = P;
                if ( v18 == LOWORD(Src[0]) )
                  v21 = v50;
                else
                  v21 = (char *)P + v19;
              }
LABEL_26:
              if ( v15 )
              {
                v22 = v40;
                memmove(v40, Src[1], v15);
                Src[1] = v22;
                v15 = (unsigned __int16)Src[0];
              }
              else
              {
                Src[1] = 0LL;
              }
              if ( v17 )
              {
                memmove(v21, v39, v17);
                v39 = v21;
                v15 = (unsigned __int16)Src[0];
              }
              else
              {
                v39 = 0LL;
              }
              goto LABEL_57;
            }
            v14 = -1073741670;
            v34 = -1073741670;
            v9 = v38;
          }
        }
LABEL_71:
        ObfDereferenceObject(Object);
        goto LABEL_72;
      }
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v40 = 0LL;
      v17 = DataSize;
    }
    v15 = (unsigned __int16)Src[0];
    goto LABEL_18;
  }
LABEL_72:
  if ( CmpTraceRoutine )
  {
    v32 = Src;
    LOBYTE(v32) = 14;
    CmpTraceRoutine(v32, v49, (unsigned int)v14, 0LL, v9, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v34;
  }
  return v14;
}
