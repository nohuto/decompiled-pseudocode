/*
 * XREFs of IopInitializeBootDrivers @ 0x1408B5D8C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14014BFEC (PnpDiagnosticTrace.c)
 *     PnpBootDeviceWait @ 0x14017973C (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     _memicmp @ 0x1401A53D0 (_memicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     McTemplateK0qzq @ 0x14023A374 (McTemplateK0qzq.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCreateKey @ 0x1405D3598 (_PnpCtxRegCreateKey.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     PipHardwareConfigGetIndex @ 0x140634100 (PipHardwareConfigGetIndex.c)
 *     _PnpCtxRegCloseKey @ 0x1406342AC (_PnpCtxRegCloseKey.c)
 *     IopOpenRegistryKeyEx @ 0x1406343E4 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140634424 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140634450 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     _PnpCtxRegSetValue @ 0x1407E6DC0 (_PnpCtxRegSetValue.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     PipInitializeCoreDriversAndElam @ 0x1408B556C (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x1408B5638 (PnpWaitForDevicesToStart.c)
 *     PipInitializeDriverDependentDLLs @ 0x1408B5810 (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x1408B5BD8 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1408B6C10 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1408B6D18 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1408B6D64 (PipLookupGroupName.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1408B6ED4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 *     IopAllocateLegacyBootResources @ 0x1408BF88C (IopAllocateLegacyBootResources.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1408C0F30 (PiCreateDriverDataDirectoryRoot.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408C48C0 (IopCallBootDriverReinitializationRoutines.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1408C8E68 (PipUnloadEarlyLaunchDrivers.c)
 *     VhdiGetDiskParameters @ 0x1408E227C (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x1408E3160 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408E3348 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1408E3720 (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(UNICODE_STRING *a1)
{
  UNICODE_STRING *v1; // r13
  unsigned __int16 v2; // di
  NTSTATUS RegistryValue; // ebx
  _QWORD *v4; // r15
  int GroupOrderIndex; // eax
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int16 i; // cx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // bx
  const UNICODE_STRING *v13; // rsi
  UNICODE_STRING *v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rcx
  UNICODE_STRING *v17; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rdi
  unsigned int v20; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v22; // rdx
  __int64 *j; // rcx
  unsigned __int16 v24; // r14
  __int64 v25; // r12
  _QWORD *v26; // rbx
  int v27; // eax
  unsigned int v28; // edi
  char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int Index; // eax
  int v33; // r13d
  NTSTATUS v34; // r12d
  unsigned __int16 m; // r15
  void **v36; // rdx
  void *v37; // rbx
  __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int64 v41; // rax
  int v42; // eax
  int started; // eax
  void *v44; // rcx
  ULONG v45; // r8d
  char v46; // r9
  void **v47; // rax
  __int64 v48; // rdi
  int v49; // eax
  unsigned int v50; // ecx
  wchar_t *Buffer; // rcx
  wchar_t *k; // rax
  int DiskParameters; // ebx
  _WORD *v54; // r15
  __int64 v55; // r14
  __int64 v56; // rax
  SIZE_T v57; // rbx
  wchar_t *v58; // rax
  wchar_t *v59; // rsi
  wchar_t *v60; // rax
  wchar_t *v61; // rsi
  PVOID v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int16 *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  PVOID v69; // r14
  void *dwFlags; // [rsp+28h] [rbp-E0h]
  ULONG dwFlagsa[2]; // [rsp+28h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+30h] [rbp-D8h]
  _DWORD *v73; // [rsp+38h] [rbp-D0h]
  PVOID v74; // [rsp+38h] [rbp-D0h]
  __int64 v75; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  void *Src; // [rsp+80h] [rbp-88h] BYREF
  HANDLE v81; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v82; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  void *v86; // [rsp+D0h] [rbp-38h]
  __int64 *v87; // [rsp+D8h] [rbp-30h]
  int v88; // [rsp+E0h] [rbp-28h] BYREF
  const wchar_t *v89; // [rsp+E8h] [rbp-20h]
  _BYTE v90[144]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[64]; // [rsp+188h] [rbp+80h] BYREF

  v1 = a1;
  Src = a1;
  v2 = 0;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v82.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v82.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v82, 0x20019u) >= 0
    || (*(_DWORD *)&v82.Length = 8257660,
        v82.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v82, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam(v1);
  PipInitComputerIds((__int64)v1);
  v88 = 2097182;
  v89 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)qword_1408CBFD0;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v88,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)&v1[1],
    0,
    0);
  v4 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  LODWORD(v75) = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v50 = 16;
      goto LABEL_94;
    }
    return 0LL;
  }
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v50 = 17;
      goto LABEL_94;
    }
    return 0LL;
  }
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2, (__int64)v1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = PiInitGroupOrderTableCount;
  v12 = 0;
  if ( PiInitGroupOrderTableCount )
  {
    while ( 1 )
    {
      v13 = (const UNICODE_STRING *)((char *)PiInitGroupOrderTable + 16 * v2);
      if ( RtlCompareUnicodeString(v13, &DestinationString, 1u) )
      {
        if ( RtlCompareUnicodeString(v13, &String2, 1u) )
          goto LABEL_15;
        LOWORD(v75) = v2;
      }
      ++v12;
LABEL_15:
      if ( v12 < 2u && ++v2 < v11 )
        continue;
      v4 = Object;
      v1 = (UNICODE_STRING *)Src;
      break;
    }
  }
  v14 = *(UNICODE_STRING **)&v1[3].Length;
  while ( v14 != &v1[3] )
  {
    v17 = v14;
    v14 = *(UNICODE_STRING **)&v14->Length;
    if ( SLODWORD(v17[3].Buffer) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        v19[1] = v19;
        *v19 = v19;
        v19[3] = v17;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v17 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v19, 0);
        }
        else
        {
          v19[4] = Handle;
          v20 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v19 + 22) = DriverTagPriority;
          v22 = (__int64 **)((char *)IopGroupTable + 16 * v20);
          for ( j = *v22; j != (__int64 *)v22 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v15 = (__int64 *)j[1];
          v16 = *v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            __fastfail(3u);
          *v19 = v16;
          v19[1] = v15;
          *(_QWORD *)(v16 + 8) = v19;
          *v15 = (__int64)v19;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1LL);
  v24 = 0;
  if ( !IopGroupIndex )
  {
LABEL_36:
    PnpNotifyEarlyLaunchStatusUpdate(2LL);
    PipUnloadEarlyLaunchDrivers(v1);
    PnPBootDriversLoaded = 1;
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( PnpWaitForDevicesToStart() )
    {
      if ( (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
      {
        if ( !HeadlessGlobals || !HeadlessGlobals[1] )
          return 0LL;
        v50 = 20;
LABEL_94:
        HdlspKernelAddLogEntry(v50, 0LL);
        return 0LL;
      }
      if ( memicmp(v1[11].Buffer, "ramdisk(", 8uLL) )
        v27 = -1073741275;
      else
        v27 = RamdiskStart(v1);
      if ( v27 < 0 || PnpWaitForDevicesToStart() )
      {
        v28 = 0;
        v29 = strstr((const char *)v1[11].Buffer, "vdisk(");
        if ( v29 && strstr(v29 + 1, "partition(") )
        {
          Buffer = v1[14].Buffer;
          for ( k = *(wchar_t **)Buffer; ; k = *(wchar_t **)k )
          {
            if ( k == Buffer )
              goto LABEL_43;
            if ( *((_QWORD *)k + 7) )
              break;
          }
          DiskParameters = VhdiGetDiskParameters(
                             *((_QWORD *)k + 7),
                             v90,
                             &String2,
                             &Src,
                             *(_QWORD *)dwFlagsa,
                             pszFormat,
                             v74);
          if ( DiskParameters >= 0 )
          {
            v54 = Src;
            *(_QWORD *)&DestinationString.Length = v90;
            DestinationString.Buffer = *(wchar_t **)&String2.Length;
            v86 = Src;
            v87 = &v75;
            DiskParameters = PnpBootDeviceWait(
                               (__int64)v1,
                               (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&VhdiInitializeBootDisk,
                               (__int64)&DestinationString);
            if ( DiskParameters >= 0 )
            {
              v55 = -1LL;
              v56 = -1LL;
              do
                ++v56;
              while ( v54[v56] );
              v57 = (unsigned int)(2 * v56 + 58);
              v58 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v57, 0x42646856u);
              v59 = v58;
              if ( !v58 )
              {
                v28 = 3;
                DiskParameters = -1073741801;
                goto LABEL_144;
              }
              DiskParameters = RtlStringCbPrintfW(v58, v57, L"\\\\Device\\HarddiskVolume%d%ws", (unsigned int)v75, v54);
              if ( DiskParameters >= 0 )
              {
                DiskParameters = VhdiMountVhdFile(v59);
                if ( DiskParameters < 0 )
                {
                  v28 = 5;
                }
                else
                {
                  NtVhdBootFile = (__int64)v59;
                  do
                    ++v55;
                  while ( v54[v55] );
                  v60 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * v55 + 84), 0x42646856u);
                  v61 = v60;
                  if ( !v60 )
                  {
                    v28 = 7;
                    DiskParameters = -1073741801;
                    goto LABEL_144;
                  }
                  memset(v60, 0, (unsigned int)(2 * v55 + 84));
                  DiskParameters = RtlStringCbPrintfW(
                                     v61 + 4,
                                     0x48uLL,
                                     L"\\Device\\HarddiskVolume%lu",
                                     (unsigned int)v75);
                  if ( DiskParameters >= 0 )
                  {
                    *((_DWORD *)v61 + 1) = 80;
                    memmove(v61 + 40, v54, 2LL * (unsigned int)(v55 + 1));
                    off_140399360 = v61;
                    *(_BYTE *)v61 = 1;
                    LODWORD(dword_14039C9F8) = 2 * v55 + 84;
                  }
                  else
                  {
                    v28 = 8;
                  }
                }
              }
              else
              {
                v28 = 4;
              }
            }
            else
            {
              v28 = 2;
            }
          }
          else
          {
            v28 = 1;
          }
          if ( DiskParameters < 0 )
LABEL_144:
            KeBugCheckEx(0x12Fu, v28, DiskParameters, 0LL, 0LL);
        }
LABEL_43:
        if ( PnpWaitForDevicesToStart() )
        {
          if ( (int)IopCreateArcNames(v1) < 0 )
            return 0LL;
          PnpBootDeviceWait(
            (__int64)v1,
            (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&IopMarkBootPartition,
            0LL);
          v30 = *(_QWORD *)&v1[15].Length;
          PnPBootDriversInitialized = 1;
          if ( (*(_DWORD *)(v30 + 116) & 0x400) != 0
            && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
          {
            return 0LL;
          }
          if ( (int)PiCreateDriverDataDirectoryRoot() < 0 )
            return 0LL;
          pszDest[0] = 0;
          Index = PipHardwareConfigGetIndex(v31, &v75);
          v33 = v75;
          v34 = Index;
          if ( Index >= 0 )
          {
            LODWORD(v74) = v75;
            v34 = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v74);
          }
          for ( m = 0; m < (unsigned int)IopGroupIndex; ++m )
          {
            while ( 1 )
            {
              v36 = (void **)((char *)IopGroupTable + 16 * m);
              v37 = *v36;
              if ( *v36 == v36 )
                break;
              if ( *((void ***)v37 + 1) != v36 || (v47 = *(void ***)v37, *(void **)(*(_QWORD *)v37 + 8LL) != v37) )
                __fastfail(3u);
              *v36 = v47;
              v47[1] = v36;
              v48 = *((_QWORD *)v37 + 2);
              if ( v34 >= 0 && !*((_BYTE *)v37 + 46) && !*(_QWORD *)(v48 + 8) )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v48 + 48) + 8LL) )
                {
                  v49 = *(_DWORD *)(v48 + 16);
                  if ( (v49 & 0x400) == 0
                    && (v49 & 8) == 0
                    && IopGetRegistryValue(*((HANDLE *)v37 + 4), L"Start", 0, &P) >= 0 )
                  {
                    v62 = P;
                    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                    {
                      LODWORD(v78) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                      if ( !(_DWORD)v78 )
                      {
                        LODWORD(v78) = 3;
                        if ( (int)PnpCtxRegCreateKey(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *((char **)v37 + 4),
                                    L"StartOverride",
                                    0,
                                    2u,
                                    0LL,
                                    &v81,
                                    0LL) >= 0 )
                        {
                          PnpCtxRegSetValue(v63, v81, pszDest, 4u, &v78, 4u);
                          PnpCtxRegCloseKey(v64, v81);
                          v81 = 0LL;
                          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                          {
                            v65 = (unsigned __int16 *)(*(_QWORD *)(v48 + 48) + 24LL);
                            Object = 0LL;
                            if ( (int)PnpUnicodeStringToWstr((__int16 **)&Object, 0LL, v65) >= 0 )
                            {
                              v69 = Object;
                              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                                McTemplateK0qzq(v67, v66, v68, v33, (const wchar_t *)Object, v78);
                              PnpUnicodeStringToWstrFree(v69, *(_QWORD *)(v48 + 48) + 24LL);
                            }
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v62, 0);
                  }
                }
              }
              if ( v48 )
                ObfDereferenceObjectWithTag((PVOID)v48, 0x746C6644u);
              if ( *((_BYTE *)v37 + 46) )
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 3) + 48LL) + 104LL) |= 0x20000u;
              ZwClose(*((HANDLE *)v37 + 4));
              ExFreePoolWithTag(v37, 0);
            }
          }
          ExFreePoolWithTag(IopGroupTable, 0);
          PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
          return 1LL;
        }
      }
    }
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0LL;
    v50 = 19;
    goto LABEL_94;
  }
  while ( 1 )
  {
    v25 = 16LL * v24;
    v26 = *(_QWORD **)((char *)IopGroupTable + v25);
    if ( v26 != (_QWORD *)((char *)IopGroupTable + v25) )
      break;
LABEL_33:
    if ( v24 == (_WORD)v75 )
    {
      IopAllocateLegacyBootResources(0LL, 0LL);
      IopBootConfigsReserved = 1;
      IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
    }
    if ( ++v24 >= (unsigned int)IopGroupIndex )
      goto LABEL_36;
  }
  v39 = 0LL;
  while ( 1 )
  {
    Handle = (HANDLE)v26[4];
    v40 = (_QWORD *)v26[3];
    Src = v40;
    v41 = v40[6];
    *((_BYTE *)v26 + 47) = 1;
    *(_QWORD *)&String2.Length = v41;
    if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
    {
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
      {
        v40 = P;
        v42 = *((_DWORD *)P + 3);
        if ( v42 )
        {
          DestinationString.Length = *((_DWORD *)P + 3);
          DestinationString.MaximumLength = v42;
          DestinationString.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v39 = PipLookupGroupName(&DestinationString);
        }
        ExFreePoolWithTag(v40, 0);
        LODWORD(v40) = (_DWORD)Src;
      }
      v4 = 0LL;
      if ( !(unsigned int)PipCheckDependencies(Handle) )
        goto LABEL_88;
      v4 = (_QWORD *)v26[2];
      Object = v4;
      if ( !v4 && !*((_BYTE *)v26 + 46) )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v40 + 32,
                    *(_QWORD *)(*(_QWORD *)&String2.Length + 56LL),
                    *(_DWORD *)&String2.Length,
                    (__int64)&v1[1],
                    0,
                    1);
        v4 = Object;
        *((_DWORD *)v26 + 10) = started;
        if ( !v4 )
          goto LABEL_88;
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
      }
      if ( v4 )
      {
        if ( v39 )
          ++*(_DWORD *)(v39 + 28);
        v26[2] = v4;
        goto LABEL_68;
      }
LABEL_88:
      *((_BYTE *)v26 + 46) = 1;
LABEL_68:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v39 = 0LL;
      goto LABEL_69;
    }
    *((_BYTE *)v26 + 46) = 1;
LABEL_69:
    if ( !*((_BYTE *)v26 + 46) )
    {
      PnpLockDeviceActionQueue();
      PipApplyFunctionToServiceInstances(v44, (UNICODE_STRING *)(v4[6] + 24LL), v45, v46, dwFlags, (__int64)v4, v73);
      PnpUnlockDeviceActionQueue();
      PnpWaitForEmptyDeviceActionQueue();
      PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
    }
    if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
      break;
    v26 = (_QWORD *)*v26;
    if ( v26 == (_QWORD *)((char *)IopGroupTable + v25) )
      goto LABEL_33;
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
  {
    v50 = 18;
    goto LABEL_94;
  }
  return 0LL;
}
