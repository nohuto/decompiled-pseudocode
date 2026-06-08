/*
 * XREFs of InitCpcStatesInternal @ 0x1C002AD40
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C00278F0 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C002C6C0 (RegisterKernelCpc.c)
 * Callees:
 *     DisplayKernelPerfStates @ 0x1C0001C68 (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0001CAC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002918 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00040D8 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C0004138 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00041A4 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00042FC (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     CpcRegisterIsSupported @ 0x1C0007A94 (CpcRegisterIsSupported.c)
 *     InitCommonPerfStateContext @ 0x1C001A008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001AC04 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001AD70 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C001F970 (ProcLibCapChange.c)
 *     CpcConnectNativeInterrupt @ 0x1C00258F4 (CpcConnectNativeInterrupt.c)
 *     GetPackageAffinity @ 0x1C002ABA0 (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(_QWORD *a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
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
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rax
  int v62; // edx
  unsigned __int64 v63; // rax
  unsigned __int16 v64; // r9
  unsigned int v65; // r8d
  char *v66; // rdi
  unsigned int v67; // r15d
  int v68; // r14d
  unsigned int v69; // r12d
  unsigned int v70; // r13d
  _QWORD *v71; // rax
  _QWORD *v72; // r13
  unsigned __int64 v73; // rdx
  int v74; // r11d
  int v75; // r9d
  char *v76; // r8
  char v77; // r10
  void *v78; // rax
  __int64 (__fastcall *v79)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v80; // ecx
  bool v81; // al
  int v82; // eax
  int v83; // ecx
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // r12
  __int64 v89; // rsi
  char *v90; // r13
  unsigned __int64 v91; // r14
  _DWORD *v92; // r15
  struct _GROUP_AFFINITY *v93; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  char v95; // r10
  char v96; // cl
  char v97; // cl
  char v99; // [rsp+30h] [rbp-D0h]
  char v100; // [rsp+31h] [rbp-CFh]
  char v101; // [rsp+32h] [rbp-CEh]
  char v102; // [rsp+33h] [rbp-CDh]
  char v103; // [rsp+34h] [rbp-CCh]
  PVOID DeferredContext; // [rsp+38h] [rbp-C8h] BYREF
  char v105; // [rsp+40h] [rbp-C0h]
  char IsSupported; // [rsp+41h] [rbp-BFh]
  char v107; // [rsp+42h] [rbp-BEh]
  bool v108; // [rsp+43h] [rbp-BDh]
  bool v109; // [rsp+44h] [rbp-BCh]
  char v110; // [rsp+45h] [rbp-BBh]
  int v111; // [rsp+48h] [rbp-B8h]
  int v112; // [rsp+4Ch] [rbp-B4h] BYREF
  int v113; // [rsp+50h] [rbp-B0h]
  int v114; // [rsp+54h] [rbp-ACh]
  int v115; // [rsp+58h] [rbp-A8h]
  int v116; // [rsp+5Ch] [rbp-A4h]
  unsigned int v117; // [rsp+60h] [rbp-A0h]
  _QWORD v118[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v119[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v120; // [rsp+98h] [rbp-68h]
  _QWORD *v121; // [rsp+A0h] [rbp-60h]
  int PerfDomain; // [rsp+A8h] [rbp-58h]
  BOOL v123; // [rsp+ACh] [rbp-54h]
  __int64 v124; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v125)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v126; // [rsp+C0h] [rbp-40h]
  int v127; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v128; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v130; // [rsp+E0h] [rbp-20h] BYREF
  char *v131; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v132)(_QWORD *, _QWORD); // [rsp+F0h] [rbp-10h]
  struct _GROUP_AFFINITY Affinity; // [rsp+F8h] [rbp-8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v135[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v136[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = 0LL;
  v132 = a2;
  v126 = a1;
  v6 = 0LL;
  v100 = 0;
  v121 = 0LL;
  v112 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v112);
  v8 = v112;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v112 = v8;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x21u,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
    a1[33] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v113) = a1[39] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015D98,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v119, &v127);
  v10 = (unsigned int)(352 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v131 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v9 = -1073741670;
    goto LABEL_249;
  }
  v13 = memset(PoolWithTag, 0, v10);
  LOBYTE(v13) = 0;
  v105 = 0;
  v114 = (int)v13;
  v101 = 0;
  LOBYTE(v2) = 0;
  v102 = 1;
  LOBYTE(v3) = 0;
  v107 = 1;
  v111 = 1;
  v120 = v2;
  v117 = v3;
  v103 = 0;
  LOBYTE(v115) = 0;
  IsSupported = 0;
  LOBYTE(v116) = 0;
  v110 = 0;
  v99 = 0;
  v109 = 0;
  v108 = 0;
  v125 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v124 = 0LL;
  v130 = 0LL;
  KeInitializeAffinityEx(v135);
  ResetEnumerationContext(v119);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v135, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v10) = 0;
  v123 = v10;
  ResetEnumerationContext(v119);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v4 = *((_QWORD *)DeferredContext + 70);
      v124 = v4;
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v136) >= 0 )
        v123 = KeIsEqualAffinityEx(v136, v135) != 0;
      break;
    }
  }
  ResetEnumerationContext(v119);
  v14 = EnumerateNextDevice((__int64)v119, &DeferredContext);
  if ( v14 )
  {
    v44 = v114;
    goto LABEL_77;
  }
  v16 = 1;
  v17 = v12 + 92;
  v18 = v111;
  do
  {
    v19 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
    if ( v19[140] == 10 || v19[152] == 10 )
      v101 = v15;
    if ( v19[176] == 10 || v19[80] == 10 || v19[92] == 10 || v19[68] == 10 || v19[104] == 10 )
      v103 = v15;
    v2 = (unsigned __int8)v2;
    if ( v19[56] == 10 )
      v2 = v15;
    v3 = (unsigned __int8)v3;
    if ( v19[8] == 10 )
      v3 = v15;
    if ( v19[212] == 10 || v19[200] == 10 || v19[188] == 10 || v19[116] == 10 )
      v105 = v15;
    *(_QWORD *)(v17 + 20) = v19;
    IsSupported = CpcRegisterIsSupported((__int64)(v19 + 176));
    *v17 = IsSupported;
    v17[1] = CpcRegisterIsSupported((__int64)(v19 + 68));
    v17[2] = CpcRegisterIsSupported((__int64)(v19 + 80));
    v17[3] = CpcRegisterIsSupported((__int64)(v19 + 92));
    v17[6] = CpcRegisterIsSupported((__int64)(v19 + 104));
    v17[7] = CpcRegisterIsSupported((__int64)(v19 + 56));
    v110 = CpcRegisterIsSupported((__int64)(v19 + 116));
    v21 = CpcRegisterIsSupported(v20);
    v23 = (unsigned __int8)v115;
    v17[4] = v21;
    if ( v21 )
      v23 = v22;
    v115 = v23;
    v24 = CpcRegisterIsSupported((__int64)(v19 + 200));
    LOBYTE(v27) = v116;
    v17[5] = v24;
    v26 = 0;
    v27 = (unsigned __int8)v27;
    if ( v24 )
      v27 = v25;
    v28 = v19[140] == 127;
    v116 = v27;
    v29 = 0;
    if ( !v28 )
      v29 = v113;
    if ( v19[152] != 127 )
      v26 = v29;
    v113 = v26;
    if ( !qword_1C0015F30 || !(unsigned __int8)qword_1C0015F30(v19) )
      v107 = 0;
    v30 = 0;
    memset(v118, 0, 12);
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
      if ( !(unsigned __int8)CpcRegisterIsSupported((__int64)&v19[v31]) )
        goto LABEL_61;
      v99 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v118) )
        break;
      v37 = *(_QWORD *)(v33 + 4);
      v38 = *(_BYTE *)(v33 + 3);
      LOBYTE(v118[0]) = *(_BYTE *)v33;
      *(_QWORD *)((char *)v118 + 4) = v37;
      BYTE3(v118[0]) = v38;
LABEL_61:
      v30 = v32 + 1;
      if ( v30 >= 4 )
        goto LABEL_64;
    }
    if ( v36 == *(_BYTE *)v33 && v34 == *(_QWORD *)(v33 + 4) && v35 == *(_BYTE *)(v33 + 3) )
      goto LABEL_61;
    v16 = 0;
LABEL_64:
    if ( v99 && v16 )
    {
      v39 = v118[1];
      *(_QWORD *)(v17 + 28) = v118[0];
      *((_DWORD *)v17 + 9) = v39;
    }
    if ( qword_1C0015F40 )
    {
      v18 = (unsigned __int8)v18;
      if ( (int)qword_1C0015F40(v17 - 92, &v128, &v129, &v130, &v125) < 0 )
        v18 = 0;
    }
    LOBYTE(v40) = v114;
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
    v114 = v40;
    v17 += 352;
    v14 = EnumerateNextDevice((__int64)v119, &DeferredContext);
  }
  while ( !v14 );
  v102 = v16;
  v6 = 0LL;
  v111 = v18;
  v4 = v124;
  v12 = v131;
  v117 = v3;
  v120 = v2;
LABEL_77:
  if ( !v128 || !v125 )
  {
    LOBYTE(v14) = 0;
    v111 = v14;
  }
  if ( v44 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0016298 + 88))(*(_QWORD *)(qword_1C0016298 + 56));
    if ( v9 < 0 )
      goto LABEL_249;
    ResetEnumerationContext(v119);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
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
      while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) );
      v100 = v45;
      v6 = v121;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0016298 + 104))(*(_QWORD *)(qword_1C0016298 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_249;
  }
  ResetEnumerationContext(v119);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
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
          (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
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
    while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) );
    v6 = v121;
  }
  ResetEnumerationContext(v119);
  if ( (unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
  {
LABEL_140:
    if ( *((_QWORD *)v12 + 1) < *((_QWORD *)v12 + 2) )
    {
      v64 = 37;
      goto LABEL_144;
    }
    v66 = v12 + 32;
    if ( *((_QWORD *)v12 + 3) < *((_QWORD *)v12 + 4) )
    {
      v64 = 38;
      goto LABEL_144;
    }
    v67 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v68 = ((_BYTE)v113 != 0) + 1;
    v69 = (v67 + 7 + 24 * v68) & 0xFFFFFFF8;
    v117 = v69 + 8 * PerfDomain * v68;
    v70 = v117;
    v71 = ExAllocatePoolWithTag(NonPagedPoolNx, v117, 0x72637250u);
    v121 = v71;
    v6 = v71;
    if ( !v71 )
      goto LABEL_6;
    memset(v71, 0, v70);
    v72 = v126;
    if ( *((_BYTE *)v126 + 1105) )
      v6[48] = PepParkPreference;
    if ( (v72[33] & 0x10000000000LL) != 0 )
    {
      v6[49] = PepParkMask;
      v6[50] = PepPerfCheckComplete;
      v6[8] = v72[136];
    }
    LOBYTE(v73) = v111;
    v74 = PerfDomain;
    v75 = v127;
    v6[52] = v6 + 54;
    v76 = (char *)v6 + v67;
    *(_DWORD *)v6 = 49;
    *((_DWORD *)v6 + 3) = v74;
    *((_DWORD *)v6 + 8) = v68;
    v6[51] = v76;
    v6[53] = (char *)v6 + v69;
    *((_WORD *)v6 + 2) = v75;
    if ( (_BYTE)v73 )
    {
      v6[42] = v128;
      v6[43] = v129;
      if ( v123 && v130 )
      {
        v77 = v99;
        if ( v75 == 254 )
        {
          v6[44] = v130;
          v6[9] = v12;
        }
      }
      else
      {
        v77 = v99;
      }
LABEL_167:
      v79 = v125;
      if ( (_BYTE)v73 )
      {
LABEL_169:
        v6[41] = v79;
        if ( (_BYTE)v114 )
        {
          if ( v101 )
            v6[45] = CpcReadFeedback;
          if ( v103 )
          {
            v6[46] = CpcAcquirePerformance;
            v6[47] = CpcCommitPerformance;
          }
          if ( v105 )
          {
            v6[38] = AcquirePccSubspace;
            v6[39] = ExecutePccWrite;
          }
          v80 = *(_DWORD *)(qword_1C0016298 + 68);
          if ( v80 )
          {
            LOBYTE(v73) = v111;
            *((_DWORD *)v6 + 9) = 0x989680 / (v80 >> 1);
          }
        }
        if ( IsSupported || (v72[33] & 0x4000000000LL) != 0 )
          v6[40] = CpcReinitializeHandler;
        *((_BYTE *)v6 + 6) = 0;
        v81 = v77 || (_BYTE)v73;
        *((_BYTE *)v6 + 7) = v81;
        *((_BYTE *)v6 + 8) = v107;
        *((_BYTE *)v6 + 40) = v108;
        *((_DWORD *)v6 + 4) = v112;
        *((_DWORD *)v6 + 5) = *((_DWORD *)v12 + 17);
        v82 = *((_DWORD *)v12 + 19);
        *((_DWORD *)v6 + 6) = v82;
        v83 = *((_DWORD *)v12 + 20);
        if ( !v82 )
          v82 = 1;
        *((_DWORD *)v6 + 6) = v82;
        if ( !v83 )
          v83 = 1;
        *((_DWORD *)v6 + 7) = v83;
        v6[6] = *(_QWORD *)v66;
        v6[7] = *((_QWORD *)v12 + 2);
        v84 = v72[40];
        if ( v84 )
          v6[31] = v84;
        v6[33] = v72[41];
        if ( (_BYTE)v73 )
        {
          if ( (_BYTE)v115 )
            *((_BYTE *)v6 + 9) = 1;
          if ( (_BYTE)v116 )
            *((_BYTE *)v6 + 10) = 1;
        }
        else
        {
          if ( (_BYTE)v115 )
            v6[35] = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v116 )
            v6[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v109 )
          v6[37] = CpcSetAutonomousMode;
        if ( v110 )
          v6[32] = CpcSetTimeWindow;
        if ( (_BYTE)v73 && (v75 == 254 || v74 == 1) )
          *((_BYTE *)v6 + 11) = 1;
        v85 = *((_QWORD *)v12 + 2);
        v86 = *((_QWORD *)v12 + 5);
        if ( v85 == v86 )
        {
          *((_DWORD *)v76 + 2) = 100;
        }
        else
        {
          v73 = 100 * v86 % v85;
          *((_DWORD *)v76 + 2) = 100 * v86 / v85;
        }
        *((_DWORD *)v76 + 3) = 1;
        v76[17] = 1;
        *(_QWORD *)v76 = PerfReadWrappingCounter;
        v76[16] = v101 == 0;
        if ( (_BYTE)v113 )
        {
          v87 = v6[51];
          *(_QWORD *)(v87 + 32) = 100LL;
          *(_QWORD *)(v87 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v87 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v6, v73, (int)v76);
        v88 = (_QWORD *)v6[53];
        v124 = v6[52];
        ResetEnumerationContext(v119);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
        {
          v89 = v124;
          do
          {
            v90 = (char *)*((_QWORD *)v66 + 10);
            LODWORD(v91) = 100;
            v92 = DeferredContext;
            if ( v66[67] )
            {
              if ( v90[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v93 = &PreviousAffinity;
                if ( v100 )
                  v93 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v93);
                v100 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v92, v90 + 56);
              if ( GenAddrMaybeHidden > *((_QWORD *)v66 - 2) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x27u,
                  (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
                GenAddrMaybeHidden = *((_QWORD *)v66 - 2);
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v66 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x28u,
                  (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
                GenAddrMaybeHidden = *(_QWORD *)v66;
              }
              *((_QWORD *)v66 + 3) = GenAddrMaybeHidden;
              v91 = 100 * GenAddrMaybeHidden / *((_QWORD *)v66 - 2);
              if ( (unsigned int)v91 <= *((_DWORD *)v66 + 12) )
                LODWORD(v91) = *((_DWORD *)v66 + 12);
              *((_DWORD *)v66 + 13) = v91;
              if ( (_DWORD)v91 != v92[177] )
                ProcLibCapChange((__int64)v126, v92[108], v92[120], v91);
            }
            InitCommonPerfStateContext((__int64)v92, (_QWORD *)v66 - 4, v89, v91, (unsigned int)v91 < 0x64 ? 2 : 0);
            *v88 = v66 + 128;
            *((_QWORD *)v66 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v66 + 23) = v90;
            v96 = v90[153];
            if ( (unsigned __int8)v96 < 0x40u )
              *((_QWORD *)v66 + 20) = (1LL << v96) - 1;
            v97 = v90[141];
            if ( (unsigned __int8)v97 < 0x40u )
              *((_QWORD *)v66 + 21) = (1LL << v97) - 1;
            ++v88;
            if ( (_BYTE)v113 != v95 )
            {
              *v88++ = v66 + 192;
              *((_QWORD *)v66 + 30) = *((_QWORD *)v92 + 39);
            }
            v89 += 32LL;
            v66 += 352;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) );
          v6 = v121;
          v12 = v131;
          v72 = v126;
        }
        if ( v100 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v9 = v132(v6, v117);
        if ( v9 >= 0 )
        {
          ResetEnumerationContext(v119);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v12;
            v12 += 352;
          }
          if ( (v72[33] & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v119);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v12 = 0LL;
          v9 = 0;
        }
        goto LABEL_249;
      }
LABEL_168:
      v79 = PerfSelectionCpc;
      goto LABEL_169;
    }
    v77 = v99;
    if ( v99 )
    {
      if ( v102 )
      {
        v6[42] = PerfControlCpcSingleRegister;
        v78 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v6[42] = PerfControlCpc;
        v78 = (void *)qword_1C0015F08;
        if ( !qword_1C0015F08 || !CpcHiddenProcessorMitigationReported )
        {
          v6[43] = PerfControlCpcHidden;
          goto LABEL_167;
        }
      }
    }
    else
    {
      v78 = AcpiCStateIdleCancel;
      v6[42] = AcpiCStateIdleCancel;
    }
    v6[43] = v78;
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
      if ( v100 )
        v55 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v55);
      v100 = 1;
    }
    *v52 = v101;
    v52[1] = v120;
    v52[2] = v117;
    v52[3] = v103;
    *((_DWORD *)v52 - 9) = v112;
    *(_QWORD *)(v52 - 92) = ReadGenAddrMaybeHidden((__int64)v54, v53 + 8);
    v56 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 20);
    *(_QWORD *)(v52 - 84) = v56;
    if ( !v56 )
      break;
    v57 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 32);
    if ( v57 > *(_QWORD *)(v52 - 84) )
      v57 = *(_QWORD *)(v52 - 84);
    *(_QWORD *)(v52 - 76) = v57;
    *(_QWORD *)(v52 - 68) = ReadGenAddrMaybeHidden((__int64)v54, v53 + 44);
    v58 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 224);
    v59 = *(_QWORD *)(v52 - 84);
    *(_QWORD *)(v52 - 60) = v58;
    LODWORD(v58) = 100LL * *(_QWORD *)(v52 - 92) / v59;
    *((_DWORD *)v52 - 8) = v58;
    *((_DWORD *)v52 - 7) = v58;
    v60 = 100LL * *(_QWORD *)(v52 - 76) / v59;
    v61 = 100LL * *(_QWORD *)(v52 - 68) / v59;
    if ( !(_DWORD)v61 )
      LODWORD(v61) = 1;
    *((_DWORD *)v52 - 5) = v61;
    if ( !(_DWORD)v60 )
      LODWORD(v60) = 1;
    *((_DWORD *)v52 - 6) = v60;
    if ( (unsigned __int8)CpcRegisterIsSupported((__int64)(v53 + 188)) )
    {
      v63 = ReadGenAddrMaybeHidden((__int64)v54, v53 + 188);
      v62 = 1;
      v108 = v63 != 0;
      v109 = v53[188] != 126;
    }
    if ( v52 - 100 != v12
      && (*(_QWORD *)(v52 - 92) != *((_QWORD *)v12 + 1)
       || *(_QWORD *)(v52 - 84) != *((_QWORD *)v12 + 2)
       || *(_QWORD *)(v52 - 76) != *((_QWORD *)v12 + 3)
       || *(_QWORD *)(v52 - 68) != *((_QWORD *)v12 + 4)) )
    {
      v64 = 36;
      v65 = v62;
      goto LABEL_145;
    }
    v52 += 352;
    if ( (unsigned int)EnumerateNextDevice((__int64)v119, &DeferredContext) )
      goto LABEL_140;
  }
  v64 = 35;
LABEL_144:
  v65 = 1;
LABEL_145:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    v65,
    v64,
    (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
  v9 = -1073741811;
LABEL_249:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return (unsigned int)v9;
}
