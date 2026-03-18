/*
 * XREFs of DrvUpdateGraphicsDeviceList @ 0x1C0043750
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C00436FC (UpdateGraphicsDeviceList.c)
 *     DrvInitConsole @ 0x1C009C8CC (DrvInitConsole.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0044268 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 *     bSetDeviceSessionUsage @ 0x1C00624A0 (bSetDeviceSessionUsage.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0068860 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068910 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C008B2D0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E6B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DrvSortGraphicsDeviceList@@YAXXZ @ 0x1C0090A48 (-DrvSortGraphicsDeviceList@@YAXXZ.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C009B07C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C009B248 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1C009D52C (wcsncmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvUpdateGraphicsDeviceList(__int64 a1, __int64 a2)
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // esi
  struct _DEVICE_OBJECT *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // r8
  PVOID v32; // rdx
  wchar_t *v33; // rcx
  __int64 v34; // r9
  bool v35; // zf
  __int64 v36; // rax
  wchar_t *v37; // rdx
  unsigned int v38; // r9d
  int v39; // r8d
  wchar_t *v40; // rcx
  unsigned int v41; // r8d
  int v42; // edx
  unsigned int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rax
  HANDLE RegistryHandleFromDeviceMap; // rax
  unsigned __int16 *v47; // rax
  HANDLE v48; // rax
  int updated; // eax
  __int64 v50; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  struct _DEVICE_OBJECT *v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rax
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  char v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+44h] [rbp-BCh]
  NTSTATUS v60; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  _QWORD InputBuffer[5]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v69[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h]
  __int64 v71; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v74; // [rsp+118h] [rbp+18h]
  int v75; // [rsp+120h] [rbp+20h]
  _BYTE v76[40]; // [rsp+128h] [rbp+28h] BYREF

  v2 = (int)a1;
  v3 = (int)a2;
  v59 = a1;
  v64 = 0;
  DeviceObject = 0LL;
  v4 = 1;
  DeviceRegKey = 0LL;
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = v3;
  WdLogEvent5_WdEvent(v5);
  v58 = 0;
  v6 = 0;
  if ( (_DWORD)v3 )
  {
    gcNextGlobalDeviceNumber = HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
    gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
    gcNextGlobalPhysicalOutputNumber = gcLocalNextGlobalPhysicalOutputNumber;
    gcNextGlobalVirtualOutputNumber = gcLocalNextGlobalVirtualOutputNumber;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.EntryContext = &v64;
    QueryTable.DefaultData = &v62;
    LODWORD(v62) = 0;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    QueryTable.DefaultLength = 4;
    v74 = 0LL;
    v75 = 0;
    memset(v76, 0, sizeof(v76));
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
      v64 = gRemoteContext - 1;
    if ( dword_1C018C340 )
    {
      updated = DrvUpdateRemoteAdapterInfo(0LL);
      if ( updated < 0 )
        return 0LL;
    }
  }
  while ( 2 )
  {
    if ( gProtocolType != -1 && gcNextGlobalDeviceNumber <= v64 )
    {
      if ( (_DWORD)v2 )
      {
        if ( (_DWORD)v3 )
        {
          v12 = StringCchPrintfW(
                  (wchar_t *)&QueryTable,
                  0x32uLL,
                  L"\\Device\\Video%d",
                  (unsigned int)gcNextGlobalDeviceNumber);
        }
        else
        {
          LODWORD(Environment) = gcNextGlobalDeviceNumber;
          v12 = StringCchPrintfW((wchar_t *)&QueryTable, 0x32uLL, L"\\Device\\%s%d", qword_1C018C338, Environment);
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
              v36 = WdLogNewEntry5_WdTrace(v16);
              *(_QWORD *)(v36 + 24) = v17;
              WdLogEvent5_WdTrace(v36);
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
              v6 = v58;
LABEL_84:
              v40 = gpGraphicsDeviceList;
              v41 = 0;
              while ( v40 )
              {
                v42 = *((_DWORD *)v40 + 40);
                if ( (v42 & 0x4000000) != 0 )
                {
                  v43 = v42 & 0xFFFFFFFB;
                  *((_DWORD *)v40 + 40) = v43;
                  *((_DWORD *)v40 + 69) = v41 < gRemoteContext;
                  if ( v41 == dword_1C018C304 )
                    *((_DWORD *)v40 + 40) = v43 | 4;
                  ++v41;
                }
                v40 = (wchar_t *)*((_QWORD *)v40 + 16);
              }
              goto LABEL_6;
            }
            FileObject = 0LL;
          }
          v6 = v58;
          v18 = (char *)PALLOCMEM2(0x140uLL, 1986291527LL, 1);
          LODWORD(v2) = v59;
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
                    (__int64)&v62,
                    1u);
            v22 = v20;
            if ( v20 < 0 )
            {
              v52 = WdLogNewEntry5_WdTrace(v21);
              *(_QWORD *)(v52 + 24) = v22;
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
                if ( (int)GreDeviceIoControlEx(v23, 0x232033u, 0LL, 0, v69, 0x18u, (__int64)&v62, 1u) >= 0 )
                {
                  if ( v69[0] != 2 )
                  {
                    v53 = WdLogNewEntry5_WdAssertion(v25, v24);
                    WdLogEvent5_WdAssertion(v53);
                  }
                  v26 = v70;
                  if ( v70 )
                  {
                    *((_DWORD *)v18 + 40) |= 0x800000u;
                    *((_QWORD *)v18 + 32) = v26;
                    *((_DWORD *)v18 + 68) = v69[1];
                    *((_QWORD *)v18 + 33) = v71;
                    goto LABEL_40;
                  }
                  goto LABEL_134;
                }
LABEL_40:
                v60 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
                v27 = v60;
                if ( v60 < 0 )
                {
                  if ( (*((_DWORD *)v18 + 40) & 0x20000000) != 0 )
                  {
                    v54 = (struct _DEVICE_OBJECT *)*((_QWORD *)v18 + 18);
                    if ( v54 )
                    {
                      v60 = IoOpenDeviceRegistryKey(v54, 2u, 0x2000000u, &DeviceRegKey);
                      v27 = v60;
                      if ( v60 >= 0 )
                      {
                        DrvGetDeviceConfigurationInformation(v18, (PCWSTR)DeviceRegKey, 1);
                        ZwClose(DeviceRegKey);
                      }
                    }
                  }
                }
                else
                {
                  v28 = (struct _DEVICE_OBJECT *)*((_QWORD *)P + 1);
                  ExFreePoolWithTag(P, 0);
                  v60 = IoOpenDeviceRegistryKey(v28, 2u, 0x2000000u, &DeviceRegKey);
                  v27 = v60;
                  if ( v60 >= 0 )
                  {
                    v61 = 0LL;
                    LODWORD(v29) = 0;
                    if ( (int)GreDeviceIoControlEx(DeviceObject, 0x23201Bu, 0LL, 0, &v61, 8u, (__int64)&v62, 1u) >= 0 )
                    {
                      if ( v61 )
                      {
                        v19 = 1;
                        if ( (*(_DWORD *)v61 & 0x20000000) != 0 )
                        {
                          do
                            v29 = (unsigned int)(v29 + 1);
                          while ( (*((_DWORD *)v61 + 5 * v29) & 0x20000000) != 0 );
                        }
                      }
                    }
                    DrvGetDeviceConfigurationInformation(v18, (PCWSTR)DeviceRegKey, 1);
                    if ( v19 )
                    {
                      if ( (_DWORD)v29 )
                      {
                        *((_DWORD *)v18 + 56) = v29;
                        *((_QWORD *)v18 + 29) = PALLOCMEM2((unsigned int)(20 * v29), 1986291527LL, 1);
                        v30 = (unsigned int)v29;
                        v31 = 0LL;
                        do
                        {
                          *(_DWORD *)(v31 + *((_QWORD *)v18 + 29)) = 0;
                          v32 = v61;
                          if ( (*(_DWORD *)((_BYTE *)v61 + v31) & 1) != 0 )
                          {
                            *(_DWORD *)(v31 + *((_QWORD *)v18 + 29)) |= 1u;
                            v32 = v61;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v32 + v31) & 2) == 0 )
                          {
                            *(_DWORD *)(v31 + *((_QWORD *)v18 + 29)) |= 2u;
                            v32 = v61;
                          }
                          if ( *(int *)((char *)v32 + v31) >= 0 )
                          {
                            *(_DWORD *)(v31 + *((_QWORD *)v18 + 29)) |= 0x80000000;
                            v32 = v61;
                          }
                          if ( (*(_DWORD *)((_BYTE *)v32 + v31) & 0x40000000) == 0 )
                          {
                            *(_DWORD *)(v31 + *((_QWORD *)v18 + 29)) |= 0x40000000u;
                            v32 = v61;
                          }
                          *(_DWORD *)(v31 + *((_QWORD *)v18 + 29) + 4) = *(_DWORD *)((char *)v32 + v31 + 4);
                          *(_QWORD *)(v31 + *((_QWORD *)v18 + 29) + 8) = *(_QWORD *)((char *)v61 + v31 + 8);
                          *(_BYTE *)(v31 + *((_QWORD *)v18 + 29) + 16) = *((_BYTE *)v61 + v31 + 16);
                          v31 += 20LL;
                          --v30;
                        }
                        while ( v30 );
                      }
                      ExFreePoolWithTag(v61, 0);
                    }
                    ZwClose(DeviceRegKey);
                  }
                  ObfDereferenceObject(v28);
                }
                swprintf_s((wchar_t *)v18, 0x20uLL, (const wchar_t *)&QueryTable);
                ++gcNextGlobalDeviceNumber;
                if ( v27 < 0 )
                {
                  RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                                  (unsigned __int16 *)v18,
                                                  0,
                                                  0LL,
                                                  0LL,
                                                  0,
                                                  &v60,
                                                  gProtocolType);
                  v27 = v60;
                  DeviceRegKey = RegistryHandleFromDeviceMap;
                  if ( v60 < 0 )
                  {
LABEL_63:
                    v33 = (wchar_t *)(v18 + 64);
                    if ( (*((_DWORD *)v18 + 40) & 8) != 0 )
                    {
                      v55 = gcNextGlobalVirtualOutputNumber++;
                      swprintf_s(v33, 0x20uLL, L"\\\\.\\DISPLAYV%d", v55);
                    }
                    else
                    {
                      v34 = gcNextGlobalPhysicalOutputNumber++;
                      swprintf_s(v33, 0x20uLL, L"\\\\.\\DISPLAY%d", v34);
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
                        v35 = (*((_DWORD *)v18 + 40) & 0x800000) == 0;
                        gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)v18;
                        if ( !v35 )
                          DrvAddAdapterLuid(*(struct _LUID *)(v18 + 264));
                        v6 = 1;
                        v58 = 1;
                        goto LABEL_74;
                      }
                      goto LABEL_115;
                    }
                    if ( !(_DWORD)v3 )
                    {
LABEL_115:
                      *((_QWORD *)v18 + 37) = 0LL;
                      *((_QWORD *)v18 + 38) = 0LL;
                      *((_QWORD *)v18 + 39) = 0LL;
                      if ( (int)((__int64 (*)(void))qword_1C018BB40)() >= 0 )
                        DrvUpdateRemoteAdapterInfo((struct tagGRAPHICS_DEVICE *)v18);
                      if ( v27 >= 0 )
                        goto LABEL_69;
                      DrvCleanupOneGraphicsDevice(v18);
                      --gcNextGlobalPhysicalOutputNumber;
                      v4 = 0;
                      v6 = v58;
LABEL_74:
                      LODWORD(v2) = v59;
                      continue;
                    }
                    DrvCleanupOneGraphicsDevice(v18);
LABEL_78:
                    v6 = v58;
                    goto LABEL_74;
                  }
                  DrvGetDeviceConfigurationInformation(v18, (PCWSTR)RegistryHandleFromDeviceMap, 0);
                  ZwClose(DeviceRegKey);
                }
                if ( !*((_QWORD *)v18 + 27) )
                {
                  v47 = (unsigned __int16 *)PALLOCMEM2(0x20uLL, 1936876615LL, 0);
                  *((_QWORD *)v18 + 27) = v47;
                  if ( v47 )
                  {
                    v48 = DrvGetRegistryHandleFromDeviceMap(
                            (unsigned __int16 *)v18,
                            0,
                            0LL,
                            v47,
                            0x10u,
                            &v60,
                            gProtocolType);
                    DeviceRegKey = v48;
                    if ( v48 )
                      ZwClose(v48);
                    v27 = v60;
                  }
                  else
                  {
                    v27 = -1073741670;
                  }
                }
                goto LABEL_63;
              }
              v52 = WdLogNewEntry5_WdTrace(v21);
              *(_QWORD *)(v52 + 24) = LODWORD(InputBuffer[4]);
              *(_QWORD *)(v52 + 32) = -1073741637LL;
            }
            WdLogEvent5_WdTrace(v52);
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
        v50 = WdLogNewEntry5_WdTrace(0xFFFFLL);
        WdLogEvent5_WdTrace(v50);
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
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = gcNextGlobalDeviceNumber;
    gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcLocalNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcLocalNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
  }
  else
  {
    v37 = gpGraphicsDeviceList;
    v38 = 0;
    gcRemoteNextGlobalDeviceNumber = gcNextGlobalDeviceNumber;
    v39 = 0;
    gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    gcRemoteNextGlobalPhysicalOutputNumber = gcNextGlobalPhysicalOutputNumber;
    gcRemoteNextGlobalVirtualOutputNumber = gcNextGlobalVirtualOutputNumber;
    gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
    while ( v37 )
    {
      if ( (*((_DWORD *)v37 + 40) & 0x4000000) != 0 )
      {
        i = *((unsigned int *)v37 + 68);
        ++v38;
        if ( (unsigned int)i > 0x10 || ((1 << i) & v39) != 0 )
          goto LABEL_144;
        v39 |= 1 << i;
      }
      v37 = (wchar_t *)*((_QWORD *)v37 + 16);
    }
    i = v38;
    if ( v39 == (1 << v38) - 1 )
      goto LABEL_10;
LABEL_144:
    v56 = WdLogNewEntry5_WdAssertion(i, v37);
    WdLogEvent5_WdAssertion(v56);
  }
LABEL_10:
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    DrvAddMirrorDriversToRemoteList();
    if ( !gbVideoInitialized )
    {
      v45 = WdLogNewEntry5_WdEvent(i, v44);
      WdLogEvent5_WdEvent(v45);
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
