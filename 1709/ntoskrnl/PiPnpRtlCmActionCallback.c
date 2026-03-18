/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x140520F60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _CmClassPropertyRead @ 0x1400DE6D4 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyRead @ 0x1400DED50 (_CmDevicePropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x1400FB5F4 (_CmDevicePropertyWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     memset @ 0x140192F40 (memset.c)
 *     McTemplateK0zjqq @ 0x1401FED6C (McTemplateK0zjqq.c)
 *     _CmClassPropertyWrite @ 0x140292398 (_CmClassPropertyWrite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1405180E4 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmListAddObject @ 0x140518388 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     _CmGetInstallerClassRegProp @ 0x14051D640 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x140521514 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140522B4C (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140522F88 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140526D90 (PiDmListEnumObjectsWithCallback.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14058FF54 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140590270 (PiDmGetCmObjectListFromCache.c)
 *     PiDmListAddList @ 0x1405DF40C (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E70E8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x1405E9788 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x1406C2750 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1406C2794 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1406C27F4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1406C28B0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1406C2A08 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListRemoveList @ 0x1406C2D6C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x1406C2EDC (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  NTSTATUS FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  PVOID PoolWithTag; // r12
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rcx
  int DeviceRegProp; // eax
  int v26; // edi
  bool v27; // sf
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdx
  void *v34; // r8
  ULONG_PTR v35; // rdi
  int v36; // eax
  PVOID v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v41; // rcx
  ULONG_PTR *v42; // rbx
  ULONG_PTR v43; // rdx
  ULONG_PTR v44; // rdx
  unsigned int v45; // r14d
  __int64 v46; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v48; // rbx
  int v49; // edi
  void *v50; // r8
  unsigned int v51; // eax
  int v52; // ecx
  __int64 v53; // rax
  WCHAR *v54; // rdi
  char v55; // al
  __int64 v56; // r8
  char IsNullGuid; // al
  __int64 v58; // r8
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  int Object; // r14d
  PVOID v64; // rdi
  _QWORD *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69[2]; // [rsp+20h] [rbp-B9h]
  PCWSTR SourceString; // [rsp+28h] [rbp-B1h]
  int v71[2]; // [rsp+30h] [rbp-A9h]
  __int64 v72; // [rsp+38h] [rbp-A1h]
  char v73; // [rsp+50h] [rbp-89h] BYREF
  char v74[3]; // [rsp+51h] [rbp-88h] BYREF
  size_t Size; // [rsp+54h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-79h] BYREF
  ULONG_PTR v77; // [rsp+68h] [rbp-71h] BYREF
  PVOID P; // [rsp+70h] [rbp-69h] BYREF
  PVOID v79; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v80[2]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v81; // [rsp+90h] [rbp-49h] BYREF
  __int64 v82; // [rsp+98h] [rbp-41h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v84[4]; // [rsp+A8h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-11h] BYREF
  GUID Guid; // [rsp+D8h] [rbp-1h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
          return v9;
        memset(v84, 0, sizeof(v84));
        v79 = 0LL;
        Object = PiDmGetObject(5LL, a2, &v79);
        if ( Object >= 0 )
        {
          v64 = v79;
          v84[1] = *(_QWORD *)(a6 + 24);
          v84[2] = *(_QWORD *)(a6 + 32);
          v84[0] = a1;
          do
          {
            LOBYTE(v84[3]) = 0;
            Object = PiDmListEnumObjectsWithCallback(
                       3LL,
                       v64,
                       PiPnpRtlEnumDevicesInContainerCallback,
                       v84,
                       *(_QWORD *)v69,
                       SourceString,
                       *(_QWORD *)v71,
                       v72);
          }
          while ( Object >= 0 && LOBYTE(v84[3]) );
          if ( v64 )
            PiDmObjectRelease(v64);
        }
        *(_DWORD *)a6 = Object;
        return (unsigned int)-1073741536;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_30:
      if ( FilteredDeviceInterfaceList != -1073741802 )
        goto LABEL_31;
      return 0;
    }
    if ( a5 != 1 )
    {
      if ( *(int *)a6 >= 0 )
      {
        v65 = *(_QWORD **)(a6 + 8);
        v66 = v65[1];
        if ( v66 )
        {
          if ( *v65 )
          {
            PiDmListRemoveObject(3LL, v66, *v65, v74);
            if ( v74[0] )
              PiDmListRemoveList(v67, v65[1], v68, *v65);
          }
        }
        PiPnpRtlFreeContainerRemoveInfo(v65);
      }
      return 0;
    }
    FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v83);
    v9 = FilteredDeviceInterfaceList;
    if ( FilteredDeviceInterfaceList < 0 )
    {
LABEL_31:
      *(_DWORD *)a6 = FilteredDeviceInterfaceList;
      return (unsigned int)-1073741536;
    }
    v53 = v83;
LABEL_115:
    *(_QWORD *)(a6 + 8) = v53;
    return v9;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 || *(int *)a6 < 0 )
      return 0;
    P = 0LL;
    v77 = 0LL;
    v35 = 0LL;
    v73 = 0;
    v36 = PiDmGetObject(5LL, a2, &P);
    v37 = P;
    if ( v36 >= 0 )
    {
      v38 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v77);
      v35 = v77;
      if ( v38 >= 0 )
      {
        PiDmListAddObject(3u, (ULONG_PTR)v37, v77, (__int64)&v73);
        if ( !v73 )
          PiDmListAddList(v39, v37, v40, v35);
      }
    }
    if ( v37 )
      PiDmObjectRelease(v37);
    if ( !v35 )
      return 0;
    v41 = (void *)v35;
    goto LABEL_80;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v28 = CmMapCmObjectTypeToPnpObjectType(a3);
      v30 = PiDmAddCacheReferenceForObject(v28, v29, 0LL);
      *(_DWORD *)a6 = v30;
      return (v30 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v32 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v32, v33, v34);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v45 = CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v45, v46, &BugCheckParameter2) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v48 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v49 = *(_DWORD *)(v48 + 32);
    *(_DWORD *)(v48 + 32) = v49 | 1;
    ExReleasePushLockEx(v48, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( (v49 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject(v45, (__int64)a2, v50);
    v41 = (void *)BugCheckParameter2;
LABEL_80:
    PiDmObjectRelease(v41);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v54 = *(WCHAR **)(a6 + 8);
        RtlInitUnicodeString(&DestinationString, v54 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          *(_QWORD *)&Guid.Data1 = 0LL;
          *(_QWORD *)Guid.Data4 = 0LL;
        }
        if ( *(int *)a6 < 0 )
        {
          if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x14u) )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjqq(
              (unsigned int)-(IsNullGuid == 0),
              &KMPnPEvt_DeviceDelete_Failure,
              v58,
              a2,
              (unsigned __int64)&Guid & -(__int64)(IsNullGuid == 0),
              *(_DWORD *)v54,
              *(_DWORD *)a6);
          }
        }
        else if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x13u) )
        {
          v55 = PnpIsNullGuid(&Guid);
          McTemplateK0zjqq(
            (unsigned int)-(v55 == 0),
            &KMPnPEvt_DeviceDelete_Success,
            v56,
            a2,
            (unsigned __int64)&Guid & -(__int64)(v55 == 0),
            *(_DWORD *)v54,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 && v54[2] )
        {
          v82 = MEMORY[0xFFFFF78000000014];
          PnpSetObjectProperty(
            a1,
            (_DWORD)v54 + 4,
            2,
            0LL,
            (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
            16,
            (__int64)&v82,
            8,
            0);
        }
        if ( v54 )
          ExFreePoolWithTag(v54, 0x47706E50u);
      }
      else if ( a3 == 3 )
      {
        v59 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v59 )
        {
          v60 = v59[1];
          if ( v60 )
            PiDmListRemoveObject(0LL, v60, *v59, 0LL);
          v61 = v59[2];
          if ( v61 )
            PiDmListRemoveObject(1LL, v61, *v59, 0LL);
          v62 = v59[3];
          if ( v62 )
            PiDmListRemoveObject(2LL, v62, *v59, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v59);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v53 = v80[1];
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v81);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v53 = v81;
    }
    goto LABEL_115;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_30;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v42 = *(ULONG_PTR **)(a6 + 8);
        if ( *v42 )
        {
          v43 = v42[1];
          if ( v43 )
            PiDmListRemoveObject(4LL, v43, *v42, 0LL);
          v44 = v42[2];
          if ( v44 )
            PiDmListAddObject(4u, v44, *v42, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v42);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, Size = 0LL, !v20)
       || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_58:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_59:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v31 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, v80);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = v80[0];
          return v9;
        }
        goto LABEL_31;
      }
      v51 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v51);
      v27 = (v9 & 0x80000000) != 0;
LABEL_49:
      if ( v27 )
        return v9;
      goto LABEL_59;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v22 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v22 - 1) > 0x24 || !CmDevicePropertyRead(a3 - 1, v22) || CmDevicePropertyWrite(v24, v23) )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a2,
                          *(_QWORD *)(a6 + 16),
                          v22,
                          (__int64)&Size + 4,
                          (__int64)PoolWithTag,
                          (__int64)&Size,
                          0);
        goto LABEL_42;
      }
    }
    else
    {
      if ( a3 != 2 )
      {
LABEL_56:
        v9 = 0;
LABEL_46:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
        v27 = (v9 & 0x80000000) != 0;
        if ( v9 )
          goto LABEL_49;
        goto LABEL_58;
      }
      v52 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v52 - 1) > 0x24 || !CmClassPropertyRead(v52) || CmClassPropertyWrite(v52) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a2,
                          *(void **)(a6 + 16),
                          v52,
                          (char *)&Size + 4,
                          PoolWithTag,
                          &Size);
LABEL_42:
        v26 = DeviceRegProp;
        if ( (DeviceRegProp < 0
           || Size != __PAIR64__(*(_DWORD *)(a6 + 28), *(_DWORD *)(a6 + 40))
           || memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size))
          && (v26 != -1073741275 || *(_DWORD *)(a6 + 40))
          && v26 != -1073741790 )
        {
          goto LABEL_56;
        }
LABEL_45:
        *(_DWORD *)a6 = v26;
        v9 = -1073741536;
        goto LABEL_46;
      }
    }
    v26 = -1073741790;
    goto LABEL_45;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                  a3,
                                  (_DWORD)a2,
                                  a3,
                                  *(_DWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_QWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
  if ( FilteredDeviceInterfaceList >= 0
    || FilteredDeviceInterfaceList == -1073741275
    || FilteredDeviceInterfaceList == -1073741789
    || FilteredDeviceInterfaceList == -1073741772 )
  {
    goto LABEL_31;
  }
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = CmMapCmObjectTypeToPnpObjectType(a3);
    PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
  }
  return v9;
}
