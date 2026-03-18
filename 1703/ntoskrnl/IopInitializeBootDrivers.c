/*
 * XREFs of IopInitializeBootDrivers @ 0x1407F91C4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x140031D3C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140031DD4 (PnpLockDeviceActionQueue.c)
 *     PnpDiagnosticTrace @ 0x140033764 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     _memicmp @ 0x14017B2C0 (_memicmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     Template_qzq @ 0x1401F793C (Template_qzq.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     _PnpCtxRegCreateKey @ 0x1404DB470 (_PnpCtxRegCreateKey.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     IopOpenRegistryKeyEx @ 0x14059C8A8 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14059CE24 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14059CE50 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipHardwareConfigGetIndex @ 0x1405B6654 (PipHardwareConfigGetIndex.c)
 *     _PnpCtxRegCloseKey @ 0x140739BD0 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegSetValue @ 0x140739CC4 (_PnpCtxRegSetValue.c)
 *     HdlspKernelAddLogEntry @ 0x14078ECDC (HdlspKernelAddLogEntry.c)
 *     IopCreateArcNames @ 0x1407F83BC (IopCreateArcNames.c)
 *     PipInitializeCoreDriversAndElam @ 0x1407F8640 (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x1407F870C (PnpWaitForDevicesToStart.c)
 *     PipInitializeDriverDependentDLLs @ 0x1407F8C00 (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x1407F9010 (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x1407F99D8 (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1407FA084 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407FA19C (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1407FA1E8 (PipLookupGroupName.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407FA354 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     IopAllocateLegacyBootResources @ 0x140819E18 (IopAllocateLegacyBootResources.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x14081F7BC (PipUnloadEarlyLaunchDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408224BC (IopCallBootDriverReinitializationRoutines.c)
 *     VhdiGetDiskParameters @ 0x1408362DC (VhdiGetDiskParameters.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x14083774C (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(__int64 a1)
{
  __int64 v1; // r13
  NTSTATUS RegistryValue; // ebx
  _QWORD *v3; // r12
  int GroupOrderIndex; // eax
  char *v5; // rdx
  unsigned int v6; // r8d
  unsigned __int16 i; // cx
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int16 v10; // r14
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  const UNICODE_STRING *v13; // r15
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
  ULONG_PTR v24; // r14
  unsigned __int16 v25; // r15
  __int64 v26; // rdi
  char *v27; // rcx
  char *v28; // rbx
  int v29; // eax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int Index; // eax
  int v34; // r12d
  unsigned int v35; // r8d
  unsigned __int16 v36; // r14
  __int64 v37; // r13
  _QWORD **v38; // rdx
  _QWORD *v40; // rsi
  void *v41; // rax
  __int64 v42; // rdi
  int started; // eax
  void *v44; // rcx
  ULONG v45; // r8d
  char v46; // r9
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rdi
  unsigned int v50; // ecx
  _QWORD *v51; // rax
  _QWORD *k; // rcx
  int DiskParameters; // ebx
  _WORD *v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rax
  SIZE_T v57; // rbx
  wchar_t *v58; // rax
  wchar_t *v59; // rdi
  wchar_t *v60; // rax
  wchar_t *v61; // rdi
  NTSTATUS v62; // eax
  __int64 v63; // r9
  PVOID v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // rcx
  unsigned __int16 *v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  PVOID v71; // r15
  void *dwFlags; // [rsp+28h] [rbp-E0h]
  _DWORD *v73; // [rsp+38h] [rbp-D0h]
  PVOID v74; // [rsp+38h] [rbp-D0h]
  __int64 v75; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v80; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v81; // [rsp+88h] [rbp-80h]
  void *Src; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v83; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  void *v87; // [rsp+D8h] [rbp-30h]
  __int64 *v88; // [rsp+E0h] [rbp-28h]
  int v89; // [rsp+E8h] [rbp-20h] BYREF
  const wchar_t *v90; // [rsp+F0h] [rbp-18h]
  _BYTE v91[144]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[64]; // [rsp+188h] [rbp+80h] BYREF

  v1 = a1;
  v81 = (_QWORD *)a1;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v83.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v83.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v83, 0x20019u) >= 0
    || (*(_DWORD *)&v83.Length = 8257660,
        v83.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v83, 0x20019u) >= 0) )
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
  PipInitializeCoreDriversAndElam((UNICODE_STRING *)v1);
  PipInitComputerIds(v1);
  v89 = 2097182;
  v90 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)&cchOriginalDestLength;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v89,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    v1 + 16,
    0,
    0);
  v3 = Object;
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
      goto LABEL_93;
    }
    return 0LL;
  }
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v5 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v50 = 17;
      goto LABEL_93;
    }
    return 0LL;
  }
  v6 = IopGroupIndex;
  for ( i = 0; i < v6; *(_QWORD *)v9 = v9 )
  {
    v8 = i++;
    v9 = &v5[16 * v8];
    *((_QWORD *)v9 + 1) = v9;
  }
  PipInitializeDriverDependentDLLs(2, v1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v10 = PiInitGroupOrderTableCount;
  v11 = 0;
  v12 = 0;
  if ( PiInitGroupOrderTableCount )
  {
    v13 = (const UNICODE_STRING *)PiInitGroupOrderTable;
    while ( 1 )
    {
      if ( RtlCompareUnicodeString(&v13[v12], &DestinationString, 1u) )
      {
        if ( RtlCompareUnicodeString(&v13[v12], &String2, 1u) )
          goto LABEL_16;
        LOWORD(v75) = v12;
      }
      ++v11;
LABEL_16:
      if ( v11 < 2u && ++v12 < v10 )
        continue;
      v1 = (__int64)v81;
      v3 = Object;
      break;
    }
  }
  v14 = *(UNICODE_STRING **)(v1 + 48);
  while ( v14 != (UNICODE_STRING *)(v1 + 48) )
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
  v24 = 7LL;
  v25 = 0;
  if ( !IopGroupIndex )
  {
LABEL_38:
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
LABEL_93:
        HdlspKernelAddLogEntry(v50, 0LL);
        return 0LL;
      }
      if ( memicmp(*(const void **)(v1 + 184), "ramdisk(", 8uLL) )
        v29 = -1073741275;
      else
        v29 = RamdiskStart(v1);
      if ( v29 < 0 || PnpWaitForDevicesToStart() )
      {
        v30 = strstr(*(const char **)(v1 + 184), "vdisk(");
        if ( v30 && strstr(v30 + 1, "partition(") )
        {
          v51 = *(_QWORD **)(v1 + 232);
          for ( k = (_QWORD *)*v51; ; k = (_QWORD *)*k )
          {
            if ( k == v51 )
              goto LABEL_45;
            if ( k[7] )
              break;
          }
          if ( k )
          {
            DiskParameters = VhdiGetDiskParameters(k[7], v91, &String2, &Src);
            if ( DiskParameters >= 0 )
            {
              v54 = Src;
              *(_QWORD *)&DestinationString.Length = v91;
              DestinationString.Buffer = *(wchar_t **)&String2.Length;
              v87 = Src;
              v88 = &v75;
              DiskParameters = PnpBootDeviceWait(
                                 v1,
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
                  DiskParameters = -1073741801;
                  v24 = 3LL;
                  goto LABEL_144;
                }
                DiskParameters = RtlStringCbPrintfW(
                                   v58,
                                   v57,
                                   L"\\\\Device\\HarddiskVolume%d%ws",
                                   (unsigned int)v75,
                                   v54);
                if ( DiskParameters >= 0 )
                {
                  DiskParameters = VhdiMountVhdFile(v59);
                  if ( DiskParameters >= 0 )
                  {
                    NtVhdBootFile = (__int64)v59;
                    do
                      ++v55;
                    while ( v54[v55] );
                    v60 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(2 * v55 + 84), 0x42646856u);
                    v61 = v60;
                    if ( !v60 )
                    {
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
                      off_14033DC50 = v61;
                      *(_BYTE *)v61 = 1;
                      LODWORD(dword_140340610) = 2 * v55 + 84;
                      v24 = 0LL;
                    }
                    else
                    {
                      v24 = 8LL;
                    }
                  }
                  else
                  {
                    v24 = 5LL;
                  }
                }
                else
                {
                  v24 = 4LL;
                }
              }
              else
              {
                v24 = 2LL;
              }
            }
            else
            {
              v24 = 1LL;
            }
            if ( DiskParameters < 0 )
LABEL_144:
              KeBugCheckEx(0x12Fu, v24, DiskParameters, 0LL, 0LL);
          }
        }
LABEL_45:
        if ( PnpWaitForDevicesToStart() )
        {
          if ( (int)IopCreateArcNames(v1) < 0 )
            return 0LL;
          PnpBootDeviceWait(v1, (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&IopMarkBootPartition, 0LL);
          v32 = *(_QWORD *)(v1 + 240);
          PnPBootDriversInitialized = 1;
          if ( (*(_DWORD *)(v32 + 116) & 0x400) != 0
            && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
          {
            return 0LL;
          }
          pszDest[0] = 0;
          Index = PipHardwareConfigGetIndex(v31, &v75);
          v34 = v75;
          if ( Index >= 0 )
          {
            LODWORD(v74) = v75;
            Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v74);
          }
          v35 = IopGroupIndex;
          v36 = 0;
          if ( IopGroupIndex )
          {
            v37 = Index;
            do
            {
              while ( 1 )
              {
                v38 = (_QWORD **)((char *)IopGroupTable + 16 * v36);
                if ( *v38 == v38 )
                  break;
                v47 = *v38;
                v48 = (_QWORD *)**v38;
                if ( (_QWORD **)(*v38)[1] != v38 || (_QWORD *)v48[1] != v47 )
                  __fastfail(3u);
                *v38 = v48;
                v48[1] = v38;
                v49 = v47[2];
                if ( v37 >= 0 && !*((_BYTE *)v47 + 46) && !*(_QWORD *)(v49 + 8) )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v49 + 48) + 8LL) )
                  {
                    if ( (*(_DWORD *)(v49 + 16) & 0x408) == 0 )
                    {
                      v62 = IopGetRegistryValue((HANDLE)v47[4], L"Start", 0, &P);
                      if ( v62 >= 0 )
                      {
                        v64 = P;
                        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                        {
                          LODWORD(v78) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                          if ( !(_DWORD)v78 )
                          {
                            LODWORD(v78) = 3;
                            if ( (int)PnpCtxRegCreateKey(
                                        *(__int64 *)&PiPnpRtlCtx,
                                        (char *)v47[4],
                                        L"StartOverride",
                                        v63,
                                        2u,
                                        0LL,
                                        &v80,
                                        0LL) >= 0 )
                            {
                              PnpCtxRegSetValue(v65, v80, pszDest, 4u, &v78, 4u);
                              PnpCtxRegCloseKey(v66, v80);
                              v80 = 0LL;
                              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                              {
                                v67 = (unsigned __int16 *)(*(_QWORD *)(v49 + 48) + 24LL);
                                Object = 0LL;
                                if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v67) >= 0 )
                                {
                                  v71 = Object;
                                  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x1000000) != 0 )
                                    Template_qzq(v69, v68, v70, v34, (const wchar_t *)Object, v78);
                                  PnpUnicodeStringToWstrFree(v71, *(_QWORD *)(v49 + 48) + 24LL);
                                }
                              }
                            }
                          }
                        }
                        ExFreePoolWithTag(v64, 0);
                      }
                    }
                  }
                }
                if ( v49 )
                  ObfDereferenceObjectWithTag((PVOID)v49, 0x746C6644u);
                if ( *((_BYTE *)v47 + 46) )
                  *(_DWORD *)(*(_QWORD *)(v47[3] + 48LL) + 104LL) |= 0x20000u;
                ZwClose((HANDLE)v47[4]);
                ExFreePoolWithTag(v47, 0);
                v35 = IopGroupIndex;
              }
              ++v36;
            }
            while ( v36 < v35 );
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
    goto LABEL_93;
  }
LABEL_33:
  v26 = 16LL * v25;
  v27 = (char *)IopGroupTable + v26;
  *(_QWORD *)&String2.Length = v26;
  v28 = *(char **)((char *)IopGroupTable + v26);
  while ( 1 )
  {
    if ( v28 == v27 )
    {
      if ( v25 == (_WORD)v75 )
      {
        IopAllocateLegacyBootResources(0LL, 0LL);
        IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
        IopBootConfigsReserved = 1;
      }
      if ( ++v25 >= (unsigned int)IopGroupIndex )
        goto LABEL_38;
      goto LABEL_33;
    }
    Handle = (HANDLE)*((_QWORD *)v28 + 4);
    v40 = (_QWORD *)*((_QWORD *)v28 + 3);
    v81 = v40;
    v41 = (void *)v40[6];
    v28[47] = 1;
    Src = v41;
    if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
    {
      v3 = 0LL;
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) < 0 )
      {
        v42 = 0LL;
      }
      else
      {
        v40 = P;
        if ( *((_DWORD *)P + 3) )
        {
          DestinationString.Length = *((_WORD *)P + 6);
          DestinationString.MaximumLength = DestinationString.Length;
          DestinationString.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v42 = PipLookupGroupName(&DestinationString);
        }
        else
        {
          v42 = 0LL;
        }
        ExFreePoolWithTag(v40, 0);
        LODWORD(v40) = (_DWORD)v81;
      }
      if ( (unsigned int)PipCheckDependencies(Handle) )
      {
        v3 = (_QWORD *)*((_QWORD *)v28 + 2);
        Object = v3;
        if ( v3 )
        {
LABEL_65:
          if ( v42 )
            ++*(_DWORD *)(v42 + 28);
          *((_QWORD *)v28 + 2) = v3;
          goto LABEL_68;
        }
        if ( !v28[46] )
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&Destination,
                      (int)v40 + 32,
                      *((_QWORD *)Src + 7),
                      (_DWORD)Src,
                      v1 + 16,
                      0,
                      1);
          v3 = Object;
          *((_DWORD *)v28 + 10) = started;
          if ( v3 )
          {
            ObfReferenceObjectWithTag(v3, 0x746C6644u);
            goto LABEL_65;
          }
        }
      }
      v28[46] = 1;
LABEL_68:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v26 = *(_QWORD *)&String2.Length;
      goto LABEL_69;
    }
    v28[46] = 1;
LABEL_69:
    if ( !v28[46] )
    {
      PnpLockDeviceActionQueue();
      PipApplyFunctionToServiceInstances(v44, v3[6] + 24LL, v45, v46, dwFlags, (__int64)v3, v73);
      PnpUnlockDeviceActionQueue();
      PnpWaitForEmptyDeviceActionQueue();
      PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
    }
    if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
      break;
    v28 = *(char **)v28;
    v27 = (char *)IopGroupTable + v26;
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
  {
    v50 = 18;
    goto LABEL_93;
  }
  return 0LL;
}
