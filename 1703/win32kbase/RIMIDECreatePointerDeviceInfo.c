/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C01098C8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMInitializeDeadzone @ 0x1C00074E8 (RIMInitializeDeadzone.c)
 *     RIMAllocateMonitor @ 0x1C000774C (RIMAllocateMonitor.c)
 *     RIMIsRunningOnDesktop @ 0x1C0008234 (RIMIsRunningOnDesktop.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00085B0 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0008644 (RIMFindMonitorForDigitizer.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00089D4 (RIMCmAllocPointerDeviceContacts.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009128 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0009650 (RIMCmFreePointerDeviceContacts.c)
 *     RIMGetPropertyCount @ 0x1C0009F18 (RIMGetPropertyCount.c)
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     RIMRetrieveLinkCollection @ 0x1C000AD38 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000AF88 (RIMIsParallelDevice.c)
 *     RIMGetContainerId @ 0x1C000B2FC (RIMGetContainerId.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     DbgPrintRIM @ 0x1C0055708 (DbgPrintRIM.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     RIMInitFakeMonitor @ 0x1C0070278 (RIMInitFakeMonitor.c)
 *     RIMPopulatePointerDevice @ 0x1C01068DC (RIMPopulatePointerDevice.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C0107F30 (RIMGetPhysicalSizeFromMonitor.c)
 *     rimIDECheckConfidenceSupport @ 0x1C0108FF4 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C010930C (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C010B4C4 (RIMIDESetPTPPhysicalSize.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C010C8C0 (RIMIsRunningOnSurfaceHub.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AE24 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012C010 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  struct _UNICODE_STRING *v10; // r13
  struct _DEVICE_OBJECT *v11; // r15
  __int128 v12; // xmm1
  char *v13; // rbx
  BOOL v14; // esi
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // r12
  PWSTR Buffer; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // ecx
  void *v25; // rax
  struct _HIDP_PREPARSED_DATA *v26; // rdx
  int v27; // edx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rcx
  __m128i v33; // xmm1
  __int64 v34; // rcx
  unsigned __int64 v35; // xmm0_8
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  PDEVICE_OBJECT v41; // [rsp+38h] [rbp-51h] BYREF
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v44[3]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v45; // [rsp+88h] [rbp-1h]
  struct _UNICODE_STRING *v49; // [rsp+100h] [rbp+77h] BYREF

  v5 = 0;
  v7 = *(_OWORD *)(a4 + 56);
  v44[0] = *(_OWORD *)(a4 + 40);
  v9 = *(_OWORD *)(a4 + 72);
  v10 = 0LL;
  v49 = 0LL;
  v44[1] = v7;
  v11 = 0LL;
  v12 = *(_OWORD *)(a4 + 88);
  Object = 0LL;
  v44[2] = v9;
  v45 = v12;
  v41 = 0LL;
  Handle = 0LL;
  v13 = (char *)Win32AllocPoolZInit(0x738uLL, 1668313938LL);
  v14 = v13 == 0LL;
  if ( *(_WORD *)(a4 + 42) == 13 )
  {
    if ( *(_WORD *)(a4 + 40) == 2 && RIMIsRunningOnMobile() && !gbPenOnPhoneFeatureEnabled )
      goto LABEL_75;
    if ( *(_WORD *)(a4 + 40) == 1 && !RIMIsRunningOnDesktop() && !(unsigned int)RIMIsRunningOnSurfaceHub() )
      v14 = 1;
  }
  if ( v14 )
    goto LABEL_76;
  v15 = *(char **)(a2 + 760);
  if ( v15 )
  {
    v16 = RawInputManagerDeviceObjectResolveHandle(v15, 3u, 1, (PVOID *)&v49);
    v10 = v49;
    if ( v16 < 0 )
    {
      *(_QWORD *)(a2 + 760) = 0LL;
LABEL_75:
      v14 = 1;
LABEL_76:
      if ( v13 )
      {
        v37 = *((_QWORD *)v13 + 86);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 24);
          if ( v38 )
            Win32FreePool(v38);
        }
        RIMCmFreePointerDeviceContacts((__int64)v13);
        v39 = *((_QWORD *)v13 + 38);
        if ( v39 )
          Win32FreePool(v39);
        if ( *((_QWORD *)v13 + 203) )
          CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13);
        Win32FreePool((__int64)v13);
      }
      goto LABEL_85;
    }
    if ( (int)RIMGetDeviceObjectPointer(v49 + 17, v17, v18, &Handle, &Object, &v41) < 0 )
      goto LABEL_75;
    v11 = v41;
  }
  *(_DWORD *)(a2 + 200) |= 0x80u;
  *((_DWORD *)v13 + 65) |= 0x20u;
  v19 = v13 + 1488;
  *((_QWORD *)v13 + 187) = v13 + 1488;
  *((_QWORD *)v13 + 186) = v13 + 1488;
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
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *((_DWORD *)v13 + 65) |= 0x10000u;
    RIMIDECheckScanTimeSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *((_DWORD *)v13 + 65) |= 0x200u;
    *((_DWORD *)v13 + 366) = -1;
  }
  *((_DWORD *)v13 + 214) = 500;
  *((_QWORD *)v13 + 108) = 500 * gliQpcFreq.QuadPart / 1000;
  if ( v10 )
  {
    Buffer = v10[32].Buffer;
    if ( Buffer )
    {
      *(_WORD *)(a4 + 110) = Buffer[55];
      *(_WORD *)(a4 + 112) = v10[32].Buffer[56];
      *(_WORD *)(a4 + 114) = v10[32].Buffer[57];
    }
    if ( v11 )
    {
      *((_DWORD *)v13 + 66) = 2;
      RIMGetContainerId(v11, v13 + 268, (_DWORD *)v13 + 66);
    }
    RIMReadDigitizerToMonitorMappings((__int64)&v10[4]);
  }
  v21 = a3;
  v22 = a2;
  *((_DWORD *)v13 + 174) = *(_DWORD *)(a3 + 88);
  *((_QWORD *)v13 + 190) = *(_QWORD *)(a3 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v23 = Win32AllocPool(*(unsigned __int16 *)(a2 + 208), 0x6A6E6952u);
    *((_QWORD *)v13 + 38) = v23;
    if ( v23 )
    {
      *((_WORD *)v13 + 149) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 296), (PCUNICODE_STRING)(a2 + 208));
    }
    else
    {
      v14 = 1;
    }
    v21 = a3;
    v22 = a2;
  }
  v24 = *((_DWORD *)v13 + 6);
  if ( ((v24 - 3) & 0xFFFFFFFA) != 0 || v24 == 8 )
  {
    if ( !RIMGetPropertyCount((__int64)v13, 0, v45, *(_QWORD *)(a4 + 16)) )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        17,
        10,
        (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids);
      v14 = 1;
    }
    if ( v14 )
      goto LABEL_76;
  }
  else
  {
    *((_DWORD *)v13 + 218) = *(_DWORD *)(v21 + 128);
    v25 = Win32AllocPoolZInit(0x28uLL, 1785620818LL);
    *((_QWORD *)v13 + 86) = v25;
    if ( !v25 )
      v14 = 1;
    if ( v14 )
      goto LABEL_76;
    v26 = *(struct _HIDP_PREPARSED_DATA **)(a4 + 16);
    LODWORD(v49) = 0;
    if ( (unsigned int)RIMIsParallelDevice((__int64)v13, v26, &v49) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(
                            (__int64)v13,
                            *(struct _HIDP_PREPARSED_DATA **)(a4 + 16),
                            (unsigned int)v49) )
        goto LABEL_75;
      if ( LOWORD(v44[0]) == 5 )
      {
        *((_DWORD *)v13 + 6) = 7;
        ++*((_DWORD *)v13 + 174);
        if ( (int)RIMIDESetPTPPhysicalSize(v13, *(_QWORD *)(a4 + 16)) < 0 )
          goto LABEL_75;
      }
    }
    else
    {
      DbgPrintRIM("Serial Device found!");
      if ( (*((_DWORD *)v13 + 65) & 0x10000) != 0 )
        goto LABEL_75;
    }
  }
  v28 = *((_DWORD *)v13 + 65);
  if ( (v28 & 8) == 0 )
    *((_DWORD *)v13 + 65) = v28 & 0xFFFFFDFF;
  if ( (int)RIMCmAllocPointerDeviceContacts((__int64)v13) < 0
    || !(unsigned int)RIMPopulatePointerDevice(
                        a1,
                        (__int64)v13,
                        *(struct _HIDP_PREPARSED_DATA **)(a5 + 32),
                        (__int16 *)v44) )
  {
    goto LABEL_75;
  }
  if ( v10 && !*(_QWORD *)(a3 + 80) )
  {
    LODWORD(v49) = 0;
    RIMFindMonitorForDigitizer(a1, (int)v13, v29, (__int64)&v49);
LABEL_64:
    *((_DWORD *)v13 + 65) |= 0x8000u;
    goto LABEL_65;
  }
  v30 = *(_QWORD *)(a3 + 80);
  if ( v30 )
  {
    v31 = (*((_DWORD *)v13 + 65) & 0x10000) == 0;
    *((_QWORD *)v13 + 36) = v30;
    if ( v31 )
    {
      RIMGetPhysicalSizeFromMonitor((__int64)v13);
      *(_OWORD *)(v13 + 140) = *(_OWORD *)(v13 + 156);
    }
    goto LABEL_64;
  }
  RIMAllocateMonitor((__int64)v13);
  if ( !*((_QWORD *)v13 + 36) )
    goto LABEL_75;
  RIMInitFakeMonitor((__int64)v13);
LABEL_65:
  v31 = (*((_DWORD *)v13 + 65) & 0x10000) == 0;
  v32 = *((_QWORD *)v13 + 36);
  *(_OWORD *)(v13 + 124) = *(_OWORD *)(*(_QWORD *)(v32 + 40) + 28LL);
  if ( v31 )
  {
    v33 = *(__m128i *)(*(_QWORD *)(v32 + 40) + 28LL);
    v34 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 28LL);
    v35 = _mm_srli_si128(v33, 8).m128i_u64[0];
    *((_DWORD *)v13 + 45) = v35 - v34;
    *((_DWORD *)v13 + 46) = HIDWORD(v35) - HIDWORD(v34);
  }
  if ( (unsigned int)(*((_DWORD *)v13 + 6) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone() )
    goto LABEL_75;
  if ( !*(_QWORD *)(a3 + 80) )
    RIMComputeVirtualHimetricSize((__int64)v13, (const wchar_t *)1);
  *((_QWORD *)v13 + 89) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics((__int64)v13);
  *((_QWORD *)v13 + 2) = v22;
  *(_QWORD *)(v22 + 472) = v13;
  v36 = *(_QWORD **)(a1 + 568);
  if ( *v36 != a1 + 560 )
    __fastfail(3u);
  *v19 = a1 + 560;
  *((_QWORD *)v13 + 187) = v36;
  *v36 = v19;
  *(_QWORD *)(a1 + 568) = v19;
  if ( LOWORD(v44[0]) == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v13) < 0 )
    goto LABEL_75;
LABEL_85:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  LOBYTE(v5) = !v14;
  return v5;
}
