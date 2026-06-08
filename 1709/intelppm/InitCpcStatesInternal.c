/*
 * XREFs of InitCpcStatesInternal @ 0x1C002E5D0
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C002B150 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C002FF70 (RegisterKernelCpc.c)
 * Callees:
 *     DisplayKernelPerfStates @ 0x1C0001768 (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004288 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C00042FC (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004368 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00044CC (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     CpcRegisterIsSupported @ 0x1C0007D48 (CpcRegisterIsSupported.c)
 *     InitCommonPerfStateContext @ 0x1C001D008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C0022BF0 (ProcLibCapChange.c)
 *     CpcConnectNativeInterrupt @ 0x1C00290D4 (CpcConnectNativeInterrupt.c)
 *     GetPackageAffinity @ 0x1C002E430 (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  unsigned int v2; // r12d
  unsigned int v3; // r13d
  __int64 v4; // r15
  _QWORD *v6; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int v9; // edi
  SIZE_T v10; // rdi
  char *PoolWithTag; // rax
  char *v12; // rsi
  void *v13; // rax
  int v14; // eax
  unsigned int v15; // r11d
  char v16; // bl
  char *v17; // r14
  int v18; // esi
  _BYTE *v19; // rdi
  __int64 v20; // r8
  char v21; // al
  int v22; // r11d
  int v23; // ecx
  char v24; // al
  int v25; // r11d
  int v26; // r8d
  int v27; // ecx
  bool v28; // zf
  unsigned __int8 v29; // cl
  unsigned int v30; // r8d
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // r9
  char v35; // r10
  char v36; // r11
  __int64 v37; // r9
  char v38; // r10
  int v39; // eax
  int v40; // r10d
  unsigned int *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  char v44; // r10
  char v45; // bl
  char *v46; // rdi
  __int64 v47; // r12
  PVOID v48; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v50; // r12
  __int64 v51; // rdi
  char *v52; // rdi
  char *v53; // r14
  PVOID v54; // r15
  struct _GROUP_AFFINITY *v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rax
  int v63; // edx
  __int64 v64; // rax
  unsigned __int16 v65; // r9
  unsigned int v66; // r8d
  char *v67; // rdi
  unsigned int v68; // r15d
  int v69; // r14d
  unsigned int v70; // r12d
  unsigned int v71; // r13d
  _QWORD *v72; // rax
  _QWORD *v73; // r13
  unsigned __int64 v74; // rdx
  int v75; // r11d
  int v76; // r9d
  char *v77; // r8
  char v78; // r10
  void *v79; // rax
  __int64 (__fastcall *v80)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v81; // ecx
  bool v82; // al
  int v83; // eax
  int v84; // ecx
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // r12
  __int64 v90; // rsi
  char *v91; // r13
  unsigned __int64 v92; // r14
  _DWORD *v93; // r15
  struct _GROUP_AFFINITY *v94; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned int v96; // ecx
  char v97; // r10
  char v98; // cl
  char v99; // cl
  char v101; // [rsp+30h] [rbp-D0h]
  char v102; // [rsp+31h] [rbp-CFh]
  char v103; // [rsp+32h] [rbp-CEh]
  char v104; // [rsp+33h] [rbp-CDh]
  char v105; // [rsp+34h] [rbp-CCh]
  PVOID DeferredContext; // [rsp+38h] [rbp-C8h] BYREF
  char v107; // [rsp+40h] [rbp-C0h]
  char IsSupported; // [rsp+41h] [rbp-BFh]
  char v109; // [rsp+42h] [rbp-BEh]
  bool v110; // [rsp+43h] [rbp-BDh]
  bool v111; // [rsp+44h] [rbp-BCh]
  char v112; // [rsp+45h] [rbp-BBh]
  int v113; // [rsp+48h] [rbp-B8h]
  int v114; // [rsp+4Ch] [rbp-B4h] BYREF
  int v115; // [rsp+50h] [rbp-B0h]
  int v116; // [rsp+54h] [rbp-ACh]
  int v117; // [rsp+58h] [rbp-A8h]
  int v118; // [rsp+5Ch] [rbp-A4h]
  unsigned int v119; // [rsp+60h] [rbp-A0h]
  _QWORD v120[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v121[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v122; // [rsp+98h] [rbp-68h]
  _QWORD *v123; // [rsp+A0h] [rbp-60h]
  int PerfDomain; // [rsp+A8h] [rbp-58h]
  BOOL v125; // [rsp+ACh] [rbp-54h]
  __int64 v126; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v127)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+B8h] [rbp-48h] BYREF
  __int64 v128; // [rsp+C0h] [rbp-40h]
  int v129; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-20h] BYREF
  char *v133; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v134)(_QWORD *, _QWORD); // [rsp+F0h] [rbp-10h]
  struct _GROUP_AFFINITY Affinity; // [rsp+F8h] [rbp-8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v137[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v138[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = 0LL;
  v134 = a2;
  v128 = a1;
  v6 = 0LL;
  v102 = 0;
  v123 = 0LL;
  v114 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v114);
  v8 = v114;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v114 = v8;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x21u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v115) = *(_QWORD *)(a1 + 312) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v121, &v129);
  v10 = (unsigned int)(352 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v133 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v9 = -1073741670;
    goto LABEL_250;
  }
  v13 = memset(PoolWithTag, 0, v10);
  LOBYTE(v13) = 0;
  v107 = 0;
  v116 = (int)v13;
  v103 = 0;
  LOBYTE(v2) = 0;
  v104 = 1;
  LOBYTE(v3) = 0;
  v109 = 1;
  v113 = 1;
  v122 = v2;
  v119 = v3;
  v105 = 0;
  LOBYTE(v117) = 0;
  IsSupported = 0;
  LOBYTE(v118) = 0;
  v112 = 0;
  v101 = 0;
  v111 = 0;
  v110 = 0;
  v127 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v126 = 0LL;
  v132 = 0LL;
  KeInitializeAffinityEx(v137);
  ResetEnumerationContext(v121);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v137, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v10) = 0;
  v125 = v10;
  ResetEnumerationContext(v121);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v4 = *((_QWORD *)DeferredContext + 70);
      v126 = v4;
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v138) >= 0 )
        v125 = KeIsEqualAffinityEx(v138, v137) != 0;
      break;
    }
  }
  ResetEnumerationContext(v121);
  v14 = EnumerateNextDevice((__int64)v121, &DeferredContext);
  if ( v14 )
  {
    v44 = v116;
    goto LABEL_77;
  }
  v16 = 1;
  v17 = v12 + 92;
  v18 = v113;
  do
  {
    v19 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
    if ( v19[140] == 10 || v19[152] == 10 )
      v103 = v15;
    if ( v19[176] == 10 || v19[80] == 10 || v19[92] == 10 || v19[68] == 10 || v19[104] == 10 )
      v105 = v15;
    v2 = (unsigned __int8)v2;
    if ( v19[56] == 10 )
      v2 = v15;
    v3 = (unsigned __int8)v3;
    if ( v19[8] == 10 )
      v3 = v15;
    if ( v19[212] == 10 || v19[200] == 10 || v19[188] == 10 || v19[116] == 10 )
      v107 = v15;
    *(_QWORD *)(v17 + 20) = v19;
    IsSupported = CpcRegisterIsSupported((__int64)(v19 + 176));
    *v17 = IsSupported;
    v17[1] = CpcRegisterIsSupported((__int64)(v19 + 68));
    v17[2] = CpcRegisterIsSupported((__int64)(v19 + 80));
    v17[3] = CpcRegisterIsSupported((__int64)(v19 + 92));
    v17[6] = CpcRegisterIsSupported((__int64)(v19 + 104));
    v17[7] = CpcRegisterIsSupported((__int64)(v19 + 56));
    v112 = CpcRegisterIsSupported((__int64)(v19 + 116));
    v21 = CpcRegisterIsSupported(v20);
    v23 = (unsigned __int8)v117;
    v17[4] = v21;
    if ( v21 )
      v23 = v22;
    v117 = v23;
    v24 = CpcRegisterIsSupported((__int64)(v19 + 200));
    LOBYTE(v27) = v118;
    v17[5] = v24;
    v26 = 0;
    v27 = (unsigned __int8)v27;
    if ( v24 )
      v27 = v25;
    v28 = v19[140] == 127;
    v118 = v27;
    v29 = 0;
    if ( !v28 )
      v29 = v115;
    if ( v19[152] != 127 )
      v26 = v29;
    v115 = v26;
    if ( !qword_1C0019770 || !(unsigned __int8)qword_1C0019770(v19) )
      v109 = 0;
    v30 = 0;
    memset(v120, 0, 12);
    while ( 1 )
    {
      if ( v30 )
      {
        if ( v30 == 1 )
        {
          v31 = 80LL;
        }
        else if ( v30 == 2 )
        {
          v31 = 92LL;
        }
        else
        {
          v31 = 104LL;
        }
      }
      else
      {
        v31 = 68LL;
      }
      if ( !CpcRegisterIsSupported((__int64)&v19[v31]) )
        goto LABEL_61;
      v101 = 1;
      if ( CpcRegisterIsSupported((__int64)v120) )
        break;
      v37 = *(_QWORD *)(v33 + 4);
      v38 = *(_BYTE *)(v33 + 3);
      LOBYTE(v120[0]) = *(_BYTE *)v33;
      *(_QWORD *)((char *)v120 + 4) = v37;
      BYTE3(v120[0]) = v38;
LABEL_61:
      v30 = v32 + 1;
      if ( v30 >= 4 )
        goto LABEL_64;
    }
    if ( v36 == *(_BYTE *)v33 && v34 == *(_QWORD *)(v33 + 4) && v35 == *(_BYTE *)(v33 + 3) )
      goto LABEL_61;
    v16 = 0;
LABEL_64:
    if ( v101 && v16 )
    {
      v39 = v120[1];
      *(_QWORD *)(v17 + 28) = v120[0];
      *((_DWORD *)v17 + 9) = v39;
    }
    if ( qword_1C0019780 )
    {
      v18 = (unsigned __int8)v18;
      if ( (int)qword_1C0019780(v17 - 92, &v130, &v131, &v132, &v127) < 0 )
        v18 = 0;
    }
    LOBYTE(v40) = v116;
    v41 = (unsigned int *)&Cpc2RegisterTable;
    v42 = 19LL;
    do
    {
      v43 = *v41;
      v41 += 6;
      v40 = (unsigned __int8)v40;
      if ( v19[v43] == 10 )
        v40 = 1;
      --v42;
    }
    while ( v42 );
    v116 = v40;
    v17 += 352;
    v14 = EnumerateNextDevice((__int64)v121, &DeferredContext);
  }
  while ( !v14 );
  v104 = v16;
  v6 = 0LL;
  v113 = v18;
  v4 = v126;
  v12 = v133;
  v119 = v3;
  v122 = v2;
LABEL_77:
  if ( !v130 || !v127 )
  {
    LOBYTE(v14) = 0;
    v113 = v14;
  }
  if ( v44 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0019AD8 + 88))(*(_QWORD *)(qword_1C0019AD8 + 56));
    if ( v9 < 0 )
      goto LABEL_250;
    ResetEnumerationContext(v121);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
    {
      v45 = 0;
      v46 = v12 + 112;
      do
      {
        if ( *(v46 - 20) )
        {
          v47 = *(_QWORD *)v46;
          v48 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v46 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v45 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v45 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v48, (_BYTE *)(v47 + 176), 1LL);
        }
        v46 += 352;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
      v102 = v45;
      v6 = v123;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0019AD8 + 104))(*(_QWORD *)(qword_1C0019AD8 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_250;
  }
  ResetEnumerationContext(v121);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
    v50 = (__int64 *)(v12 + 112);
    do
    {
      v51 = *v50;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v51 + 20) == 10
        && !ReadGenAddrHidden(*((unsigned int *)DeferredContext + 20), (char *)(v51 + 20)) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x22u,
          (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v51 + 20) = *(_QWORD *)(v4 + 20);
        *(_DWORD *)(v51 + 28) = *(_DWORD *)(v4 + 28);
        if ( *(_BYTE *)(v51 + 8) == 10 )
        {
          *(_QWORD *)(v51 + 8) = *(_QWORD *)(v4 + 8);
          *(_DWORD *)(v51 + 16) = *(_DWORD *)(v4 + 16);
        }
        if ( *(_BYTE *)(v51 + 32) == 10 )
        {
          *(_QWORD *)(v51 + 32) = *(_QWORD *)(v4 + 32);
          *(_DWORD *)(v51 + 40) = *(_DWORD *)(v4 + 40);
        }
        if ( *(_BYTE *)(v51 + 44) == 10 )
        {
          *(_QWORD *)(v51 + 44) = *(_QWORD *)(v4 + 44);
          *(_DWORD *)(v51 + 52) = *(_DWORD *)(v4 + 52);
        }
        if ( *(_BYTE *)(v51 + 224) == 10 )
        {
          *(_QWORD *)(v51 + 224) = *(_QWORD *)(v4 + 224);
          *(_DWORD *)(v51 + 232) = *(_DWORD *)(v4 + 232);
        }
        if ( *(_BYTE *)(v51 + 56) == 10 )
        {
          *(_QWORD *)(v51 + 56) = *(_QWORD *)(v4 + 56);
          *(_DWORD *)(v51 + 64) = *(_DWORD *)(v4 + 64);
        }
      }
      v50 += 44;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
    v6 = v123;
  }
  ResetEnumerationContext(v121);
  if ( (unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
  {
LABEL_140:
    if ( *((_QWORD *)v12 + 1) < *((_QWORD *)v12 + 2) )
    {
      v65 = 37;
      goto LABEL_144;
    }
    v67 = v12 + 32;
    if ( *((_QWORD *)v12 + 3) < *((_QWORD *)v12 + 4) )
    {
      v65 = 38;
      goto LABEL_144;
    }
    v68 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v69 = ((_BYTE)v115 != 0) + 1;
    v70 = (v68 + 7 + 24 * v69) & 0xFFFFFFF8;
    v119 = v70 + 8 * PerfDomain * v69;
    v71 = v119;
    v72 = ExAllocatePoolWithTag(NonPagedPoolNx, v119, 0x72637250u);
    v123 = v72;
    v6 = v72;
    if ( !v72 )
      goto LABEL_6;
    memset(v72, 0, v71);
    v73 = (_QWORD *)v128;
    if ( *(_BYTE *)(v128 + 1106) )
      v6[48] = PepParkPreference;
    if ( (v73[33] & 0x10000000000LL) != 0 )
    {
      v6[49] = PepParkMask;
      v6[50] = PepPerfCheckComplete;
      v6[8] = v73[136];
    }
    LOBYTE(v74) = v113;
    v75 = PerfDomain;
    v76 = v129;
    v6[52] = v6 + 54;
    v77 = (char *)v6 + v68;
    *(_DWORD *)v6 = 52;
    *((_DWORD *)v6 + 3) = v75;
    *((_DWORD *)v6 + 8) = v69;
    v6[51] = v77;
    v6[53] = (char *)v6 + v70;
    *((_WORD *)v6 + 2) = v76;
    if ( (_BYTE)v74 )
    {
      v6[42] = v130;
      v6[43] = v131;
      if ( v125 && v132 )
      {
        v78 = v101;
        if ( v76 == 254 )
        {
          v6[44] = v132;
          v6[9] = v12;
        }
      }
      else
      {
        v78 = v101;
      }
LABEL_167:
      v80 = v127;
      if ( (_BYTE)v74 )
      {
LABEL_169:
        v6[41] = v80;
        if ( (_BYTE)v116 )
        {
          if ( v103 )
            v6[45] = CpcReadFeedback;
          if ( v105 )
          {
            v6[46] = CpcAcquirePerformance;
            v6[47] = CpcCommitPerformance;
          }
          if ( v107 )
          {
            v6[38] = AcquirePccSubspace;
            v6[39] = ExecutePccWrite;
          }
          v81 = *(_DWORD *)(qword_1C0019AD8 + 68);
          if ( v81 )
          {
            LOBYTE(v74) = v113;
            *((_DWORD *)v6 + 9) = 0x989680 / (v81 >> 1);
          }
        }
        if ( IsSupported || (v73[33] & 0x4000000000LL) != 0 )
          v6[40] = CpcReinitializeHandler;
        *((_BYTE *)v6 + 6) = 0;
        v82 = v78 || (_BYTE)v74;
        *((_BYTE *)v6 + 7) = v82;
        *((_BYTE *)v6 + 8) = v109;
        *((_BYTE *)v6 + 40) = v110;
        *((_DWORD *)v6 + 4) = v114;
        *((_DWORD *)v6 + 5) = *((_DWORD *)v12 + 17);
        v83 = *((_DWORD *)v12 + 19);
        *((_DWORD *)v6 + 6) = v83;
        v84 = *((_DWORD *)v12 + 20);
        if ( !v83 )
          v83 = 1;
        *((_DWORD *)v6 + 6) = v83;
        if ( !v84 )
          v84 = 1;
        *((_DWORD *)v6 + 7) = v84;
        v6[6] = *(_QWORD *)v67;
        v6[7] = *((_QWORD *)v12 + 2);
        v85 = v73[40];
        if ( v85 )
          v6[31] = v85;
        v6[33] = v73[41];
        if ( (_BYTE)v74 )
        {
          if ( (_BYTE)v117 )
            *((_BYTE *)v6 + 9) = 1;
          if ( (_BYTE)v118 )
            *((_BYTE *)v6 + 10) = 1;
        }
        else
        {
          if ( (_BYTE)v117 )
            v6[35] = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v118 )
            v6[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v111 )
          v6[37] = CpcSetAutonomousMode;
        if ( v112 )
          v6[32] = CpcSetTimeWindow;
        if ( (v73[33] & 0x400000) != 0 && (_BYTE)v74 && (v76 == 254 || v75 == 1) )
          *((_BYTE *)v6 + 11) = 1;
        v86 = *((_QWORD *)v12 + 2);
        v87 = *((_QWORD *)v12 + 5);
        if ( v86 == v87 )
        {
          *((_DWORD *)v77 + 2) = 100;
        }
        else
        {
          v74 = 100 * v87 % v86;
          *((_DWORD *)v77 + 2) = 100 * v87 / v86;
        }
        *((_DWORD *)v77 + 3) = 1;
        v77[17] = 1;
        *(_QWORD *)v77 = PerfReadWrappingCounter;
        v77[16] = v103 == 0;
        if ( (_BYTE)v115 )
        {
          v88 = v6[51];
          *(_QWORD *)(v88 + 32) = 100LL;
          *(_QWORD *)(v88 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v88 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v6, v74, (int)v77);
        v89 = (_QWORD *)v6[53];
        v126 = v6[52];
        ResetEnumerationContext(v121);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
        {
          v90 = v126;
          do
          {
            v91 = (char *)*((_QWORD *)v67 + 10);
            LODWORD(v92) = 100;
            v93 = DeferredContext;
            if ( v67[67] )
            {
              if ( v91[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v94 = &PreviousAffinity;
                if ( v102 )
                  v94 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v94);
                v102 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v93, v91 + 56);
              if ( GenAddrMaybeHidden > *((_QWORD *)v67 - 2) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x27u,
                  (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
                GenAddrMaybeHidden = *((_QWORD *)v67 - 2);
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v67 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x28u,
                  (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
                GenAddrMaybeHidden = *(_QWORD *)v67;
              }
              v96 = *((_DWORD *)v67 + 12);
              *((_QWORD *)v67 + 3) = GenAddrMaybeHidden;
              v92 = 100 * GenAddrMaybeHidden / *((_QWORD *)v67 - 2);
              if ( (unsigned int)v92 <= v96 )
                LODWORD(v92) = v96;
              *((_DWORD *)v67 + 13) = v92;
              if ( (_DWORD)v92 != v93[177] )
                ProcLibCapChange(v128, v93[108], v93[120], v92);
            }
            InitCommonPerfStateContext((__int64)v93, (_QWORD *)v67 - 4, v90, v92, (unsigned int)v92 < 0x64 ? 2 : 0);
            *v89 = v67 + 128;
            *((_QWORD *)v67 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v67 + 23) = v91;
            v98 = v91[153];
            if ( (unsigned __int8)v98 < 0x40u )
              *((_QWORD *)v67 + 20) = (1LL << v98) - 1;
            v99 = v91[141];
            if ( (unsigned __int8)v99 < 0x40u )
              *((_QWORD *)v67 + 21) = (1LL << v99) - 1;
            ++v89;
            if ( (_BYTE)v115 != v97 )
            {
              *v89++ = v67 + 192;
              *((_QWORD *)v67 + 30) = *((_QWORD *)v93 + 39);
            }
            v90 += 32LL;
            v67 += 352;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) );
          v6 = v123;
          v12 = v133;
          v73 = (_QWORD *)v128;
        }
        if ( v102 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v9 = v134(v6, v119);
        if ( v9 >= 0 )
        {
          ResetEnumerationContext(v121);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v12;
            v12 += 352;
          }
          if ( (v73[33] & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v121);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v12 = 0LL;
          v9 = 0;
        }
        goto LABEL_250;
      }
LABEL_168:
      v80 = PerfSelectionCpc;
      goto LABEL_169;
    }
    v78 = v101;
    if ( v101 )
    {
      if ( v104 )
      {
        v6[42] = PerfControlCpcSingleRegister;
        v79 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v6[42] = PerfControlCpc;
        v79 = (void *)qword_1C0019748;
        if ( !qword_1C0019748 || !CpcHiddenProcessorMitigationReported )
        {
          v6[43] = PerfControlCpcHidden;
          goto LABEL_167;
        }
      }
    }
    else
    {
      v79 = AcpiCStateIdleCancel;
      v6[42] = AcpiCStateIdleCancel;
    }
    v6[43] = v79;
    goto LABEL_168;
  }
  v52 = v12 + 100;
  while ( 1 )
  {
    v53 = *(char **)(v52 + 12);
    v54 = DeferredContext;
    if ( (v53[8] == 127 || v53[20] == 127 || v53[32] == 127 || v53[44] == 127 || v53[224] == 127 || v53[188] == 127)
      && !*((_BYTE *)DeferredContext + 78) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v55 = &PreviousAffinity;
      if ( v102 )
        v55 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v55);
      v102 = 1;
    }
    *v52 = v103;
    v52[1] = v122;
    v52[2] = v119;
    v52[3] = v105;
    *((_DWORD *)v52 - 9) = v114;
    *(_QWORD *)(v52 - 92) = ReadGenAddrMaybeHidden((__int64)v54, v53 + 8);
    v56 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 20);
    *(_QWORD *)(v52 - 84) = v56;
    if ( !v56 )
      break;
    v57 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 32);
    v58 = *(_QWORD *)(v52 - 84);
    *(_QWORD *)(v52 - 76) = v57;
    if ( v57 > v58 )
      *(_QWORD *)(v52 - 76) = v58;
    *(_QWORD *)(v52 - 68) = ReadGenAddrMaybeHidden((__int64)v54, v53 + 44);
    v59 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 224);
    v60 = *(_QWORD *)(v52 - 84);
    *(_QWORD *)(v52 - 60) = v59;
    LODWORD(v59) = 100LL * *(_QWORD *)(v52 - 92) / v60;
    *((_DWORD *)v52 - 8) = v59;
    *((_DWORD *)v52 - 7) = v59;
    v61 = 100LL * *(_QWORD *)(v52 - 76) / v60;
    v62 = 100LL * *(_QWORD *)(v52 - 68) / v60;
    if ( !(_DWORD)v62 )
      LODWORD(v62) = 1;
    *((_DWORD *)v52 - 5) = v62;
    if ( !(_DWORD)v61 )
      LODWORD(v61) = 1;
    *((_DWORD *)v52 - 6) = v61;
    if ( CpcRegisterIsSupported((__int64)(v53 + 188)) )
    {
      v64 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 188);
      v63 = 1;
      v110 = v64 != 0;
      v111 = v53[188] != 126;
    }
    if ( v52 - 100 != v12
      && (*(_QWORD *)(v52 - 92) != *((_QWORD *)v12 + 1)
       || *(_QWORD *)(v52 - 84) != *((_QWORD *)v12 + 2)
       || *(_QWORD *)(v52 - 76) != *((_QWORD *)v12 + 3)
       || *(_QWORD *)(v52 - 68) != *((_QWORD *)v12 + 4)) )
    {
      v65 = 36;
      v66 = v63;
      goto LABEL_145;
    }
    v52 += 352;
    if ( (unsigned int)EnumerateNextDevice((__int64)v121, &DeferredContext) )
      goto LABEL_140;
  }
  v65 = 35;
LABEL_144:
  v66 = 1;
LABEL_145:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    v66,
    v65,
    (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
  v9 = -1073741811;
LABEL_250:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return (unsigned int)v9;
}
