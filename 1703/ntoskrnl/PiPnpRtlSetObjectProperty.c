/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1404DD774
 * Callers:
 *     PiCMSetObjectProperty @ 0x14045A4C0 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x1405B8E08 (PnpSetDevicePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14048B1DC (_CmIsRootEnumeratedDevice.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1406A9168 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x1406A91A8 (PiAuditDeviceOperation.c)
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
  unsigned int v10; // r14d
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
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp-25h] BYREF
  int v41; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v42; // [rsp+74h] [rbp-1Dh]
  int v43; // [rsp+78h] [rbp-19h] BYREF
  int v44; // [rsp+7Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  char v47; // [rsp+E8h] [rbp+57h]

  v40 = 0;
  v10 = 0;
  v42 = 0;
  v41 = 0;
  v47 = 0;
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
      if ( v15 >= 0xB )
      {
        v17 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        v18 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( v13 != 12 )
          goto LABEL_39;
        v32 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
          v32 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        if ( v32 )
        {
LABEL_39:
          if ( v13 == 3 )
          {
            v25 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
              v25 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
            if ( !v25 )
              goto LABEL_67;
          }
          if ( v13 == 4 )
          {
            v28 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
              v28 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
            if ( !v28 )
            {
LABEL_67:
              v36 = CmIsRootEnumeratedDevice(a2) == 0;
              goto LABEL_68;
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
LABEL_68:
      if ( v36 )
        return (unsigned int)-1073741790;
    }
  }
  else if ( a3 == 5 && *(_DWORD *)(a6 + 16) == 105 )
  {
    v31 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
      v31 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
    if ( !v31 && a7 != 7 )
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
      goto LABEL_58;
    v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
      v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
    if ( v29 )
    {
LABEL_58:
      if ( v20 != 12 )
        goto LABEL_11;
      v33 = *(_QWORD *)a6 - v18;
      if ( *(_QWORD *)a6 == v18 )
        v33 = *(_QWORD *)(a6 + 8) - v17;
      if ( v33 )
      {
LABEL_11:
        if ( v20 == 5 )
        {
          v26 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v26 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v26 && SeAuditingWithTokenForSubcategory(137, 0LL) )
          {
            v39 = 4;
            if ( (int)PnpGetObjectProperty(
                        a1,
                        (__int64)a2,
                        1u,
                        a4,
                        0LL,
                        (__int64)&DEVPKEY_Device_InstallError,
                        (__int64)&v44,
                        (__int64)&v41,
                        4,
                        (__int64)&v39,
                        0) < 0
              || v39 != 4
              || v44 != 23 )
            {
              v41 = 0;
            }
            if ( a9 == 4 && a7 == 23 )
              v10 = *a8;
          }
        }
      }
      else if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        v39 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a4, 11, (__int64)&v43, (__int64)&v40, (__int64)&v39, 0) < 0
          || v39 != 4
          || v43 != 4 )
        {
          v40 = 0;
        }
        v42 = *a8;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v47 = 1;
    }
  }
  v21 = PnpSetObjectProperty(a1, (int)a2, a3, a5, a6, a7, (__int64)a8, a9, a10);
  if ( a3 == 1 )
  {
    v22 = *(_DWORD *)(a6 + 16);
    if ( v22 == 12 )
    {
      v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v34 )
      {
        if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          RtlInitUnicodeString(&DestinationString, a2);
          LOBYTE(v37) = v21 >= 0;
          PiAuditDeviceEnableDisableRequest(&DestinationString, v40, v42, v37);
        }
        goto LABEL_15;
      }
    }
    if ( v22 == 5 )
    {
      v27 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
        v27 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v27 && SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v41 == -536870328 )
        {
          if ( v10 == -536870328 )
            goto LABEL_15;
          v19 = 6;
        }
        else if ( v10 != -536870328 )
        {
          goto LABEL_15;
        }
        LOBYTE(v38) = v21 >= 0;
        PiAuditDeviceOperation(&DestinationString, v19, v38);
      }
    }
  }
LABEL_15:
  if ( v47 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v21;
}
