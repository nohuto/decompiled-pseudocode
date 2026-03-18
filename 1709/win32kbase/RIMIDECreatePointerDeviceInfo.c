/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C0108964
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C0004C20 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C000B740 (RIMCmFreePointerDeviceContacts.c)
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     DbgPrintRIM @ 0x1C000E2A4 (DbgPrintRIM.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     RIMGetContainerId @ 0x1C000EB54 (RIMGetContainerId.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000FF9C (RIMIsParallelDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00904D0 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMGetPropertyCount @ 0x1C00934B0 (RIMGetPropertyCount.c)
 *     RIMInitializeDeadzone @ 0x1C0096ED4 (RIMInitializeDeadzone.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0098660 (RIMReadDigitizerToMonitorMappings.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C00998F0 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMIsRunningOnDesktop @ 0x1C009B3E0 (RIMIsRunningOnDesktop.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01060B0 (RIMGetMonitorPhysicalSize.c)
 *     RIMPopulatePointerDevice @ 0x1C01075C4 (RIMPopulatePointerDevice.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0107E94 (RIMIsRunningOnSurfaceHub.c)
 *     rimIDECheckConfidenceSupport @ 0x1C010801C (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0108334 (RIMIDECheckScanTimeSupport.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012A57C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012B68C (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  struct _UNICODE_STRING *v10; // r13
  __int128 v11; // xmm1
  struct _DEVICE_OBJECT *v12; // r12
  char *v13; // rbx
  BOOL v14; // esi
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 **v17; // r8
  _QWORD *v18; // r15
  __int64 v19; // rcx
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  PWSTR Buffer; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  void *v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int128 *v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct _UNICODE_STRING *v38; // [rsp+38h] [rbp-89h] BYREF
  __int64 v39; // [rsp+40h] [rbp-81h]
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-71h] BYREF
  PDEVICE_OBJECT v42[3]; // [rsp+58h] [rbp-69h] BYREF
  _OWORD v43[3]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-21h]
  __int64 v45; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = *(_OWORD *)(a4 + 56);
  v43[0] = *(_OWORD *)(a4 + 40);
  v8 = *(_OWORD *)(a4 + 72);
  v43[1] = v6;
  v10 = 0LL;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = 0LL;
  v39 = a3;
  v43[2] = v8;
  v44 = v11;
  *(_QWORD *)&v46 = a5;
  v38 = 0LL;
  Object = 0LL;
  v42[0] = 0LL;
  Handle = 0LL;
  v13 = (char *)Win32AllocPoolZInit(0x4A0uLL, 1668313938LL);
  v14 = v13 == 0LL;
  if ( *(_WORD *)(a4 + 42) == 13 )
  {
    if ( *(_WORD *)(a4 + 40) == 2 && RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled )
      goto LABEL_5;
    if ( *(_WORD *)(a4 + 40) == 1 && !RIMIsRunningOnDesktop() && !RIMIsRunningOnSurfaceHub() )
      v14 = 1;
  }
  if ( v14 )
    goto LABEL_6;
  v20 = *(char **)(a2 + 760);
  if ( v20 )
  {
    v21 = RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, (PVOID *)&v38);
    v10 = v38;
    if ( v21 < 0 )
    {
      *(_QWORD *)(a2 + 760) = 0LL;
LABEL_5:
      v14 = 1;
LABEL_6:
      v15 = a1;
      goto LABEL_7;
    }
    if ( (int)RIMGetDeviceObjectPointer(v38 + 17, v22, v23, &Handle, &Object, v42) < 0 )
      goto LABEL_5;
    v12 = v42[0];
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_DWORD *)v13 + 69) |= 0x20u;
  *((_QWORD *)v13 + 104) = v13 + 824;
  *((_QWORD *)v13 + 103) = v13 + 824;
  switch ( *(_WORD *)(a4 + 40) )
  {
    case 1:
      *((_DWORD *)v13 + 6) = 6;
      break;
    case 2:
      *((_DWORD *)v13 + 6) = 5;
      break;
    case 4:
      *((_DWORD *)v13 + 6) = 3;
      break;
    case 5:
      *((_DWORD *)v13 + 6) = 7;
      break;
  }
  rimIDECheckConfidenceSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  if ( (*(_DWORD *)(v39 + 12) & 2) != 0 )
  {
    *((_DWORD *)v13 + 69) |= 0x8000u;
    RIMIDECheckScanTimeSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v13 + 69) |= 0x200u;
    *((_DWORD *)v13 + 200) = -1;
  }
  *((_DWORD *)v13 + 176) = 500;
  *((_QWORD *)v13 + 89) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    Buffer = v10[32].Buffer;
    if ( Buffer )
    {
      *(_WORD *)(a4 + 110) = Buffer[55];
      *(_WORD *)(a4 + 112) = v10[32].Buffer[56];
      *(_WORD *)(a4 + 114) = v10[32].Buffer[57];
    }
    if ( v12 )
    {
      *(_DWORD *)(a2 + 768) = 2;
      RIMGetContainerId(v12, (void *)(a2 + 1528), (_DWORD *)(a2 + 768));
    }
  }
  v25 = v39;
  *((_DWORD *)v13 + 170) = *(_DWORD *)(v39 + 88);
  *((_QWORD *)v13 + 107) = *(_QWORD *)(v25 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v26 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v13 + 36) = v26;
    if ( v26 )
    {
      *((_WORD *)v13 + 141) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 280), (PCUNICODE_STRING)(a2 + 208));
      v25 = v39;
    }
    else
    {
      v25 = v39;
      v14 = 1;
    }
  }
  v27 = *((_DWORD *)v13 + 6);
  if ( ((v27 - 3) & 0xFFFFFFFA) != 0 || v27 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v13, 0, v44, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0xAu,
        (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids);
      v14 = 1;
    }
    if ( v14 )
      goto LABEL_6;
  }
  else
  {
    *((_DWORD *)v13 + 180) = *(_DWORD *)(v25 + 128);
    v28 = Win32AllocPoolZInit(0x28uLL, 1785620818LL);
    *((_QWORD *)v13 + 84) = v28;
    if ( !v28 )
      v14 = 1;
    if ( v14 )
      goto LABEL_6;
    v29 = *(_QWORD *)(a4 + 16);
    LODWORD(v38) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v13, v29, (unsigned int *)&v38) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection((__int64)v13, *(_QWORD *)(a4 + 16), (unsigned int)v38) )
      {
LABEL_47:
        v14 = 1;
        goto LABEL_6;
      }
      if ( LOWORD(v43[0]) == 5 )
      {
        ++*((_DWORD *)v13 + 170);
        *((_DWORD *)v13 + 6) = 7;
      }
    }
    else
    {
      DbgPrintRIM("Serial Device found!");
      if ( (*((_DWORD *)v13 + 69) & 0x8000) != 0 )
        goto LABEL_47;
    }
  }
  v30 = *((_DWORD *)v13 + 69);
  if ( (v30 & 8) == 0 )
    *((_DWORD *)v13 + 69) = v30 & 0xFFFFFDFF;
  if ( (int)RIMCmAllocPointerDeviceContacts((__int64)v13, 1785620818LL) < 0 )
    goto LABEL_47;
  v15 = a1;
  if ( !(unsigned int)RIMPopulatePointerDevice(
                        a1,
                        (__int64)v13,
                        *(struct _HIDP_PREPARSED_DATA **)(v46 + 32),
                        (__int16 *)v43) )
    v14 = 1;
LABEL_7:
  v18 = RIMGetQDCActivePathsData(&v45);
  if ( v14 )
    goto LABEL_75;
  v19 = v39;
  *(_QWORD *)(a2 + 784) = *(_QWORD *)(v39 + 80);
  if ( *(_QWORD *)(v19 + 80) )
  {
    *(_DWORD *)(a2 + 776) = 1;
  }
  else if ( v10 )
  {
    *(_DWORD *)(a2 + 776) = 1;
    RIMReadDigitizerToMonitorMappings((__int64)&v10[4]);
    rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v18, 0LL);
  }
  if ( (*((_DWORD *)v13 + 69) & 0x8000) == 0 )
  {
    if ( *(_DWORD *)(a2 + 776) )
      v31 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v46, *(_QWORD *)(a2 + 784));
    else
      v31 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)v42);
    v46 = *v31;
    *(_OWORD *)(v13 + 140) = v46;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v13, 0, (__int64)v18);
  if ( (unsigned int)(*((_DWORD *)v13 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone() )
    goto LABEL_74;
  *((_QWORD *)v13 + 87) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics((__int64)v13);
  *((_QWORD *)v13 + 2) = a2;
  v16 = v15 + 560;
  *(_QWORD *)(a2 + 472) = v13;
  v32 = (__int64 *)(v13 + 824);
  v17 = *(__int64 ***)(v15 + 568);
  if ( *v17 != (__int64 *)(v15 + 560) )
    __fastfail(3u);
  *v32 = v16;
  *((_QWORD *)v13 + 104) = v17;
  *v17 = v32;
  *(_QWORD *)(v15 + 568) = v32;
  if ( LOWORD(v43[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13) < 0 )
  {
LABEL_74:
    v14 = 1;
LABEL_75:
    if ( v13 )
    {
      v33 = *((_QWORD *)v13 + 84);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 24);
        if ( v34 )
          Win32FreePool(v34);
      }
      RIMCmFreePointerDeviceContacts((__int64)v13, v16, (__int64)v17);
      v35 = *((_QWORD *)v13 + 36);
      if ( v35 )
        Win32FreePool(v35);
      if ( *((_QWORD *)v13 + 120) )
        CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13);
      Win32FreePool((__int64)v13);
    }
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData(v18, v16, (__int64)v17);
  LOBYTE(v5) = !v14;
  return v5;
}
