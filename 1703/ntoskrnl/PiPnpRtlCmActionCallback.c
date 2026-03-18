/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x140483340
 * Callers:
 *     <none>
 * Callees:
 *     _CmDevicePropertyWrite @ 0x14002FAB0 (_CmDevicePropertyWrite.c)
 *     _CmDevicePropertyRead @ 0x14004C224 (_CmDevicePropertyRead.c)
 *     _CmClassPropertyRead @ 0x1400816C0 (_CmClassPropertyRead.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     memset @ 0x140192D80 (memset.c)
 *     Template_zjqq @ 0x1401F8E68 (Template_zjqq.c)
 *     _CmClassPropertyWrite @ 0x140268044 (_CmClassPropertyWrite.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14044EE88 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x14044F10C (PiDmGetCmObjectListFromCache.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1404846C8 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x140484D1C (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x140484DF8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140485F2C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140488B58 (PiDmListEnumObjectsWithCallback.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E09F0 (_CmGetInstallerClassRegProp.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E4180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E4218 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140599268 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14059A668 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14059B0D0 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x14059B500 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140696B80 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140696BC4 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140696C24 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140696CE0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140696E00 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListRemoveList @ 0x1406975A4 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140697714 (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(
        __int64 a1,
        PCWSTR SourceString,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  int CmObjectListFromCache; // eax
  unsigned int v11; // eax
  __int64 v13; // rsi
  unsigned int v14; // eax
  PVOID PoolWithTag; // r13
  int v16; // r9d
  int v17; // edx
  __int64 v18; // rcx
  int DeviceRegProp; // eax
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  void *v24; // rbx
  int Object; // eax
  PVOID v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // eax
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r14
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v36; // rbx
  int v37; // eax
  bool v38; // di
  unsigned int v39; // eax
  WCHAR *v40; // rbx
  char v41; // al
  __int64 v42; // r8
  GUID *v43; // rdx
  char IsNullGuid; // al
  __int64 v45; // r8
  GUID *p_Guid; // rdx
  _QWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  int v51; // ecx
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // esi
  PVOID v57; // rbx
  __int64 v58; // [rsp+20h] [rbp-B9h]
  PCWSTR SourceStringa; // [rsp+28h] [rbp-B1h]
  char v60; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v61[3]; // [rsp+51h] [rbp-88h] BYREF
  size_t Size; // [rsp+54h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-79h] BYREF
  void *v64; // [rsp+68h] [rbp-71h] BYREF
  PVOID P; // [rsp+70h] [rbp-69h] BYREF
  PVOID v66[2]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v67; // [rsp+88h] [rbp-51h] BYREF
  __int64 v68; // [rsp+90h] [rbp-49h] BYREF
  __int64 v69; // [rsp+98h] [rbp-41h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v71[4]; // [rsp+A8h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-11h] BYREF
  GUID Guid; // [rsp+D8h] [rbp-1h] BYREF

  v9 = -1073741822;
  if ( a4 != 9 )
  {
    if ( a4 >= 11 && a4 < 13 )
      return v9;
    switch ( a4 )
    {
      case 2:
        if ( a5 == 1 )
        {
          v21 = CmMapCmObjectTypeToPnpObjectType(a3);
          v22 = PiDmAddCacheReferenceForObject(v21, SourceString, 0LL);
          *(_DWORD *)a6 = v22;
          if ( v22 < 0 )
            return (unsigned int)-1073741536;
          return 0;
        }
        if ( *(int *)a6 >= 0 && *(_BYTE *)(a6 + 32) )
        {
          BugCheckParameter2 = 0LL;
          v34 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
          if ( (int)PiDmGetObject(v34, SourceString, &BugCheckParameter2) < 0 )
            return 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v36 = BugCheckParameter2;
          ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
          v37 = *(_DWORD *)(v36 + 32);
          v38 = (v37 & 1) != 0;
          *(_DWORD *)(v36 + 32) = v37 | 1;
          ExReleasePushLockEx(v36, 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v38 )
            PiDmRemoveCacheReferenceForObject((unsigned int)v34, SourceString);
          PiDmObjectRelease((PVOID)BugCheckParameter2);
          return 0;
        }
        else
        {
          v30 = CmMapCmObjectTypeToPnpObjectType(a3);
          PiDmRemoveCacheReferenceForObject(v30, SourceString);
          return 0;
        }
      case 3:
        if ( a5 != 1 )
        {
          if ( a3 == 1 )
          {
            v40 = *(WCHAR **)(a6 + 8);
            RtlInitUnicodeString(&DestinationString, v40 + 2);
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
                p_Guid = &Guid;
                if ( IsNullGuid )
                  p_Guid = 0LL;
                Template_zjqq(
                  IsNullGuid == 0,
                  &KMPnPEvt_DeviceDelete_Failure,
                  v45,
                  SourceString,
                  (__int64)p_Guid,
                  *(_DWORD *)v40,
                  *(_DWORD *)a6);
              }
            }
            else if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x13u) )
            {
              v41 = PnpIsNullGuid(&Guid);
              v43 = &Guid;
              if ( v41 )
                v43 = 0LL;
              Template_zjqq(
                v41 == 0,
                &KMPnPEvt_DeviceDelete_Success,
                v42,
                SourceString,
                (__int64)v43,
                *(_DWORD *)v40,
                *(_DWORD *)a6);
            }
            if ( *(int *)a6 >= 0 && v40[2] )
            {
              v68 = MEMORY[0xFFFFF78000000014];
              PnpSetObjectProperty(
                a1,
                (_DWORD)v40 + 4,
                2,
                0LL,
                (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
                16,
                (__int64)&v68,
                8,
                0);
            }
            if ( v40 )
              ExFreePoolWithTag(v40, 0x47706E50u);
          }
          else if ( a3 == 3 )
          {
            v47 = *(_QWORD **)(a6 + 8);
            if ( *(int *)a6 >= 0 && *v47 )
            {
              v48 = v47[1];
              if ( v48 )
                PiDmListRemoveObject(0LL, v48, *v47, 0LL);
              v49 = v47[2];
              if ( v49 )
                PiDmListRemoveObject(1LL, v49, *v47, 0LL);
              v50 = v47[3];
              if ( v50 )
                PiDmListRemoveObject(2LL, v50, *v47, 0LL);
            }
            PiPnpRtlFreeInterfaceDeleteInfo(v47);
          }
          return 0;
        }
        if ( a3 == 1 )
        {
          CmObjectListFromCache = PiPnpRtlGatherDeviceDeleteInfo(SourceString);
          v9 = CmObjectListFromCache;
          if ( CmObjectListFromCache < 0 )
            goto LABEL_23;
          *(PVOID *)(a6 + 8) = v66[1];
        }
        else if ( a3 == 3 )
        {
          CmObjectListFromCache = PiPnpRtlGatherInterfaceDeleteInfo(SourceString, &v67);
          v9 = CmObjectListFromCache;
          if ( CmObjectListFromCache < 0 )
            goto LABEL_23;
          *(_QWORD *)(a6 + 8) = v67;
        }
        return v9;
      case 4:
        if ( a5 == 1 && (*(_DWORD *)(a6 + 56) & 0x10000) == 0 )
        {
          CmObjectListFromCache = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
          goto LABEL_22;
        }
        return v9;
      case 10:
        if ( a5 != 1 )
        {
          if ( *(int *)a6 >= 0 )
          {
            PiDmObjectUpdateCachedCmProperty(
              a3,
              (int)SourceString,
              a3,
              *(_DWORD *)(a6 + 24),
              *(_DWORD *)(a6 + 28),
              *(PCWSTR *)(a6 + 32),
              *(_DWORD *)(a6 + 40));
            if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
            {
              v31 = *(_QWORD **)(a6 + 8);
              if ( *v31 )
              {
                v32 = v31[1];
                if ( v32 )
                  PiDmListRemoveObject(4LL, v32, *v31, 0LL);
                v33 = v31[2];
                if ( v33 )
                  PiDmListAddObject(4LL, v33, *v31, 0LL);
              }
              PiPnpRtlFreeInstallerClassChangeInfo(v31);
            }
            return 0;
          }
          return v9;
        }
        v13 = 0LL;
        v9 = 0;
        if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0 )
          goto LABEL_49;
        v14 = *(_DWORD *)(a6 + 40);
        PoolWithTag = 0LL;
        Size = 0LL;
        if ( !v14 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x47706E50u)) == 0LL )
        {
          if ( *(_DWORD *)(a6 + 40) )
            goto LABEL_49;
        }
        LODWORD(Size) = *(_DWORD *)(a6 + 40);
        if ( a3 == 1 )
        {
          v16 = *(_DWORD *)(a6 + 24);
          if ( (unsigned int)(v16 - 1) <= 0x24 && CmDevicePropertyRead(a3 - 1, v16) && !CmDevicePropertyWrite(v18, v17) )
          {
            v20 = -1073741790;
            goto LABEL_37;
          }
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            (__int64)SourceString,
                            *(_QWORD *)(a6 + 16),
                            v16,
                            (__int64)&Size + 4,
                            (__int64)PoolWithTag,
                            (__int64)&Size,
                            0);
        }
        else
        {
          if ( a3 != 2 )
            goto LABEL_85;
          v51 = *(_DWORD *)(a6 + 24);
          if ( (unsigned int)(v51 - 1) <= 0x24 && CmClassPropertyRead(v51) && !CmClassPropertyWrite(v51) )
          {
            v20 = -1073741790;
            goto LABEL_37;
          }
          DeviceRegProp = CmGetInstallerClassRegProp(
                            PiPnpRtlCtx,
                            (_DWORD)SourceString,
                            *(_QWORD *)(a6 + 16),
                            v51,
                            (__int64)&Size + 4,
                            (__int64)PoolWithTag,
                            (__int64)&Size);
        }
        v20 = DeviceRegProp;
        if ( DeviceRegProp >= 0
          && Size == __PAIR64__(*(_DWORD *)(a6 + 28), *(_DWORD *)(a6 + 40))
          && !memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size) )
        {
          goto LABEL_37;
        }
        if ( v20 == -1073741275 )
        {
          if ( *(_DWORD *)(a6 + 40) )
          {
            v9 = 0;
            goto LABEL_38;
          }
LABEL_37:
          *(_DWORD *)a6 = v20;
          v9 = -1073741536;
          goto LABEL_38;
        }
        if ( v20 == -1073741790 )
          goto LABEL_37;
LABEL_85:
        v9 = 0;
LABEL_38:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
        if ( v9 )
          return v9;
LABEL_49:
        v23 = a6 + 16;
        if ( !*(_QWORD *)(a6 + 16) )
        {
          v39 = CmMapCmObjectTypeToPnpObjectType(a3);
          PiPnpRtlCacheObjectBaseKey(a1, SourceString, v39);
        }
        if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
        {
          if ( *(_DWORD *)(a6 + 28) == 1
            && *(_DWORD *)(a6 + 40) == 78
            && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
          {
            v13 = *(_QWORD *)(a6 + 32);
          }
          CmObjectListFromCache = PiPnpRtlGatherInstallerClassChangeInfo(SourceString, v13, &v69, v23);
          v9 = CmObjectListFromCache;
          if ( CmObjectListFromCache < 0 )
            goto LABEL_23;
          *(_QWORD *)(a6 + 8) = v69;
        }
        return v9;
      case 13:
        if ( a5 == 1 || *(int *)a6 < 0 )
          return 0;
        v24 = 0LL;
        P = 0LL;
        v64 = 0LL;
        v60 = 0;
        Object = PiDmGetObject(5LL, SourceString, &P);
        v26 = P;
        if ( Object >= 0 )
        {
          v27 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v64);
          v24 = v64;
          if ( v27 >= 0 )
          {
            PiDmListAddObject(3LL, v26, v64, &v60);
            if ( !v60 )
              PiDmListAddList(v28, v26, v29, v24);
          }
        }
        if ( v26 )
          PiDmObjectRelease(v26);
        if ( !v24 )
          return 0;
        PiDmObjectRelease(v24);
        return 0;
      case 14:
        if ( a5 != 1 )
        {
          if ( *(int *)a6 < 0 )
            return 0;
          v52 = *(_QWORD **)(a6 + 8);
          v53 = v52[1];
          if ( v53 )
          {
            if ( *v52 )
            {
              PiDmListRemoveObject(3LL, v53, *v52, v61);
              if ( v61[0] )
                PiDmListRemoveList(v54, v52[1], v55, *v52);
            }
          }
          PiPnpRtlFreeContainerRemoveInfo(v52);
          return 0;
        }
        CmObjectListFromCache = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), SourceString, &v70);
        v9 = CmObjectListFromCache;
        if ( CmObjectListFromCache < 0 )
          goto LABEL_23;
        *(_QWORD *)(a6 + 8) = v70;
        return v9;
      case 15:
        if ( a5 == 1 && (*(_DWORD *)(a6 + 40) & 0x10000) == 0 )
        {
          memset(v71, 0, sizeof(v71));
          v66[0] = 0LL;
          v56 = PiDmGetObject(5LL, SourceString, v66);
          if ( v56 >= 0 )
          {
            v57 = v66[0];
            v71[1] = *(_QWORD *)(a6 + 24);
            v71[2] = *(_QWORD *)(a6 + 32);
            v71[0] = a1;
            do
            {
              LOBYTE(v71[3]) = 0;
              v56 = PiDmListEnumObjectsWithCallback(
                      3LL,
                      v57,
                      PiPnpRtlEnumDevicesInContainerCallback,
                      v71,
                      v58,
                      SourceStringa);
            }
            while ( v56 >= 0 && LOBYTE(v71[3]) );
            if ( v57 )
              PiDmObjectRelease(v57);
          }
          *(_DWORD *)a6 = v56;
          return (unsigned int)-1073741536;
        }
        return v9;
      case 16:
        if ( a5 == 1 && (*(_DWORD *)(a6 + 72) & 0x10000) == 0 )
        {
          CmObjectListFromCache = PiPnpRtlGetFilteredDeviceList(a6);
          goto LABEL_22;
        }
        return v9;
      case 17:
        if ( a5 == 1 && (*(_DWORD *)(a6 + 80) & 0x10000) == 0 )
        {
          CmObjectListFromCache = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
LABEL_22:
          if ( CmObjectListFromCache != -1073741802 )
            goto LABEL_23;
          return 0;
        }
        return v9;
      default:
        return v9;
    }
  }
  if ( a5 == 1 )
  {
    if ( (*(_DWORD *)(a6 + 56) & 0x10000) == 0 )
    {
      CmObjectListFromCache = PiDmObjectGetCachedCmProperty(
                                a3,
                                (_DWORD)SourceString,
                                a3,
                                *(_DWORD *)(a6 + 24),
                                *(_QWORD *)(a6 + 32),
                                *(_QWORD *)(a6 + 40),
                                *(_QWORD *)(a6 + 48));
      if ( CmObjectListFromCache >= 0
        || CmObjectListFromCache == -1073741275
        || CmObjectListFromCache == -1073741789
        || CmObjectListFromCache == -1073741772 )
      {
LABEL_23:
        *(_DWORD *)a6 = CmObjectListFromCache;
        return (unsigned int)-1073741536;
      }
      v9 = 0;
    }
    if ( !*(_QWORD *)(a6 + 16) )
    {
      v11 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, SourceString, v11);
    }
  }
  else
  {
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty(a3, (int)SourceString, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)SourceString,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  return v9;
}
