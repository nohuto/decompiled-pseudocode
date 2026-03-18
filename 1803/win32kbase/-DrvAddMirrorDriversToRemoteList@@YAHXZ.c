/*
 * XREFs of ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00CC738 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CC7CC (-DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00CF1DC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00D0670 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00D3A50 (DrvCleanupOneGraphicsDevice.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0142114 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall DrvAddMirrorDriversToRemoteList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v7; // r14d
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  WCHAR *RegistryHandleFromDeviceMap; // rbx
  wchar_t *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS v20; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B8h] [rbp-50h]
  _BYTE v29[40]; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR SourceString[40]; // [rsp+E8h] [rbp-20h] BYREF

  v21 = 0;
  DeviceObject = 0LL;
  v3 = 0;
  LODWORD(v22) = 0;
  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  WdLogEvent5_WdEvent(v4);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.Flags = 288;
  QueryTable.EntryContext = &v21;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v22;
  QueryTable.DefaultLength = 4;
  v27 = 0LL;
  v28 = 0;
  memset(v29, 0, sizeof(v29));
  v5 = 65534LL;
  if ( ((gProtocolType + 1) & 0xFFFE) != 0 )
  {
    if ( gpRemoteMirrorGraphicsDevice )
      return 1LL;
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    while ( 1 )
    {
      v7 = 0;
      if ( (int)StringCchPrintfW(SourceString, 0x24uLL, L"\\Device\\Video%d", v3) < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      v10 = DeviceObjectPointer;
      v20 = DeviceObjectPointer;
      if ( DeviceObjectPointer >= 0 )
      {
        v13 = (char *)PALLOCMEM2(0x138uLL, 0x76646747u, 1);
        if ( v13 )
        {
          *((_DWORD *)v13 + 54) = 0;
          *((_QWORD *)v13 + 28) = 0LL;
          *((_DWORD *)v13 + 65) = 0;
          if ( DeviceObject )
          {
            *((_QWORD *)v13 + 17) = DeviceObject;
            *((_QWORD *)v13 + 29) = FileObject;
          }
          else
          {
            *((_QWORD *)v13 + 17) = 0LL;
            *((_QWORD *)v13 + 29) = 0LL;
          }
          *((_WORD *)v13 + 110) = gProtocolType;
          swprintf_s((wchar_t *)v13, 0x20uLL, L"\\Device\\Video%d", v3++);
          RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                   (unsigned __int16 *)v13,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   0,
                                                   &v20,
                                                   0);
          DrvGetDeviceConfigurationInformation(v13, RegistryHandleFromDeviceMap, 0);
          ZwClose(RegistryHandleFromDeviceMap);
          v15 = (wchar_t *)(v13 + 64);
          if ( (*((_DWORD *)v13 + 40) & 0x200008) == 0x200008 )
          {
            ++gcNextGlobalVirtualOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAYV%d");
            v7 = 1;
          }
          else
          {
            ++gcNextGlobalPhysicalOutputNumber;
            swprintf_s(v15, 0x20uLL, L"\\\\.\\DISPLAY%d");
          }
          if ( v20 >= 0 && v7 )
          {
            gpRemoteMirrorGraphicsDevice = (struct tagGRAPHICS_DEVICE *)v13;
            DrvAddEntryToGraphicsDeviceList((wchar_t *)v13, v16, v17);
            if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 )
              DrvAddAdapterLuid(*(struct _LUID *)(v13 + 248));
          }
          else
          {
            if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 )
              DrvRemoveAdapterLuid(*(struct _LUID *)(v13 + 248));
            DrvCleanupOneGraphicsDevice(v13);
            --gcNextGlobalPhysicalOutputNumber;
          }
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdTrace(v9);
        *(_QWORD *)(v11 + 24) = v10;
        WdLogEvent5_WdTrace(v11);
        ++v3;
      }
      if ( v3 > v21 )
      {
        gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
        gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
        gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
        gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
        v18 = WdLogNewEntry5_WdTrace(v12);
        *(_QWORD *)(v18 + 24) = 1LL;
        WdLogEvent5_WdTrace(v18);
        return 1LL;
      }
    }
  }
  v19 = WdLogNewEntry5_WdTrace(v5);
  WdLogEvent5_WdTrace(v19);
  return 0LL;
}
