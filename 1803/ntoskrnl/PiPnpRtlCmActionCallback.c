/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x140504E60
 * Callers:
 *     <none>
 * Callees:
 *     _CmDevicePropertyRead @ 0x14006E058 (_CmDevicePropertyRead.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _CmClassPropertyRead @ 0x1401465E8 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x140146690 (_CmDevicePropertyWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     McTemplateK0zjqq @ 0x14023B6DC (McTemplateK0zjqq.c)
 *     _CmClassPropertyWrite @ 0x1402C7ED0 (_CmClassPropertyWrite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405040D0 (PiDmListEnumObjectsWithCallback.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14050545C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140506908 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405069E4 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140508230 (PiPnpRtlCacheObjectBaseKey.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1405BE3C8 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1405BE6D8 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x1405BE994 (PiDmGetCmObjectListFromCache.c)
 *     _CmGetInstallerClassRegProp @ 0x1405CD588 (_CmGetInstallerClassRegProp.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     PiDmAddCacheReferenceForObject @ 0x1405D4DD0 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E065C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1405E06C0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x1405E6AD0 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E7654 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x1405E8AC4 (PnpIsValidGuidString.c)
 *     PiDmListAddObject @ 0x1405EA250 (PiDmListAddObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140728780 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1407287C4 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140728824 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407288E0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140728A34 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140728CDC (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x140728E5C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140728FBC (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
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
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  void *v37; // rdi
  int v38; // eax
  PVOID v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  void *v43; // rcx
  __int64 v44; // r14
  __int64 v45; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v47; // rbx
  int v48; // edi
  __int64 v49; // r8
  __int64 v50; // r9
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
  int v63; // eax
  int v64; // eax
  int Object; // r14d
  PVOID v66; // rdi
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  _QWORD *v71; // rbx
  __int64 v72; // rdx
  char v73; // [rsp+50h] [rbp-B0h] BYREF
  char v74[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int Size; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size_4; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h] BYREF
  void *v78; // [rsp+68h] [rbp-98h] BYREF
  void *v79; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  void *v81; // [rsp+80h] [rbp-80h] BYREF
  PVOID v82; // [rsp+88h] [rbp-78h] BYREF
  void *v83; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v84[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v89[3]; // [rsp+C8h] [rbp-38h] BYREF
  char v90; // [rsp+E0h] [rbp-20h]
  _QWORD v91[3]; // [rsp+E8h] [rbp-18h] BYREF
  char v92; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  GUID Guid; // [rsp+118h] [rbp+18h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 >= 0 )
          {
            v67 = *(_QWORD **)(a6 + 8);
            v68 = v67[1];
            if ( v68 )
            {
              if ( *v67 )
              {
                PiDmListRemoveObject(4LL, v68, *v67, v74);
                if ( v74[0] )
                  PiDmListRemoveList(v69, v67[1], v70, *v67);
              }
            }
            PiPnpRtlFreePanelRemoveInfo(v67);
          }
        }
        else if ( a3 == 6 && *(int *)a6 >= 0 )
        {
          v71 = *(_QWORD **)(a6 + 8);
          v72 = v71[1];
          if ( v72 && *v71 )
            PiDmListRemoveObject(6LL, v72, *v71, (char *)&Size_4 + 1);
          PiPnpRtlFreePanelRemoveInfo(v71);
        }
        return 0;
      }
      if ( a3 == 5 )
      {
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v87);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v53 = v87;
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v88);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v53 = v88;
      }
      goto LABEL_118;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
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
      {
LABEL_31:
        *(_DWORD *)a6 = FilteredDeviceInterfaceList;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      memset(v89, 0, a3 + 27);
      v82 = 0LL;
      Object = PiDmGetObject(5LL, a2, &v82);
      if ( Object < 0 )
        goto LABEL_163;
      v66 = v82;
      v89[1] = *(_QWORD *)(a6 + 24);
      v89[2] = *(_QWORD *)(a6 + 32);
      v89[0] = a1;
      do
      {
        v90 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   4,
                   (ULONG_PTR)v66,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v89);
      }
      while ( Object >= 0 && v90 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      memset(v91, 0, a3 + 26);
      v83 = 0LL;
      Object = PiDmGetObject(6LL, a2, &v83);
      if ( Object < 0 )
        goto LABEL_163;
      v66 = v83;
      v91[1] = *(_QWORD *)(a6 + 24);
      v91[2] = *(_QWORD *)(a6 + 32);
      v91[0] = a1;
      do
      {
        v92 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   6,
                   (ULONG_PTR)v66,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v91);
      }
      while ( Object >= 0 && v92 );
    }
    if ( v66 )
      PiDmObjectRelease(v66);
LABEL_163:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      v78 = 0LL;
      v37 = 0LL;
      v73 = 0;
      v38 = PiDmGetObject(5LL, a2, &P);
      v39 = P;
      if ( v38 >= 0 )
      {
        v40 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v78);
        v37 = v78;
        if ( v40 >= 0 )
        {
          PiDmListAddObject(4LL, v39, v78, &v73);
          if ( !v73 )
            PiDmListAddList(v41, v39, v42, v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      v81 = 0LL;
      v79 = 0LL;
      v37 = 0LL;
      v63 = PiDmGetObject(6LL, a2, &v81);
      v39 = v81;
      if ( v63 >= 0 )
      {
        v64 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v79);
        v37 = v79;
        if ( v64 >= 0 )
          PiDmListAddObject(6LL, v39, v79, &Size_4);
      }
    }
    if ( v39 )
      PiDmObjectRelease(v39);
    if ( !v37 )
      return 0;
    v43 = v37;
    goto LABEL_99;
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
      v35 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v35, v36);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v44 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v44, v45, &BugCheckParameter2) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v47 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v48 = *(_DWORD *)(v47 + 32);
    *(_DWORD *)(v47 + 32) = v48 | 1;
    ExReleasePushLockEx(v47, 0LL, v49, v50);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( (v48 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v44, a2);
    v43 = (void *)BugCheckParameter2;
LABEL_99:
    PiDmObjectRelease(v43);
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
          v86 = MEMORY[0xFFFFF78000000014];
          PnpSetObjectProperty(
            a1,
            (_DWORD)v54 + 4,
            2,
            0LL,
            (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
            16,
            (__int64)&v86,
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
      v53 = v84[1];
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v85);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v53 = v85;
    }
LABEL_118:
    *(_QWORD *)(a6 + 8) = v53;
    return v9;
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
        v32 = *(_QWORD **)(a6 + 8);
        if ( *v32 )
        {
          v33 = v32[1];
          if ( v33 )
            PiDmListRemoveObject(5LL, v33, *v32, 0LL);
          v34 = v32[2];
          if ( v34 )
            PiDmListAddObject(5LL, v34, *v32, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v32);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, HIDWORD(Size_4) = 0, Size = 0, !v20)
       || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_54:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_55:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v31 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, v84);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = v84[0];
          return v9;
        }
        goto LABEL_31;
      }
      v51 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v51);
      v27 = (v9 & 0x80000000) != 0;
LABEL_50:
      if ( v27 )
        return v9;
      goto LABEL_55;
    }
    Size = *(_DWORD *)(a6 + 40);
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
                          (__int64)&Size_4 + 4,
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
LABEL_66:
        v9 = 0;
LABEL_47:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
        v27 = (v9 & 0x80000000) != 0;
        if ( v9 )
          goto LABEL_50;
        goto LABEL_54;
      }
      v52 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v52 - 1) > 0x24 || !CmClassPropertyRead(v52) || CmClassPropertyWrite(v52) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v52,
                          (__int64)&Size_4 + 4,
                          (__int64)PoolWithTag,
                          (__int64)&Size);
LABEL_42:
        v26 = DeviceRegProp;
        if ( (DeviceRegProp < 0
           || HIDWORD(Size_4) != *(_DWORD *)(a6 + 28)
           || Size != *(_DWORD *)(a6 + 40)
           || memcmp(PoolWithTag, *(const void **)(a6 + 32), Size))
          && (v26 != -1073741275 || *(_DWORD *)(a6 + 40))
          && v26 != -1073741790 )
        {
          goto LABEL_66;
        }
LABEL_46:
        *(_DWORD *)a6 = v26;
        v9 = -1073741536;
        goto LABEL_47;
      }
    }
    v26 = -1073741790;
    goto LABEL_46;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 >= 0 )
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
    else if ( *(_DWORD *)a6 == -1073741275 )
    {
      PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
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
