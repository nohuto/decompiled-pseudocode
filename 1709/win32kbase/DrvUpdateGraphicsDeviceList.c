/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C0058550
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0058504 (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C00A68B8 (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC5EC (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0059068 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C0078940 (bSetDeviceSessionUsage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0079CD8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     GreDeviceIoControlEx @ 0x1C007A620 (GreDeviceIoControlEx.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00917B0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0096620 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0097F20 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C00999E4 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A4B78 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00A5070 (DrvCleanupOneGraphicsDevice.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C00A7628 (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  int v12; // eax
  struct tagGRAPHICS_DEVICE *v13; // rsi
  wchar_t *v14; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  char *v18; // rbx
  int v19; // r15d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  struct _DEVICE_OBJECT *v23; // rcx
  __int64 v24; // rax
  int v25; // esi
  struct _DEVICE_OBJECT *v26; // r12
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // r8
  PVOID v30; // rdx
  wchar_t *v31; // rcx
  __int64 v32; // r9
  bool v33; // zf
  __int64 v34; // rax
  wchar_t *v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r8
  wchar_t *v38; // rcx
  unsigned int v39; // r8d
  int v40; // edx
  unsigned int v41; // edx
  __int64 v42; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  unsigned __int16 *v44; // rax
  HANDLE v45; // rax
  int updated; // eax
  __int64 v47; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  struct _DEVICE_OBJECT *v51; // rcx
  __int64 v52; // r9
  __int64 v53; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v55; // [rsp+40h] [rbp-C0h]
  NTSTATUS v57; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _QWORD InputBuffer[5]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+120h] [rbp+20h]
  _BYTE v73[40]; // [rsp+128h] [rbp+28h] BYREF

  v2 = a1;
  v3 = a2;
  v61 = 0;
  DeviceObject = 0LL;
  v4 = 1;
  DeviceRegKey = 0LL;
  v5 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  v55 = 0;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v61;
    QueryTable.DefaultData = &v59;
    LODWORD(v59) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v71 = 0LL;
    v72 = 0;
    memset(v73, 0, sizeof(v73));
    RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  }
  else
  {
    gcNextGlobalDeviceNumber = gcRemoteNextGlobalDeviceNumber;
    gpGraphicsDeviceList = (wchar_t *)gpRemoteGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpRemoteGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcRemoteNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcRemoteNextGlobalVirtualOutputNumber;
    if ( gProtocolType != -1 )
      v61 = gRemoteContext - 1;
    if ( dword_1C0191070 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v61 )
    {
      if ( (_DWORD)v2 )
      {
        if ( (_DWORD)v3 )
        {
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\Video%d");
        }
        else
        {
          LODWORD(Environment) = gcNextGlobalDeviceNumber;
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C0191068, Environment);
        }
        if ( v12 >= 0 )
        {
          v13 = gpRemoteGraphicsDeviceListLast;
          v14 = gpGraphicsDeviceList;
          if ( (_DWORD)v3 )
            v13 = gpLocalGraphicsDeviceListLast;
          while ( v14 )
          {
            if ( !wcsncmp((const wchar_t *)&QueryTable, v14, 0x40uLL) )
              goto LABEL_77;
            if ( v14 == (wchar_t *)v13 )
              break;
            v14 = (wchar_t *)*((_QWORD *)v14 + 16);
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&QueryTable);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          v17 = DeviceObjectPointer;
          if ( DeviceObjectPointer < 0 )
          {
            if ( (_DWORD)v3 || gRemoteContext != 1 )
            {
              v34 = WdLogNewEntry5_WdTrace(v16);
              *(_QWORD *)(v34 + 24) = v17;
              WdLogEvent5_WdTrace(v34);
LABEL_77:
              ++gcNextGlobalDeviceNumber;
              goto LABEL_78;
            }
            FileObject = ::FileObject;
            if ( !::FileObject
              || (RelatedDeviceObject = IoGetRelatedDeviceObject(::FileObject),
                  DeviceObject = RelatedDeviceObject,
                  !FileObject)
              || !RelatedDeviceObject )
            {
              v6 = v55;
LABEL_84:
              v38 = gpGraphicsDeviceList;
              v39 = 0;
              while ( v38 )
              {
                v40 = *((_DWORD *)v38 + 40);
                if ( (v40 & 0x4000000) != 0 )
                {
                  v41 = v40 & 0xFFFFFFFB;
                  *((_DWORD *)v38 + 40) = v41;
                  *((_DWORD *)v38 + 69) = v39 < gRemoteContext;
                  if ( v39 == dword_1C0191034 )
                    *((_DWORD *)v38 + 40) = v41 | 4;
                  ++v39;
                }
                v38 = (wchar_t *)*((_QWORD *)v38 + 16);
              }
              goto LABEL_6;
            }
            FileObject = 0LL;
          }
          v6 = v55;
          v18 = (char *)PALLOCMEM2(0x148uLL, 1986291527LL, 1);
          LODWORD(v2) = a1;
          if ( !v18 )
            continue;
          *((_DWORD *)v18 + 56) = 0;
          *((_QWORD *)v18 + 29) = 0LL;
          *((_QWORD *)v18 + 17) = DeviceObject;
          *((_WORD *)v18 + 124) = gProtocolType;
          *((_QWORD *)v18 + 36) = 0LL;
          if ( !(_DWORD)v3 )
            *((_DWORD *)v18 + 40) |= 0x4000000u;
          *((_QWORD *)v18 + 30) = FileObject;
          if ( (_DWORD)v3 )
            *((_DWORD *)v18 + 69) = 0;
          v19 = 0;
          if ( (_DWORD)v3 )
          {
            memset(InputBuffer, 0, sizeof(InputBuffer));
            InputBuffer[1] = VideoPortCallout;
            InputBuffer[0] = v18;
            v20 = GreDeviceIoControlEx(
                    *((PDEVICE_OBJECT *)v18 + 17),
                    0x23201Fu,
                    InputBuffer,
                    0x28u,
                    InputBuffer,
                    0x28u,
                    (__int64)&v59,
                    1u);
            v22 = v20;
            if ( v20 < 0 )
            {
              v49 = WdLogNewEntry5_WdTrace(v21);
              *(_QWORD *)(v49 + 24) = v22;
            }
            else
            {
              if ( LODWORD(InputBuffer[2]) )
                *((_DWORD *)v18 + 40) |= 0x40000000u;
              if ( (InputBuffer[4] & 0xC0000001) == 0 )
              {
                if ( (InputBuffer[4] & 0x20000000) != 0 )
                  *((_DWORD *)v18 + 40) |= 0x100000u;
                v23 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18 + 17);
                *((_QWORD *)v18 + 18) = InputBuffer[3];
                *((_DWORD *)v18 + 68) = 0;
                if ( (int)GreDeviceIoControlEx(v23, 0x232033u, 0LL, 0, v66, 0x18u, (__int64)&v59, 1u) >= 0 )
                {
                  if ( v66[0] != 2 )
                  {
                    v50 = ((__int64 (*)(void))WdLogNewEntry5_WdAssertion)();
                    WdLogEvent5_WdAssertion(v50);
                  }
                  v24 = v67;
                  if ( v67 )
                  {
                    *((_DWORD *)v18 + 40) |= 0x800000u;
                    *((_QWORD *)v18 + 32) = v24;
                    *((_DWORD *)v18 + 68) = v66[1];
                    *((_QWORD *)v18 + 33) = v68;
                    goto LABEL_40;
                  }
                  goto LABEL_134;
                }
LABEL_40:
                v57 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                v25 = v57;
                if ( v57 < 0 )
                {
                  if ( (*((_DWORD *)v18 + 40) & 0x20000000) != 0 )
                  {
                    v51 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18 + 18);
                    if ( v51 )
                    {
                      v57 = IoOpenDeviceRegistryKey(v51, 2u, 0x2000000u, &DeviceRegKey);
                      v25 = v57;
                      if ( v57 >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation(v18, DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v26 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  v57 = IoOpenDeviceRegistryKey(v26, 2u, 0x2000000u, &DeviceRegKey);
                  v25 = v57;
                  if ( v57 >= 0 )
                  {
                    v58 = 0LL;
                    LODWORD(v27) = 0;
                    if ( (int)GreDeviceIoControlEx(DeviceObject, 0x23201Bu, 0LL, 0, &v58, 8u, (__int64)&v59, 1u) >= 0 )
                    {
                      if ( v58 )
                      {
                        v19 = 1;
                        if ( (*(_DWORD *)v58 & 0x20000000) != 0 )
                        {
                          do
                            v27 = (unsigned int)(v27 + 1);
                          while ( (*((_DWORD *)v58 + 5 * v27) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation(v18, DeviceRegKey, 1);
                    if ( v19 )
                    {
                      if ( (_DWORD)v27 )
                      {
                        *((_DWORD *)v18 + 56) = v27;
                        *((_QWORD *)v18 + 29) = PALLOCMEM2((unsigned int)(20 * v27), 1986291527LL, 1);
                        v28 = (unsigned int)v27;
                        v29 = 0LL;
                        do
                        {
                          *(_DWORD *)(v29 + *((_QWORD *)v18 + 29)) = 0;
                          v30 = v58;
                          if ( (*(_DWORD *)((_BYTE *)v58 + v29) & 1) != 0 )
                          {
                            *(_DWORD *)(v29 + *((_QWORD *)v18 + 29)) |= 1u;
                            v30 = v58;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v30 + v29) & 2) == 0 )
                          {
                            *(_DWORD *)(v29 + *((_QWORD *)v18 + 29)) |= 2u;
                            v30 = v58;
                          }
                          if ( *(int *)((char *)v30 + v29) >= 0 )
                          {
                            *(_DWORD *)(v29 + *((_QWORD *)v18 + 29)) |= 0x80000000;
                            v30 = v58;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v30 + v29) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v29 + *((_QWORD *)v18 + 29)) |= 0x40000000u;
                            v30 = v58;
                          }
                          *(_DWORD *)(v29 + *((_QWORD *)v18 + 29) + 4) = *(_DWORD *)((char *)v30 + v29 + 4);
                          *(_QWORD *)(v29 + *((_QWORD *)v18 + 29) + 8) = *(_QWORD *)((char *)v58 + v29 + 8);
                          *(_BYTE *)(v29 + *((_QWORD *)v18 + 29) + 16) = *((_BYTE *)v58 + v29 + 16);
                          v29 += 20LL;
                          --v28;
                        }
                        while ( v28 );
                      }
                      ExFreePoolWithTag(v58, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v26);
                }
                swprintf_s((wchar_t *)v18, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( v25 < 0 )
                {
                  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                  (unsigned __int16 *)v18,
                                                  0,
                                                  0LL,
                                                  0LL,
                                                  0,
                                                  &v57,
                                                  gProtocolType);
                  v25 = v57;
                  DeviceRegKey = RegistryHandleFromDeviceMap;
                  if ( v57 < 0 )
                  {
LABEL_63:
                    v31 = (wchar_t *)(v18 + 64);
                    if ( (*((_DWORD *)v18 + 40) & 8) != 0 )
                    {
                      v52 = gcNextGlobalVirtualOutputNumber++;
                      swprintf_s(v31, 0x20uLL, L"\\\\.\\DISPLAYV%d", v52);
                    }
                    else
                    {
                      v32 = gcNextGlobalPhysicalOutputNumber++;
                      swprintf_s(v31, 0x20uLL, L"\\\\.\\DISPLAY%d", v32);
                    }
                    if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v18) )
                      *((_DWORD *)v18 + 40) &= ~0x80000u;
                    else
                      *((_DWORD *)v18 + 40) |= 0x80000u;
                    if ( (unsigned int)bSetDeviceSessionUsage(v18, 1LL) )
                    {
                      if ( (_DWORD)v3 )
                      {
LABEL_69:
                        if ( gpGraphicsDeviceList )
                          *((_QWORD *)gpGraphicsDeviceListLast + 16) = v18;
                        else
                          gpGraphicsDeviceList = (wchar_t *)v18;
                        v33 = (*((_DWORD *)v18 + 40) & 0x800000) == 0;
                        gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v18;
                        if ( !v33 )
                          DrvAddAdapterLuid(*(struct _LUID *)(v18 + 264));
                        v6 = 1;
                        v55 = 1;
                        goto LABEL_74;
                      }
                      goto LABEL_115;
                    }
                    if ( !(_DWORD)v3 )
                    {
LABEL_115:
                      *((_QWORD *)v18 + 37) = 0LL;
                      *((_QWORD *)v18 + 39) = 0LL;
                      *((_QWORD *)v18 + 40) = 0LL;
                      if ( (int)((__int64 (__fastcall *)(char *, char *, char *, char *))qword_1C01907A8)(
                                  v18 + 296,
                                  v18 + 312,
                                  v18 + 320,
                                  v18 + 304) >= 0 )
                        DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v18);
                      if ( v25 >= 0 )
                        goto LABEL_69;
                      DrvCleanupOneGraphicsDevice(v18);
                      --gcNextGlobalPhysicalOutputNumber;
                      v4 = 0;
                      v6 = v55;
LABEL_74:
                      LODWORD(v2) = a1;
                      continue;
                    }
                    DrvCleanupOneGraphicsDevice(v18);
LABEL_78:
                    v6 = v55;
                    goto LABEL_74;
                  }
                  DrvGetDeviceConfigurationInformation(v18, RegistryHandleFromDeviceMap, 0);
                  ZwClose(DeviceRegKey);
                }
                if ( !*((_QWORD *)v18 + 27) )
                {
                  v44 = (unsigned __int16 *)PALLOCMEM2(0x20uLL, 1936876615LL, 0);
                  *((_QWORD *)v18 + 27) = v44;
                  if ( v44 )
                  {
                    v45 = DrvGetRegistryHandleFromDeviceMap(
                            (unsigned __int16 *)v18,
                            0,
                            0LL,
                            v44,
                            0x10u,
                            &v57,
                            gProtocolType);
                    DeviceRegKey = v45;
                    if ( v45 )
                      ZwClose(v45);
                    v25 = v57;
                  }
                  else
                  {
                    v25 = -1073741670;
                  }
                }
                goto LABEL_63;
              }
              v49 = WdLogNewEntry5_WdTrace(v21);
              *(_QWORD *)(v49 + 24) = LODWORD(InputBuffer[4]);
              *(_QWORD *)(v49 + 32) = -1073741637LL;
            }
            WdLogEvent5_WdTrace(v49);
LABEL_134:
            DrvCleanupOneGraphicsDevice(v18);
            goto LABEL_77;
          }
          *((_QWORD *)v18 + 33) = 0xFFFFFFFFLL;
          *((_DWORD *)v18 + 68) = gcNextGlobalDeviceNumber;
          *((_QWORD *)v18 + 32) = 0LL;
          goto LABEL_40;
        }
      }
      else
      {
        v47 = WdLogNewEntry5_WdTrace(0xFFFFLL);
        WdLogEvent5_WdTrace(v47);
      }
      return 0LL;
    }
    break;
  }
  if ( !(_DWORD)v3 )
    goto LABEL_84;
LABEL_6:
  DrvSetDisconnectedGraphicsDevice(v3);
  v8 = WdLogNewEntry5_WdTrace(v7);
  WdLogEvent5_WdTrace(v8);
  if ( v6 )
    DrvSortGraphicsDeviceList();
  if ( (_DWORD)v3 )
  {
    *(&WPP_MAIN_CB.ActiveThreadCount + 1) = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v35 = gpGraphicsDeviceList;
    v36 = 0LL;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v37 = 0LL;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v35 )
    {
      if ( (*((_DWORD *)v35 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v35 + 68);
        v36 = (unsigned int)(v36 + 1);
        if ( (unsigned int)i > 0x10 || ((1 << i) & (unsigned int)v37) != 0 )
          goto LABEL_144;
        v37 = (1 << i) | (unsigned int)v37;
      }
      v35 = (wchar_t *)*((_QWORD *)v35 + 16);
    }
    i = (unsigned int)v36;
    if ( (_DWORD)v37 == (1 << v36) - 1 )
      goto LABEL_10;
LABEL_144:
    v53 = WdLogNewEntry5_WdAssertion(i, v35, v37, v36);
    WdLogEvent5_WdAssertion(v53);
  }
LABEL_10:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v42 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v42);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      {
        for ( i = (unsigned __int64)gpGraphicsDeviceList; i; i = *(_QWORD *)(i + 128) )
        {
          if ( (*(_DWORD *)(i + 160) & 8) != 0 )
            *(_DWORD *)(i + 276) = 0;
        }
      }
    }
  }
  v10 = WdLogNewEntry5_WdTrace(i);
  *(_QWORD *)(v10 + 24) = v4;
  WdLogEvent5_WdTrace(v10);
  return (unsigned int)v4;
}
