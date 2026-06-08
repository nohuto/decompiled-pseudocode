/*
 * XREFs of InitCpcStatesInternal @ 0x1C001EA5C
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C001B4C0 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C001EA40 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000193C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0001A08 (WPP_RECORDER_SF_iii.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0003678 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00036A8 (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C00036DC (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C0003930 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000394C (EnumerateNextDevice.c)
 *     CpcRegisterIsSupported @ 0x1C0004594 (CpcRegisterIsSupported.c)
 *     DisplayKernelPerfStates @ 0x1C0008C6C (DisplayKernelPerfStates.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0009274 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     GetPerfDomain @ 0x1C0021CB0 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021D48 (GetRegistryDwordValueNoDefault.c)
 *     CpcConnectNativeInterrupt @ 0x1C00221B8 (CpcConnectNativeInterrupt.c)
 *     ProcLibCapChange @ 0x1C0027F58 (ProcLibCapChange.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  int v2; // esi
  unsigned __int16 v3; // r15
  char *v5; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v7; // ecx
  int v8; // edi
  SIZE_T v9; // rdi
  char *PoolWithTag; // rax
  char *v11; // r14
  void *v12; // rax
  _BYTE *v13; // r13
  int v14; // esi
  _QWORD *v15; // r12
  unsigned int v16; // r13d
  _QWORD *v17; // rdi
  __int64 v18; // rax
  int IsEqualAffinity; // eax
  int v20; // eax
  unsigned int v21; // r11d
  __int64 v22; // rdx
  unsigned int v23; // ebx
  char *v24; // r15
  char v25; // r13
  char v26; // r12
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r10
  char v30; // al
  __int64 v31; // r8
  int v32; // r11d
  int v33; // ecx
  char v34; // al
  unsigned int v35; // r9d
  int v36; // r11d
  unsigned int v37; // r8d
  int v38; // ecx
  bool v39; // zf
  unsigned __int8 v40; // cl
  char v41; // al
  unsigned int v42; // r8d
  char v43; // si
  __int64 v44; // rax
  int v45; // r8d
  __int64 v46; // rdx
  char v47; // r9
  __int64 v48; // r10
  char v49; // r11
  char v50; // r11
  int v51; // eax
  int v52; // eax
  int v53; // esi
  unsigned int *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  char v57; // bl
  char *v58; // rdi
  __int64 v59; // r15
  PVOID v60; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v62; // r15
  __int64 v63; // rdi
  char v64; // r13
  char *v65; // rdi
  _BYTE *v66; // rsi
  PVOID v67; // r15
  struct _GROUP_AFFINITY *v68; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rcx
  int v76; // eax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rax
  unsigned int v79; // r10d
  unsigned __int16 v80; // r9
  unsigned __int16 v81; // r9
  char *v82; // rdi
  unsigned int v83; // r15d
  unsigned int v84; // esi
  unsigned int v85; // r12d
  unsigned int v86; // r13d
  char *v87; // rax
  __int64 v88; // rdx
  char v89; // r10
  int v90; // r13d
  int v91; // r9d
  __int64 v92; // r8
  char v93; // r11
  void *v94; // rax
  __int64 (__fastcall *v95)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v96; // ecx
  bool v97; // al
  int v98; // eax
  int v99; // ecx
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rtt
  __int64 v105; // rax
  __int64 v106; // r12
  _QWORD *v107; // r13
  __int64 v108; // rbx
  _BYTE *v109; // rdx
  unsigned int v110; // r15d
  _DWORD *v111; // rsi
  __int64 v112; // r15
  struct _GROUP_AFFINITY *v113; // rdx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  int v117; // eax
  unsigned __int8 v118; // cl
  unsigned __int8 v119; // cl
  int v121; // [rsp+20h] [rbp-E0h]
  char v122; // [rsp+40h] [rbp-C0h]
  char v123; // [rsp+41h] [rbp-BFh]
  char v124; // [rsp+42h] [rbp-BEh]
  char v125; // [rsp+43h] [rbp-BDh]
  char v126; // [rsp+44h] [rbp-BCh]
  char v127; // [rsp+45h] [rbp-BBh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v129; // [rsp+50h] [rbp-B0h]
  char IsSupported; // [rsp+51h] [rbp-AFh]
  bool v131; // [rsp+52h] [rbp-AEh]
  bool v132; // [rsp+53h] [rbp-ADh]
  char v133; // [rsp+54h] [rbp-ACh]
  int v134; // [rsp+58h] [rbp-A8h]
  unsigned int v135; // [rsp+5Ch] [rbp-A4h]
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h]
  int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch]
  int v138; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v139; // [rsp+6Ch] [rbp-94h]
  int v140; // [rsp+70h] [rbp-90h]
  int v141; // [rsp+74h] [rbp-8Ch]
  int v142; // [rsp+78h] [rbp-88h]
  _BYTE *v143; // [rsp+80h] [rbp-80h]
  int v144; // [rsp+88h] [rbp-78h]
  int v145; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v146[2]; // [rsp+90h] [rbp-70h] BYREF
  char *v147; // [rsp+A0h] [rbp-60h]
  __int64 v148[4]; // [rsp+A8h] [rbp-58h] BYREF
  int PerfDomain; // [rsp+C8h] [rbp-38h]
  __int64 v150; // [rsp+D0h] [rbp-30h]
  int v151; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v152; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v153)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+E8h] [rbp-18h] BYREF
  char *v154; // [rsp+F0h] [rbp-10h]
  __int64 v155; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v156; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v157)(char *, _QWORD); // [rsp+108h] [rbp+8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+110h] [rbp+10h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v160[176]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v161[176]; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = 0;
  v157 = a2;
  v150 = a1;
  v5 = 0LL;
  v123 = 0;
  v147 = 0LL;
  v138 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v138);
  v7 = v138;
  if ( RegistryDwordValueNoDefault < 0 )
    v7 = 0;
  v138 = v7;
  if ( !v7 )
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
  LOBYTE(v135) = *(_QWORD *)(a1 + 312) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v148, &v151);
  v9 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v154 = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  v12 = memset(PoolWithTag, 0, v9);
  LOBYTE(v144) = 0;
  LOBYTE(v12) = 1;
  LOBYTE(v139) = 0;
  LOBYTE(v2) = 0;
  v140 = (int)v12;
  v134 = v2;
  v129 = 0;
  v13 = 0LL;
  v124 = 0;
  v126 = 0;
  LOBYTE(v141) = 0;
  IsSupported = 0;
  LOBYTE(v142) = 0;
  v133 = 0;
  v122 = 0;
  v125 = 1;
  v132 = 0;
  v131 = 0;
  v127 = 1;
  v153 = 0LL;
  v152 = 0LL;
  v155 = 0LL;
  v143 = 0LL;
  v156 = 0LL;
  KeInitializeAffinityEx(v161);
  ResetEnumerationContext(v148);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v161, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v9) = 0;
  NumberOfBytes_4 = v9;
  ResetEnumerationContext(v148);
  do
  {
    if ( (unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
      goto LABEL_35;
  }
  while ( *((_BYTE *)DeferredContext + 78) );
  v13 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
  v143 = v13;
  KeInitializeAffinityEx(v160);
  NumberOfBytes = 0;
  v145 = 3;
  v121 = 0;
  v14 = NtQuerySystemInformationEx(107LL, &v145, 4LL);
  if ( v14 == -1073741820 )
  {
    if ( !NumberOfBytes )
    {
      LOBYTE(v2) = v134;
      goto LABEL_35;
    }
    v15 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72637250u);
    if ( !v15 )
    {
LABEL_33:
      LOBYTE(v2) = v134;
      goto LABEL_35;
    }
    v145 = 3;
    v121 = NumberOfBytes;
    v14 = NtQuerySystemInformationEx(107LL, &v145, 4LL);
    if ( v14 >= 0 && NumberOfBytes )
    {
      v16 = 0;
      v17 = v15;
      v14 = -1073741275;
      while ( 1 )
      {
        if ( *((_WORD *)v17 + 15) )
        {
          do
          {
            KeAddGroupAffinityEx(v160, LOWORD(v17[2 * v3 + 5]), v17[2 * v3 + 4]);
            ++v3;
          }
          while ( v3 < *((_WORD *)v17 + 15) );
          v5 = v147;
        }
        v3 = 0;
        if ( (unsigned int)KeCheckProcessorAffinityEx(v160, *((unsigned int *)DeferredContext + 14)) )
          break;
        v18 = *((unsigned int *)v17 + 1);
        v16 += v18;
        v17 = (_QWORD *)((char *)v17 + v18);
        KeInitializeAffinityEx(v160);
        if ( v16 >= NumberOfBytes )
          goto LABEL_27;
      }
      v14 = 0;
LABEL_27:
      v13 = v143;
      LOBYTE(v9) = NumberOfBytes_4;
    }
    ExFreePoolWithTag(v15, 0x72637250u);
  }
  if ( v14 < 0 )
    goto LABEL_33;
  IsEqualAffinity = KeIsEqualAffinityEx(v160, v161);
  LOBYTE(v2) = v134;
  LODWORD(v9) = (unsigned __int8)v9;
  if ( IsEqualAffinity )
    LODWORD(v9) = 1;
  NumberOfBytes_4 = v9;
LABEL_35:
  ResetEnumerationContext(v148);
  v20 = EnumerateNextDevice((__int64)v148, &DeferredContext);
  LOBYTE(v22) = 10;
  if ( !v20 )
  {
    LOBYTE(v23) = v139;
    v24 = v11 + 92;
    LOBYTE(v11) = v144;
    v25 = 1;
    v26 = 0;
    while ( 1 )
    {
      v27 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      if ( v27[140] == 10 || v27[152] == 10 )
        v124 = v21;
      if ( v27[176] == 10 || v27[80] == 10 || v27[92] == 10 || v27[68] == 10 || v27[104] == 10 )
        v126 = v21;
      LODWORD(v11) = (unsigned __int8)v11;
      if ( v27[56] == 10 )
        LODWORD(v11) = v21;
      v23 = (unsigned __int8)v23;
      if ( v27[8] == 10 )
        v23 = v21;
      if ( v27[212] == 10 || v27[200] == 10 || v27[188] == 10 || v27[116] == 10 )
        v129 = v21;
      *(_QWORD *)(v24 + 20) = v27;
      IsSupported = CpcRegisterIsSupported((__int64)(v27 + 176));
      *v24 = IsSupported;
      v24[1] = CpcRegisterIsSupported((__int64)(v27 + 68));
      v24[2] = CpcRegisterIsSupported((__int64)(v27 + 80));
      v24[3] = CpcRegisterIsSupported((__int64)(v27 + 92));
      v24[6] = CpcRegisterIsSupported((__int64)(v27 + 104));
      v24[7] = CpcRegisterIsSupported((__int64)(v27 + 56));
      v133 = CpcRegisterIsSupported(v28);
      v30 = CpcRegisterIsSupported(v29);
      v33 = (unsigned __int8)v141;
      v24[4] = v30;
      if ( v30 )
        v33 = v32;
      v141 = v33;
      v34 = CpcRegisterIsSupported(v31);
      LOBYTE(v38) = v142;
      v24[5] = v34;
      v37 = v35;
      v38 = (unsigned __int8)v38;
      if ( v34 )
        v38 = v36;
      v39 = v27[140] == 127;
      v142 = v38;
      v40 = v35;
      if ( !v39 )
        v40 = v135;
      if ( v27[152] != 127 )
        v37 = v40;
      v135 = v37;
      if ( !qword_1C00115B0 || (v41 = qword_1C00115B0(v27), v35 = 0, !v41) )
        v127 = v35;
      v42 = v35;
      memset(v146, 0, 12);
      v43 = 0;
      while ( 1 )
      {
        if ( v42 )
        {
          if ( v42 == 1 )
          {
            v44 = 80LL;
          }
          else if ( v42 == 2 )
          {
            v44 = 92LL;
          }
          else
          {
            v44 = 104LL;
          }
        }
        else
        {
          v44 = 68LL;
        }
        if ( !CpcRegisterIsSupported((__int64)&v27[v44]) )
          goto LABEL_80;
        v26 = 1;
        v122 = 1;
        if ( CpcRegisterIsSupported((__int64)v146) )
          break;
        v43 = v47;
        v50 = *(_BYTE *)(v46 + 3);
        *(_QWORD *)((char *)v146 + 4) = *(_QWORD *)(v46 + 4);
        BYTE3(v146[0]) = v50;
        LOBYTE(v146[0]) = v47;
LABEL_80:
        v42 = v45 + 1;
        if ( v42 >= 4 )
          goto LABEL_83;
      }
      if ( v43 == v47 && v48 == *(_QWORD *)(v46 + 4) && v49 == *(_BYTE *)(v46 + 3) )
        goto LABEL_80;
      v25 = 0;
LABEL_83:
      if ( v26 && v25 )
      {
        v51 = v146[1];
        *(_QWORD *)(v24 + 28) = v146[0];
        *((_DWORD *)v24 + 9) = v51;
      }
      if ( qword_1C00115C0 )
      {
        v52 = qword_1C00115C0(v24 - 92, &v152, &v155, &v156, &v153);
        v53 = (unsigned __int8)v140;
        if ( v52 < 0 )
          v53 = 0;
        v140 = v53;
      }
      LOBYTE(v2) = v134;
      v54 = (unsigned int *)&Cpc2RegisterTable;
      v55 = 19LL;
      do
      {
        v56 = *v54;
        v54 += 6;
        v2 = (unsigned __int8)v2;
        if ( v27[v56] == 10 )
          v2 = 1;
        --v55;
      }
      while ( v55 );
      v134 = v2;
      v24 += 368;
      v20 = EnumerateNextDevice((__int64)v148, &DeferredContext);
      if ( v20 )
      {
        v125 = v25;
        v13 = v143;
        v139 = v23;
        v5 = v147;
        v144 = (int)v11;
        v11 = v154;
        break;
      }
    }
  }
  if ( !v152 || !v153 )
  {
    LOBYTE(v20) = 0;
    v140 = v20;
  }
  if ( (_BYTE)v2 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C0011918 + 88))(*(_QWORD *)(qword_1C0011918 + 56), v22);
    if ( v8 < 0 )
      goto LABEL_281;
    ResetEnumerationContext(v148);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
    {
      v57 = 0;
      v58 = v11 + 112;
      do
      {
        if ( *(v58 - 20) )
        {
          v59 = *(_QWORD *)v58;
          v60 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v58 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v57 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v57 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v60, (_BYTE *)(v59 + 176), 1uLL);
        }
        v58 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) );
      v13 = v143;
      v123 = v57;
      v5 = v147;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0011918 + 104))(*(_QWORD *)(qword_1C0011918 + 56), 0LL);
    if ( v8 < 0 )
      goto LABEL_281;
  }
  ResetEnumerationContext(v148);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
  {
    v62 = (__int64 *)(v11 + 112);
    v5 = 0LL;
    do
    {
      v63 = *v62;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v63 + 20) == 10
        && !ReadGenAddrHidden(*((_DWORD *)DeferredContext + 20), v63 + 20) )
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
        *(_QWORD *)(v63 + 20) = *(_QWORD *)(v13 + 20);
        *(_DWORD *)(v63 + 28) = *((_DWORD *)v13 + 7);
        if ( *(_BYTE *)(v63 + 8) == 10 )
        {
          *(_QWORD *)(v63 + 8) = *((_QWORD *)v13 + 1);
          *(_DWORD *)(v63 + 16) = *((_DWORD *)v13 + 4);
        }
        if ( *(_BYTE *)(v63 + 32) == 10 )
        {
          *(_QWORD *)(v63 + 32) = *((_QWORD *)v13 + 4);
          *(_DWORD *)(v63 + 40) = *((_DWORD *)v13 + 10);
        }
        if ( *(_BYTE *)(v63 + 44) == 10 )
        {
          *(_QWORD *)(v63 + 44) = *(_QWORD *)(v13 + 44);
          *(_DWORD *)(v63 + 52) = *((_DWORD *)v13 + 13);
        }
        if ( *(_BYTE *)(v63 + 224) == 10 )
        {
          *(_QWORD *)(v63 + 224) = *((_QWORD *)v13 + 28);
          *(_DWORD *)(v63 + 232) = *((_DWORD *)v13 + 58);
        }
        if ( *(_BYTE *)(v63 + 56) == 10 )
        {
          *(_QWORD *)(v63 + 56) = *((_QWORD *)v13 + 7);
          *(_DWORD *)(v63 + 64) = *((_DWORD *)v13 + 16);
        }
      }
      v62 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) );
    v11 = v154;
  }
  ResetEnumerationContext(v148);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
  {
    v64 = v144;
    v65 = v11 + 100;
    while ( 1 )
    {
      v66 = *(_BYTE **)(v65 + 12);
      v67 = DeferredContext;
      if ( (v66[8] == 127 || v66[20] == 127 || v66[32] == 127 || v66[44] == 127 || v66[224] == 127 || v66[188] == 127)
        && !*((_BYTE *)DeferredContext + 78) )
      {
        KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
        v68 = &PreviousAffinity;
        if ( v123 )
          v68 = 0LL;
        KeSetSystemGroupAffinityThread(&Affinity, v68);
        v123 = 1;
      }
      *v65 = v124;
      v65[2] = v139;
      v65[3] = v126;
      v65[1] = v64;
      *((_DWORD *)v65 - 9) = v138;
      *(_QWORD *)(v65 - 92) = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 8));
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 20));
      *(_QWORD *)(v65 - 84) = GenAddrMaybeHidden;
      if ( !GenAddrMaybeHidden )
        break;
      v70 = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 32));
      v71 = *(_QWORD *)(v65 - 84);
      *(_QWORD *)(v65 - 76) = v70;
      if ( v70 > v71 )
        *(_QWORD *)(v65 - 76) = v71;
      *(_QWORD *)(v65 - 68) = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 44));
      *(_QWORD *)(v65 - 60) = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 224));
      if ( CpcRegisterIsSupported((__int64)(v66 + 188)) )
      {
        v131 = ReadGenAddrMaybeHidden((__int64)v67, (__int64)(v66 + 188)) != 0;
        v132 = v66[188] != 126;
      }
      if ( v65 - 100 != v11 )
      {
        if ( *(_QWORD *)(v65 - 92) != *((_QWORD *)v11 + 1) )
        {
          v80 = 36;
          goto LABEL_166;
        }
        if ( *(_QWORD *)(v65 - 84) != *((_QWORD *)v11 + 2) )
        {
          v80 = 37;
          goto LABEL_166;
        }
        if ( *(_QWORD *)(v65 - 68) != *((_QWORD *)v11 + 4) )
        {
          v80 = 38;
          goto LABEL_166;
        }
        if ( *(_QWORD *)(v65 - 76) != *((_QWORD *)v11 + 3) )
        {
          if ( !v127 )
          {
            v80 = 39;
LABEL_166:
            WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, v72, v73, v80, v121);
            goto LABEL_168;
          }
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v72, v73, v74, v121);
          *(_QWORD *)(v65 - 76) = *((_QWORD *)v11 + 3);
        }
      }
      v75 = *(_QWORD *)(v65 - 84);
      v76 = 100LL * *(_QWORD *)(v65 - 92) / v75;
      *((_DWORD *)v65 - 8) = v76;
      *((_DWORD *)v65 - 7) = v76;
      v77 = 100LL * *(_QWORD *)(v65 - 76) / v75;
      v78 = 100LL * *(_QWORD *)(v65 - 68) / v75;
      if ( !(_DWORD)v78 )
        LODWORD(v78) = 1;
      *((_DWORD *)v65 - 5) = v78;
      if ( !(_DWORD)v77 )
        LODWORD(v77) = 1;
      *((_DWORD *)v65 - 6) = v77;
      v65 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
        goto LABEL_170;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x23u,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    goto LABEL_168;
  }
  v79 = 1;
LABEL_170:
  if ( *((_QWORD *)v11 + 1) < *((_QWORD *)v11 + 2) )
  {
    v81 = 41;
LABEL_172:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v79,
      v81,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
LABEL_168:
    v8 = -1073741811;
    goto LABEL_281;
  }
  v82 = v11 + 32;
  if ( *((_QWORD *)v11 + 3) < *((_QWORD *)v11 + 4) )
  {
    v81 = 42;
    goto LABEL_172;
  }
  v83 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v84 = v79 + ((_BYTE)v135 != 0);
  v85 = (v83 + 7 + 24 * v84) & 0xFFFFFFF8;
  v139 = v85 + 8 * PerfDomain * v84;
  v86 = v139;
  v87 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v139, 0x72637250u);
  v147 = v87;
  v5 = v87;
  if ( v87 )
  {
    memset(v87, 0, v86);
    v88 = v150;
    if ( *(_BYTE *)(v150 + 1106) )
      *((_QWORD *)v5 + 48) = PepParkPreference;
    if ( (*(_QWORD *)(v88 + 264) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v5 + 49) = PepParkMask;
      *((_QWORD *)v5 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v5 + 8) = *(_QWORD *)(v88 + 1088);
    }
    v89 = v140;
    v90 = PerfDomain;
    v91 = v151;
    *((_QWORD *)v5 + 52) = v5 + 432;
    v92 = (__int64)&v5[v83];
    *(_DWORD *)v5 = 56;
    *((_DWORD *)v5 + 4) = v90;
    *((_DWORD *)v5 + 9) = v84;
    *((_QWORD *)v5 + 51) = v92;
    *((_QWORD *)v5 + 53) = &v5[v85];
    *((_WORD *)v5 + 2) = v91;
    if ( v89 )
    {
      *((_QWORD *)v5 + 42) = v152;
      *((_QWORD *)v5 + 43) = v155;
      if ( (_BYTE)NumberOfBytes_4 && v156 )
      {
        v93 = v122;
        if ( v91 == 254 )
        {
          *((_QWORD *)v5 + 44) = v156;
          *((_QWORD *)v5 + 9) = v11;
        }
      }
      else
      {
        v93 = v122;
      }
LABEL_194:
      v95 = v153;
      if ( v89 )
      {
LABEL_196:
        *((_QWORD *)v5 + 41) = v95;
        if ( (_BYTE)v134 )
        {
          if ( v124 )
            *((_QWORD *)v5 + 45) = CpcReadFeedback;
          if ( v126 )
          {
            *((_QWORD *)v5 + 46) = CpcAcquirePerformance;
            *((_QWORD *)v5 + 47) = CpcCommitPerformance;
          }
          if ( v129 )
          {
            *((_QWORD *)v5 + 38) = AcquirePccSubspace;
            *((_QWORD *)v5 + 39) = ExecutePccWrite;
          }
          v96 = *(_DWORD *)(qword_1C0011918 + 68);
          if ( v96 )
          {
            v88 = v150;
            *((_DWORD *)v5 + 10) = 0x989680 / (v96 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v88 + 264) & 0x4000000000LL) != 0 )
          *((_QWORD *)v5 + 40) = CpcReinitializeHandler;
        v5[6] = 0;
        v97 = v93 || v89;
        v5[7] = v97;
        v5[8] = v127;
        v5[44] = v131;
        *((_DWORD *)v5 + 5) = v138;
        *((_DWORD *)v5 + 6) = *((_DWORD *)v11 + 17);
        v98 = *((_DWORD *)v11 + 19);
        *((_DWORD *)v5 + 7) = v98;
        v99 = *((_DWORD *)v11 + 20);
        if ( !v98 )
          v98 = 1;
        *((_DWORD *)v5 + 7) = v98;
        if ( !v99 )
          v99 = 1;
        *((_DWORD *)v5 + 8) = v99;
        *((_QWORD *)v5 + 6) = *(_QWORD *)v82;
        *((_QWORD *)v5 + 7) = *((_QWORD *)v11 + 2);
        v100 = *(_QWORD *)(v88 + 320);
        if ( v100 )
          *((_QWORD *)v5 + 31) = v100;
        *((_QWORD *)v5 + 33) = *(_QWORD *)(v88 + 328);
        if ( v89 )
        {
          if ( (_BYTE)v141 )
            v5[9] = 1;
          if ( (_BYTE)v142 )
            v5[10] = 1;
        }
        else
        {
          if ( (_BYTE)v141 )
            *((_QWORD *)v5 + 35) = CpcSetEnergyPerfPreference;
          if ( (_BYTE)v142 )
            *((_QWORD *)v5 + 36) = CpcSetAutonomousActivityWindow;
        }
        if ( v132 )
          *((_QWORD *)v5 + 37) = CpcSetAutonomousMode;
        if ( v133 )
          *((_QWORD *)v5 + 32) = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v88 + 264) & 0x400000) != 0 && v89 && (v91 == 254 || v90 == 1) )
          *(_WORD *)(v5 + 11) = 257;
        v101 = *((_QWORD *)v11 + 2);
        v102 = *((_QWORD *)v11 + 5);
        if ( v101 == v102 )
        {
          LODWORD(v103) = 100;
        }
        else
        {
          v104 = 100 * v102;
          v103 = 100 * v102 / v101;
          v88 = v104 % v101;
        }
        *(_DWORD *)(v92 + 8) = v103;
        *(_QWORD *)v92 = PerfReadWrappingCounter;
        *(_DWORD *)(v92 + 12) = 1;
        *(_BYTE *)(v92 + 17) = 1;
        *(_BYTE *)(v92 + 16) = v124 == 0;
        if ( (_BYTE)v135 )
        {
          v105 = *((_QWORD *)v5 + 51);
          *(_QWORD *)(v105 + 32) = 100LL;
          *(_QWORD *)(v105 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v105 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v5, v88, v92);
        v106 = *((_QWORD *)v5 + 52);
        v107 = (_QWORD *)*((_QWORD *)v5 + 53);
        ResetEnumerationContext(v148);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
        {
          v108 = v150;
          do
          {
            v109 = (_BYTE *)*((_QWORD *)v82 + 10);
            v110 = 100;
            v111 = DeferredContext;
            v143 = v109;
            if ( v82[67] )
            {
              v112 = (__int64)(v109 + 56);
              if ( v109[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v113 = &PreviousAffinity;
                if ( v123 )
                  v113 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v113);
                v123 = 1;
              }
              v114 = ReadGenAddrMaybeHidden((__int64)v111, v112);
              v115 = *((_QWORD *)v82 - 2);
              if ( v114 > v115 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Bu,
                  (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
                v114 = *((_QWORD *)v82 - 2);
                v115 = v114;
              }
              if ( v114 < *(_QWORD *)v82 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Cu,
                  (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
                v114 = *(_QWORD *)v82;
                v115 = *((_QWORD *)v82 - 2);
              }
              v110 = *((_DWORD *)v82 + 12);
              *((_QWORD *)v82 + 3) = v114;
              v116 = 100 * v114 / v115;
              if ( (unsigned int)v116 > v110 )
                v110 = v116;
              *((_DWORD *)v82 + 13) = v110;
              if ( v110 != v111[177] )
                ProcLibCapChange(v108, (unsigned int)v111[108], (unsigned int)v111[120], v110);
              v109 = v143;
            }
            *((_QWORD *)v82 - 4) = v111;
            *(_QWORD *)(v106 + 8) = v82 - 32;
            if ( *((_BYTE *)v111 + 78) )
            {
              v117 = v111[20];
              *(_BYTE *)(v106 + 28) = 1;
            }
            else
            {
              v117 = v111[14];
            }
            *(_DWORD *)v106 = v117;
            *(_DWORD *)(v106 + 20) = v111[176];
            *(_DWORD *)(v106 + 16) = v110;
            *(_DWORD *)(v106 + 24) = v110 < 0x64 ? 2 : 0;
            *v107 = v82 + 128;
            *((_QWORD *)v82 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v82 + 23) = v109;
            v118 = v109[153];
            if ( v118 < 0x40u )
              *((_QWORD *)v82 + 20) = (1LL << v118) - 1;
            v119 = v109[141];
            if ( v119 < 0x40u )
              *((_QWORD *)v82 + 21) = (1LL << v119) - 1;
            ++v107;
            if ( (_BYTE)v135 )
            {
              *v107++ = v82 + 192;
              *((_QWORD *)v82 + 30) = *((_QWORD *)v111 + 39);
            }
            v106 += 32LL;
            v82 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) );
          v5 = v147;
          v11 = v154;
        }
        if ( v123 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v8 = v157(v5, v139);
        if ( v8 >= 0 )
        {
          ResetEnumerationContext(v148);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v11;
            v11 += 368;
          }
          if ( (*(_QWORD *)(v150 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v148);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v148, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v11 = 0LL;
          v8 = 0;
        }
        goto LABEL_281;
      }
LABEL_195:
      v95 = PerfSelectionCpc;
      goto LABEL_196;
    }
    v93 = v122;
    if ( v122 )
    {
      if ( v125 )
      {
        *((_QWORD *)v5 + 42) = PerfControlCpcSingleRegister;
        v94 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        *((_QWORD *)v5 + 42) = PerfControlCpc;
        v94 = (void *)qword_1C0011588;
        if ( !qword_1C0011588 || !CpcHiddenProcessorMitigationReported )
        {
          *((_QWORD *)v5 + 43) = PerfControlCpcHidden;
          goto LABEL_194;
        }
      }
    }
    else
    {
      v94 = AcpiCStateIdleCancel;
      *((_QWORD *)v5 + 42) = AcpiCStateIdleCancel;
    }
    *((_QWORD *)v5 + 43) = v94;
    goto LABEL_195;
  }
LABEL_6:
  v8 = -1073741670;
LABEL_281:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72637250u);
  return (unsigned int)v8;
}
