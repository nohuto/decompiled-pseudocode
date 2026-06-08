/*
 * XREFs of InitCpcStatesInternal @ 0x1C0024B54
 * Callers:
 *     RegisterKernelCpc @ 0x1C0024B40 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C002B660 (RegisterHvCpcCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     DisplayKernelPerfStates @ 0x1C0005724 (DisplayKernelPerfStates.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0005C1C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     CpcRegisterIsSupported @ 0x1C0007110 (CpcRegisterIsSupported.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008C2C (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0008C48 (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0008C6C (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     ProcLibCapChange @ 0x1C001CC38 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C0021AA8 (CpcConnectNativeInterrupt.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0026600 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitCpcStatesInternal(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD *, _QWORD),
        __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  struct _GROUP_AFFINITY *v5; // r12
  _QWORD *v7; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v9; // ecx
  int v10; // edi
  SIZE_T v11; // rdi
  char *PoolWithTag; // rax
  char *v13; // r14
  void *v14; // rax
  _BYTE *v15; // r13
  int v16; // esi
  unsigned int v17; // r13d
  struct _GROUP_AFFINITY *v18; // rdi
  unsigned __int16 v19; // r15
  __int64 Mask_high; // rax
  int v21; // eax
  int v22; // ebx
  char *v23; // rsi
  char v24; // r13
  char v25; // r12
  _BYTE *v26; // rdi
  bool v27; // zf
  __int64 v28; // r8
  char v29; // al
  int v30; // r9d
  int v31; // ecx
  char v32; // al
  int v33; // r9d
  unsigned int v34; // r11d
  unsigned int v35; // r8d
  int v36; // ecx
  unsigned __int8 v37; // cl
  char v38; // al
  unsigned int v39; // r8d
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // r9
  char v44; // r10
  char v45; // r11
  __int64 v46; // r9
  char v47; // r10
  int v48; // eax
  int v49; // r10d
  unsigned int *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  char v53; // r10
  char v54; // bl
  char *v55; // rdi
  __int64 v56; // r15
  PVOID v57; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v59; // r15
  __int64 v60; // rdi
  char v61; // r13
  char *v62; // rdi
  _BYTE *v63; // rsi
  PVOID v64; // r15
  struct _GROUP_AFFINITY *v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rax
  unsigned int v72; // edx
  unsigned __int64 v73; // rax
  unsigned __int16 v74; // r9
  char *v75; // rdi
  unsigned int v76; // r15d
  int v77; // esi
  unsigned int v78; // r12d
  unsigned int v79; // r13d
  _QWORD *v80; // rax
  unsigned __int64 v81; // rdx
  char v82; // r10
  int v83; // r13d
  int v84; // r9d
  __int64 v85; // r8
  char v86; // r11
  void *v87; // rax
  struct _GROUP_AFFINITY *v88; // rax
  unsigned int v89; // ecx
  bool v90; // al
  int v91; // eax
  int v92; // ecx
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r15
  _QWORD *v98; // r13
  __int64 v99; // rbx
  _BYTE *v100; // rdx
  unsigned __int64 v101; // r12
  _DWORD *v102; // rsi
  __int64 v103; // r12
  struct _GROUP_AFFINITY *v104; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned int v106; // ecx
  int v107; // eax
  unsigned __int8 v108; // cl
  unsigned __int8 v109; // cl
  char v111; // [rsp+30h] [rbp-D0h]
  char v112; // [rsp+31h] [rbp-CFh]
  char v113; // [rsp+32h] [rbp-CEh]
  char v114; // [rsp+33h] [rbp-CDh]
  char v115; // [rsp+34h] [rbp-CCh]
  PVOID DeferredContext; // [rsp+38h] [rbp-C8h] BYREF
  char v117; // [rsp+40h] [rbp-C0h]
  char IsSupported; // [rsp+41h] [rbp-BFh]
  char v119; // [rsp+42h] [rbp-BEh]
  bool v120; // [rsp+43h] [rbp-BDh]
  bool v121; // [rsp+44h] [rbp-BCh]
  char v122; // [rsp+45h] [rbp-BBh]
  unsigned int NumberOfBytes; // [rsp+48h] [rbp-B8h]
  int NumberOfBytes_4; // [rsp+4Ch] [rbp-B4h]
  int v125; // [rsp+50h] [rbp-B0h]
  int v126; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v127; // [rsp+58h] [rbp-A8h]
  unsigned int v128; // [rsp+5Ch] [rbp-A4h]
  int v129; // [rsp+60h] [rbp-A0h]
  int v130; // [rsp+64h] [rbp-9Ch]
  int v131; // [rsp+68h] [rbp-98h]
  int v132; // [rsp+6Ch] [rbp-94h]
  _BYTE *v133; // [rsp+70h] [rbp-90h]
  int v134; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v135[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v136; // [rsp+90h] [rbp-70h]
  __int64 v137[4]; // [rsp+98h] [rbp-68h] BYREF
  int PerfDomain; // [rsp+B8h] [rbp-48h]
  _QWORD *v139; // [rsp+C0h] [rbp-40h]
  int v140; // [rsp+C8h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY *v141; // [rsp+D0h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY *v142; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v143; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v144; // [rsp+E8h] [rbp-18h] BYREF
  char *v145; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v146)(_QWORD *, _QWORD); // [rsp+F8h] [rbp-8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+100h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v149[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v150[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v5 = 0LL;
  v146 = a2;
  v139 = a1;
  v7 = 0LL;
  v112 = 0;
  v136 = 0LL;
  v126 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v126,
                                  a4);
  v9 = v126;
  if ( RegistryDwordValueNoDefault < 0 )
    v9 = 0;
  v126 = v9;
  if ( !v9 )
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
  LOBYTE(v127) = a1[39] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v137, &v140);
  v11 = (unsigned int)(352 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v145 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v10 = -1073741670;
    goto LABEL_270;
  }
  v14 = memset(PoolWithTag, 0, v11);
  LOBYTE(v14) = 0;
  LOBYTE(v128) = 0;
  v130 = (int)v14;
  v117 = 0;
  LOBYTE(v4) = 0;
  v114 = 1;
  v119 = 1;
  v15 = 0LL;
  v129 = 1;
  NumberOfBytes_4 = v4;
  v113 = 0;
  v115 = 0;
  LOBYTE(v131) = 0;
  IsSupported = 0;
  LOBYTE(v132) = 0;
  v122 = 0;
  v111 = 0;
  v121 = 0;
  v120 = 0;
  v142 = 0LL;
  v141 = 0LL;
  v143 = 0LL;
  v133 = 0LL;
  v144 = 0LL;
  KeInitializeAffinityEx(v150);
  ResetEnumerationContext(v137);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v150, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v11) = 0;
  v125 = v11;
  ResetEnumerationContext(v137);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v15 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      v133 = v15;
      KeInitializeAffinityEx(v149);
      NumberOfBytes = 0;
      v134 = 3;
      v16 = NtQuerySystemInformationEx(107LL, &v134, 4LL);
      if ( v16 == -1073741820 )
      {
        if ( !NumberOfBytes )
          break;
        v5 = (struct _GROUP_AFFINITY *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72637250u);
        if ( !v5 )
          break;
        v134 = 3;
        v16 = NtQuerySystemInformationEx(107LL, &v134, 4LL);
        if ( v16 >= 0 && NumberOfBytes )
        {
          v17 = 0;
          v18 = v5;
          v16 = -1073741275;
          while ( 1 )
          {
            v19 = 0;
            if ( v18[1].Reserved[2] )
            {
              do
              {
                KeAddGroupAffinityEx(v149, v18[v19 + 2].Group, v18[v19 + 2].Mask);
                ++v19;
              }
              while ( v19 < v18[1].Reserved[2] );
              v7 = v136;
            }
            if ( (unsigned int)KeCheckProcessorAffinityEx(v149, *((unsigned int *)DeferredContext + 14)) )
              break;
            Mask_high = HIDWORD(v18->Mask);
            v17 += Mask_high;
            v18 = (struct _GROUP_AFFINITY *)((char *)v18 + Mask_high);
            KeInitializeAffinityEx(v149);
            if ( v17 >= NumberOfBytes )
              goto LABEL_27;
          }
          v16 = 0;
LABEL_27:
          LOBYTE(v4) = NumberOfBytes_4;
          v15 = v133;
          LOBYTE(v11) = v125;
        }
        ExFreePoolWithTag(v5, 0x72637250u);
        v5 = 0LL;
      }
      if ( v16 >= 0 )
      {
        LODWORD(v11) = (unsigned __int8)v11;
        if ( (unsigned int)KeIsEqualAffinityEx(v149, v150) )
          LODWORD(v11) = 1;
        v125 = v11;
      }
      break;
    }
  }
  ResetEnumerationContext(v137);
  v21 = EnumerateNextDevice((__int64)v137, &DeferredContext);
  if ( v21 )
  {
    v53 = v130;
    goto LABEL_93;
  }
  v22 = v129;
  v23 = v13 + 92;
  LOBYTE(v13) = v128;
  v24 = 1;
  v25 = 0;
  do
  {
    v26 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
    if ( v26[140] == 10 || v26[152] == 10 )
      v113 = 1;
    if ( v26[176] == 10 || v26[80] == 10 || v26[92] == 10 || v26[68] == 10 || v26[104] == 10 )
      v115 = 1;
    v4 = (unsigned __int8)v4;
    if ( v26[56] == 10 )
      v4 = 1;
    LODWORD(v13) = (unsigned __int8)v13;
    v27 = v26[8] == 10;
    NumberOfBytes_4 = v4;
    if ( v27 )
      LODWORD(v13) = 1;
    if ( v26[212] == 10 || v26[200] == 10 || v26[188] == 10 || v26[116] == 10 )
      v117 = 1;
    *(_QWORD *)(v23 + 20) = v26;
    IsSupported = CpcRegisterIsSupported((__int64)(v26 + 176));
    *v23 = IsSupported;
    v23[1] = CpcRegisterIsSupported((__int64)(v26 + 68));
    v23[2] = CpcRegisterIsSupported((__int64)(v26 + 80));
    v23[3] = CpcRegisterIsSupported((__int64)(v26 + 92));
    v23[6] = CpcRegisterIsSupported((__int64)(v26 + 104));
    v23[7] = CpcRegisterIsSupported((__int64)(v26 + 56));
    v122 = CpcRegisterIsSupported((__int64)(v26 + 116));
    v29 = CpcRegisterIsSupported(v28);
    v31 = (unsigned __int8)v131;
    if ( v29 )
      v31 = v30;
    v23[4] = v29;
    v131 = v31;
    v32 = CpcRegisterIsSupported((__int64)(v26 + 200));
    LOBYTE(v36) = v132;
    v23[5] = v32;
    v35 = v34;
    v36 = (unsigned __int8)v36;
    if ( v32 )
      v36 = v33;
    v27 = v26[140] == 127;
    v132 = v36;
    v37 = v34;
    if ( !v27 )
      v37 = v127;
    if ( v26[152] != 127 )
      v35 = v37;
    v127 = v35;
    if ( !qword_1C0011580 || (v38 = qword_1C0011580(v26), v34 = 0, !v38) )
      v119 = v34;
    v39 = v34;
    memset(v135, 0, 12);
    while ( 1 )
    {
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          v40 = 80LL;
        }
        else if ( v39 == 2 )
        {
          v40 = 92LL;
        }
        else
        {
          v40 = 104LL;
        }
      }
      else
      {
        v40 = 68LL;
      }
      if ( !(unsigned __int8)CpcRegisterIsSupported((__int64)&v26[v40]) )
        goto LABEL_78;
      v25 = 1;
      v111 = 1;
      if ( (unsigned __int8)CpcRegisterIsSupported((__int64)v135) )
        break;
      v46 = *(_QWORD *)(v42 + 4);
      v47 = *(_BYTE *)(v42 + 3);
      LOBYTE(v135[0]) = *(_BYTE *)v42;
      *(_QWORD *)((char *)v135 + 4) = v46;
      BYTE3(v135[0]) = v47;
LABEL_78:
      v39 = v41 + 1;
      if ( v39 >= 4 )
        goto LABEL_79;
    }
    if ( v45 == *(_BYTE *)v42 && v43 == *(_QWORD *)(v42 + 4) && v44 == *(_BYTE *)(v42 + 3) )
      goto LABEL_78;
    v24 = 0;
LABEL_79:
    if ( v25 && v24 )
    {
      v48 = v135[1];
      *(_QWORD *)(v23 + 28) = v135[0];
      *((_DWORD *)v23 + 9) = v48;
    }
    if ( qword_1C0011590 )
    {
      v22 = (unsigned __int8)v22;
      if ( (int)qword_1C0011590(v23 - 92, &v141, &v143, &v144, &v142) < 0 )
        v22 = 0;
    }
    LOBYTE(v49) = v130;
    v50 = (unsigned int *)&Cpc2RegisterTable;
    v51 = 19LL;
    do
    {
      v52 = *v50;
      v50 += 6;
      v49 = (unsigned __int8)v49;
      if ( v26[v52] == 10 )
        v49 = 1;
      --v51;
    }
    while ( v51 );
    v130 = v49;
    v23 += 352;
    v21 = EnumerateNextDevice((__int64)v137, &DeferredContext);
    LOBYTE(v4) = NumberOfBytes_4;
  }
  while ( !v21 );
  v114 = v24;
  v5 = 0LL;
  v15 = v133;
  v129 = v22;
  v7 = v136;
  v128 = (unsigned int)v13;
  v13 = v145;
LABEL_93:
  if ( v141 == v5 || v142 == v5 )
  {
    LOBYTE(v21) = (_BYTE)v5;
    v129 = v21;
  }
  if ( v53 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56));
    if ( v10 < 0 )
      goto LABEL_270;
    ResetEnumerationContext(v137);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
    {
      v54 = 0;
      v55 = v13 + 112;
      do
      {
        if ( *(v55 - 20) != (_BYTE)v5 )
        {
          v56 = *(_QWORD *)v55;
          v57 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v55 + 176LL) == 127 && *((_BYTE *)DeferredContext + 78) == (_BYTE)v5 )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v54 )
              p_PreviousAffinity = v5;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v54 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v57, (_BYTE *)(v56 + 176), 1uLL);
        }
        v55 += 352;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
      v112 = v54;
      v7 = v136;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C00118E8 + 104))(*(_QWORD *)(qword_1C00118E8 + 56), 0LL);
    if ( v10 < 0 )
      goto LABEL_270;
  }
  ResetEnumerationContext(v137);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    v59 = (__int64 *)(v13 + 112);
    do
    {
      v60 = *v59;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v60 + 20) == 10
        && !ReadGenAddrHidden(*((_DWORD *)DeferredContext + 20), v60 + 20) )
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
        *(_QWORD *)(v60 + 20) = *(_QWORD *)(v15 + 20);
        *(_DWORD *)(v60 + 28) = *((_DWORD *)v15 + 7);
        if ( *(_BYTE *)(v60 + 8) == 10 )
        {
          *(_QWORD *)(v60 + 8) = *((_QWORD *)v15 + 1);
          *(_DWORD *)(v60 + 16) = *((_DWORD *)v15 + 4);
        }
        if ( *(_BYTE *)(v60 + 32) == 10 )
        {
          *(_QWORD *)(v60 + 32) = *((_QWORD *)v15 + 4);
          *(_DWORD *)(v60 + 40) = *((_DWORD *)v15 + 10);
        }
        if ( *(_BYTE *)(v60 + 44) == 10 )
        {
          *(_QWORD *)(v60 + 44) = *(_QWORD *)(v15 + 44);
          *(_DWORD *)(v60 + 52) = *((_DWORD *)v15 + 13);
        }
        if ( *(_BYTE *)(v60 + 224) == 10 )
        {
          *(_QWORD *)(v60 + 224) = *((_QWORD *)v15 + 28);
          *(_DWORD *)(v60 + 232) = *((_DWORD *)v15 + 58);
        }
        if ( *(_BYTE *)(v60 + 56) == 10 )
        {
          *(_QWORD *)(v60 + 56) = *((_QWORD *)v15 + 7);
          *(_DWORD *)(v60 + 64) = *((_DWORD *)v15 + 16);
        }
      }
      v59 += 44;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
    v7 = 0LL;
  }
  ResetEnumerationContext(v137);
  if ( (unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
LABEL_158:
    if ( *((_QWORD *)v13 + 1) < *((_QWORD *)v13 + 2) )
    {
      v74 = 37;
      goto LABEL_161;
    }
    v75 = v13 + 32;
    if ( *((_QWORD *)v13 + 3) < *((_QWORD *)v13 + 4) )
    {
      v74 = 38;
      goto LABEL_161;
    }
    v76 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v77 = ((_BYTE)v127 != 0) + 1;
    v78 = (v76 + 7 + 24 * v77) & 0xFFFFFFF8;
    v128 = v78 + 8 * PerfDomain * v77;
    v79 = v128;
    v80 = ExAllocatePoolWithTag(NonPagedPoolNx, v128, 0x72637250u);
    v136 = v80;
    v7 = v80;
    if ( !v80 )
      goto LABEL_6;
    memset(v80, 0, v79);
    v81 = (unsigned __int64)v139;
    if ( *((_BYTE *)v139 + 1105) )
      v7[48] = PepParkPreference;
    if ( (*(_QWORD *)(v81 + 264) & 0x10000000000LL) != 0 )
    {
      v7[49] = PepParkMask;
      v7[50] = PepPerfCheckComplete;
      v7[8] = *(_QWORD *)(v81 + 1088);
    }
    v82 = v129;
    v83 = PerfDomain;
    v84 = v140;
    v7[52] = v7 + 54;
    v85 = (__int64)v7 + v76;
    *(_DWORD *)v7 = 49;
    *((_DWORD *)v7 + 3) = v83;
    *((_DWORD *)v7 + 8) = v77;
    v7[51] = v85;
    v7[53] = (char *)v7 + v78;
    *((_WORD *)v7 + 2) = v84;
    if ( v82 )
    {
      v7[42] = v141;
      v7[43] = v143;
      if ( (_BYTE)v125 && v144 )
      {
        v86 = v111;
        if ( v84 == 254 )
        {
          v7[44] = v144;
          v7[9] = v13;
        }
      }
      else
      {
        v86 = v111;
      }
LABEL_184:
      v88 = v142;
      if ( v82 )
      {
LABEL_186:
        v7[41] = v88;
        if ( (_BYTE)v130 )
        {
          if ( v113 )
            v7[45] = CpcReadFeedback;
          if ( v115 )
          {
            v7[46] = CpcAcquirePerformance;
            v7[47] = CpcCommitPerformance;
          }
          if ( v117 )
          {
            v7[38] = AcquirePccSubspace;
            v7[39] = ExecutePccWrite;
          }
          v89 = *(_DWORD *)(qword_1C00118E8 + 68);
          if ( v89 )
          {
            v81 = (unsigned __int64)v139;
            *((_DWORD *)v7 + 9) = 0x989680 / (v89 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v81 + 264) & 0x4000000000LL) != 0 )
          v7[40] = CpcReinitializeHandler;
        *((_BYTE *)v7 + 6) = 0;
        v90 = v86 || v82;
        *((_BYTE *)v7 + 7) = v90;
        *((_BYTE *)v7 + 8) = v119;
        *((_BYTE *)v7 + 40) = v120;
        *((_DWORD *)v7 + 4) = v126;
        *((_DWORD *)v7 + 5) = *((_DWORD *)v13 + 17);
        v91 = *((_DWORD *)v13 + 19);
        *((_DWORD *)v7 + 6) = v91;
        v92 = *((_DWORD *)v13 + 20);
        if ( !v91 )
          v91 = 1;
        *((_DWORD *)v7 + 6) = v91;
        if ( !v92 )
          v92 = 1;
        *((_DWORD *)v7 + 7) = v92;
        v7[6] = *(_QWORD *)v75;
        v7[7] = *((_QWORD *)v13 + 2);
        v93 = *(_QWORD *)(v81 + 320);
        if ( v93 )
          v7[31] = v93;
        v7[33] = *(_QWORD *)(v81 + 328);
        if ( v82 )
        {
          if ( (_BYTE)v131 )
            *((_BYTE *)v7 + 9) = 1;
          if ( (_BYTE)v132 )
            *((_BYTE *)v7 + 10) = 1;
        }
        else
        {
          if ( (_BYTE)v131 )
            v7[35] = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v132 )
            v7[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v121 )
          v7[37] = CpcSetAutonomousMode;
        if ( v122 )
          v7[32] = CpcSetTimeWindow;
        if ( v82 && (v84 == 254 || v83 == 1) )
          *((_BYTE *)v7 + 11) = 1;
        v94 = *((_QWORD *)v13 + 2);
        v95 = *((_QWORD *)v13 + 5);
        if ( v94 == v95 )
        {
          *(_DWORD *)(v85 + 8) = 100;
        }
        else
        {
          v81 = 100 * v95 % v94;
          *(_DWORD *)(v85 + 8) = 100 * v95 / v94;
        }
        *(_DWORD *)(v85 + 12) = 1;
        *(_BYTE *)(v85 + 17) = 1;
        *(_QWORD *)v85 = PerfReadWrappingCounter;
        *(_BYTE *)(v85 + 16) = v113 == 0;
        if ( (_BYTE)v127 )
        {
          v96 = v7[51];
          *(_QWORD *)(v96 + 32) = 100LL;
          *(_QWORD *)(v96 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v96 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v7, v81, v85);
        v97 = v7[52];
        v98 = (_QWORD *)v7[53];
        ResetEnumerationContext(v137);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
        {
          v99 = (__int64)v139;
          do
          {
            v100 = (_BYTE *)*((_QWORD *)v75 + 10);
            LODWORD(v101) = 100;
            v102 = DeferredContext;
            v133 = v100;
            if ( v75[67] )
            {
              v103 = (__int64)(v100 + 56);
              if ( v100[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v104 = &PreviousAffinity;
                if ( v112 )
                  v104 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v104);
                v112 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v102, v103);
              if ( GenAddrMaybeHidden > *((_QWORD *)v75 - 2) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x27u,
                  (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
                GenAddrMaybeHidden = *((_QWORD *)v75 - 2);
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v75 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x28u,
                  (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
                GenAddrMaybeHidden = *(_QWORD *)v75;
              }
              v106 = *((_DWORD *)v75 + 12);
              *((_QWORD *)v75 + 3) = GenAddrMaybeHidden;
              v101 = 100 * GenAddrMaybeHidden / *((_QWORD *)v75 - 2);
              if ( (unsigned int)v101 <= v106 )
                LODWORD(v101) = v106;
              *((_DWORD *)v75 + 13) = v101;
              if ( (_DWORD)v101 != v102[177] )
                ProcLibCapChange(v99, v102[108], v102[120], v101);
              v100 = v133;
            }
            *((_QWORD *)v75 - 4) = v102;
            *(_QWORD *)(v97 + 8) = v75 - 32;
            if ( *((_BYTE *)v102 + 78) )
            {
              v107 = v102[20];
              *(_BYTE *)(v97 + 28) = 1;
            }
            else
            {
              v107 = v102[14];
            }
            *(_DWORD *)v97 = v107;
            *(_DWORD *)(v97 + 20) = v102[176];
            *(_DWORD *)(v97 + 16) = v101;
            *(_DWORD *)(v97 + 24) = (unsigned int)v101 < 0x64 ? 2 : 0;
            *v98 = v75 + 128;
            *((_QWORD *)v75 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v75 + 23) = v100;
            v108 = v100[153];
            if ( v108 < 0x40u )
              *((_QWORD *)v75 + 20) = (1LL << v108) - 1;
            v109 = v100[141];
            if ( v109 < 0x40u )
              *((_QWORD *)v75 + 21) = (1LL << v109) - 1;
            ++v98;
            if ( (_BYTE)v127 )
            {
              *v98++ = v75 + 192;
              *((_QWORD *)v75 + 30) = *((_QWORD *)v102 + 39);
            }
            v97 += 32LL;
            v75 += 352;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
          v7 = v136;
          v13 = v145;
        }
        if ( v112 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v10 = v146(v7, v128);
        if ( v10 >= 0 )
        {
          ResetEnumerationContext(v137);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v13;
            v13 += 352;
          }
          if ( (v139[33] & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v137);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v13 = 0LL;
          v10 = 0;
        }
        goto LABEL_270;
      }
LABEL_185:
      v88 = (struct _GROUP_AFFINITY *)PerfSelectionCpc;
      goto LABEL_186;
    }
    v86 = v111;
    if ( v111 )
    {
      if ( v114 )
      {
        v7[42] = PerfControlCpcSingleRegister;
        v87 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v7[42] = PerfControlCpc;
        v87 = (void *)qword_1C0011558;
        if ( !qword_1C0011558 || !CpcHiddenProcessorMitigationReported )
        {
          v7[43] = PerfControlCpcHidden;
          goto LABEL_184;
        }
      }
    }
    else
    {
      v87 = AcpiCStateIdleCancel;
      v7[42] = AcpiCStateIdleCancel;
    }
    v7[43] = v87;
    goto LABEL_185;
  }
  v61 = NumberOfBytes_4;
  v62 = v13 + 100;
  while ( 1 )
  {
    v63 = *(_BYTE **)(v62 + 12);
    v64 = DeferredContext;
    if ( (v63[8] == 127 || v63[20] == 127 || v63[32] == 127 || v63[44] == 127 || v63[224] == 127 || v63[188] == 127)
      && !*((_BYTE *)DeferredContext + 78) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v65 = &PreviousAffinity;
      if ( v112 )
        v65 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v65);
      v112 = 1;
    }
    *v62 = v113;
    v62[2] = v128;
    v62[3] = v115;
    v62[1] = v61;
    *((_DWORD *)v62 - 9) = v126;
    *(_QWORD *)(v62 - 92) = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 8));
    v66 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 20));
    *(_QWORD *)(v62 - 84) = v66;
    if ( !v66 )
      break;
    v67 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 32));
    if ( v67 > *(_QWORD *)(v62 - 84) )
      v67 = *(_QWORD *)(v62 - 84);
    *(_QWORD *)(v62 - 76) = v67;
    *(_QWORD *)(v62 - 68) = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 44));
    v68 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 224));
    v69 = *(_QWORD *)(v62 - 84);
    *(_QWORD *)(v62 - 60) = v68;
    LODWORD(v68) = 100LL * *(_QWORD *)(v62 - 92) / v69;
    *((_DWORD *)v62 - 8) = v68;
    *((_DWORD *)v62 - 7) = v68;
    v70 = 100LL * *(_QWORD *)(v62 - 76) / v69;
    v71 = 100LL * *(_QWORD *)(v62 - 68) / v69;
    if ( !(_DWORD)v71 )
      LODWORD(v71) = 1;
    *((_DWORD *)v62 - 5) = v71;
    if ( !(_DWORD)v70 )
      LODWORD(v70) = 1;
    *((_DWORD *)v62 - 6) = v70;
    if ( (unsigned __int8)CpcRegisterIsSupported((__int64)(v63 + 188)) )
    {
      v73 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 188));
      v72 = 1;
      v120 = v73 != 0;
      v121 = v63[188] != 126;
    }
    if ( v62 - 100 != v13
      && (*(_QWORD *)(v62 - 92) != *((_QWORD *)v13 + 1)
       || *(_QWORD *)(v62 - 84) != *((_QWORD *)v13 + 2)
       || *(_QWORD *)(v62 - 76) != *((_QWORD *)v13 + 3)
       || *(_QWORD *)(v62 - 68) != *((_QWORD *)v13 + 4)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v72,
        0x24u,
        (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
      goto LABEL_162;
    }
    v62 += 352;
    if ( (unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
      goto LABEL_158;
  }
  v74 = 35;
LABEL_161:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v74,
    (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
LABEL_162:
  v10 = -1073741811;
LABEL_270:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return (unsigned int)v10;
}
