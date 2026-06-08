/*
 * XREFs of InitCpcStatesInternal @ 0x1C002F7CC
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C002C320 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0031230 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003978 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00039B8 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003AA8 (DisplayKernelPerfStates.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004328 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C000439C (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004408 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C000456C (WriteGenAddrMaybeHidden.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0004968 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0004A34 (WPP_RECORDER_SF_iii.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     CpcRegisterIsSupported @ 0x1C0008118 (CpcRegisterIsSupported.c)
 *     InitCommonPerfStateContext @ 0x1C001E008 (InitCommonPerfStateContext.c)
 *     ProcLibCapChange @ 0x1C0020AD0 (ProcLibCapChange.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023E80 (GetRegistryDwordValueNoDefault.c)
 *     GetPerfDomain @ 0x1C002420C (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C002A178 (CpcConnectNativeInterrupt.c)
 *     GetPackageAffinity @ 0x1C002F62C (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  int v2; // r12d
  int v3; // r13d
  unsigned int v4; // r14d
  __int64 v5; // r15
  char *v7; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v9; // ecx
  int v10; // edi
  void (__fastcall *v11)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  SIZE_T v12; // rdi
  char *PoolWithTag; // rax
  char *v14; // rsi
  int v15; // eax
  char v16; // r11
  char v17; // r11
  int v18; // eax
  __int64 (__fastcall *v19)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // r11
  __int64 v20; // rdx
  int v21; // ebx
  char v22; // r15
  char *v23; // r14
  _BYTE *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r10
  char v27; // al
  __int64 v28; // r8
  int v29; // ecx
  char v30; // al
  unsigned int v31; // r11d
  unsigned int v32; // r8d
  int v33; // ecx
  bool v34; // zf
  unsigned __int8 v35; // cl
  char v36; // al
  unsigned int v37; // r8d
  char v38; // r12
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rdx
  char v42; // r9
  __int64 v43; // r10
  char v44; // r11
  char v45; // r11
  int v46; // eax
  unsigned int *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  char *v51; // rdi
  char v52; // bl
  __int64 v53; // r12
  PVOID v54; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  char v56; // r11
  __int64 *v57; // r12
  __int64 v58; // rdi
  char *v59; // rdi
  char *v60; // r14
  PVOID v61; // r15
  struct _GROUP_AFFINITY *v62; // rdx
  __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rcx
  int v70; // eax
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // rax
  int v73; // r10d
  unsigned __int16 v74; // r9
  unsigned __int16 v75; // r9
  unsigned int v76; // r8d
  char *v77; // rdi
  unsigned int v78; // r15d
  int v79; // r14d
  unsigned int v80; // r12d
  unsigned int v81; // r13d
  char *v82; // rax
  _QWORD *v83; // r13
  unsigned __int64 v84; // rdx
  int v85; // r11d
  int v86; // r9d
  char *v87; // r8
  char v88; // r10
  void *v89; // rax
  __int64 (__fastcall *v90)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v91; // ecx
  bool v92; // al
  int v93; // eax
  int v94; // ecx
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rtt
  __int64 v100; // rax
  _QWORD *v101; // r12
  __int64 v102; // rsi
  char *v103; // r13
  unsigned int v104; // r14d
  _DWORD *v105; // r15
  struct _GROUP_AFFINITY *v106; // rdx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rax
  char v110; // r10
  char v111; // cl
  char v112; // cl
  int v114; // [rsp+20h] [rbp-E0h]
  char v115; // [rsp+40h] [rbp-C0h]
  char v116; // [rsp+41h] [rbp-BFh]
  char v117; // [rsp+42h] [rbp-BEh]
  char v118; // [rsp+43h] [rbp-BDh]
  char v119; // [rsp+44h] [rbp-BCh]
  char v120; // [rsp+45h] [rbp-BBh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v122; // [rsp+50h] [rbp-B0h]
  char IsSupported; // [rsp+51h] [rbp-AFh]
  bool v124; // [rsp+52h] [rbp-AEh]
  bool v125; // [rsp+53h] [rbp-ADh]
  char v126; // [rsp+54h] [rbp-ACh]
  unsigned int v127; // [rsp+58h] [rbp-A8h]
  int v128; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v129; // [rsp+60h] [rbp-A0h]
  int v130; // [rsp+64h] [rbp-9Ch]
  int v131; // [rsp+68h] [rbp-98h]
  int v132; // [rsp+6Ch] [rbp-94h]
  int v133; // [rsp+70h] [rbp-90h]
  int v134; // [rsp+74h] [rbp-8Ch]
  _QWORD v135[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v136[4]; // [rsp+88h] [rbp-78h] BYREF
  char *v137; // [rsp+A8h] [rbp-58h]
  int v138; // [rsp+B0h] [rbp-50h]
  int PerfDomain; // [rsp+B4h] [rbp-4Ch]
  __int64 v140; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v141)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+C0h] [rbp-40h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-38h]
  int v143; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v144)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D8h] [rbp-28h] BYREF
  __int64 v145; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v146; // [rsp+E8h] [rbp-18h] BYREF
  char *v147; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v148)(char *, _QWORD); // [rsp+F8h] [rbp-8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+100h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v151[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v152[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v5 = 0LL;
  v148 = a2;
  v142 = a1;
  v7 = 0LL;
  v116 = 0;
  v137 = 0LL;
  v128 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v128);
  v9 = v128;
  if ( RegistryDwordValueNoDefault < 0 )
    v9 = 0;
  v128 = v9;
  if ( !v9 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x21u,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v4) = *(_QWORD *)(a1 + 312) != 0LL;
  v11 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v127 = v4;
  v11(WdfDriverGlobals, qword_1C001A5D8, 0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v136, &v143);
  v12 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72637250u);
  v147 = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, v12);
  LOBYTE(v133) = 0;
  LOBYTE(v129) = 0;
  LOBYTE(v3) = 1;
  v146 = 0LL;
  LOBYTE(v2) = 0;
  v130 = v3;
  v134 = v2;
  v122 = 0;
  v117 = 0;
  v119 = 0;
  LOBYTE(v131) = 0;
  IsSupported = 0;
  LOBYTE(v132) = 0;
  v126 = 0;
  v115 = 0;
  v118 = 1;
  v125 = 0;
  v124 = 0;
  v120 = 1;
  v141 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v140 = 0LL;
  KeInitializeAffinityEx(v151);
  ResetEnumerationContext(v136);
  v15 = EnumerateNextDevice((__int64)v136, &DeferredContext);
  v16 = 0;
  while ( !v15 )
  {
    if ( *((_BYTE *)DeferredContext + 78) == v16 )
      KeAddProcessorAffinityEx(v151, *((unsigned int *)DeferredContext + 14));
    v15 = EnumerateNextDevice((__int64)v136, &DeferredContext);
  }
  LOBYTE(v12) = v16;
  v138 = v12;
  ResetEnumerationContext(v136);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
  {
    if ( *((_BYTE *)DeferredContext + 78) == v17 )
    {
      v5 = *((_QWORD *)DeferredContext + 70);
      v140 = v5;
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v152) >= 0 )
      {
        LODWORD(v12) = (unsigned __int8)v12;
        if ( (unsigned int)KeIsEqualAffinityEx(v152, v151) )
          LODWORD(v12) = 1;
        v138 = v12;
      }
      break;
    }
  }
  ResetEnumerationContext(v136);
  v18 = EnumerateNextDevice((__int64)v136, &DeferredContext);
  LOBYTE(v20) = 10;
  if ( !v18 )
  {
    LOBYTE(v21) = v129;
    v22 = 1;
    v127 = v4;
    v23 = v14 + 92;
    LOBYTE(v14) = v133;
    while ( 1 )
    {
      v24 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      if ( v24[140] == 10 || v24[152] == 10 )
        v117 = 1;
      if ( v24[176] == 10 || v24[80] == 10 || v24[92] == 10 || v24[68] == 10 || v24[104] == 10 )
        v119 = 1;
      LODWORD(v14) = (unsigned __int8)v14;
      if ( v24[56] == 10 )
        LODWORD(v14) = 1;
      v21 = (unsigned __int8)v21;
      if ( v24[8] == 10 )
        v21 = 1;
      if ( v24[212] == 10 || v24[200] == 10 || v24[188] == 10 || v24[116] == 10 )
        v122 = 1;
      *(_QWORD *)(v23 + 20) = v24;
      IsSupported = CpcRegisterIsSupported((__int64)(v24 + 176));
      *v23 = IsSupported;
      v23[1] = CpcRegisterIsSupported((__int64)(v24 + 68));
      v23[2] = CpcRegisterIsSupported((__int64)(v24 + 80));
      v23[3] = CpcRegisterIsSupported((__int64)(v24 + 92));
      v23[6] = CpcRegisterIsSupported((__int64)(v24 + 104));
      v23[7] = CpcRegisterIsSupported((__int64)(v24 + 56));
      v126 = CpcRegisterIsSupported(v25);
      v27 = CpcRegisterIsSupported(v26);
      v29 = (unsigned __int8)v131;
      if ( v27 )
        v29 = 1;
      v23[4] = v27;
      v131 = v29;
      v30 = CpcRegisterIsSupported(v28);
      LOBYTE(v33) = v132;
      v23[5] = v30;
      v32 = v31;
      v33 = (unsigned __int8)v33;
      if ( v30 )
        v33 = 1;
      v34 = v24[140] == 127;
      v132 = v33;
      v35 = v31;
      if ( !v34 )
        v35 = v127;
      if ( v24[152] != 127 )
        v32 = v35;
      v127 = v32;
      if ( !qword_1C001A770 || (v36 = qword_1C001A770(v24), v31 = 0, !v36) )
        v120 = v31;
      v37 = v31;
      memset(v135, 0, 12);
      v38 = 0;
      while ( 1 )
      {
        if ( v37 )
        {
          if ( v37 == 1 )
          {
            v39 = 80LL;
          }
          else if ( v37 == 2 )
          {
            v39 = 92LL;
          }
          else
          {
            v39 = 104LL;
          }
        }
        else
        {
          v39 = 68LL;
        }
        if ( !CpcRegisterIsSupported((__int64)&v24[v39]) )
          goto LABEL_64;
        v115 = 1;
        if ( CpcRegisterIsSupported((__int64)v135) )
          break;
        v38 = v42;
        v45 = *(_BYTE *)(v41 + 3);
        *(_QWORD *)((char *)v135 + 4) = *(_QWORD *)(v41 + 4);
        BYTE3(v135[0]) = v45;
        LOBYTE(v135[0]) = v42;
LABEL_64:
        v37 = v40 + 1;
        if ( v37 >= 4 )
          goto LABEL_65;
      }
      if ( v38 == v42 && v43 == *(_QWORD *)(v41 + 4) && v44 == *(_BYTE *)(v41 + 3) )
        goto LABEL_64;
      v22 = 0;
LABEL_65:
      if ( v115 && v22 )
      {
        v46 = v135[1];
        *(_QWORD *)(v23 + 28) = v135[0];
        *((_DWORD *)v23 + 9) = v46;
      }
      if ( qword_1C001A780 )
      {
        v3 = (unsigned __int8)v3;
        if ( (int)qword_1C001A780(v23 - 92, &v144, &v145, &v146, &v141) < 0 )
          v3 = 0;
      }
      LOBYTE(v2) = v134;
      v47 = (unsigned int *)&Cpc2RegisterTable;
      v48 = 19LL;
      do
      {
        v49 = *v47;
        v47 += 6;
        v2 = (unsigned __int8)v2;
        if ( v24[v49] == 10 )
          v2 = 1;
        --v48;
      }
      while ( v48 );
      v134 = v2;
      v23 += 368;
      v50 = EnumerateNextDevice((__int64)v136, &DeferredContext);
      v19 = 0LL;
      if ( v50 )
      {
        v118 = v22;
        v5 = v140;
        v129 = v21;
        v7 = 0LL;
        v133 = (int)v14;
        v14 = v147;
        v130 = v3;
        break;
      }
    }
  }
  if ( v144 == v19 || v141 == v19 )
    LOBYTE(v130) = (_BYTE)v19;
  if ( (_BYTE)v2 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C001AAD8 + 88))(*(_QWORD *)(qword_1C001AAD8 + 56), v20);
    if ( v10 < 0 )
      goto LABEL_260;
    ResetEnumerationContext(v136);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
    {
      v51 = v14 + 112;
      v52 = 0;
      do
      {
        if ( *(v51 - 20) )
        {
          v53 = *(_QWORD *)v51;
          v54 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v51 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v52 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v52 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v54, (_BYTE *)(v53 + 176), 1LL);
        }
        v51 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) );
      v116 = v52;
      v7 = 0LL;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C001AAD8 + 104))(*(_QWORD *)(qword_1C001AAD8 + 56), 0LL);
    if ( v10 < 0 )
      goto LABEL_260;
  }
  ResetEnumerationContext(v136);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
  {
    v57 = (__int64 *)(v14 + 112);
    do
    {
      v58 = *v57;
      if ( *((_BYTE *)DeferredContext + 78) != v56
        && *(_BYTE *)(v58 + 20) == 10
        && !ReadGenAddrHidden(*((unsigned int *)DeferredContext + 20), (char *)(v58 + 20)) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x22u,
          (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v58 + 20) = *(_QWORD *)(v5 + 20);
        *(_DWORD *)(v58 + 28) = *(_DWORD *)(v5 + 28);
        if ( *(_BYTE *)(v58 + 8) == 10 )
        {
          *(_QWORD *)(v58 + 8) = *(_QWORD *)(v5 + 8);
          *(_DWORD *)(v58 + 16) = *(_DWORD *)(v5 + 16);
        }
        if ( *(_BYTE *)(v58 + 32) == 10 )
        {
          *(_QWORD *)(v58 + 32) = *(_QWORD *)(v5 + 32);
          *(_DWORD *)(v58 + 40) = *(_DWORD *)(v5 + 40);
        }
        if ( *(_BYTE *)(v58 + 44) == 10 )
        {
          *(_QWORD *)(v58 + 44) = *(_QWORD *)(v5 + 44);
          *(_DWORD *)(v58 + 52) = *(_DWORD *)(v5 + 52);
        }
        if ( *(_BYTE *)(v58 + 224) == 10 )
        {
          *(_QWORD *)(v58 + 224) = *(_QWORD *)(v5 + 224);
          *(_DWORD *)(v58 + 232) = *(_DWORD *)(v5 + 232);
        }
        if ( *(_BYTE *)(v58 + 56) == 10 )
        {
          *(_QWORD *)(v58 + 56) = *(_QWORD *)(v5 + 56);
          *(_DWORD *)(v58 + 64) = *(_DWORD *)(v5 + 64);
        }
      }
      v57 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) );
    v7 = v137;
  }
  ResetEnumerationContext(v136);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
  {
    v59 = v14 + 100;
    while ( 1 )
    {
      v60 = *(char **)(v59 + 12);
      v61 = DeferredContext;
      if ( (v60[8] == 127 || v60[20] == 127 || v60[32] == 127 || v60[44] == 127 || v60[224] == 127 || v60[188] == 127)
        && !*((_BYTE *)DeferredContext + 78) )
      {
        KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
        v62 = &PreviousAffinity;
        if ( v116 )
          v62 = 0LL;
        KeSetSystemGroupAffinityThread(&Affinity, v62);
        v116 = 1;
      }
      *v59 = v117;
      v59[1] = v133;
      v59[2] = v129;
      v59[3] = v119;
      *((_DWORD *)v59 - 9) = v128;
      *(_QWORD *)(v59 - 92) = ReadGenAddrMaybeHidden((__int64)v61, v60 + 8);
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v61, v60 + 20);
      *(_QWORD *)(v59 - 84) = GenAddrMaybeHidden;
      if ( !GenAddrMaybeHidden )
        break;
      v64 = ReadGenAddrMaybeHidden((__int64)v61, v60 + 32);
      v65 = *(_QWORD *)(v59 - 84);
      *(_QWORD *)(v59 - 76) = v64;
      if ( v64 > v65 )
        *(_QWORD *)(v59 - 76) = v65;
      *(_QWORD *)(v59 - 68) = ReadGenAddrMaybeHidden((__int64)v61, v60 + 44);
      *(_QWORD *)(v59 - 60) = ReadGenAddrMaybeHidden((__int64)v61, v60 + 224);
      if ( CpcRegisterIsSupported((__int64)(v60 + 188)) )
      {
        v124 = ReadGenAddrMaybeHidden((__int64)v61, v60 + 188) != 0;
        v125 = v60[188] != 126;
      }
      if ( v59 - 100 != v14 )
      {
        if ( *(_QWORD *)(v59 - 92) != *((_QWORD *)v14 + 1) )
        {
          v74 = 36;
          goto LABEL_148;
        }
        if ( *(_QWORD *)(v59 - 84) != *((_QWORD *)v14 + 2) )
        {
          v74 = 37;
          goto LABEL_148;
        }
        if ( *(_QWORD *)(v59 - 68) != *((_QWORD *)v14 + 4) )
        {
          v74 = 38;
          goto LABEL_148;
        }
        if ( *(_QWORD *)(v59 - 76) != *((_QWORD *)v14 + 3) )
        {
          if ( !v120 )
          {
            v74 = 39;
LABEL_148:
            WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, v66, v67, v74, v114);
            goto LABEL_151;
          }
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v66, v67, v68, v114);
          *(_QWORD *)(v59 - 76) = *((_QWORD *)v14 + 3);
        }
      }
      v69 = *(_QWORD *)(v59 - 84);
      v70 = 100LL * *(_QWORD *)(v59 - 92) / v69;
      *((_DWORD *)v59 - 8) = v70;
      *((_DWORD *)v59 - 7) = v70;
      v71 = 100LL * *(_QWORD *)(v59 - 76) / v69;
      v72 = 100LL * *(_QWORD *)(v59 - 68) / v69;
      if ( !(_DWORD)v72 )
        LODWORD(v72) = 1;
      *((_DWORD *)v59 - 5) = v72;
      if ( !(_DWORD)v71 )
        LODWORD(v71) = 1;
      *((_DWORD *)v59 - 6) = v71;
      v59 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
        goto LABEL_153;
    }
    v75 = 35;
    v76 = 1;
    goto LABEL_150;
  }
  v73 = 1;
LABEL_153:
  if ( *((_QWORD *)v14 + 1) < *((_QWORD *)v14 + 2) )
  {
    v75 = 41;
LABEL_155:
    v76 = v73;
LABEL_150:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v76,
      v75,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
LABEL_151:
    v10 = -1073741811;
    goto LABEL_260;
  }
  v77 = v14 + 32;
  if ( *((_QWORD *)v14 + 3) < *((_QWORD *)v14 + 4) )
  {
    v75 = 42;
    goto LABEL_155;
  }
  v78 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v79 = v73 + ((_BYTE)v127 != 0);
  v80 = (v78 + 7 + 24 * v79) & 0xFFFFFFF8;
  v129 = v80 + 8 * PerfDomain * v79;
  v81 = v129;
  v82 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v129, 0x72637250u);
  v137 = v82;
  v7 = v82;
  if ( v82 )
  {
    memset(v82, 0, v81);
    v83 = (_QWORD *)v142;
    if ( *(_BYTE *)(v142 + 1106) )
      *((_QWORD *)v7 + 48) = PepParkPreference;
    if ( (v83[33] & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v7 + 49) = PepParkMask;
      *((_QWORD *)v7 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v7 + 8) = v83[136];
    }
    LOBYTE(v84) = v130;
    v85 = PerfDomain;
    v86 = v143;
    *((_QWORD *)v7 + 52) = v7 + 432;
    v87 = &v7[v78];
    *(_DWORD *)v7 = 56;
    *((_DWORD *)v7 + 4) = v85;
    *((_DWORD *)v7 + 9) = v79;
    *((_QWORD *)v7 + 51) = v87;
    *((_QWORD *)v7 + 53) = &v7[v80];
    *((_WORD *)v7 + 2) = v86;
    if ( (_BYTE)v84 )
    {
      *((_QWORD *)v7 + 42) = v144;
      *((_QWORD *)v7 + 43) = v145;
      if ( (_BYTE)v138 && v146 )
      {
        v88 = v115;
        if ( v86 == 254 )
        {
          *((_QWORD *)v7 + 44) = v146;
          *((_QWORD *)v7 + 9) = v14;
        }
      }
      else
      {
        v88 = v115;
      }
LABEL_177:
      v90 = v141;
      if ( (_BYTE)v84 )
      {
LABEL_179:
        *((_QWORD *)v7 + 41) = v90;
        if ( (_BYTE)v134 )
        {
          if ( v117 )
            *((_QWORD *)v7 + 45) = CpcReadFeedback;
          if ( v119 )
          {
            *((_QWORD *)v7 + 46) = CpcAcquirePerformance;
            *((_QWORD *)v7 + 47) = CpcCommitPerformance;
          }
          if ( v122 )
          {
            *((_QWORD *)v7 + 38) = AcquirePccSubspace;
            *((_QWORD *)v7 + 39) = ExecutePccWrite;
          }
          v91 = *(_DWORD *)(qword_1C001AAD8 + 68);
          if ( v91 )
          {
            LOBYTE(v84) = v130;
            *((_DWORD *)v7 + 10) = 0x989680 / (v91 >> 1);
          }
        }
        if ( IsSupported || (v83[33] & 0x4000000000LL) != 0 )
          *((_QWORD *)v7 + 40) = CpcReinitializeHandler;
        v7[6] = 0;
        v92 = v88 || (_BYTE)v84;
        v7[7] = v92;
        v7[8] = v120;
        v7[44] = v124;
        *((_DWORD *)v7 + 5) = v128;
        *((_DWORD *)v7 + 6) = *((_DWORD *)v14 + 17);
        v93 = *((_DWORD *)v14 + 19);
        *((_DWORD *)v7 + 7) = v93;
        v94 = *((_DWORD *)v14 + 20);
        if ( !v93 )
          v93 = 1;
        *((_DWORD *)v7 + 7) = v93;
        if ( !v94 )
          v94 = 1;
        *((_DWORD *)v7 + 8) = v94;
        *((_QWORD *)v7 + 6) = *(_QWORD *)v77;
        *((_QWORD *)v7 + 7) = *((_QWORD *)v14 + 2);
        v95 = v83[40];
        if ( v95 )
          *((_QWORD *)v7 + 31) = v95;
        *((_QWORD *)v7 + 33) = v83[41];
        if ( (_BYTE)v84 )
        {
          if ( (_BYTE)v131 )
            v7[9] = 1;
          if ( (_BYTE)v132 )
            v7[10] = 1;
        }
        else
        {
          if ( (_BYTE)v131 )
            *((_QWORD *)v7 + 35) = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v132 )
            *((_QWORD *)v7 + 36) = CpcSetAutonomousActivityWindow;
        }
        if ( v125 )
          *((_QWORD *)v7 + 37) = CpcSetAutonomousMode;
        if ( v126 )
          *((_QWORD *)v7 + 32) = CpcSetTimeWindow;
        if ( (v83[33] & 0x400000) != 0 && (_BYTE)v84 && (v86 == 254 || v85 == 1) )
          *(_WORD *)(v7 + 11) = 257;
        v96 = *((_QWORD *)v14 + 2);
        v97 = *((_QWORD *)v14 + 5);
        if ( v96 == v97 )
        {
          LODWORD(v98) = 100;
        }
        else
        {
          v99 = 100 * v97;
          v98 = 100 * v97 / v96;
          v84 = v99 % v96;
        }
        *((_DWORD *)v87 + 2) = v98;
        *(_QWORD *)v87 = PerfReadWrappingCounter;
        *((_DWORD *)v87 + 3) = 1;
        v87[17] = 1;
        v87[16] = v117 == 0;
        if ( (_BYTE)v127 )
        {
          v100 = *((_QWORD *)v7 + 51);
          *(_QWORD *)(v100 + 32) = 100LL;
          *(_QWORD *)(v100 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v100 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v7, v84, (int)v87);
        v101 = (_QWORD *)*((_QWORD *)v7 + 53);
        v140 = *((_QWORD *)v7 + 52);
        ResetEnumerationContext(v136);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
        {
          v102 = v140;
          do
          {
            v103 = (char *)*((_QWORD *)v77 + 10);
            v104 = 100;
            v105 = DeferredContext;
            if ( v77[67] )
            {
              if ( v103[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v106 = &PreviousAffinity;
                if ( v116 )
                  v106 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v106);
                v116 = 1;
              }
              v107 = ReadGenAddrMaybeHidden((__int64)v105, v103 + 56);
              v108 = *((_QWORD *)v77 - 2);
              if ( v107 > v108 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Bu,
                  (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
                v107 = *((_QWORD *)v77 - 2);
                v108 = v107;
              }
              if ( v107 < *(_QWORD *)v77 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Cu,
                  (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
                v107 = *(_QWORD *)v77;
                v108 = *((_QWORD *)v77 - 2);
              }
              v104 = *((_DWORD *)v77 + 12);
              *((_QWORD *)v77 + 3) = v107;
              v109 = 100 * v107 / v108;
              if ( (unsigned int)v109 > v104 )
                v104 = v109;
              *((_DWORD *)v77 + 13) = v104;
              if ( v104 != v105[177] )
                ProcLibCapChange(v142, v105[108], v105[120], v104);
            }
            InitCommonPerfStateContext((__int64)v105, (_QWORD *)v77 - 4, v102, v104, v104 < 0x64 ? 2 : 0);
            *v101 = v77 + 128;
            *((_QWORD *)v77 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v77 + 23) = v103;
            v111 = v103[153];
            if ( (unsigned __int8)v111 < 0x40u )
              *((_QWORD *)v77 + 20) = (1LL << v111) - 1;
            v112 = v103[141];
            if ( (unsigned __int8)v112 < 0x40u )
              *((_QWORD *)v77 + 21) = (1LL << v112) - 1;
            ++v101;
            if ( (_BYTE)v127 != v110 )
            {
              *v101++ = v77 + 192;
              *((_QWORD *)v77 + 30) = *((_QWORD *)v105 + 39);
            }
            v102 += 32LL;
            v77 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) );
          v7 = v137;
          v14 = v147;
          v83 = (_QWORD *)v142;
        }
        if ( v116 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v10 = v148(v7, v129);
        if ( v10 >= 0 )
        {
          ResetEnumerationContext(v136);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v14;
            v14 += 368;
          }
          if ( (v83[33] & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v136);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v136, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt((PDEVICE_OBJECT *)DeferredContext);
            }
          }
          v14 = 0LL;
          v10 = 0;
        }
        goto LABEL_260;
      }
LABEL_178:
      v90 = PerfSelectionCpc;
      goto LABEL_179;
    }
    v88 = v115;
    if ( v115 )
    {
      if ( v118 )
      {
        *((_QWORD *)v7 + 42) = PerfControlCpcSingleRegister;
        v89 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        *((_QWORD *)v7 + 42) = PerfControlCpc;
        v89 = (void *)qword_1C001A748;
        if ( !qword_1C001A748 || !CpcHiddenProcessorMitigationReported )
        {
          *((_QWORD *)v7 + 43) = PerfControlCpcHidden;
          goto LABEL_177;
        }
      }
    }
    else
    {
      v89 = AcpiCStateIdleCancel;
      *((_QWORD *)v7 + 42) = AcpiCStateIdleCancel;
    }
    *((_QWORD *)v7 + 43) = v89;
    goto LABEL_178;
  }
LABEL_6:
  v10 = -1073741670;
LABEL_260:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A5D8);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x72637250u);
  return (unsigned int)v10;
}
