/*
 * XREFs of InitCpcStatesInternal @ 0x1C0027D1C
 * Callers:
 *     RegisterKernelCpc @ 0x1C0027D00 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x1C002EAF0 (RegisterHvCpcCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     DisplayKernelPerfStates @ 0x1C000587C (DisplayKernelPerfStates.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0005E74 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     CpcRegisterIsSupported @ 0x1C0007464 (CpcRegisterIsSupported.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0008F6C (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0008F9C (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0008FD0 (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C0009224 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0009240 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     ProcLibCapChange @ 0x1C001FC18 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C00248A4 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C0024C3C (CpcConnectNativeInterrupt.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitCpcStatesInternal(
        __int64 a1,
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
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // r8
  unsigned __int64 v72; // rax
  unsigned int v73; // edx
  unsigned __int64 v74; // rax
  unsigned __int16 v75; // r9
  char *v76; // rdi
  unsigned int v77; // r15d
  int v78; // esi
  unsigned int v79; // r12d
  unsigned int v80; // r13d
  _QWORD *v81; // rax
  unsigned __int64 v82; // rdx
  char v83; // r10
  int v84; // r13d
  int v85; // r9d
  __int64 v86; // r8
  char v87; // r11
  void *v88; // rax
  struct _GROUP_AFFINITY *v89; // rax
  unsigned int v90; // ecx
  bool v91; // al
  int v92; // eax
  int v93; // ecx
  __int64 v94; // rax
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r15
  _QWORD *v99; // r13
  __int64 v100; // rbx
  _BYTE *v101; // rdx
  unsigned __int64 v102; // r12
  _DWORD *v103; // rsi
  __int64 v104; // r12
  struct _GROUP_AFFINITY *v105; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned int v107; // ecx
  int v108; // eax
  unsigned __int8 v109; // cl
  unsigned __int8 v110; // cl
  char v112; // [rsp+30h] [rbp-D0h]
  char v113; // [rsp+31h] [rbp-CFh]
  char v114; // [rsp+32h] [rbp-CEh]
  char v115; // [rsp+33h] [rbp-CDh]
  char v116; // [rsp+34h] [rbp-CCh]
  PVOID DeferredContext; // [rsp+38h] [rbp-C8h] BYREF
  char v118; // [rsp+40h] [rbp-C0h]
  char IsSupported; // [rsp+41h] [rbp-BFh]
  char v120; // [rsp+42h] [rbp-BEh]
  bool v121; // [rsp+43h] [rbp-BDh]
  bool v122; // [rsp+44h] [rbp-BCh]
  char v123; // [rsp+45h] [rbp-BBh]
  unsigned int NumberOfBytes; // [rsp+48h] [rbp-B8h]
  int NumberOfBytes_4; // [rsp+4Ch] [rbp-B4h]
  int v126; // [rsp+50h] [rbp-B0h]
  int v127; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v128; // [rsp+58h] [rbp-A8h]
  unsigned int v129; // [rsp+5Ch] [rbp-A4h]
  int v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+64h] [rbp-9Ch]
  int v132; // [rsp+68h] [rbp-98h]
  int v133; // [rsp+6Ch] [rbp-94h]
  _BYTE *v134; // [rsp+70h] [rbp-90h]
  int v135; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v136[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v137; // [rsp+90h] [rbp-70h]
  __int64 v138[4]; // [rsp+98h] [rbp-68h] BYREF
  int PerfDomain; // [rsp+B8h] [rbp-48h]
  __int64 v140; // [rsp+C0h] [rbp-40h]
  int v141; // [rsp+C8h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY *v142; // [rsp+D0h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY *v143; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v144; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v145; // [rsp+E8h] [rbp-18h] BYREF
  char *v146; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v147)(_QWORD *, _QWORD); // [rsp+F8h] [rbp-8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+100h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v150[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v151[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v5 = 0LL;
  v147 = a2;
  v140 = a1;
  v7 = 0LL;
  v113 = 0;
  v137 = 0LL;
  v127 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v127,
                                  a4);
  v9 = v127;
  if ( RegistryDwordValueNoDefault < 0 )
    v9 = 0;
  v127 = v9;
  if ( !v9 )
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
  LOBYTE(v128) = *(_QWORD *)(a1 + 312) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v138, &v141);
  v11 = (unsigned int)(352 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v146 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    v10 = -1073741670;
    goto LABEL_271;
  }
  v14 = memset(PoolWithTag, 0, v11);
  LOBYTE(v14) = 0;
  LOBYTE(v129) = 0;
  v131 = (int)v14;
  v118 = 0;
  LOBYTE(v4) = 0;
  v115 = 1;
  v120 = 1;
  v15 = 0LL;
  v130 = 1;
  NumberOfBytes_4 = v4;
  v114 = 0;
  v116 = 0;
  LOBYTE(v132) = 0;
  IsSupported = 0;
  LOBYTE(v133) = 0;
  v123 = 0;
  v112 = 0;
  v122 = 0;
  v121 = 0;
  v143 = 0LL;
  v142 = 0LL;
  v144 = 0LL;
  v134 = 0LL;
  v145 = 0LL;
  KeInitializeAffinityEx(v151);
  ResetEnumerationContext(v138);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v151, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v11) = 0;
  v126 = v11;
  ResetEnumerationContext(v138);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v15 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      v134 = v15;
      KeInitializeAffinityEx(v150);
      NumberOfBytes = 0;
      v135 = 3;
      v16 = NtQuerySystemInformationEx(107LL, &v135, 4LL);
      if ( v16 == -1073741820 )
      {
        if ( !NumberOfBytes )
          break;
        v5 = (struct _GROUP_AFFINITY *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72637250u);
        if ( !v5 )
          break;
        v135 = 3;
        v16 = NtQuerySystemInformationEx(107LL, &v135, 4LL);
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
                KeAddGroupAffinityEx(v150, v18[v19 + 2].Group, v18[v19 + 2].Mask);
                ++v19;
              }
              while ( v19 < v18[1].Reserved[2] );
              v7 = v137;
            }
            if ( (unsigned int)KeCheckProcessorAffinityEx(v150, *((unsigned int *)DeferredContext + 14)) )
              break;
            Mask_high = HIDWORD(v18->Mask);
            v17 += Mask_high;
            v18 = (struct _GROUP_AFFINITY *)((char *)v18 + Mask_high);
            KeInitializeAffinityEx(v150);
            if ( v17 >= NumberOfBytes )
              goto LABEL_27;
          }
          v16 = 0;
LABEL_27:
          LOBYTE(v4) = NumberOfBytes_4;
          v15 = v134;
          LOBYTE(v11) = v126;
        }
        ExFreePoolWithTag(v5, 0x72637250u);
        v5 = 0LL;
      }
      if ( v16 >= 0 )
      {
        LODWORD(v11) = (unsigned __int8)v11;
        if ( (unsigned int)KeIsEqualAffinityEx(v150, v151) )
          LODWORD(v11) = 1;
        v126 = v11;
      }
      break;
    }
  }
  ResetEnumerationContext(v138);
  v21 = EnumerateNextDevice((__int64)v138, &DeferredContext);
  if ( v21 )
  {
    v53 = v131;
    goto LABEL_93;
  }
  v22 = v130;
  v23 = v13 + 92;
  LOBYTE(v13) = v129;
  v24 = 1;
  v25 = 0;
  do
  {
    v26 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
    if ( v26[140] == 10 || v26[152] == 10 )
      v114 = 1;
    if ( v26[176] == 10 || v26[80] == 10 || v26[92] == 10 || v26[68] == 10 || v26[104] == 10 )
      v116 = 1;
    v4 = (unsigned __int8)v4;
    if ( v26[56] == 10 )
      v4 = 1;
    LODWORD(v13) = (unsigned __int8)v13;
    v27 = v26[8] == 10;
    NumberOfBytes_4 = v4;
    if ( v27 )
      LODWORD(v13) = 1;
    if ( v26[212] == 10 || v26[200] == 10 || v26[188] == 10 || v26[116] == 10 )
      v118 = 1;
    *(_QWORD *)(v23 + 20) = v26;
    IsSupported = CpcRegisterIsSupported((__int64)(v26 + 176));
    *v23 = IsSupported;
    v23[1] = CpcRegisterIsSupported((__int64)(v26 + 68));
    v23[2] = CpcRegisterIsSupported((__int64)(v26 + 80));
    v23[3] = CpcRegisterIsSupported((__int64)(v26 + 92));
    v23[6] = CpcRegisterIsSupported((__int64)(v26 + 104));
    v23[7] = CpcRegisterIsSupported((__int64)(v26 + 56));
    v123 = CpcRegisterIsSupported((__int64)(v26 + 116));
    v29 = CpcRegisterIsSupported(v28);
    v31 = (unsigned __int8)v132;
    if ( v29 )
      v31 = v30;
    v23[4] = v29;
    v132 = v31;
    v32 = CpcRegisterIsSupported((__int64)(v26 + 200));
    LOBYTE(v36) = v133;
    v23[5] = v32;
    v35 = v34;
    v36 = (unsigned __int8)v36;
    if ( v32 )
      v36 = v33;
    v27 = v26[140] == 127;
    v133 = v36;
    v37 = v34;
    if ( !v27 )
      v37 = v128;
    if ( v26[152] != 127 )
      v35 = v37;
    v128 = v35;
    if ( !qword_1C0011580 || (v38 = qword_1C0011580(v26), v34 = 0, !v38) )
      v120 = v34;
    v39 = v34;
    memset(v136, 0, 12);
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
      if ( !CpcRegisterIsSupported((__int64)&v26[v40]) )
        goto LABEL_78;
      v25 = 1;
      v112 = 1;
      if ( CpcRegisterIsSupported((__int64)v136) )
        break;
      v46 = *(_QWORD *)(v42 + 4);
      v47 = *(_BYTE *)(v42 + 3);
      LOBYTE(v136[0]) = *(_BYTE *)v42;
      *(_QWORD *)((char *)v136 + 4) = v46;
      BYTE3(v136[0]) = v47;
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
      v48 = v136[1];
      *(_QWORD *)(v23 + 28) = v136[0];
      *((_DWORD *)v23 + 9) = v48;
    }
    if ( qword_1C0011590 )
    {
      v22 = (unsigned __int8)v22;
      if ( (int)qword_1C0011590(v23 - 92, &v142, &v144, &v145, &v143) < 0 )
        v22 = 0;
    }
    LOBYTE(v49) = v131;
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
    v131 = v49;
    v23 += 352;
    v21 = EnumerateNextDevice((__int64)v138, &DeferredContext);
    LOBYTE(v4) = NumberOfBytes_4;
  }
  while ( !v21 );
  v115 = v24;
  v5 = 0LL;
  v15 = v134;
  v130 = v22;
  v7 = v137;
  v129 = (unsigned int)v13;
  v13 = v146;
LABEL_93:
  if ( v142 == v5 || v143 == v5 )
  {
    LOBYTE(v21) = (_BYTE)v5;
    v130 = v21;
  }
  if ( v53 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C00118E8 + 88))(*(_QWORD *)(qword_1C00118E8 + 56));
    if ( v10 < 0 )
      goto LABEL_271;
    ResetEnumerationContext(v138);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
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
      while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
      v113 = v54;
      v7 = v137;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C00118E8 + 104))(*(_QWORD *)(qword_1C00118E8 + 56), 0LL);
    if ( v10 < 0 )
      goto LABEL_271;
  }
  ResetEnumerationContext(v138);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
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
          (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
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
    while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
    v7 = 0LL;
  }
  ResetEnumerationContext(v138);
  if ( (unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
LABEL_158:
    if ( *((_QWORD *)v13 + 1) < *((_QWORD *)v13 + 2) )
    {
      v75 = 37;
      goto LABEL_161;
    }
    v76 = v13 + 32;
    if ( *((_QWORD *)v13 + 3) < *((_QWORD *)v13 + 4) )
    {
      v75 = 38;
      goto LABEL_161;
    }
    v77 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v78 = ((_BYTE)v128 != 0) + 1;
    v79 = (v77 + 7 + 24 * v78) & 0xFFFFFFF8;
    v129 = v79 + 8 * PerfDomain * v78;
    v80 = v129;
    v81 = ExAllocatePoolWithTag(NonPagedPoolNx, v129, 0x72637250u);
    v137 = v81;
    v7 = v81;
    if ( !v81 )
      goto LABEL_6;
    memset(v81, 0, v80);
    v82 = v140;
    if ( *(_BYTE *)(v140 + 1106) )
      v7[48] = PepParkPreference;
    if ( (*(_QWORD *)(v82 + 264) & 0x10000000000LL) != 0 )
    {
      v7[49] = PepParkMask;
      v7[50] = PepPerfCheckComplete;
      v7[8] = *(_QWORD *)(v82 + 1088);
    }
    v83 = v130;
    v84 = PerfDomain;
    v85 = v141;
    v7[52] = v7 + 54;
    v86 = (__int64)v7 + v77;
    *(_DWORD *)v7 = 52;
    *((_DWORD *)v7 + 3) = v84;
    *((_DWORD *)v7 + 8) = v78;
    v7[51] = v86;
    v7[53] = (char *)v7 + v79;
    *((_WORD *)v7 + 2) = v85;
    if ( v83 )
    {
      v7[42] = v142;
      v7[43] = v144;
      if ( (_BYTE)v126 && v145 )
      {
        v87 = v112;
        if ( v85 == 254 )
        {
          v7[44] = v145;
          v7[9] = v13;
        }
      }
      else
      {
        v87 = v112;
      }
LABEL_184:
      v89 = v143;
      if ( v83 )
      {
LABEL_186:
        v7[41] = v89;
        if ( (_BYTE)v131 )
        {
          if ( v114 )
            v7[45] = CpcReadFeedback;
          if ( v116 )
          {
            v7[46] = CpcAcquirePerformance;
            v7[47] = CpcCommitPerformance;
          }
          if ( v118 )
          {
            v7[38] = AcquirePccSubspace;
            v7[39] = ExecutePccWrite;
          }
          v90 = *(_DWORD *)(qword_1C00118E8 + 68);
          if ( v90 )
          {
            v82 = v140;
            *((_DWORD *)v7 + 9) = 0x989680 / (v90 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v82 + 264) & 0x4000000000LL) != 0 )
          v7[40] = CpcReinitializeHandler;
        *((_BYTE *)v7 + 6) = 0;
        v91 = v87 || v83;
        *((_BYTE *)v7 + 7) = v91;
        *((_BYTE *)v7 + 8) = v120;
        *((_BYTE *)v7 + 40) = v121;
        *((_DWORD *)v7 + 4) = v127;
        *((_DWORD *)v7 + 5) = *((_DWORD *)v13 + 17);
        v92 = *((_DWORD *)v13 + 19);
        *((_DWORD *)v7 + 6) = v92;
        v93 = *((_DWORD *)v13 + 20);
        if ( !v92 )
          v92 = 1;
        *((_DWORD *)v7 + 6) = v92;
        if ( !v93 )
          v93 = 1;
        *((_DWORD *)v7 + 7) = v93;
        v7[6] = *(_QWORD *)v76;
        v7[7] = *((_QWORD *)v13 + 2);
        v94 = *(_QWORD *)(v82 + 320);
        if ( v94 )
          v7[31] = v94;
        v7[33] = *(_QWORD *)(v82 + 328);
        if ( v83 )
        {
          if ( (_BYTE)v132 )
            *((_BYTE *)v7 + 9) = 1;
          if ( (_BYTE)v133 )
            *((_BYTE *)v7 + 10) = 1;
        }
        else
        {
          if ( (_BYTE)v132 )
            v7[35] = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v133 )
            v7[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v122 )
          v7[37] = CpcSetAutonomousMode;
        if ( v123 )
          v7[32] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v82 + 264) & 0x400000) != 0 && v83 && (v85 == 254 || v84 == 1) )
          *((_BYTE *)v7 + 11) = 1;
        v95 = *((_QWORD *)v13 + 2);
        v96 = *((_QWORD *)v13 + 5);
        if ( v95 == v96 )
        {
          *(_DWORD *)(v86 + 8) = 100;
        }
        else
        {
          v82 = 100 * v96 % v95;
          *(_DWORD *)(v86 + 8) = 100 * v96 / v95;
        }
        *(_DWORD *)(v86 + 12) = 1;
        *(_BYTE *)(v86 + 17) = 1;
        *(_QWORD *)v86 = PerfReadWrappingCounter;
        *(_BYTE *)(v86 + 16) = v114 == 0;
        if ( (_BYTE)v128 )
        {
          v97 = v7[51];
          *(_QWORD *)(v97 + 32) = 100LL;
          *(_QWORD *)(v97 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v97 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v7, v82, v86);
        v98 = v7[52];
        v99 = (_QWORD *)v7[53];
        ResetEnumerationContext(v138);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
        {
          v100 = v140;
          do
          {
            v101 = (_BYTE *)*((_QWORD *)v76 + 10);
            LODWORD(v102) = 100;
            v103 = DeferredContext;
            v134 = v101;
            if ( v76[67] )
            {
              v104 = (__int64)(v101 + 56);
              if ( v101[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v105 = &PreviousAffinity;
                if ( v113 )
                  v105 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v105);
                v113 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v103, v104);
              if ( GenAddrMaybeHidden > *((_QWORD *)v76 - 2) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x27u,
                  (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
                GenAddrMaybeHidden = *((_QWORD *)v76 - 2);
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v76 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x28u,
                  (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
                GenAddrMaybeHidden = *(_QWORD *)v76;
              }
              v107 = *((_DWORD *)v76 + 12);
              *((_QWORD *)v76 + 3) = GenAddrMaybeHidden;
              v102 = 100 * GenAddrMaybeHidden / *((_QWORD *)v76 - 2);
              if ( (unsigned int)v102 <= v107 )
                LODWORD(v102) = v107;
              *((_DWORD *)v76 + 13) = v102;
              if ( (_DWORD)v102 != v103[177] )
                ProcLibCapChange(v100, v103[108], v103[120], v102);
              v101 = v134;
            }
            *((_QWORD *)v76 - 4) = v103;
            *(_QWORD *)(v98 + 8) = v76 - 32;
            if ( *((_BYTE *)v103 + 78) )
            {
              v108 = v103[20];
              *(_BYTE *)(v98 + 28) = 1;
            }
            else
            {
              v108 = v103[14];
            }
            *(_DWORD *)v98 = v108;
            *(_DWORD *)(v98 + 20) = v103[176];
            *(_DWORD *)(v98 + 16) = v102;
            *(_DWORD *)(v98 + 24) = (unsigned int)v102 < 0x64 ? 2 : 0;
            *v99 = v76 + 128;
            *((_QWORD *)v76 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v76 + 23) = v101;
            v109 = v101[153];
            if ( v109 < 0x40u )
              *((_QWORD *)v76 + 20) = (1LL << v109) - 1;
            v110 = v101[141];
            if ( v110 < 0x40u )
              *((_QWORD *)v76 + 21) = (1LL << v110) - 1;
            ++v99;
            if ( (_BYTE)v128 )
            {
              *v99++ = v76 + 192;
              *((_QWORD *)v76 + 30) = *((_QWORD *)v103 + 39);
            }
            v98 += 32LL;
            v76 += 352;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
          v7 = v137;
          v13 = v146;
        }
        if ( v113 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v10 = v147(v7, v129);
        if ( v10 >= 0 )
        {
          ResetEnumerationContext(v138);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v13;
            v13 += 352;
          }
          if ( (*(_QWORD *)(v140 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v138);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v13 = 0LL;
          v10 = 0;
        }
        goto LABEL_271;
      }
LABEL_185:
      v89 = (struct _GROUP_AFFINITY *)PerfSelectionCpc;
      goto LABEL_186;
    }
    v87 = v112;
    if ( v112 )
    {
      if ( v115 )
      {
        v7[42] = PerfControlCpcSingleRegister;
        v88 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v7[42] = PerfControlCpc;
        v88 = (void *)qword_1C0011558;
        if ( !qword_1C0011558 || !CpcHiddenProcessorMitigationReported )
        {
          v7[43] = PerfControlCpcHidden;
          goto LABEL_184;
        }
      }
    }
    else
    {
      v88 = AcpiCStateIdleCancel;
      v7[42] = AcpiCStateIdleCancel;
    }
    v7[43] = v88;
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
      if ( v113 )
        v65 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v65);
      v113 = 1;
    }
    *v62 = v114;
    v62[2] = v129;
    v62[3] = v116;
    v62[1] = v61;
    *((_DWORD *)v62 - 9) = v127;
    *(_QWORD *)(v62 - 92) = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 8));
    v66 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 20));
    *(_QWORD *)(v62 - 84) = v66;
    if ( !v66 )
      break;
    v67 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 32));
    v68 = *(_QWORD *)(v62 - 84);
    *(_QWORD *)(v62 - 76) = v67;
    if ( v67 > v68 )
      *(_QWORD *)(v62 - 76) = v68;
    *(_QWORD *)(v62 - 68) = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 44));
    v69 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 224));
    v70 = *(_QWORD *)(v62 - 84);
    *(_QWORD *)(v62 - 60) = v69;
    LODWORD(v69) = 100LL * *(_QWORD *)(v62 - 92) / v70;
    *((_DWORD *)v62 - 8) = v69;
    *((_DWORD *)v62 - 7) = v69;
    v71 = 100LL * *(_QWORD *)(v62 - 76) / v70;
    v72 = 100LL * *(_QWORD *)(v62 - 68) / v70;
    if ( !(_DWORD)v72 )
      LODWORD(v72) = 1;
    *((_DWORD *)v62 - 5) = v72;
    if ( !(_DWORD)v71 )
      LODWORD(v71) = 1;
    *((_DWORD *)v62 - 6) = v71;
    if ( CpcRegisterIsSupported((__int64)(v63 + 188)) )
    {
      v74 = ReadGenAddrMaybeHidden((__int64)v64, (__int64)(v63 + 188));
      v73 = 1;
      v121 = v74 != 0;
      v122 = v63[188] != 126;
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
        v73,
        0x24u,
        (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
      goto LABEL_162;
    }
    v62 += 352;
    if ( (unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
      goto LABEL_158;
  }
  v75 = 35;
LABEL_161:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v75,
    (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
LABEL_162:
  v10 = -1073741811;
LABEL_271:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return (unsigned int)v10;
}
