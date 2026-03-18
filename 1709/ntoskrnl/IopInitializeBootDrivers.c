/*
 * XREFs of IopInitializeBootDrivers @ 0x140845EE8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     PnpDiagnosticTrace @ 0x1400FCD14 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PnpUnlockDeviceActionQueue @ 0x14012916C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     PnpBootDeviceWait @ 0x14014661C (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     _memicmp @ 0x14017AAF0 (_memicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     McTemplateK0qzq @ 0x1401FD578 (McTemplateK0qzq.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140527F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140527F48 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCreateKey @ 0x140530B64 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCloseKey @ 0x1405C4618 (_PnpCtxRegCloseKey.c)
 *     PipHardwareConfigGetIndex @ 0x1405C8818 (PipHardwareConfigGetIndex.c)
 *     IopOpenRegistryKeyEx @ 0x1405C9264 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1405C92A4 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405C92D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     _PnpCtxRegSetValue @ 0x14077E3A4 (_PnpCtxRegSetValue.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140844F18 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     IopCreateArcNames @ 0x140844F90 (IopCreateArcNames.c)
 *     PipInitializeCoreDriversAndElam @ 0x1408453D8 (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x1408454A4 (PnpWaitForDevicesToStart.c)
 *     PipInitializeDriverDependentDLLs @ 0x1408457CC (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x140845D34 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x1408466E8 (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140846D6C (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140846E74 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x140846EC0 (PipLookupGroupName.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     IopAllocateLegacyBootResources @ 0x140849DA0 (IopAllocateLegacyBootResources.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408539E8 (IopCallBootDriverReinitializationRoutines.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140856CD0 (PipUnloadEarlyLaunchDrivers.c)
 *     VhdiGetDiskParameters @ 0x14086D514 (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x14086E978 (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(char *a1)
{
  char *v1; // r13
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
  char *v14; // rsi
  __int64 *j; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  UNICODE_STRING *v18; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v20; // rdi
  unsigned int v21; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v23; // rdx
  unsigned __int16 v24; // r14
  __int64 v25; // r12
  _QWORD *v26; // rbx
  int v27; // eax
  unsigned int v28; // edi
  char *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int Index; // eax
  int v33; // r13d
  NTSTATUS v34; // r12d
  unsigned __int16 m; // r15
  char *v36; // rdx
  __int64 v38; // rdi
  _QWORD *v39; // rsi
  __int64 v40; // rax
  int started; // eax
  void *v42; // rcx
  ULONG v43; // r8d
  char v44; // r9
  _QWORD *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdi
  int v48; // eax
  unsigned int v49; // ecx
  _QWORD *v50; // rax
  _QWORD *k; // rcx
  int DiskParameters; // ebx
  _WORD *v53; // r15
  __int64 v54; // r14
  __int64 v55; // rax
  SIZE_T v56; // rbx
  wchar_t *v57; // rax
  wchar_t *v58; // rsi
  wchar_t *v59; // rax
  wchar_t *v60; // rsi
  __int64 v61; // r9
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
  void *v81; // [rsp+88h] [rbp-80h] BYREF
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
  PipInitializeCoreDriversAndElam((__int64)v1);
  PipInitComputerIds(v1);
  v88 = 2097182;
  v89 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)qword_140859E40;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v88,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)(v1 + 16),
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
      v49 = 16;
      goto LABEL_92;
    }
    return 0LL;
  }
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v49 = 17;
      goto LABEL_92;
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
      v1 = (char *)Src;
      break;
    }
  }
  v14 = (char *)*((_QWORD *)v1 + 6);
  while ( v14 != v1 + 48 )
  {
    v18 = (UNICODE_STRING *)v14;
    v14 = *(char **)v14;
    if ( SLODWORD(v18[3].Buffer) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        v20[1] = v20;
        *v20 = v20;
        v20[3] = v18;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v18 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v20, 0);
        }
        else
        {
          v20[4] = Handle;
          v21 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v20 + 22) = DriverTagPriority;
          v23 = (__int64 **)((char *)IopGroupTable + 16 * v21);
          for ( j = *v23; j != (__int64 *)v23 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v16 = (__int64 *)j[1];
          v17 = *v16;
          if ( *(__int64 **)(*v16 + 8) != v16 )
            __fastfail(3u);
          *v20 = v17;
          v20[1] = v16;
          *(_QWORD *)(v17 + 8) = v20;
          *v16 = (__int64)v20;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1);
  v24 = 0;
  if ( !IopGroupIndex )
  {
LABEL_36:
    PnpNotifyEarlyLaunchStatusUpdate(2);
    PipUnloadEarlyLaunchDrivers(v1);
    PnPBootDriversLoaded = 1;
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( PnpWaitForDevicesToStart() )
    {
      if ( (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
      {
        if ( !HeadlessGlobals || !HeadlessGlobals[1] )
          return 0LL;
        v49 = 20;
LABEL_92:
        HdlspKernelAddLogEntry(v49, 0LL);
        return 0LL;
      }
      if ( memicmp(*((const void **)v1 + 23), "ramdisk(", 8uLL) )
        v27 = -1073741275;
      else
        v27 = RamdiskStart(v1);
      if ( v27 < 0 || PnpWaitForDevicesToStart() )
      {
        v28 = 0;
        v29 = strstr(*((const char **)v1 + 23), "vdisk(");
        if ( v29 && strstr(v29 + 1, "partition(") )
        {
          v50 = (_QWORD *)*((_QWORD *)v1 + 29);
          for ( k = (_QWORD *)*v50; ; k = (_QWORD *)*k )
          {
            if ( k == v50 )
              goto LABEL_43;
            if ( k[7] )
              break;
          }
          DiskParameters = VhdiGetDiskParameters(k[7], v90, &String2, &Src, *(_QWORD *)dwFlagsa, pszFormat, v74);
          if ( DiskParameters >= 0 )
          {
            v53 = Src;
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
              v54 = -1LL;
              v55 = -1LL;
              do
                ++v55;
              while ( v53[v55] );
              v56 = (unsigned int)(2 * v55 + 58);
              v57 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v56, 0x42646856u);
              v58 = v57;
              if ( !v57 )
              {
                v28 = 3;
                DiskParameters = -1073741801;
                goto LABEL_142;
              }
              DiskParameters = RtlStringCbPrintfW(v57, v56, L"\\\\Device\\HarddiskVolume%d%ws", (unsigned int)v75, v53);
              if ( DiskParameters >= 0 )
              {
                DiskParameters = VhdiMountVhdFile(v58);
                if ( DiskParameters < 0 )
                {
                  v28 = 5;
                }
                else
                {
                  NtVhdBootFile = (__int64)v58;
                  do
                    ++v54;
                  while ( v53[v54] );
                  v59 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * v54 + 84), 0x42646856u);
                  v60 = v59;
                  if ( !v59 )
                  {
                    v28 = 7;
                    DiskParameters = -1073741801;
                    goto LABEL_142;
                  }
                  memset(v59, 0, (unsigned int)(2 * v54 + 84));
                  DiskParameters = RtlStringCbPrintfW(
                                     v60 + 4,
                                     0x48uLL,
                                     L"\\Device\\HarddiskVolume%lu",
                                     (unsigned int)v75);
                  if ( DiskParameters >= 0 )
                  {
                    *((_DWORD *)v60 + 1) = 80;
                    memmove(v60 + 40, v53, 2LL * (unsigned int)(v54 + 1));
                    off_140355EF8 = v60;
                    *(_BYTE *)v60 = 1;
                    LODWORD(dword_140358CA0) = 2 * v54 + 84;
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
LABEL_142:
            KeBugCheckEx(0x12Fu, v28, DiskParameters, 0LL, 0LL);
        }
LABEL_43:
        if ( PnpWaitForDevicesToStart() )
        {
          if ( (int)IopCreateArcNames((__int64)v1) < 0 )
            return 0LL;
          PnpBootDeviceWait((__int64)v1, IopMarkBootPartition, 0LL);
          v31 = *((_QWORD *)v1 + 30);
          PnPBootDriversInitialized = 1;
          if ( (*(_DWORD *)(v31 + 116) & 0x400) != 0
            && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
          {
            return 0LL;
          }
          pszDest[0] = 0;
          Index = PipHardwareConfigGetIndex(v30, &v75);
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
              v36 = (char *)IopGroupTable + 16 * m;
              if ( *(char **)v36 == v36 )
                break;
              v45 = *(_QWORD **)v36;
              if ( *(char **)(*(_QWORD *)v36 + 8LL) != v36 || (v46 = *v45, *(_QWORD **)(*v45 + 8LL) != v45) )
                __fastfail(3u);
              *(_QWORD *)v36 = v46;
              *(_QWORD *)(v46 + 8) = v36;
              v47 = v45[2];
              if ( v34 >= 0 && !*((_BYTE *)v45 + 46) && !*(_QWORD *)(v47 + 8) )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8LL) )
                {
                  v48 = *(_DWORD *)(v47 + 16);
                  if ( (v48 & 0x400) == 0 && (v48 & 8) == 0 && IopGetRegistryValue((HANDLE)v45[4], L"Start", 0, &P) >= 0 )
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
                                    v45[4],
                                    (__int64)L"StartOverride",
                                    v61,
                                    2u,
                                    0LL,
                                    (__int64)&v81,
                                    0LL) >= 0 )
                        {
                          PnpCtxRegSetValue(v63, v81, pszDest, 4u, &v78, 4u);
                          PnpCtxRegCloseKey(v64, v81);
                          v81 = 0LL;
                          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                          {
                            v65 = (unsigned __int16 *)(*(_QWORD *)(v47 + 48) + 24LL);
                            Object = 0LL;
                            if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v65) >= 0 )
                            {
                              v69 = Object;
                              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                                McTemplateK0qzq(v67, v66, v68, v33, (const wchar_t *)Object, v78);
                              PnpUnicodeStringToWstrFree(v69, *(_QWORD *)(v47 + 48) + 24LL);
                            }
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v62, 0);
                  }
                }
              }
              if ( v47 )
                ObfDereferenceObjectWithTag((PVOID)v47, 0x746C6644u);
              if ( *((_BYTE *)v45 + 46) )
                *(_DWORD *)(*(_QWORD *)(v45[3] + 48LL) + 104LL) |= 0x20000u;
              ZwClose((HANDLE)v45[4]);
              ExFreePoolWithTag(v45, 0);
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
    v49 = 19;
    goto LABEL_92;
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
  v38 = 0LL;
  while ( 1 )
  {
    Handle = (HANDLE)v26[4];
    v39 = (_QWORD *)v26[3];
    Src = v39;
    v40 = v39[6];
    *((_BYTE *)v26 + 47) = 1;
    *(_QWORD *)&String2.Length = v40;
    if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
    {
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
      {
        v39 = P;
        if ( *((_DWORD *)P + 3) )
        {
          DestinationString.Length = *((_WORD *)P + 6);
          DestinationString.MaximumLength = DestinationString.Length;
          DestinationString.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v38 = PipLookupGroupName(&DestinationString);
        }
        ExFreePoolWithTag(v39, 0);
        LODWORD(v39) = (_DWORD)Src;
      }
      v4 = 0LL;
      if ( (unsigned int)PipCheckDependencies(Handle) )
      {
        v4 = (_QWORD *)v26[2];
        Object = v4;
        if ( v4 )
          goto LABEL_63;
        if ( !*((_BYTE *)v26 + 46) )
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&Destination,
                      (int)v39 + 32,
                      *(_QWORD *)(*(_QWORD *)&String2.Length + 56LL),
                      *(_DWORD *)&String2.Length,
                      (__int64)(v1 + 16),
                      0,
                      1);
          v4 = Object;
          *((_DWORD *)v26 + 10) = started;
          if ( v4 )
          {
            ObfReferenceObjectWithTag(v4, 0x746C6644u);
LABEL_63:
            if ( v38 )
              ++*(_DWORD *)(v38 + 28);
            v26[2] = v4;
            goto LABEL_66;
          }
        }
      }
      *((_BYTE *)v26 + 46) = 1;
LABEL_66:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v38 = 0LL;
      goto LABEL_67;
    }
    *((_BYTE *)v26 + 46) = 1;
LABEL_67:
    if ( !*((_BYTE *)v26 + 46) )
    {
      PnpLockDeviceActionQueue();
      PipApplyFunctionToServiceInstances(v42, (UNICODE_STRING *)(v4[6] + 24LL), v43, v44, dwFlags, (__int64)v4, v73);
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
    v49 = 18;
    goto LABEL_92;
  }
  return 0LL;
}
