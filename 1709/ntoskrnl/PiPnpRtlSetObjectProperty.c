/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x14052F53C
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14052F3A8 (PnpSetDevicePropertyData.c)
 *     PiCMSetObjectProperty @ 0x140574AD4 (PiCMSetObjectProperty.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiDqIrpPropertySet @ 0x1406C42C0 (PiDqIrpPropertySet.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1405275DC (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1406D3D04 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x1406D3D44 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int *a8,
        int a9,
        int a10)
{
  unsigned int v10; // r15d
  int v13; // r10d
  DEVPROPKEY **v14; // r8
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // esi
  int v20; // ecx
  signed int v21; // ebx
  int v22; // edx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // zf
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  int v41; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+6Ch] [rbp-25h] BYREF
  int v43; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+74h] [rbp-1Dh]
  int v45; // [rsp+78h] [rbp-19h] BYREF
  int v46; // [rsp+7Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  char v49; // [rsp+E8h] [rbp+57h]

  v42 = 0;
  v10 = 0;
  v44 = 0;
  v43 = 0;
  v49 = 0;
  if ( a3 == 1 )
  {
    v13 = *(_DWORD *)(a6 + 16);
    v14 = PiPnpRtlDeviceReadOnlyProps;
    v15 = 0;
    while ( 1 )
    {
      v16 = *v14;
      if ( v13 == (*v14)->pid )
      {
        v24 = *(_QWORD *)a6 - *(_QWORD *)&v16->fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&v16->fmtid.Data1 )
          v24 = *(_QWORD *)(a6 + 8) - *(_QWORD *)v16->fmtid.Data4;
        if ( !v24 )
          return (unsigned int)-1073741790;
      }
      ++v15;
      ++v14;
      if ( v15 >= 0xC )
      {
        v17 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        v18 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( v13 != 12 )
          goto LABEL_41;
        v31 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
          v31 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        if ( v31 )
        {
LABEL_41:
          if ( v13 == 3 )
          {
            v25 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
              v25 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
            if ( !v25 )
              goto LABEL_74;
          }
          if ( v13 == 4 )
          {
            v28 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
              v28 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
            if ( !v28 )
            {
LABEL_74:
              v36 = CmIsRootEnumeratedDevice(a2) == 0;
              goto LABEL_75;
            }
          }
          goto LABEL_8;
        }
        if ( a8 && a9 == 4 )
          goto LABEL_8;
        return (unsigned int)-1073741811;
      }
    }
  }
  if ( a3 == 3 )
  {
    if ( *(_DWORD *)(a6 + 16) == 256 )
    {
      v35 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v35 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      v36 = v35 == 0;
LABEL_75:
      if ( v36 )
        return (unsigned int)-1073741790;
    }
  }
  else if ( a3 == 5 && *(_DWORD *)(a6 + 16) == 105 )
  {
    v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
      v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
    if ( !v34 && a7 != 7 )
      return (unsigned int)-1073741811;
  }
  v17 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v18 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_8:
  v19 = 5;
  if ( a3 == 1 )
  {
    v20 = *(_DWORD *)(a6 + 16);
    if ( v20 != 10 )
      goto LABEL_57;
    v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
      v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
    if ( v29 )
    {
LABEL_57:
      if ( v20 != 12 )
        goto LABEL_11;
      v32 = *(_QWORD *)a6 - v18;
      if ( *(_QWORD *)a6 == v18 )
        v32 = *(_QWORD *)(a6 + 8) - v17;
      if ( v32 )
      {
LABEL_11:
        if ( v20 == 5 )
        {
          v26 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v26 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v26 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
          {
            v41 = 4;
            ObjectProperty = PnpGetObjectProperty(
                               a1,
                               (__int64)a2,
                               1u,
                               a4,
                               0LL,
                               (__int64)&DEVPKEY_Device_InstallError,
                               (__int64)&v46,
                               (__int64)&v43,
                               4,
                               (__int64)&v41,
                               0);
            if ( ObjectProperty < 0 || v41 != 4 || v46 != 23 )
              v43 = 0;
            if ( a9 == 4 && a7 == 23 )
              v10 = *a8;
          }
        }
      }
      else if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
      {
        v41 = 4;
        DeviceRegProp = CmGetDeviceRegProp(a1, (__int64)a2, a4, 11, (__int64)&v45, (__int64)&v42, (__int64)&v41, 0);
        if ( DeviceRegProp < 0 || v41 != 4 || v45 != 4 )
          v42 = 0;
        v44 = *a8;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v49 = 1;
    }
  }
  v21 = PnpSetObjectProperty(a1, (_DWORD)a2, a3, a5, a6, a7, (__int64)a8, a9, a10);
  if ( a3 == 1 )
  {
    v22 = *(_DWORD *)(a6 + 16);
    if ( v22 == 12 )
    {
      v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v33 )
      {
        if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
        {
          RtlInitUnicodeString(&DestinationString, a2);
          LOBYTE(v39) = v21 >= 0;
          PiAuditDeviceEnableDisableRequest(&DestinationString, v42, v44, v39);
        }
        goto LABEL_15;
      }
    }
    if ( v22 == 5 )
    {
      v27 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
        v27 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v27 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v43 == -536870328 )
        {
          if ( v10 == -536870328 )
            goto LABEL_15;
          v19 = 6;
        }
        else if ( v10 != -536870328 )
        {
          goto LABEL_15;
        }
        LOBYTE(v40) = v21 >= 0;
        PiAuditDeviceOperation(&DestinationString, v19, v40);
      }
    }
  }
LABEL_15:
  if ( v49 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v21;
}
