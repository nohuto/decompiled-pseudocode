/*
 * XREFs of Win32UserInitialize @ 0x1C01DD910
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     IsIMMEnabledSystem @ 0x1C0006BB0 (IsIMMEnabledSystem.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0006F50 (UserAddAtomToAtomTableEx.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0006FC0 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C0007090 (-InitUIPI@@YAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C009A480 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     InitCreateSharedSection @ 0x1C01DD220 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C01DD2D4 (InitKernelHandleTable.c)
 *     InitSecurity @ 0x1C01DD348 (InitSecurity.c)
 *     InitQEntryLookaside @ 0x1C01DD54C (InitQEntryLookaside.c)
 *     InitCreateUserSubsystem @ 0x1C01DD5C0 (InitCreateUserSubsystem.c)
 *     HMInitHandleTable @ 0x1C01DD870 (HMInitHandleTable.c)
 */

__int64 Win32UserInitialize()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int v7; // r15d
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int inited; // esi
  int AtomTable; // eax
  int v21; // esi
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rax
  _QWORD *v26; // rax
  void *v27; // rdi
  int v28; // ebx
  int Buffer_high; // esi
  void *v30; // rdi
  int v31; // ebx
  void *v32; // rdi
  unsigned int *v33; // rdi
  unsigned int v34; // esi
  void *v35; // rbx
  unsigned int *v36; // rdi
  void *v37; // rbx
  unsigned int v38; // esi
  unsigned int *v39; // rbx
  void *v40; // rdi
  unsigned int v41; // esi
  unsigned int *v42; // rbx
  void *v43; // rdi
  unsigned int v44; // esi
  unsigned int *v45; // rbx
  void *v46; // rdi
  unsigned int v47; // esi
  void *v48; // rbx
  int v49; // edi
  void *v50; // rbx
  void *v51; // rbx
  unsigned int v52; // edi
  void *v53; // rbx
  void *v54; // rbx
  int v55; // edi
  __int64 *DomainLockRef; // rbx
  int v57; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING KeyValueInformation; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v61[12]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned int v62; // [rsp+74h] [rbp+2Bh]

  if ( (int)IsValidatetagWNDLayoutSupported() < 0 || (result = ValidatetagWNDLayout(), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable();
      v5 = result;
      if ( (int)result >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3, v4);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v7 = 1;
        v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11, v12);
        gptiCurrent = v8;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
        v13 = (__int64 *)gpducstulHead;
        v14 = 0;
        if ( gpducstulHead )
        {
          DomainLockRef = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v13[2];
            v13[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v13);
            RIMLockExclusive((__int64)DomainLockRef);
            v13 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(*(tagObjLock **)ResultLength);
        if ( (unsigned int)InitSecurity() )
        {
          *(_DWORD *)(ExWindowStationObjectType + 108LL) = 208;
          *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
          *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
          *(_OWORD *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
          *((_DWORD *)ExDesktopObjectType + 27) = 344;
          *((_DWORD *)ExDesktopObjectType + 26) = 0;
          *((_DWORD *)ExDesktopObjectType + 23) = 983551;
          *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
          *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
          *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
          *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
          *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
          *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
          *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1032;
          *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
          *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
          *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
          gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, v15);
          inited = InitQEntryLookaside();
          if ( (int)IsInitSMSLookasideSupported() >= 0 )
            inited |= InitSMSLookaside();
          if ( UserAtomTableHandle )
            AtomTable = 0;
          else
            AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
          v21 = AtomTable | inited;
          if ( UserLibmgmtAtomTableHandle )
            v22 = 0;
          else
            v22 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
          v5 = v22 | v21;
          if ( v5 < 0 )
            goto LABEL_133;
          atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
          gatomFirstPinned = atomUSER32;
          if ( atomUSER32 && (unsigned int)InitCreateUserSubsystem() )
          {
            if ( (int)IsCreateSetupNameArraySupported() >= 0 )
              CreateSetupNameArray();
            if ( (int)IsInitPlaySoundSupported() < 0 || (int)InitPlaySound() >= 0 )
            {
              gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x27B8uLL);
              if ( gpsi )
              {
                v23 = 2508LL;
                do
                {
                  v24 = 30LL;
                  do
                  {
                    *(_DWORD *)((char *)gpsi + v23) = -1;
                    v23 += 4LL;
                    --v24;
                  }
                  while ( v24 );
                }
                while ( v23 < 4428 );
                v25 = gpsi;
                *((_DWORD *)gpsi + 1282) = 8;
                v25[1283] = 16;
                gpDispInfo = (__int64)Win32AllocPoolZInit(0xA0uLL, 1885629269LL);
                if ( gpDispInfo )
                {
                  *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                  if ( *(_QWORD *)gpDispInfo )
                  {
                    if ( IsDesktopHeapLoggingOn() )
                      *(_DWORD *)gpsi |= 0x100u;
                    else
                      *(_DWORD *)gpsi &= ~0x100u;
                    if ( (_BYTE)NlsMbCodePageTag )
                      *(_DWORD *)gpsi |= 2u;
                    else
                      *(_DWORD *)gpsi &= ~2u;
                    if ( (unsigned int)IsIMMEnabledSystem() )
                      *(_DWORD *)gpsi |= 4u;
                    else
                      *(_DWORD *)gpsi &= ~4u;
                    if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                      *(_DWORD *)gpsi |= 8u;
                    else
                      *(_DWORD *)gpsi &= ~8u;
                    *((_DWORD *)gpsi + 227) = gdwDesktopSectionSize << 10;
                    v26 = Win32AllocPoolZInit(0xF8uLL, 1684763477LL);
                    gpkdiStatic = (__int64)v26;
                    if ( v26 )
                    {
                      *v26 = &diStatic;
                      if ( (int)IsInitFunctionTablesSupported() >= 0 )
                        InitFunctionTables();
                      if ( (int)IsInitMessageTablesSupported() >= 0 )
                        InitMessageTables();
                      if ( (int)IsVerifySyncOnlyMessagesSupported() >= 0 )
                        VerifySyncOnlyMessages();
                      if ( ((int)IsInitOLEFormatsSupported() < 0 || (unsigned int)InitOLEFormats())
                        && ((int)IsSetupClassAtomsSupported() < 0 || (unsigned int)SetupClassAtoms())
                        && (unsigned int)HMInitHandleTable() )
                      {
                        gSharedInfo = (__int64)gpsi;
                        qword_1C018E9C8 = *(_QWORD *)gpDispInfo;
                        v57 = gdwPolicyFlags;
                        v27 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                        v28 = 10000;
                        if ( v27 )
                        {
                          Buffer_high = 10000;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                            if ( ZwQueryValueKey(
                                   v27,
                                   &DestinationString,
                                   KeyValuePartialInformation,
                                   &KeyValueInformation,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_53;
                            ZwClose(v27);
                            v27 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                            if ( !v27 )
                              goto LABEL_137;
                          }
                          Buffer_high = HIDWORD(KeyValueInformation.Buffer);
LABEL_53:
                          ZwClose(v27);
                        }
                        else
                        {
LABEL_137:
                          Buffer_high = 10000;
                        }
                        v57 = gdwPolicyFlags;
                        gUserProcessHandleQuota = Buffer_high;
                        v30 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                        if ( !v30 )
                          goto LABEL_58;
                        while ( 1 )
                        {
                          RtlInitUnicodeString(&DestinationString, L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(
                                 v30,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) >= 0 )
                            break;
                          if ( !v57 )
                            goto LABEL_57;
                          ZwClose(v30);
                          v30 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                          if ( !v30 )
                            goto LABEL_58;
                        }
                        v28 = HIDWORD(KeyValueInformation.Buffer);
LABEL_57:
                        ZwClose(v30);
                        if ( !v28 )
                          gUserPostMessageLimit = -1;
                        else
LABEL_58:
                          gUserPostMessageLimit = v28;
                        v31 = gNestedWindowLimit;
                        v57 = gdwPolicyFlags;
                        v32 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                        if ( v32 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&DestinationString, L"USERNestedWindowLimit");
                            if ( ZwQueryValueKey(
                                   v32,
                                   &DestinationString,
                                   KeyValuePartialInformation,
                                   &KeyValueInformation,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_62;
                            ZwClose(v32);
                            v32 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                            if ( !v32 )
                              goto LABEL_63;
                          }
                          v31 = HIDWORD(KeyValueInformation.Buffer);
LABEL_62:
                          ZwClose(v32);
                        }
LABEL_63:
                        if ( (unsigned int)(v31 - 50) <= 0x32 )
                          gNestedWindowLimit = v31;
                        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                        {
                          GetguiKeyboardCorrectionCalloutTimeout(&DestinationString);
                          v33 = *(unsigned int **)&DestinationString.Length;
                          v57 = gdwPolicyFlags;
                          v34 = **(_DWORD **)&DestinationString.Length;
                          v35 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                          if ( v35 )
                          {
                            while ( 1 )
                            {
                              RtlInitUnicodeString(&KeyValueInformation, L"USERKCCTimeout");
                              if ( ZwQueryValueKey(
                                     v35,
                                     &KeyValueInformation,
                                     KeyValuePartialInformation,
                                     v61,
                                     0x14u,
                                     ResultLength) >= 0 )
                                break;
                              if ( !v57 )
                                goto LABEL_69;
                              ZwClose(v35);
                              v35 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v57);
                              if ( !v35 )
                                goto LABEL_70;
                            }
                            v34 = v62;
LABEL_69:
                            ZwClose(v35);
                          }
LABEL_70:
                          *v33 = v34;
                        }
                        v57 = gdwPolicyFlags;
                        v36 = (unsigned int *)((char *)gpsi + 2224);
                        v37 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v57);
                        if ( v37 )
                        {
                          v38 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                            if ( ZwQueryValueKey(
                                   v37,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_75;
                            ZwClose(v37);
                            v37 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v57);
                            if ( !v37 )
                              goto LABEL_142;
                          }
                          v38 = v62;
LABEL_75:
                          ZwClose(v37);
                          if ( v36 )
                            *v36 = v38;
                        }
                        else
                        {
LABEL_142:
                          if ( v36 )
                            *v36 = 0;
                        }
                        v57 = gdwPolicyFlags;
                        v39 = (unsigned int *)((char *)gpsi + 2228);
                        v40 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v57);
                        if ( v40 )
                        {
                          v41 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                            if ( ZwQueryValueKey(
                                   v40,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_81;
                            ZwClose(v40);
                            v40 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v57);
                            if ( !v40 )
                              goto LABEL_145;
                          }
                          v41 = v62;
LABEL_81:
                          ZwClose(v40);
                          if ( v39 )
                            *v39 = v41;
                        }
                        else
                        {
LABEL_145:
                          if ( v39 )
                            *v39 = 0;
                        }
                        v57 = gdwPolicyFlags;
                        v42 = (unsigned int *)((char *)gpsi + 2236);
                        v43 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v57);
                        if ( v43 )
                        {
                          v44 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"R2BuildNumber");
                            if ( ZwQueryValueKey(
                                   v43,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_87;
                            ZwClose(v43);
                            v43 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v57);
                            if ( !v43 )
                              goto LABEL_148;
                          }
                          v44 = v62;
LABEL_87:
                          ZwClose(v43);
                          if ( v42 )
                            *v42 = v44;
                        }
                        else
                        {
LABEL_148:
                          if ( v42 )
                            *v42 = 0;
                        }
                        v57 = gdwPolicyFlags;
                        v45 = (unsigned int *)((char *)gpsi + 2232);
                        v46 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v57);
                        if ( v46 )
                        {
                          v47 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"StarterBuildNumber");
                            if ( ZwQueryValueKey(
                                   v46,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_93;
                            ZwClose(v46);
                            v46 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v57);
                            if ( !v46 )
                              goto LABEL_151;
                          }
                          v47 = v62;
LABEL_93:
                          ZwClose(v46);
                          if ( v45 )
                            *v45 = v47;
                        }
                        else
                        {
LABEL_151:
                          if ( v45 )
                            *v45 = 0;
                        }
                        InitUIPI();
                        if ( gbEnforceUIPI )
                        {
                          if ( (int)IsInitClipFormatExceptionListSupported() >= 0 )
                            InitClipFormatExceptionList();
                          if ( (int)IsInitClipboardILDefSupported() >= 0 )
                            InitClipboardILDef();
                        }
                        v57 = gdwPolicyFlags;
                        v48 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                        if ( v48 )
                        {
                          v49 = 1;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"ModernDesktopApps");
                            if ( ZwQueryValueKey(
                                   v48,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_104;
                            ZwClose(v48);
                            v48 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                            if ( !v48 )
                              goto LABEL_154;
                          }
                          v49 = v62;
LABEL_104:
                          ZwClose(v48);
                          gfEnableModernOnDesktop = v49;
                        }
                        else
                        {
LABEL_154:
                          gfEnableModernOnDesktop = 1;
                        }
                        v57 = gdwPolicyFlags;
                        v50 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                        if ( v50 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"ShellFrameHangResilient");
                            if ( ZwQueryValueKey(
                                   v50,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_108;
                            ZwClose(v50);
                            v50 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                            if ( !v50 )
                              goto LABEL_109;
                          }
                          v7 = v62;
LABEL_108:
                          ZwClose(v50);
                        }
LABEL_109:
                        v57 = gdwPolicyFlags;
                        gfShellFrameHangResilient = v7;
                        v51 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                        if ( !v51 )
                          goto LABEL_157;
                        v52 = 5000;
                        while ( 1 )
                        {
                          RtlInitUnicodeString(&KeyValueInformation, L"MDAQueueThreshold");
                          if ( ZwQueryValueKey(
                                 v51,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v61,
                                 0x14u,
                                 ResultLength) >= 0 )
                            break;
                          if ( !v57 )
                            goto LABEL_113;
                          ZwClose(v51);
                          v51 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                          if ( !v51 )
                            goto LABEL_157;
                        }
                        v52 = v62;
LABEL_113:
                        ZwClose(v51);
                        gdwMDAQThreshold = v52;
                        if ( v52 < 0x64 )
LABEL_157:
                          gdwMDAQThreshold = 5000;
                        v57 = gdwPolicyFlags;
                        v53 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                        if ( v53 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"MDAQueueTimeoutDiD");
                            if ( ZwQueryValueKey(
                                   v53,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_117;
                            ZwClose(v53);
                            v53 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                            if ( !v53 )
                              goto LABEL_118;
                          }
                          v14 = v62;
LABEL_117:
                          ZwClose(v53);
                        }
LABEL_118:
                        v57 = gdwPolicyFlags;
                        gdwMDAQTimeoutDefenseInDepth = v14;
                        v54 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                        v55 = 127;
                        if ( v54 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&KeyValueInformation, L"ShellWindowManagementBehavior");
                            if ( ZwQueryValueKey(
                                   v54,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v61,
                                   0x14u,
                                   ResultLength) >= 0 )
                              break;
                            if ( !v57 )
                              goto LABEL_121;
                            ZwClose(v54);
                            v54 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v57);
                            if ( !v54 )
                              goto LABEL_122;
                          }
                          v55 = v62;
LABEL_121:
                          ZwClose(v54);
                        }
LABEL_122:
                        gdwShellWindowManagementBehavior = v55;
                        if ( (unsigned int)gdwMDAQTimeoutDefenseInDepth < 0x64 )
                          gdwMDAQTimeoutDefenseInDepth = 30000;
                        *((_DWORD *)gpsi + 555) &= ~0x20u;
                        if ( (int)IsInitializeTouchPadSysParamsSupported() >= 0 )
                          InitializeTouchPadSysParams();
                        if ( (int)IsInitModuleAllocationsSupported() >= 0 )
                          InitModuleAllocations();
                        v5 = DispBroker::DispBrokerClient::Init();
                        if ( v5 < 0 )
                          goto LABEL_133;
                        if ( (int)IsInitRotationManagerSupported() >= 0 )
                        {
                          v5 = InitRotationManager();
                          if ( v5 < 0 )
                            goto LABEL_133;
                        }
                        if ( (int)IsAllocateCvrSupported() < 0 || (unsigned int)AllocateCvr(&gSMWP, 4LL) )
                          goto LABEL_133;
                      }
                    }
                  }
                  else
                  {
                    Win32FreePool(gpDispInfo);
                    gpDispInfo = 0LL;
                  }
                }
              }
            }
          }
        }
        if ( v5 >= 0 )
          v5 = -1073741801;
LABEL_133:
        UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
        return (unsigned int)v5;
      }
    }
  }
  return result;
}
