/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0041380
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0043630 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     DrvpGetDeviceInterfaceName @ 0x1C000BCC0 (DrvpGetDeviceInterfaceName.c)
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C008B2D0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v9; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rax
  wchar_t *v12; // rsi
  ULONG v13; // eax
  int v14; // edx
  struct _DEVICE_OBJECT *v15; // rax
  CTouchProcessor *v16; // rcx
  unsigned int v17; // r13d
  char *v18; // rdi
  const wchar_t *v19; // r8
  __int64 v20; // r12
  ULONG v21; // r12d
  int v22; // eax
  int v23; // eax
  void *v24; // r15
  NTSTATUS v25; // eax
  char *v26; // r12
  __int64 v27; // r15
  char *v28; // r12
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v32; // rax
  struct _DEVICE_OBJECT *v33; // rcx
  __int64 DeviceFromName; // rax
  size_t v35; // rcx
  void *v36; // r15
  NTSTATUS DeviceProperty; // eax
  __int64 v38; // rdx
  int DeviceInterfaceName; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  ULONG v44; // eax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  void *v47; // [rsp+50h] [rbp-198h]
  SIZE_T Length; // [rsp+58h] [rbp-190h]
  __int64 v49; // [rsp+60h] [rbp-188h]
  void *v50; // [rsp+68h] [rbp-180h]
  int v51; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h]
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v54; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v47 = a4;
  v51 = a3;
  v49 = a1;
  P[1] = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v11[3] = a1;
  v54 = a3;
  v11[4] = a3;
  v11[5] = a4;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  if ( a1 )
  {
    UpdateMonitorDevices();
    DeviceFromName = DrvGetDeviceFromName(a1, a6);
    v12 = (wchar_t *)DeviceFromName;
    if ( DeviceFromName && a3 < *(_DWORD *)(DeviceFromName + 224) )
    {
      if ( (int)_guard_dispatch_icall_fptr() >= 0 )
        goto LABEL_12;
      v41 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v41);
    }
    return 3221225473LL;
  }
  v12 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_69;
  v13 = BufferLength;
  do
  {
    if ( a6
      && ((v14 = *((_DWORD *)v12 + 40), (v14 & 0x2000000) != 0)
       || gProtocolType && v12[124] != gProtocolType && (v14 & 0x4000008) == 0) )
    {
      BufferLength = --v13;
    }
    else if ( v13 == a3 )
    {
      break;
    }
    v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    BufferLength = ++v13;
  }
  while ( v12 );
  if ( !v12 )
  {
LABEL_69:
    v32 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v32);
    return 3221225473LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C018C350
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !UserIsCurrentProcessDwm()
    && (v12[80] & 8) == 0 )
  {
    v9 = 1;
  }
  v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 18);
  if ( v15 )
    goto LABEL_11;
  if ( v9 )
  {
    v15 = (struct _DEVICE_OBJECT *)qword_1C018C350;
LABEL_11:
    DeviceObject = v15;
    goto LABEL_12;
  }
  v33 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 17);
  if ( v33 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v33, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
    }
  }
  else
  {
    v40 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v40);
  }
LABEL_12:
  v50 = 0LL;
  if ( a6 == 1 )
  {
    v16 = (CTouchProcessor *)v47;
    if ( v47 >= W32UserProbeAddress )
      v16 = W32UserProbeAddress;
    LODWORD(Length) = *(_DWORD *)v16;
    v17 = 840;
    if ( (unsigned int)Length <= 0x348 )
      v17 = Length;
    LODWORD(Length) = v17;
    v18 = (char *)PALLOCMEM2(v17, 1936876615LL, 1);
    v50 = v18;
    if ( !v18 )
    {
      LODWORD(v10) = -1073741823;
      goto LABEL_58;
    }
  }
  else
  {
    v17 = *(_DWORD *)v47;
    if ( *(_DWORD *)v47 >= 0x348u )
      v17 = 840;
    LODWORD(Length) = v17;
    v18 = (char *)v47;
    v50 = v47;
    memset(v47, 0, v17);
  }
  if ( v17 >= 4 )
    *(_DWORD *)v18 = 4;
  v20 = v49;
  if ( v17 >= 0x44 )
  {
    *(_DWORD *)v18 = 68;
    if ( v20 )
    {
      swprintf_s((wchar_t *)v18 + 2, 0x20uLL, L"%ws\\Monitor%d", v12 + 32, v51);
    }
    else
    {
      *(_OWORD *)(v18 + 4) = *((_OWORD *)v12 + 4);
      *(_OWORD *)(v18 + 20) = *((_OWORD *)v12 + 5);
      *(_OWORD *)(v18 + 36) = *((_OWORD *)v12 + 6);
      *(_OWORD *)(v18 + 52) = *((_OWORD *)v12 + 7);
    }
    *((_WORD *)v18 + 33) = 0;
  }
  if ( v17 < 0x144 )
  {
    v21 = 256;
    goto LABEL_31;
  }
  *(_DWORD *)v18 = 324;
  *((_WORD *)v18 + 34) = 0;
  if ( v20 || v9 )
  {
    if ( DeviceObject )
    {
      v21 = 256;
      v35 = 256LL;
      for ( BufferLength = 256; ; v35 = BufferLength )
      {
        v36 = PALLOCMEM2(v35, 1684301127LL, 0);
        if ( !v36 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_30;
        }
        DeviceProperty = IoGetDeviceProperty(
                           DeviceObject,
                           DevicePropertyDeviceDescription,
                           BufferLength,
                           v36,
                           &BufferLength);
        if ( DeviceProperty != -1073741789 )
          break;
        Win32FreePool((__int64)v36);
      }
      if ( !DeviceProperty )
        wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, (const wchar_t *)v36, 0x7FuLL);
      Win32FreePool((__int64)v36);
      goto LABEL_30;
    }
  }
  else
  {
    v19 = (const wchar_t *)*((_QWORD *)v12 + 27);
    if ( v19 )
      wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, v19, 0x7FuLL);
  }
  v21 = 256;
LABEL_30:
  *((_WORD *)v18 + 161) = 0;
LABEL_31:
  if ( v17 >= 0x148 )
  {
    *(_DWORD *)v18 = 328;
    if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v12) )
      *((_DWORD *)v12 + 40) &= ~0x80000u;
    else
      *((_DWORD *)v12 + 40) |= 0x80000u;
    if ( v49 )
    {
      *((_DWORD *)v18 + 81) = *(_DWORD *)(*((_QWORD *)v12 + 29) + 20 * v54) & 0xFFFFFFF;
    }
    else
    {
      v22 = *((_DWORD *)v12 + 40);
      if ( (a5 & 2) != 0 )
        v23 = v22 & 0xFFFFFFF;
      else
        v23 = v22 & 0xF2FFFFF;
      *((_DWORD *)v18 + 81) = v23;
    }
  }
  if ( v17 < 0x248 )
  {
    v27 = -1LL;
    goto LABEL_51;
  }
  *(_DWORD *)v18 = 584;
  *((_WORD *)v18 + 164) = 0;
  if ( (a5 & 1) == 0 )
  {
    if ( DeviceObject )
    {
      for ( BufferLength = 256; ; v21 = BufferLength )
      {
        v24 = 0LL;
        if ( v21 )
        {
          v24 = (void *)Win32AllocPool(v21, 0x64646547u);
          v21 = BufferLength;
        }
        if ( !v24 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_122;
        }
        v25 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v21, v24, &BufferLength);
        if ( v25 != -1073741789 )
          break;
        Win32FreePool((__int64)v24);
      }
      if ( !v25 )
      {
        v26 = v18 + 328;
        wcsncpy_s((wchar_t *)v18 + 164, 0x80uLL, (const wchar_t *)v24, 0x7FuLL);
        Win32FreePool((__int64)v24);
        goto LABEL_48;
      }
      Win32FreePool((__int64)v24);
LABEL_122:
      v26 = v18 + 328;
LABEL_48:
      if ( v49 )
      {
        *((_WORD *)v18 + 291) = 0;
        v27 = -1LL;
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)&v26[2 * v43] );
        v44 = v43 + 1;
        BufferLength = v44;
        if ( v44 < 0x7E )
        {
          *(_WORD *)&v18[2 * v44 + 326] = 92;
          IoGetDeviceProperty(
            DeviceObject,
            DevicePropertyDriverKeyName,
            2 * (127 - BufferLength),
            &v18[2 * BufferLength + 328],
            &BufferLength);
        }
        goto LABEL_50;
      }
    }
LABEL_49:
    v27 = -1LL;
LABEL_50:
    *((_WORD *)v18 + 291) = 0;
LABEL_51:
    if ( v17 >= 0x348 )
    {
      *(_DWORD *)v18 = 840;
      v28 = v18 + 584;
      *((_WORD *)v18 + 292) = 0;
      if ( v49 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v18 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v38 = -1LL;
          do
            ++v38;
          while ( *(_WORD *)&v28[2 * v38] );
          BufferLength = v38;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v38 + 584],
            128LL - (unsigned int)v38,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v38));
          do
            ++v27;
          while ( *(_WORD *)&v28[2 * v27] );
          BufferLength = v27;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v27 + 584],
            128LL - (unsigned int)v27,
            PropertyBuffer,
            (unsigned int)(127 - v27));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(v12, 3, 0LL, (unsigned __int16 *)v18 + 292, 0x80u, 0LL, gProtocolType);
      }
      *((_WORD *)v18 + 419) = 0;
    }
    if ( !v49 && DeviceObject && !*((_QWORD *)v12 + 18) && DeviceObject != qword_1C018C350 )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_58;
  }
  if ( !DeviceObject )
    goto LABEL_49;
  DeviceInterfaceName = DrvpGetDeviceInterfaceName(
                          DeviceObject,
                          &GUID_DEVINTERFACE_MONITOR,
                          (__int64)v19,
                          (wchar_t *)v18 + 164);
  v10 = DeviceInterfaceName;
  if ( DeviceInterfaceName >= 0 )
    goto LABEL_49;
  v42 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v42 + 24) = v10;
  WdLogEvent5_WdTrace(v42);
LABEL_58:
  v29 = (char *)v47;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v18 != v29 )
  {
    if ( v18 )
    {
      ProbeForWrite(v29, v17, 4u);
      memmove(v29, v18, v17);
      Win32FreePool((__int64)v18);
    }
  }
  v30 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v30 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v30);
  return (unsigned int)v10;
}
