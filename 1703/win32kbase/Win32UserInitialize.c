/*
 * XREFs of Win32UserInitialize @ 0x1C01D6270
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C0075460 (-InitUIPI@@YAXXZ.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0075580 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0075670 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C0075A10 (IsIMMEnabledSystem.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0091BC4 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     InitCreateUserSubsystem @ 0x1C01D70F0 (InitCreateUserSubsystem.c)
 *     HMInitHandleTable @ 0x1C01D73A0 (HMInitHandleTable.c)
 *     InitQEntryLookaside @ 0x1C01D7438 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C01D74A4 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C01D7558 (InitKernelHandleTable.c)
 *     InitSecurity @ 0x1C01D75CC (InitSecurity.c)
 */

__int64 Win32UserInitialize()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int v6; // r15d
  struct tagTHREADINFO *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r12d
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rdi
  LARGE_INTEGER v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int inited; // r14d
  int AtomTable; // eax
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  _QWORD *v26; // rax
  void *v27; // rdi
  int v28; // ebx
  int v29; // esi
  void *v30; // rdi
  int v31; // ebx
  void *v32; // rdi
  _DWORD *v33; // rdi
  int v34; // esi
  void *v35; // rbx
  _DWORD *v36; // rbx
  void *v37; // rdi
  int v38; // esi
  _DWORD *v39; // rbx
  void *v40; // rdi
  int v41; // esi
  _DWORD *v42; // rbx
  void *v43; // rdi
  int v44; // esi
  _DWORD *v45; // rbx
  void *v46; // rdi
  int v47; // esi
  void *v48; // rbx
  int v49; // edi
  void *v50; // rbx
  void *v51; // rbx
  unsigned int v52; // edi
  void *v53; // rbx
  void *v54; // rbx
  int v55; // edi
  __int64 v56; // rcx
  __int64 Length; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+30h] [rbp-D0h] BYREF
  int v59; // [rsp+34h] [rbp-CCh] BYREF
  int v60; // [rsp+38h] [rbp-C8h] BYREF
  int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h] BYREF
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh] BYREF
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+5Ch] [rbp-A4h] BYREF
  int v70; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v72; // [rsp+68h] [rbp-98h] BYREF
  ULONG v73; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG v74; // [rsp+70h] [rbp-90h] BYREF
  ULONG v75; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG v76; // [rsp+78h] [rbp-88h] BYREF
  ULONG v77; // [rsp+7Ch] [rbp-84h] BYREF
  ULONG v78; // [rsp+80h] [rbp-80h] BYREF
  ULONG v79; // [rsp+84h] [rbp-7Ch] BYREF
  ULONG v80; // [rsp+88h] [rbp-78h] BYREF
  ULONG v81; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG v82; // [rsp+90h] [rbp-70h] BYREF
  ULONG v83; // [rsp+94h] [rbp-6Ch] BYREF
  _DWORD *v84; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING v87; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING v88; // [rsp+D0h] [rbp-30h] BYREF
  struct _UNICODE_STRING v89; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING v90; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNICODE_STRING v91; // [rsp+100h] [rbp+0h] BYREF
  struct _UNICODE_STRING v92; // [rsp+110h] [rbp+10h] BYREF
  struct _UNICODE_STRING v93; // [rsp+120h] [rbp+20h] BYREF
  struct _UNICODE_STRING v94; // [rsp+130h] [rbp+30h] BYREF
  struct _UNICODE_STRING v95; // [rsp+140h] [rbp+40h] BYREF
  struct _UNICODE_STRING v96; // [rsp+150h] [rbp+50h] BYREF
  struct _UNICODE_STRING v97; // [rsp+160h] [rbp+60h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  int v99; // [rsp+17Ch] [rbp+7Ch]
  _BYTE v100[12]; // [rsp+188h] [rbp+88h] BYREF
  int v101; // [rsp+194h] [rbp+94h]
  _BYTE v102[12]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v103; // [rsp+1ACh] [rbp+ACh]
  _BYTE v104[12]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v105; // [rsp+1C4h] [rbp+C4h]
  _BYTE v106[12]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v107; // [rsp+1DCh] [rbp+DCh]
  _BYTE v108[12]; // [rsp+1E8h] [rbp+E8h] BYREF
  int v109; // [rsp+1F4h] [rbp+F4h]
  _BYTE v110[12]; // [rsp+200h] [rbp+100h] BYREF
  int v111; // [rsp+20Ch] [rbp+10Ch]
  _BYTE v112[12]; // [rsp+218h] [rbp+118h] BYREF
  int v113; // [rsp+224h] [rbp+124h]
  _BYTE v114[12]; // [rsp+230h] [rbp+130h] BYREF
  int v115; // [rsp+23Ch] [rbp+13Ch]
  _BYTE v116[12]; // [rsp+248h] [rbp+148h] BYREF
  int v117; // [rsp+254h] [rbp+154h]
  _BYTE v118[12]; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v119; // [rsp+26Ch] [rbp+16Ch]
  _BYTE v120[12]; // [rsp+278h] [rbp+178h] BYREF
  int v121; // [rsp+284h] [rbp+184h]
  _BYTE v122[12]; // [rsp+290h] [rbp+190h] BYREF
  int v123; // [rsp+29Ch] [rbp+19Ch]

  if ( (int)IsValidatetagWNDLayoutSupported() < 0 || (result = ValidatetagWNDLayout(), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable();
      v4 = result;
      if ( (int)result >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v6 = 1;
        v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v11 = 0;
        v12 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
        if ( v12 )
        {
          v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
          {
            v56 = (unsigned __int8)byte_1C0186D98;
            if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LOBYTE(v56) = byte_1C0186D98 - 1;
              Template_xqx(
                v56,
                &AcquiredExclusiveUserCritEvent,
                v14.QuadPart,
                v13.QuadPart,
                0,
                gullUserCritAcquireToken);
            }
          }
          if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            LODWORD(Length) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
            Template_xqx(
              (__int64)gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v14.QuadPart,
              0LL,
              Length,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v7;
        gbValidateHandleForIL = 1;
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
          gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, v15, v16, v17);
          inited = InitQEntryLookaside();
          if ( (int)IsInitSMSLookasideSupported() >= 0 )
            inited |= InitSMSLookaside();
          if ( UserAtomTableHandle )
            AtomTable = 0;
          else
            AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
          v20 = AtomTable | inited;
          if ( UserLibmgmtAtomTableHandle )
            v21 = 0;
          else
            v21 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
          v4 = v21 | v20;
          if ( v4 < 0 )
            goto LABEL_136;
          atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
          gatomFirstPinned = atomUSER32;
          if ( atomUSER32 && (unsigned int)InitCreateUserSubsystem() )
          {
            if ( (int)IsCreateSetupNameArraySupported() >= 0 )
              CreateSetupNameArray();
            if ( (int)IsInitPlaySoundSupported() < 0 || (int)InitPlaySound() >= 0 )
            {
              gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x22A8uLL);
              if ( gpsi )
              {
                v22 = 3044LL;
                do
                {
                  v23 = 28LL;
                  do
                  {
                    *(_DWORD *)((char *)gpsi + v22) = -1;
                    v22 += 4LL;
                    --v23;
                  }
                  while ( v23 );
                }
                while ( v22 < 4836 );
                v24 = gpsi;
                *((_DWORD *)gpsi + 1394) = 6;
                v24[1395] = 13;
                v25 = gpsi;
                *((_DWORD *)gpsi + 1362) = 6;
                v25[1363] = 13;
                v25[1368] = 8;
                v25[1369] = 16;
                gpDispInfo = (CCursorClip *)Win32AllocPoolZInit(0xB8uLL, 1885629269LL);
                if ( gpDispInfo )
                {
                  *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x48uLL);
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
                        qword_1C0189E48 = *(_QWORD *)gpDispInfo;
                        v58 = gdwPolicyFlags;
                        v27 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v58);
                        v28 = 10000;
                        if ( v27 )
                        {
                          v29 = 10000;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                            if ( ZwQueryValueKey(
                                   v27,
                                   &DestinationString,
                                   KeyValuePartialInformation,
                                   KeyValueInformation,
                                   0x14u,
                                   &ResultLength) >= 0 )
                              break;
                            if ( !v58 )
                              goto LABEL_56;
                            ZwClose(v27);
                            v27 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v58);
                            if ( !v27 )
                              goto LABEL_142;
                          }
                          v29 = v99;
LABEL_56:
                          ZwClose(v27);
                        }
                        else
                        {
LABEL_142:
                          v29 = 10000;
                        }
                        v59 = gdwPolicyFlags;
                        gUserProcessHandleQuota = v29;
                        v30 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v59);
                        if ( !v30 )
                          goto LABEL_61;
                        while ( 1 )
                        {
                          RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(v30, &ValueName, KeyValuePartialInformation, v100, 0x14u, &v72) >= 0 )
                            break;
                          if ( !v59 )
                            goto LABEL_60;
                          ZwClose(v30);
                          v30 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v59);
                          if ( !v30 )
                            goto LABEL_61;
                        }
                        v28 = v101;
LABEL_60:
                        ZwClose(v30);
                        if ( !v28 )
                          gUserPostMessageLimit = -1;
                        else
LABEL_61:
                          gUserPostMessageLimit = v28;
                        v31 = gNestedWindowLimit;
                        v60 = gdwPolicyFlags;
                        v32 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v60);
                        if ( v32 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v87, L"USERNestedWindowLimit");
                            if ( ZwQueryValueKey(v32, &v87, KeyValuePartialInformation, v102, 0x14u, &v73) >= 0 )
                              break;
                            if ( !v60 )
                              goto LABEL_65;
                            ZwClose(v32);
                            v32 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v60);
                            if ( !v32 )
                              goto LABEL_66;
                          }
                          v31 = v103;
LABEL_65:
                          ZwClose(v32);
                        }
LABEL_66:
                        if ( (unsigned int)(v31 - 50) <= 0x32 )
                          gNestedWindowLimit = v31;
                        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                        {
                          GetguiKeyboardCorrectionCalloutTimeout(&v84);
                          v33 = v84;
                          v61 = gdwPolicyFlags;
                          v34 = *v84;
                          v35 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                          if ( v35 )
                          {
                            while ( 1 )
                            {
                              RtlInitUnicodeString(&v88, L"USERKCCTimeout");
                              if ( ZwQueryValueKey(v35, &v88, KeyValuePartialInformation, v104, 0x14u, &v74) >= 0 )
                                break;
                              if ( !v61 )
                                goto LABEL_72;
                              ZwClose(v35);
                              v35 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                              if ( !v35 )
                                goto LABEL_73;
                            }
                            v34 = v105;
LABEL_72:
                            ZwClose(v35);
                          }
LABEL_73:
                          *v33 = v34;
                        }
                        v62 = gdwPolicyFlags;
                        v36 = (char *)gpsi + 2224;
                        v37 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v62);
                        if ( v37 )
                        {
                          v38 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v89, L"Installed");
                            if ( ZwQueryValueKey(v37, &v89, KeyValuePartialInformation, v106, 0x14u, &v75) >= 0 )
                              break;
                            if ( !v62 )
                              goto LABEL_78;
                            ZwClose(v37);
                            v37 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v62);
                            if ( !v37 )
                              goto LABEL_147;
                          }
                          v38 = v107;
LABEL_78:
                          ZwClose(v37);
                          if ( v36 )
                            *v36 = v38;
                        }
                        else
                        {
LABEL_147:
                          if ( v36 )
                            *v36 = 0;
                        }
                        v63 = gdwPolicyFlags;
                        v39 = (char *)gpsi + 2228;
                        v40 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v63);
                        if ( v40 )
                        {
                          v41 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v90, L"Installed");
                            if ( ZwQueryValueKey(v40, &v90, KeyValuePartialInformation, v108, 0x14u, &v76) >= 0 )
                              break;
                            if ( !v63 )
                              goto LABEL_84;
                            ZwClose(v40);
                            v40 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v63);
                            if ( !v40 )
                              goto LABEL_150;
                          }
                          v41 = v109;
LABEL_84:
                          ZwClose(v40);
                          if ( v39 )
                            *v39 = v41;
                        }
                        else
                        {
LABEL_150:
                          if ( v39 )
                            *v39 = 0;
                        }
                        v64 = gdwPolicyFlags;
                        v42 = (char *)gpsi + 2236;
                        v43 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v64);
                        if ( v43 )
                        {
                          v44 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v91, L"R2BuildNumber");
                            if ( ZwQueryValueKey(v43, &v91, KeyValuePartialInformation, v110, 0x14u, &v77) >= 0 )
                              break;
                            if ( !v64 )
                              goto LABEL_90;
                            ZwClose(v43);
                            v43 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v64);
                            if ( !v43 )
                              goto LABEL_153;
                          }
                          v44 = v111;
LABEL_90:
                          ZwClose(v43);
                          if ( v42 )
                            *v42 = v44;
                        }
                        else
                        {
LABEL_153:
                          if ( v42 )
                            *v42 = 0;
                        }
                        v65 = gdwPolicyFlags;
                        v45 = (char *)gpsi + 2232;
                        v46 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v65);
                        if ( v46 )
                        {
                          v47 = 0;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v92, L"StarterBuildNumber");
                            if ( ZwQueryValueKey(v46, &v92, KeyValuePartialInformation, v112, 0x14u, &v78) >= 0 )
                              break;
                            if ( !v65 )
                              goto LABEL_96;
                            ZwClose(v46);
                            v46 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v65);
                            if ( !v46 )
                              goto LABEL_156;
                          }
                          v47 = v113;
LABEL_96:
                          ZwClose(v46);
                          if ( v45 )
                            *v45 = v47;
                        }
                        else
                        {
LABEL_156:
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
                        v66 = gdwPolicyFlags;
                        v48 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v66);
                        if ( v48 )
                        {
                          v49 = 1;
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v93, L"ModernDesktopApps");
                            if ( ZwQueryValueKey(v48, &v93, KeyValuePartialInformation, v114, 0x14u, &v79) >= 0 )
                              break;
                            if ( !v66 )
                              goto LABEL_107;
                            ZwClose(v48);
                            v48 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v66);
                            if ( !v48 )
                              goto LABEL_159;
                          }
                          v49 = v115;
LABEL_107:
                          ZwClose(v48);
                          gfEnableModernOnDesktop = v49;
                        }
                        else
                        {
LABEL_159:
                          gfEnableModernOnDesktop = 1;
                        }
                        v67 = gdwPolicyFlags;
                        v50 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v67);
                        if ( v50 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v94, L"ShellFrameHangResilient");
                            if ( ZwQueryValueKey(v50, &v94, KeyValuePartialInformation, v116, 0x14u, &v80) >= 0 )
                              break;
                            if ( !v67 )
                              goto LABEL_111;
                            ZwClose(v50);
                            v50 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v67);
                            if ( !v50 )
                              goto LABEL_112;
                          }
                          v6 = v117;
LABEL_111:
                          ZwClose(v50);
                        }
LABEL_112:
                        v68 = gdwPolicyFlags;
                        gfShellFrameHangResilient = v6;
                        v51 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v68);
                        if ( !v51 )
                          goto LABEL_162;
                        v52 = 5000;
                        while ( 1 )
                        {
                          RtlInitUnicodeString(&v95, L"MDAQueueThreshold");
                          if ( ZwQueryValueKey(v51, &v95, KeyValuePartialInformation, v118, 0x14u, &v81) >= 0 )
                            break;
                          if ( !v68 )
                            goto LABEL_116;
                          ZwClose(v51);
                          v51 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v68);
                          if ( !v51 )
                            goto LABEL_162;
                        }
                        v52 = v119;
LABEL_116:
                        ZwClose(v51);
                        gdwMDAQThreshold = v52;
                        if ( v52 < 0x64 )
LABEL_162:
                          gdwMDAQThreshold = 5000;
                        v69 = gdwPolicyFlags;
                        v53 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v69);
                        if ( v53 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v96, L"MDAQueueTimeoutDiD");
                            if ( ZwQueryValueKey(v53, &v96, KeyValuePartialInformation, v120, 0x14u, &v82) >= 0 )
                              break;
                            if ( !v69 )
                              goto LABEL_120;
                            ZwClose(v53);
                            v53 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v69);
                            if ( !v53 )
                              goto LABEL_121;
                          }
                          v11 = v121;
LABEL_120:
                          ZwClose(v53);
                        }
LABEL_121:
                        v70 = gdwPolicyFlags;
                        gdwMDAQTimeoutDefenseInDepth = v11;
                        v54 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v70);
                        v55 = 127;
                        if ( v54 )
                        {
                          while ( 1 )
                          {
                            RtlInitUnicodeString(&v97, L"ShellWindowManagementBehavior");
                            if ( ZwQueryValueKey(v54, &v97, KeyValuePartialInformation, v122, 0x14u, &v83) >= 0 )
                              break;
                            if ( !v70 )
                              goto LABEL_124;
                            ZwClose(v54);
                            v54 = OpenCacheKeyEx(0LL, 0x35u, 0x20019u, &v70);
                            if ( !v54 )
                              goto LABEL_125;
                          }
                          v55 = v123;
LABEL_124:
                          ZwClose(v54);
                        }
LABEL_125:
                        gdwShellWindowManagementBehavior = v55;
                        if ( (unsigned int)gdwMDAQTimeoutDefenseInDepth < 0x64 )
                          gdwMDAQTimeoutDefenseInDepth = 30000;
                        *((_DWORD *)gpsi + 555) &= ~0x20u;
                        if ( (int)IsInitializeTouchPadSysParamsSupported() >= 0 )
                          InitializeTouchPadSysParams();
                        if ( (int)IsInitModuleAllocationsSupported() >= 0 )
                          InitModuleAllocations();
                        v4 = DispBroker::DispBrokerClient::Init();
                        if ( v4 < 0 )
                          goto LABEL_136;
                        if ( (int)IsInitRotationManagerSupported() >= 0 )
                        {
                          v4 = InitRotationManager();
                          if ( v4 < 0 )
                            goto LABEL_136;
                        }
                        if ( (int)IsAllocateCvrSupported() < 0 || (unsigned int)AllocateCvr(&gSMWP, 4LL) )
                          goto LABEL_136;
                      }
                    }
                  }
                  else
                  {
                    Win32FreePool((__int64)gpDispInfo);
                    gpDispInfo = 0LL;
                  }
                }
              }
            }
          }
        }
        if ( v4 >= 0 )
          v4 = -1073741801;
LABEL_136:
        UserSessionSwitchLeaveCrit();
        return (unsigned int)v4;
      }
    }
  }
  return result;
}
