/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1405D1C74
 * Callers:
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1405D189C (PiDevCfgSetObjectProperty.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1406024B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1406061E8 (PnpSetDevicePropertyData.c)
 *     PiCMSetObjectProperty @ 0x14064069C (PiCMSetObjectProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14050CE64 (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _CmSplitDevicePanelId @ 0x1406371E4 (_CmSplitDevicePanelId.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14073C148 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14073C188 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        const wchar_t *pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v13; // r14d
  int v14; // edx
  DEVPROPKEY **v15; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // esi
  int v21; // eax
  signed int v22; // ebx
  int v23; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  char v43; // [rsp+60h] [rbp-81h]
  int v44; // [rsp+64h] [rbp-7Dh] BYREF
  int v45; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-75h] BYREF
  int v47; // [rsp+70h] [rbp-71h] BYREF
  unsigned int v48; // [rsp+74h] [rbp-6Dh]
  __int64 v49; // [rsp+78h] [rbp-69h]
  int v50; // [rsp+80h] [rbp-61h] BYREF
  __int64 v51; // [rsp+88h] [rbp-59h]
  __int64 v52; // [rsp+98h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-41h] BYREF
  _QWORD v54[2]; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v51 = a1;
  v13 = 0;
  v49 = a4;
  v52 = a5;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  v43 = 0;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v38 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v38 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        v39 = v38 == 0;
LABEL_75:
        if ( v39 )
          return (unsigned int)-1073741790;
      }
      goto LABEL_9;
    }
    if ( a3 == 5 && *(_DWORD *)(a6 + 16) == 105 )
    {
      v26 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
        v26 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
      if ( !v26 )
      {
        v27 = a7 == 7;
        goto LABEL_33;
      }
    }
LABEL_9:
    v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = PiPnpRtlDeviceReadOnlyProps;
  for ( i = 0; i < 0xC; ++i )
  {
    v17 = *v15;
    if ( v14 == (*v15)->pid )
    {
      v25 = *(_QWORD *)a6 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&v17->fmtid.Data1 )
        v25 = *(_QWORD *)(a6 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v25 )
        return (unsigned int)-1073741790;
    }
    ++v15;
  }
  if ( v14 != 12 )
  {
    if ( v14 == 3 )
    {
      v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v29 )
        goto LABEL_74;
    }
    if ( v14 == 4 )
    {
      v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v34 )
      {
LABEL_74:
        v39 = CmIsRootEnumeratedDevice(a2) == 0;
        goto LABEL_75;
      }
    }
    else if ( v14 == 2 )
    {
      v28 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
        v28 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
      if ( !v28 )
      {
        if ( !pszSrc
          || a9 < 2
          || a7 != 18
          || pszSrc[((unsigned __int64)a9 >> 1) - 1]
          || (int)CmSplitDevicePanelId(pszSrc, &Guid) < 0
          || (int)PnpGetObjectProperty(
                    a1,
                    (__int64)a2,
                    1u,
                    v49,
                    0LL,
                    (__int64)&DEVPKEY_Device_ContainerId,
                    (__int64)&v45,
                    (__int64)v54,
                    16,
                    (__int64)&v44,
                    0) < 0
          || v45 != 13
          || v44 != 16 )
        {
          return (unsigned int)-1073741811;
        }
        v40 = v54[0] - *(_QWORD *)&Guid.Data1;
        if ( v54[0] == *(_QWORD *)&Guid.Data1 )
          v40 = v54[1] - *(_QWORD *)Guid.Data4;
        v27 = v40 == 0;
LABEL_33:
        if ( !v27 )
          return (unsigned int)-1073741811;
        goto LABEL_9;
      }
    }
    goto LABEL_9;
  }
  v19 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  v18 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v35 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
  if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
    v35 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  if ( !v35 && (!pszSrc || a9 != 4) )
    return (unsigned int)-1073741811;
LABEL_10:
  v20 = 5;
  if ( a3 == 1 )
  {
    v21 = *(_DWORD *)(a6 + 16);
    switch ( v21 )
    {
      case 10:
        v30 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
          v30 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
        if ( !v30 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          v43 = 1;
        }
        break;
      case 12:
        v36 = *(_QWORD *)a6 - v19;
        if ( *(_QWORD *)a6 == v19 )
          v36 = *(_QWORD *)(a6 + 8) - v18;
        if ( !v36 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v44 = 4;
          if ( (int)CmGetDeviceRegProp(v51, (__int64)a2, v49, 11, (__int64)&v50, (__int64)&v46, (__int64)&v44, 0) < 0
            || v44 != 4
            || v50 != 4 )
          {
            v46 = 0;
          }
          v48 = *(_DWORD *)pszSrc;
        }
        break;
      case 5:
        v32 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
        if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
          v32 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
        if ( !v32 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          v44 = 4;
          if ( (int)PnpGetObjectProperty(
                      v51,
                      (__int64)a2,
                      1u,
                      v49,
                      0LL,
                      (__int64)&DEVPKEY_Device_InstallError,
                      (__int64)&v45,
                      (__int64)&v47,
                      4,
                      (__int64)&v44,
                      0) < 0
            || v44 != 4
            || v45 != 23 )
          {
            v47 = 0;
          }
          if ( a9 == 4 && a7 == 23 )
            v13 = *(_DWORD *)pszSrc;
        }
        break;
    }
  }
  v22 = PnpSetObjectProperty(v51, (_DWORD)a2, a3, v52, a6, a7, (__int64)pszSrc, a9, a10);
  if ( a3 != 1 )
    goto LABEL_17;
  v23 = *(_DWORD *)(a6 + 16);
  if ( v23 == 12 )
  {
    v37 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v37 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v37 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      LOBYTE(v41) = v22 >= 0;
      PiAuditDeviceEnableDisableRequest(&DestinationString, v46, v48, v41);
    }
    goto LABEL_17;
  }
  if ( v23 == 5 )
  {
    v33 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
      v33 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
    if ( !v33 && SeAuditingWithTokenForSubcategory(137, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      if ( v47 == -536870328 )
      {
        if ( v13 == -536870328 )
          goto LABEL_17;
        v20 = 6;
      }
      else if ( v13 != -536870328 )
      {
        goto LABEL_17;
      }
      LOBYTE(v42) = v22 >= 0;
      PiAuditDeviceOperation(&DestinationString, v20, v42);
    }
  }
LABEL_17:
  if ( v43 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v22;
}
