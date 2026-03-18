/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C003EEB0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C003C480 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00917B0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C0093D4C (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  unsigned int *v16; // rax
  unsigned int v17; // r12d
  char *v18; // rdi
  __int64 v19; // r13
  const wchar_t *v20; // r8
  ULONG v21; // r13d
  int v22; // eax
  int v23; // eax
  void *v24; // r15
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  char *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r15
  char *v32; // r13
  char *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v38; // rax
  struct _DEVICE_OBJECT *v39; // rcx
  __int64 DeviceFromName; // rax
  size_t v41; // rcx
  void *v42; // r15
  NTSTATUS DeviceProperty; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  int DeviceInterfaceName; // eax
  __int64 v48; // rax
  ULONG v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  void *v55; // [rsp+50h] [rbp-198h]
  SIZE_T Length; // [rsp+58h] [rbp-190h]
  __int64 v57; // [rsp+60h] [rbp-188h]
  void *v58; // [rsp+68h] [rbp-180h]
  int v59; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h]
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v62; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v55 = a4;
  v59 = a3;
  v57 = a1;
  P[1] = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = a1;
  v62 = a3;
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
      v51 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v51);
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
    v38 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v38);
    return 3221225473LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
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
    v15 = (struct _DEVICE_OBJECT *)::Object;
LABEL_11:
    DeviceObject = v15;
    goto LABEL_12;
  }
  v39 = (struct _DEVICE_OBJECT *)*((_QWORD *)v12 + 17);
  if ( v39 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v39, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
    }
  }
  else
  {
    v50 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v50);
  }
LABEL_12:
  v58 = 0LL;
  if ( a6 == 1 )
  {
    v16 = (unsigned int *)v55;
    if ( (unsigned __int64)v55 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    v17 = *v16;
    if ( *v16 > 0x348 )
      v17 = 840;
    LODWORD(Length) = v17;
    v18 = (char *)PALLOCMEM2(v17);
    v58 = v18;
    if ( !v18 )
    {
      LODWORD(v10) = -1073741823;
      goto LABEL_58;
    }
  }
  else
  {
    v17 = 840;
    if ( *(_DWORD *)v55 < 0x348u )
      v17 = *(_DWORD *)v55;
    LODWORD(Length) = v17;
    v18 = (char *)v55;
    v58 = v55;
    memset(v55, 0, v17);
  }
  if ( v17 >= 4 )
    *(_DWORD *)v18 = 4;
  v19 = v57;
  if ( v17 >= 0x44 )
  {
    *(_DWORD *)v18 = 68;
    if ( v19 )
    {
      swprintf_s((wchar_t *)v18 + 2, 0x20uLL, L"%ws\\Monitor%d", v12 + 32, v59);
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
  if ( v19 || v9 )
  {
    if ( DeviceObject )
    {
      v21 = 256;
      v41 = 256LL;
      for ( BufferLength = 256; ; v41 = BufferLength )
      {
        v42 = (void *)PALLOCMEM2(v41);
        if ( !v42 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_30;
        }
        DeviceProperty = IoGetDeviceProperty(
                           DeviceObject,
                           DevicePropertyDeviceDescription,
                           BufferLength,
                           v42,
                           &BufferLength);
        if ( DeviceProperty != -1073741789 )
          break;
        Win32FreePool(v42, v44, v45);
      }
      if ( !DeviceProperty )
        wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, (const wchar_t *)v42, 0x7FuLL);
      Win32FreePool(v42, v44, v45);
      goto LABEL_30;
    }
  }
  else
  {
    v20 = (const wchar_t *)*((_QWORD *)v12 + 27);
    if ( v20 )
      wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, v20, 0x7FuLL);
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
    if ( v57 )
    {
      *((_DWORD *)v18 + 81) = *(_DWORD *)(*((_QWORD *)v12 + 29) + 20 * v62) & 0xFFFFFFF;
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
    v31 = -1LL;
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
          v24 = (void *)Win32AllocPool(v21, 1684301127LL);
          v21 = BufferLength;
        }
        if ( !v24 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_126;
        }
        v25 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v21, v24, &BufferLength);
        if ( v25 != -1073741789 )
          break;
        Win32FreePool(v24, v26, v27);
      }
      if ( !v25 )
      {
        v28 = v18 + 328;
        wcsncpy_s((wchar_t *)v18 + 164, 0x80uLL, (const wchar_t *)v24, 0x7FuLL);
        Win32FreePool(v24, v29, v30);
        goto LABEL_48;
      }
      Win32FreePool(v24, v26, v27);
LABEL_126:
      v28 = v18 + 328;
LABEL_48:
      if ( v57 )
      {
        *((_WORD *)v18 + 291) = 0;
        v31 = -1LL;
        v48 = -1LL;
        do
          ++v48;
        while ( *(_WORD *)&v28[2 * v48] );
        v49 = v48 + 1;
        BufferLength = v49;
        if ( v49 < 0x7E )
        {
          *(_WORD *)&v18[2 * v49 + 326] = 92;
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
    v31 = -1LL;
LABEL_50:
    *((_WORD *)v18 + 291) = 0;
LABEL_51:
    if ( v17 >= 0x348 )
    {
      *(_DWORD *)v18 = 840;
      v32 = v18 + 584;
      *((_WORD *)v18 + 292) = 0;
      if ( v57 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v18 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v46 = -1LL;
          do
            ++v46;
          while ( *(_WORD *)&v32[2 * v46] );
          BufferLength = v46;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v46 + 584],
            128LL - (unsigned int)v46,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v46));
          do
            ++v31;
          while ( *(_WORD *)&v32[2 * v31] );
          BufferLength = v31;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v31 + 584],
            128LL - (unsigned int)v31,
            PropertyBuffer,
            (unsigned int)(127 - v31));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(v12, 3LL, 0LL, v18 + 584, 128, 0LL, gProtocolType);
      }
      *((_WORD *)v18 + 419) = 0;
    }
    if ( !v57 && DeviceObject && !*((_QWORD *)v12 + 18) && DeviceObject != ::Object )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_58;
  }
  if ( !DeviceObject )
    goto LABEL_49;
  DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject, &GUID_DEVINTERFACE_MONITOR);
  v10 = DeviceInterfaceName;
  if ( DeviceInterfaceName >= 0 )
    goto LABEL_49;
  v52 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v52 + 24) = v10;
  WdLogEvent5_WdTrace(v52);
LABEL_58:
  v33 = (char *)v55;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v18 != v33 )
  {
    if ( v18 )
    {
      ProbeForWrite(v33, v17, 4u);
      memmove(v33, v18, v17);
      Win32FreePool(v18, v34, v35);
    }
  }
  v36 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v36 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v36);
  return (unsigned int)v10;
}
