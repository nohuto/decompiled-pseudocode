/*
 * XREFs of sub_180039360 @ 0x180039360
 * Callers:
 *     sub_1800103FC @ 0x1800103FC (sub_1800103FC.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_18003B6FC @ 0x18003B6FC (sub_18003B6FC.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_180071914 @ 0x180071914 (sub_180071914.c)
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 *     sub_1800D0728 @ 0x1800D0728 (sub_1800D0728.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall sub_180039360(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned __int16 *v9; // r12
  _WORD *v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  ULONG_PTR ActiveFrame; // rcx
  unsigned int v19; // esi
  bool v20; // bl
  _DWORD *ApiSetMap; // rsi
  _DWORD *HotpatchInformation; // rcx
  __int64 v23; // rcx
  char v24; // r12
  unsigned __int16 v25; // di
  unsigned __int16 *v26; // r10
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  _WORD *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // esi
  unsigned __int16 *v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int16 *v34; // r9
  _QWORD **v35; // rdi
  char v36; // cl
  _QWORD *j; // r14
  volatile signed __int32 *v38; // rbx
  unsigned __int64 v39; // r10
  __int64 v40; // rax
  signed __int64 v41; // rax
  _DWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // rbx
  unsigned __int64 v47; // rdx
  unsigned __int64 *v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // eax
  signed __int64 v52; // rax
  __int64 v53; // r15
  int v54; // esi
  __int64 v55; // r9
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r14
  __int64 v58; // rcx
  unsigned __int64 *v59; // r8
  unsigned __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // r15
  unsigned __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // rax
  signed __int64 v66; // rax
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  _QWORD *v70; // rbx
  _QWORD *v71; // rdi
  volatile signed __int32 *v72; // rcx
  _QWORD *v73; // rdx
  _QWORD *v74; // rax
  unsigned __int64 *v75; // rdx
  unsigned __int64 *v76; // r8
  bool v77; // zf
  int v78; // eax
  signed __int64 v79; // r8
  __int64 v80; // rdx
  signed __int64 v81; // rdx
  signed __int64 v82; // rtt
  signed __int64 v83; // rcx
  __int64 v84; // rdx
  signed __int64 v85; // rtt
  signed __int64 v86; // rcx
  __int64 v87; // rdx
  signed __int64 v88; // rtt
  unsigned __int16 v89; // di
  unsigned int v90; // r11d
  unsigned int v91; // eax
  unsigned __int16 *v92; // r8
  unsigned __int16 v93; // r9
  unsigned int *v94; // r15
  int v95; // ebx
  int v96; // r9d
  int v97; // r8d
  unsigned int *v98; // rcx
  unsigned __int16 *v99; // rdx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rbx
  int v102; // edi
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r9
  int v105; // r8d
  __int64 v106; // rcx
  _DWORD *v107; // rcx
  __int64 v108; // rcx
  _DWORD *v109; // rcx
  __int64 v110; // rdi
  unsigned __int64 v111; // rbx
  __int64 v112; // rbx
  __int16 v113; // ax
  unsigned int v114; // ecx
  int v115; // esi
  unsigned int v116; // ecx
  int v117; // ebx
  char *v118; // rcx
  unsigned int v119; // ecx
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v121; // rdx
  int *v122; // rbx
  unsigned __int64 v123; // rdx
  _WORD *v124; // rax
  __int16 v125; // cx
  _WORD *v126; // rcx
  unsigned int v127; // r13d
  unsigned __int64 *i; // r8
  unsigned __int64 v129; // rdx
  __int16 v130; // cx
  __int64 v131; // r9
  int v132; // r11d
  unsigned __int16 v134; // r10
  int v135; // eax
  __int64 Heap; // rax
  int v137; // ebx
  __int64 v138; // r8
  _WORD *v139; // rax
  char *v140; // rcx
  char *v141; // rcx
  unsigned int v142; // r15d
  unsigned int v143; // eax
  void *v144; // r12
  unsigned int v145; // edi
  unsigned int v146; // eax
  void *v147; // rsi
  unsigned int v148; // r15d
  unsigned int v149; // eax
  void *v150; // r14
  const char *v151; // rax
  char *v152; // rax
  __int64 v153; // rbx
  __int64 v154; // rax
  _WORD *v156; // rax
  __int64 v157; // [rsp+30h] [rbp-578h]
  char v158; // [rsp+51h] [rbp-557h]
  int v159; // [rsp+54h] [rbp-554h]
  __int16 v160; // [rsp+58h] [rbp-550h]
  unsigned __int8 v161; // [rsp+BCh] [rbp-4ECh]
  unsigned __int16 v164; // [rsp+D8h] [rbp-4D0h]
  char *Src; // [rsp+E0h] [rbp-4C8h]
  int v166; // [rsp+E8h] [rbp-4C0h]
  __int64 v168; // [rsp+138h] [rbp-470h]
  struct _PEB *v169; // [rsp+150h] [rbp-458h]
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp-450h] BYREF
  __int16 v171; // [rsp+168h] [rbp-440h]
  __int16 v172; // [rsp+16Ah] [rbp-43Eh]
  __int64 v173; // [rsp+170h] [rbp-438h]
  _WORD *v174; // [rsp+178h] [rbp-430h]
  unsigned __int16 *v175; // [rsp+180h] [rbp-428h]
  unsigned __int16 *v176; // [rsp+188h] [rbp-420h]
  unsigned __int16 *v177; // [rsp+190h] [rbp-418h]
  __int64 v178; // [rsp+198h] [rbp-410h]
  void *v179; // [rsp+1A0h] [rbp-408h]
  void *v180; // [rsp+1A8h] [rbp-400h]
  void *v181; // [rsp+1B0h] [rbp-3F8h]
  int *v182; // [rsp+1B8h] [rbp-3F0h]
  _WORD *v183; // [rsp+1C0h] [rbp-3E8h]
  _WORD *v184; // [rsp+1C8h] [rbp-3E0h]
  _WORD *v185; // [rsp+1D0h] [rbp-3D8h]
  unsigned __int64 *v186; // [rsp+1D8h] [rbp-3D0h]
  unsigned __int16 *v187; // [rsp+1E0h] [rbp-3C8h]
  unsigned __int16 *v188; // [rsp+1E8h] [rbp-3C0h]
  unsigned __int64 v189; // [rsp+1F0h] [rbp-3B8h]
  unsigned __int64 v190; // [rsp+1F8h] [rbp-3B0h]
  unsigned __int64 v191; // [rsp+200h] [rbp-3A8h]
  int v192; // [rsp+208h] [rbp-3A0h]
  int v193; // [rsp+20Ch] [rbp-39Ch]
  int v194; // [rsp+210h] [rbp-398h]
  __int64 v195; // [rsp+220h] [rbp-388h] BYREF
  int v196; // [rsp+228h] [rbp-380h]
  _QWORD v197[7]; // [rsp+230h] [rbp-378h] BYREF
  _BYTE v198[16]; // [rsp+270h] [rbp-338h] BYREF
  __int16 v199; // [rsp+280h] [rbp-328h]
  __int16 v200; // [rsp+282h] [rbp-326h]
  unsigned __int64 *v201; // [rsp+288h] [rbp-320h]
  __int64 v202; // [rsp+290h] [rbp-318h]
  struct _TEB *v203; // [rsp+298h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2A0h] [rbp-308h] BYREF
  int v205; // [rsp+340h] [rbp-268h] BYREF
  void *v206; // [rsp+348h] [rbp-260h]
  _WORD v207[128]; // [rsp+350h] [rbp-258h] BYREF
  int v208; // [rsp+450h] [rbp-158h] BYREF
  void *v209; // [rsp+458h] [rbp-150h]
  _WORD v210[128]; // [rsp+460h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5A8h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  v9 = a5;
  v206 = v207;
  v205 = 0x1000000;
  v207[0] = 0;
  v10 = v210;
  v209 = v210;
  v11 = 0;
  v208 = 0x1000000;
  LOWORD(v12) = 256;
  v210[0] = 0;
  v13 = 0;
  if ( !SourceString->Length )
    goto LABEL_8;
  if ( NlsMbCodePageTag )
  {
    v14 = RtlxOemStringToUnicodeSize();
    v10 = v209;
    LOWORD(v12) = HIWORD(v208);
    v11 = v208;
  }
  else
  {
    v14 = 2 * SourceString->Length + 2;
  }
  v15 = v14 + v11;
  v13 = 0;
  if ( v15 > (unsigned __int16)v12 )
  {
    if ( v15 > 0xFFFE )
    {
      v13 = -1073741562;
      goto LABEL_5;
    }
    v12 = (v15 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v210 )
    {
      v156 = (_WORD *)sub_18003B5E0(v12);
      v10 = v156;
      if ( v156 )
      {
        v11 = v208;
        if ( !(_WORD)v208 )
          goto LABEL_392;
        memmove(v156, v209, (unsigned __int16)v208);
      }
    }
    else
    {
      v10 = (_WORD *)sub_1800D0728(v12, v10);
    }
    v11 = v208;
LABEL_392:
    if ( v10 )
    {
      v209 = v10;
      HIWORD(v208) = v12;
    }
    else
    {
      v13 = -1073741801;
      v10 = v209;
      LOWORD(v12) = HIWORD(v208);
    }
  }
LABEL_5:
  if ( v13 >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v208) = DestinationString.Length + v208;
    v10 = v209;
  }
  v6 = a3;
LABEL_8:
  if ( v13 >= 0 )
  {
    v195 = 72LL;
    v196 = 1;
    memset(v197, 0, sizeof(v197));
    v16 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
    if ( ActivationContextStackPointer )
      ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
    else
      ActiveFrame = 0LL;
    v197[3] = ~ActiveFrame;
    v197[4] = ~v16;
    v197[5] = retaddr;
    if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
    {
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
      ExceptionRecord.ExceptionCode = -1072365548;
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      goto LABEL_15;
    }
    v197[0] = ActiveFrame;
    v197[1] = v16;
    LODWORD(v197[2]) = 32;
    if ( ActiveFrame )
    {
      if ( *(_QWORD *)(ActiveFrame + 8) == v16 )
        goto LABEL_14;
    }
    else if ( !v16 )
    {
LABEL_14:
      LODWORD(v197[2]) = 48;
      goto LABEL_15;
    }
    ActivationContextStackPointer->ActiveFrame = (struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v197;
LABEL_15:
    v19 = *(_DWORD *)(v7 + 32) & 0x800000;
    v160 = v19;
    v13 = 0;
    v158 = 0;
    if ( v19 )
      goto LABEL_201;
    v169 = NtCurrentPeb();
    v158 = 0;
    v20 = 1;
    ApiSetMap = v169->ApiSetMap;
    HotpatchInformation = v169->HotpatchInformation;
    if ( HotpatchInformation && *HotpatchInformation )
      v23 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v140 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->HotpatchInformation + 555
           : (char *)2147353477;
      if ( (*v140 & 0x20) != 0 )
        sub_1800CBAB0(5328, 0, 0, 0, (__int64)&v208, 0LL);
    }
    v164 = 0;
    Src = 0LL;
    v24 = 0;
    v25 = v208;
    if ( (unsigned __int16)v208 >= 8u )
    {
      v26 = (unsigned __int16 *)v209;
      v27 = *(_QWORD *)v209 & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v27 == 0x2D004900500041LL || v27 == 0x2D005400580045LL )
      {
        v28 = (unsigned __int16)v208;
        v29 = (char *)v209 + (unsigned __int16)v208;
        v174 = v29;
        v30 = (unsigned __int16)v208;
        do
        {
          if ( v30 <= 1 )
            break;
          v28 -= 2;
          v30 = v28;
          v25 = v28;
          v174 = --v29;
        }
        while ( *v29 != 45 );
        v89 = v25 >> 1;
        if ( v89 )
        {
          v90 = 0;
          v91 = 0;
          v92 = (unsigned __int16 *)v209;
          v175 = (unsigned __int16 *)v209;
          while ( v91 < v89 )
          {
            v93 = *v92;
            if ( (unsigned __int16)(*v92 - 65) <= 0x19u )
              v93 += 32;
            v90 = v90 * ApiSetMap[6] + v93;
            ++v91;
            v175 = ++v92;
          }
          v94 = 0LL;
          v95 = 0;
          v96 = ApiSetMap[3] - 1;
          while ( v95 <= v96 )
          {
            v97 = (v96 + v95) >> 1;
            v98 = (_DWORD *)((char *)&ApiSetMap[2 * v97] + (unsigned int)ApiSetMap[5]);
            if ( v90 < *v98 )
            {
              v96 = v97 - 1;
            }
            else
            {
              if ( v90 <= *v98 )
              {
                v94 = (_DWORD *)((char *)&ApiSetMap[6 * v98[1]] + (unsigned int)ApiSetMap[4]);
                break;
              }
              v95 = v97 + 1;
            }
          }
          if ( v94 )
          {
            v99 = (unsigned __int16 *)((char *)ApiSetMap + v94[1]);
            LODWORD(v100) = v94[3] >> 1;
            v176 = (unsigned __int16 *)v209;
            v177 = v99;
            v101 = v89;
            v102 = v100;
            v100 = v101 > (unsigned int)v100 ? (unsigned int)v100 : (unsigned int)v101;
            while ( 1 )
            {
              if ( v26 >= (unsigned __int16 *)((char *)v209 + 2 * v100) )
              {
                v105 = v101 - v102;
                goto LABEL_164;
              }
              v103 = *v26;
              v104 = *v99;
              if ( (_DWORD)v103 != (_DWORD)v104 )
              {
                if ( (unsigned int)v103 >= 0x61 )
                {
                  if ( (unsigned int)v103 > 0x7A )
                    LODWORD(v103) = (unsigned __int16)(v103
                                                     + *(_WORD *)(qword_18015B238
                                                                + 2
                                                                * ((v103 & 0xF)
                                                                 + *(unsigned __int16 *)(qword_18015B238
                                                                                       + 2LL
                                                                                       * (((unsigned __int8)v103 >> 4)
                                                                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v103 >> 8)))))));
                  else
                    LODWORD(v103) = v103 - 32;
                }
                if ( (unsigned int)v104 >= 0x61 )
                {
                  if ( (unsigned int)v104 > 0x7A )
                    LODWORD(v104) = (unsigned __int16)(v104
                                                     + *(_WORD *)(qword_18015B238
                                                                + 2
                                                                * ((v104 & 0xF)
                                                                 + *(unsigned __int16 *)(qword_18015B238
                                                                                       + 2LL
                                                                                       * (((unsigned __int8)v104 >> 4)
                                                                                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v104 >> 8)))))));
                  else
                    LODWORD(v104) = v104 - 32;
                }
                if ( (_DWORD)v103 != (_DWORD)v104 )
                  break;
              }
              v176 = ++v26;
              v177 = ++v99;
            }
            v105 = v103 - v104;
LABEL_164:
            if ( !v105 )
            {
              if ( a3 != -88 && v94[5] > 1 )
              {
                v106 = sub_18003B6FC(v94, *(_QWORD *)(a3 + 96), *(_WORD *)(a3 + 88) >> 1, ApiSetMap);
                goto LABEL_169;
              }
              if ( v94[5] )
              {
                v106 = (__int64)ApiSetMap + v94[4];
LABEL_169:
                Src = (char *)ApiSetMap + *(unsigned int *)(v106 + 12);
                v164 = *(_WORD *)(v106 + 16);
                v24 = 1;
                v20 = 1;
                goto LABEL_170;
              }
            }
          }
          v20 = 1;
        }
      }
    }
LABEL_170:
    if ( v24 )
    {
      if ( v164 )
      {
        v107 = NtCurrentPeb()->HotpatchInformation;
        if ( v107 && *v107 )
          v108 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        else
          v108 = 2147353476LL;
        if ( *(_BYTE *)v108 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v141 = (unsigned int)RtlGetCurrentServiceSessionId()
               ? (char *)NtCurrentPeb()->HotpatchInformation + 555
               : (char *)2147353477;
          if ( (*v141 & 0x20) != 0 )
            sub_1800CBAB0(5329, 0, 0, 0, (__int64)&v208, 0LL);
        }
LABEL_175:
        v13 = 0;
        if ( v24 )
        {
          if ( !v164 )
          {
            v13 = -1073740671;
LABEL_200:
            v19 = 0;
            v9 = a5;
            v7 = a2;
LABEL_201:
            if ( v13 < 0 )
              goto LABEL_339;
            v122 = &v208;
            v182 = &v208;
            if ( !(_WORD)v205 )
            {
              v139 = (char *)v209 + (unsigned __int16)v208;
              v183 = v139;
              while ( 1 )
              {
                v183 = --v139;
                if ( v139 < v209 )
                  break;
                if ( *v139 == 92 || *v139 == 47 )
                {
                  if ( (unsigned int)sub_18003E414(&v208) != 5 )
                  {
                    v13 = sub_18003FB24(&v208, &v205);
                    if ( v13 >= 0 )
                    {
                      v19 |= 0x600u;
                      v160 = v19;
                    }
                    goto LABEL_207;
                  }
LABEL_255:
                  v13 = sub_18003BE6C(&v205, &v208);
                  goto LABEL_207;
                }
              }
              v19 |= 0x20u;
              v160 = v19;
              goto LABEL_255;
            }
            if ( (dword_180156A70 & 5) != 0 )
            {
              v151 = "SxS";
              if ( !v158 )
                v151 = "API set";
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                2590,
                (unsigned int)"LdrpPreprocessDllName",
                2,
                "DLL %wZ was redirected to %wZ by %s\n",
                &v208,
                &v205,
                v151);
            }
            v19 |= 0x200u;
            v160 = v19;
            if ( v158 )
            {
              v19 |= 4u;
              v160 = v19;
            }
            v122 = &v205;
            v182 = &v205;
LABEL_207:
            if ( v13 < 0 )
              goto LABEL_339;
            v123 = *((_QWORD *)v122 + 1);
            v124 = (_WORD *)(v123 + *(unsigned __int16 *)v122);
            v184 = v124;
            while ( 1 )
            {
              v184 = --v124;
              if ( (unsigned __int64)v124 < v123 )
              {
LABEL_257:
                v13 = sub_18003BE6C(&v205, L"\b\n");
                goto LABEL_218;
              }
              v125 = *v124;
              if ( *v124 == 46 )
                break;
              if ( v125 == 47 || v125 == 92 )
                goto LABEL_257;
            }
            v126 = (char *)v206 + (unsigned __int16)v205;
            v185 = v126;
            while ( 1 )
            {
              v185 = --v126;
              if ( v126 < v206 || *v126 != 46 )
                break;
              LOWORD(v205) = v205 - 2;
            }
            v126[1] = 0;
LABEL_218:
            if ( v13 < 0 )
            {
LABEL_339:
              if ( (dword_180156A70 & 3) != 0 )
              {
                LODWORD(v157) = v13;
                sub_1800CA554(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2648,
                  (unsigned int)"LdrpPreprocessDllName",
                  0,
                  "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                  &v208,
                  v157);
              }
              if ( (dword_180156A70 & 0x10) != 0 )
                __debugbreak();
            }
            if ( v13 < 0 )
              goto LABEL_369;
            if ( (v19 & 0x800000) != 0 )
            {
              v13 = sub_1800CA0F0(
                      *(_QWORD *)(v7 + 168),
                      (unsigned int)&v205,
                      *(_QWORD *)(v7 + 16),
                      v19,
                      a3,
                      (__int64)v9,
                      *(_QWORD *)(v7 + 40));
              goto LABEL_369;
            }
            if ( !*a6 )
            {
              v193 = dword_18015C294 + 2621440;
              Heap = RtlAllocateHeap(qword_18015C288, dword_18015C294 + 2621440, 32LL);
              *a6 = Heap;
              if ( !Heap )
              {
                v13 = -1073741801;
LABEL_369:
                RtlDeactivateActivationContextUnsafeFast(&v195);
                v10 = v209;
                goto LABEL_370;
              }
            }
            v44 = *(_QWORD *)(v7 + 40);
            v168 = v44;
            v127 = v19;
            v45 = *(_QWORD *)(a2 + 16);
            v166 = v45;
            *(_QWORD *)v9 = 0LL;
            if ( (v19 & 0x20) != 0 )
            {
              v13 = sub_1800385D0((unsigned __int16 *)&v205, 0LL, (unsigned __int64 *)v19, v9, 0LL);
            }
            else
            {
              if ( (v19 & 0x200) == 0 )
                goto LABEL_123;
              for ( i = (unsigned __int64 *)((char *)v206 + (unsigned __int16)v205 - 2);
                    ;
                    i = (unsigned __int64 *)((char *)i - 2) )
              {
                v129 = (unsigned __int16)i;
                v130 = (__int16)i;
                if ( i <= v206 )
                  break;
                if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
                {
                  i = (unsigned __int64 *)((char *)i + 2);
                  v129 = (unsigned __int16)(v130 + 2);
                  break;
                }
              }
              LOWORD(v129) = v129 - (_WORD)v206;
              v201 = i;
              v199 = v205 - v129;
              v200 = HIWORD(v205) - v129;
              v131 = 0LL;
              v186 = i;
              v132 = (unsigned __int16)(v205 - v129) >> 1;
              while ( v132-- )
              {
                v134 = *(_WORD *)i;
                i = (unsigned __int64 *)((char *)i + 2);
                v186 = i;
                if ( v134 < 0x61u )
                {
                  v135 = v134;
                }
                else if ( v134 > 0x7Au )
                {
                  v129 = v134 & 0xF;
                  v135 = (unsigned __int16)(v134
                                          + *(_WORD *)(qword_18015B238
                                                     + 2LL
                                                     * ((unsigned int)v129
                                                      + *(unsigned __int16 *)(qword_18015B238
                                                                            + 2LL
                                                                            * (((v134 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * ((unsigned __int64)v134 >> 8)))))));
                }
                else
                {
                  v135 = v134 - 32;
                }
                v131 = (unsigned int)(v135 + 65599 * v131);
              }
              v31 = v131;
              if ( !(_DWORD)v131 )
                v31 = 0x80000000;
              RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v129, i, v131);
              v35 = (_QWORD **)((char *)&unk_18015BFC0 + 16 * (v31 & 0x1F));
              v36 = 0;
              for ( j = *v35; j != v35; j = (_QWORD *)*j )
              {
                v38 = (volatile signed __int32 *)(j - 14);
                if ( v31 == *((_DWORD *)j + 38) && ((v127 & 8) == 0 || (v38[26] & 1) != 0) )
                {
                  if ( (unsigned __int16)v205 == *((unsigned __int16 *)v38 + 36) )
                  {
                    v32 = (unsigned __int16 *)v206;
                    v187 = (unsigned __int16 *)v206;
                    v34 = (unsigned __int16 *)*((_QWORD *)v38 + 10);
                    v188 = v34;
                    while ( v32 < (unsigned __int16 *)((char *)v206 + (unsigned __int16)v205) )
                    {
                      v33 = *v32;
                      v194 = v33;
                      v39 = *v34;
                      if ( (_DWORD)v33 != (_DWORD)v39 )
                      {
                        if ( (unsigned int)v33 >= 0x61 )
                        {
                          if ( (unsigned int)v33 > 0x7A )
                            v33 = (unsigned __int16)(v33
                                                   + *(_WORD *)(qword_18015B238
                                                              + 2
                                                              * ((v33 & 0xF)
                                                               + *(unsigned __int16 *)(qword_18015B238
                                                                                     + 2LL
                                                                                     * (((unsigned __int8)v33 >> 4)
                                                                                      + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v33 >> 8)))))));
                          else
                            v33 = (unsigned int)(v33 - 32);
                        }
                        if ( (unsigned int)v39 >= 0x61 )
                        {
                          if ( (unsigned int)v39 > 0x7A )
                            LODWORD(v39) = (unsigned __int16)(v39
                                                            + *(_WORD *)(qword_18015B238
                                                                       + 2
                                                                       * ((v39 & 0xF)
                                                                        + *(unsigned __int16 *)(qword_18015B238
                                                                                              + 2LL
                                                                                              * (((unsigned __int8)v39 >> 4)
                                                                                               + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v39 >> 8)))))));
                          else
                            LODWORD(v39) = v39 - 32;
                        }
                        if ( (_DWORD)v33 != (_DWORD)v39 )
                          goto LABEL_41;
                      }
                      v187 = ++v32;
                      v188 = ++v34;
                    }
                    v36 = 1;
                    v40 = *((_QWORD *)v38 + 19);
                    if ( *(_DWORD *)(v40 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v40 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement(v38 + 69);
                    *(_QWORD *)a5 = v38;
                    break;
                  }
LABEL_41:
                  v36 = 0;
                }
              }
              if ( v36 )
                v13 = 0;
              else
                v13 = -1073741515;
              v41 = _InterlockedCompareExchange64(&qword_18015D070, 0LL, 1LL);
              if ( v41 != 1 )
              {
                do
                {
                  v83 = v41 & 6;
                  v84 = 3LL;
                  if ( v83 != 2 )
                    v84 = -1LL;
                  v32 = (unsigned __int16 *)(v41 + v84);
                  v85 = v41;
                  v41 = _InterlockedCompareExchange64(&qword_18015D070, (signed __int64)v32, v41);
                }
                while ( v85 != v41 );
                if ( v83 == 2 )
                  sub_180070AAC(&qword_18015D070, v32, 0LL);
              }
              if ( v13 < 0 )
                v161 = 3;
              else
                v161 = 0;
              v42 = NtCurrentPeb()->HotpatchInformation;
              if ( v42 && *v42 )
                v43 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
              else
                v43 = 2147353476LL;
              if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
              {
                v152 = (unsigned int)RtlGetCurrentServiceSessionId()
                     ? (char *)NtCurrentPeb()->HotpatchInformation + 555
                     : (char *)2147353477;
                if ( (*v152 & 0x20) != 0 )
                  sub_1800CBAB0(5280, 0, 0, v161, (__int64)&v205, 0LL);
              }
              LOWORD(v19) = v160;
              v44 = v168;
              LODWORD(v45) = v166;
            }
            if ( v13 != -1073741515 )
            {
              v46 = *(_QWORD *)a5;
              RtlAcquireSRWLockExclusive(
                (unsigned __int64)&qword_18015D070,
                (unsigned __int64)v32,
                (unsigned __int64 *)v33,
                (__int64)v34);
              v50 = *(_QWORD *)(v46 + 152);
              v51 = *(_DWORD *)(v50 + 24);
              if ( v51 != -1 )
              {
                if ( v51 )
                {
                  *(_DWORD *)(v50 + 24) = v51 + 1;
                }
                else
                {
                  v203 = NtCurrentTeb();
                  if ( (v203->SameTebFlags & 0x1000) != 0 )
                    ++*(_DWORD *)(v50 + 28);
                }
              }
              v52 = _InterlockedCompareExchange64(&qword_18015D070, 0LL, 1LL);
              if ( v52 != 1 )
              {
                do
                {
                  v86 = v52 & 6;
                  v87 = 3LL;
                  if ( v86 != 2 )
                    v87 = -1LL;
                  v47 = v52 + v87;
                  v88 = v52;
                  v52 = _InterlockedCompareExchange64(&qword_18015D070, v47, v52);
                }
                while ( v88 != v52 );
                if ( v86 == 2 )
                  sub_180070AAC(&qword_18015D070, v47, 0LL);
              }
              LOWORD(v19) = v160;
              v53 = (__int64)a5;
              goto LABEL_60;
            }
LABEL_123:
            v53 = (__int64)a5;
            v13 = sub_180040E38((unsigned int)&v205, v45, v127, a4, a3, (__int64)a5, v44);
            if ( v13 >= 0 )
              v13 = sub_180040514(*(_QWORD *)(*(_QWORD *)a5 + 176LL));
LABEL_60:
            v159 = v13;
            if ( !*(_QWORD *)v53 )
            {
              v9 = a5;
              v7 = a2;
              goto LABEL_369;
            }
            v54 = v19 & 0x400;
            if ( v54 && v13 == -1073741515 )
            {
              v153 = *(_QWORD *)(*(_QWORD *)v53 + 176LL);
              v202 = v153;
              *(_DWORD *)(v153 + 32) |= 0x4000000u;
              LOBYTE(v47) = 1;
              sub_1800426E8(v153, v47);
              v13 = **(_DWORD **)(v153 + 40);
              v159 = v13;
            }
            RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v47, v48, v49);
            v56 = *(_QWORD *)v53;
            v57 = v56;
            v189 = *(_QWORD *)v53;
            if ( v56 )
            {
              v58 = *(_QWORD *)(v56 + 176);
              if ( v58 )
              {
                if ( (*(_DWORD *)(v58 + 32) & 0x80000) == 0 && *(_QWORD *)(v58 + 56) != v56 )
                {
                  v57 = *(_QWORD *)(v58 + 56);
                  v189 = v57;
                  *(_QWORD *)(v58 + 56) = v56;
                }
              }
            }
            v191 = v57;
            v59 = a6;
            *(_DWORD *)(*a6 + 24) &= ~1u;
            v60 = *a6;
            v7 = a2;
            v61 = *(_QWORD *)(v57 + 152);
            v62 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL);
            if ( v62 != v61
              && (*(_DWORD *)(v61 + 56) != 9
               || *(_DWORD *)(v61 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v61 - 56LL) & 0x20) == 0) )
            {
              v73 = *(_QWORD **)(v62 + 40);
              if ( !v73 )
              {
LABEL_103:
                if ( !v60 )
                {
                  v192 = dword_18015C294 + 2359296;
                  v154 = RtlAllocateHeap(qword_18015C288, dword_18015C294 + 2359296, 32LL);
                  v60 = v154;
                  if ( !v154 )
                  {
                    MEMORY[0] = -1073741801;
                    v60 = 0LL;
                    v59 = a6;
                    goto LABEL_69;
                  }
                  *(_DWORD *)(v154 + 24) |= 1u;
                }
                v75 = *(unsigned __int64 **)(v62 + 40);
                if ( v75 )
                {
                  *(_QWORD *)v60 = *v75;
                  *v75 = v60;
                }
                else
                {
                  *(_QWORD *)v60 = v60;
                }
                *(_QWORD *)(v62 + 40) = v60;
                *(_QWORD *)(v60 + 8) = v61;
                v63 = v60 + 16;
                v76 = *(unsigned __int64 **)(v61 + 48);
                if ( v76 )
                {
                  *(_QWORD *)v63 = *v76;
                  *v76 = v63;
                }
                else
                {
                  *(_QWORD *)v63 = v63;
                }
                *(_QWORD *)(v61 + 48) = v63;
                v77 = (*(_DWORD *)(v60 + 24) & 1) == 0;
                v78 = *(_DWORD *)(v60 + 24) & 1;
                *(_QWORD *)(v60 + 24) = v62;
                if ( !v77 )
                  *(_DWORD *)(v60 + 24) = v78 | v62 & 0xFFFFFFFE;
                v60 = 0LL;
                v59 = a6;
LABEL_69:
                v190 = v60;
                *v59 = v60;
                if ( v13 == -1073741515 )
                {
                  v13 = -1073741515;
                  if ( !v54 )
                  {
                    sub_1800709B0(*(_QWORD *)(v57 + 176));
                    v159 = 0;
                    v59 = a6;
                    goto LABEL_72;
                  }
                }
                else if ( v13 == -1073741267 )
                {
                  v159 = 0;
                  goto LABEL_72;
                }
                if ( v13 < 0 )
                {
LABEL_75:
                  v65 = *(_QWORD *)(v57 + 152);
                  if ( *(_DWORD *)(v65 + 24) != -1
                    && (*(_BYTE *)(*(_QWORD *)v65 - 56LL) & 0x20) == 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 276), 0xFFFFFFFF) == 1 )
                  {
                    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v63, v59, v55);
                    v68 = *(_QWORD *)(v57 + 160);
                    v69 = *(_QWORD **)(v57 + 168);
                    if ( *(_QWORD *)(v68 + 8) != v57 + 160 || *v69 != v57 + 160 )
                      __fastfail(3u);
                    *v69 = v68;
                    *(_QWORD *)(v68 + 8) = v69;
                    v70 = *(_QWORD **)(v57 + 152);
                    v71 = (_QWORD *)*v70;
                    RtlReleaseSRWLockExclusive(&qword_18015D070);
                    if ( *(_WORD *)(v57 + 110) )
                      sub_18007D794(v57, 0LL);
                    sub_180074114(v57);
                    v72 = *(volatile signed __int32 **)(v57 + 136);
                    if ( (unsigned __int64)v72 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                      RtlReleaseActivationContext(v72);
                    if ( *(_QWORD *)(v57 + 80) )
                      sub_180042420(v57 + 72);
                    RtlFreeHeap(qword_18015C288, 0, v57);
                    if ( v71 == v70 )
                      sub_180071914(v70);
                  }
                  v66 = _InterlockedCompareExchange64(&qword_18015D070, 0LL, 1LL);
                  if ( v66 != 1 )
                  {
                    do
                    {
                      v79 = v66 & 6;
                      v80 = 3LL;
                      if ( v79 != 2 )
                        v80 = -1LL;
                      v81 = v66 + v80;
                      v82 = v66;
                      v66 = _InterlockedCompareExchange64(&qword_18015D070, v81, v66);
                    }
                    while ( v82 != v66 );
                    if ( v79 == 2 )
                      sub_180070AAC(&qword_18015D070, v81, 0LL);
                  }
                  v9 = a5;
                  v67 = v191;
                  if ( v191 != *(_QWORD *)a5 )
                  {
                    sub_18006B460();
                    *(_QWORD *)a5 = v67;
                  }
                  v13 = v159;
                  goto LABEL_369;
                }
LABEL_72:
                v64 = *(_DWORD *)(a2 + 100);
                if ( v64 )
                {
                  if ( *v59 || *(int *)(*(_QWORD *)(v57 + 152) + 56LL) >= 2 )
                    *(_DWORD *)(a2 + 100) = v64 - 1;
                }
                else if ( *(int *)(*(_QWORD *)(v57 + 152) + 56LL) < 2 )
                {
                  *(_QWORD *)(a2 + 80) = v57;
                  *(_DWORD *)(a2 + 100) = 1;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
                  v159 = 259;
                }
                goto LABEL_75;
              }
              v74 = *(_QWORD **)(v62 + 40);
              while ( 1 )
              {
                v74 = (_QWORD *)*v74;
                if ( v74[1] == v61 )
                  break;
                if ( v74 == v73 )
                  goto LABEL_103;
              }
            }
            v63 = *(unsigned int *)(v61 + 24);
            if ( (unsigned int)(v63 - 2) <= 0xFFFFFFFC )
              *(_DWORD *)(v61 + 24) = v63 - 1;
            goto LABEL_69;
          }
          LOWORD(v205) = 0;
          v109 = NtCurrentPeb()->HotpatchInformation;
          if ( v109 && *v109 )
            v110 = (__int64)NtCurrentPeb()->HotpatchInformation + 30;
          else
            v110 = 2147352624LL;
          v178 = v110;
          v172 = 0;
          LOWORD(v111) = 0;
          v171 = 0;
          v173 = v110;
          if ( v110 )
          {
            v112 = -1LL;
            do
              ++v112;
            while ( *(_WORD *)(v110 + 2 * v112) );
            v111 = 2 * v112;
            v113 = v111;
            if ( v111 >= 0xFFFE )
            {
              LOWORD(v111) = -4;
              v113 = -4;
            }
            v171 = v111;
            v172 = v113 + 2;
          }
          if ( (_WORD)v111 )
          {
            v114 = (unsigned __int16)v111 + 2;
            v115 = 0;
            if ( v114 > HIWORD(v205) )
            {
              if ( v114 <= 0xFFFE )
              {
                v142 = ((unsigned __int16)v111 + 65) & 0xFFFFFFC0;
                v143 = v142;
                if ( v142 > 0xFFFE )
                {
                  LOWORD(v142) = -2;
                  v143 = 65534;
                }
                if ( v206 == v207 )
                {
                  v144 = (void *)sub_18003B5E0(v143);
                  v179 = v144;
                  if ( v144 && (_WORD)v205 )
                    memmove(v144, v206, (unsigned __int16)v205);
                }
                else
                {
                  v144 = (void *)sub_1800D0728(v143, v206);
                  v179 = v144;
                }
                if ( v144 )
                {
                  v206 = v144;
                  HIWORD(v205) = v142;
                }
                else
                {
                  v115 = -1073741801;
                }
              }
              else
              {
                v115 = -1073741562;
              }
            }
            if ( v115 >= 0 )
            {
              memmove((char *)v206 + (unsigned __int16)v205, (const void *)v110, (unsigned __int16)v111);
              LOWORD(v205) = v111 + v205;
              *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
            }
          }
          v116 = (unsigned __int16)v205 + 22;
          v117 = 0;
          if ( v116 > HIWORD(v205) )
          {
            if ( v116 <= 0xFFFE )
            {
              v145 = ((unsigned __int16)v205 + 85) & 0xFFFFFFC0;
              v146 = v145;
              if ( v145 > 0xFFFE )
              {
                LOWORD(v145) = -2;
                v146 = 65534;
              }
              if ( v206 == v207 )
              {
                v147 = (void *)sub_18003B5E0(v146);
                v180 = v147;
                if ( v147 && (_WORD)v205 )
                  memmove(v147, v206, (unsigned __int16)v205);
              }
              else
              {
                v147 = (void *)sub_1800D0728(v146, v206);
                v180 = v147;
              }
              if ( v147 )
              {
                v206 = v147;
                HIWORD(v205) = v145;
              }
              else
              {
                v117 = -1073741801;
              }
            }
            else
            {
              v117 = -1073741562;
            }
          }
          if ( v117 >= 0 )
          {
            v118 = (char *)v206 + (unsigned __int16)v205;
            *(_OWORD *)v118 = *(_OWORD *)L"\\SYSTEM32\\";
            *((_DWORD *)v118 + 4) = *(_DWORD *)L"2\\";
            LOWORD(v205) = v205 + 20;
            *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
          }
          v119 = v164 + (unsigned __int16)v205 + 2;
          v13 = 0;
          if ( v119 > HIWORD(v205) )
          {
            if ( v119 <= 0xFFFE )
            {
              v148 = (v119 + 63) & 0xFFFFFFC0;
              v149 = v148;
              if ( v148 > 0xFFFE )
              {
                LOWORD(v148) = -2;
                v149 = 65534;
              }
              if ( v206 == v207 )
              {
                v150 = (void *)sub_18003B5E0(v149);
                v181 = v150;
                if ( v150 && (_WORD)v205 )
                  memmove(v150, v206, (unsigned __int16)v205);
              }
              else
              {
                v150 = (void *)sub_1800D0728(v149, v206);
                v181 = v150;
              }
              if ( v150 )
              {
                v206 = v150;
                HIWORD(v205) = v148;
              }
              else
              {
                v13 = -1073741801;
              }
            }
            else
            {
              v13 = -1073741562;
            }
          }
          if ( v13 >= 0 )
          {
            memmove((char *)v206 + (unsigned __int16)v205, Src, v164);
            LOWORD(v205) = v164 + v205;
            *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
            ProcessParameters = v169->ProcessParameters;
            v20 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v121 = &v205;
LABEL_198:
            if ( v13 >= 0 && v20 && !byte_18015C298 )
            {
              v137 = RtlDosApplyFileIsolationRedirection_Ustr(
                       1,
                       (_DWORD)v121,
                       (unsigned int)L"\b\n",
                       0,
                       (__int64)v198,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
              if ( v137 >= 0 )
              {
                v158 = 1;
                sub_18003FB24(v198, &v205);
                sub_180042420(v198);
              }
              if ( v137 != -1072365560 )
                v13 = v137;
            }
            goto LABEL_200;
          }
          v20 = 1;
        }
        LODWORD(v121) = (unsigned int)&v208;
        goto LABEL_198;
      }
      v138 = 5330LL;
    }
    else
    {
      v138 = 5331LL;
    }
    sub_18003BC9C(0LL, &v208, v138);
    goto LABEL_175;
  }
LABEL_370:
  if ( v13 < 0 )
  {
    *(_QWORD *)v9 = 0LL;
    **(_DWORD **)(v7 + 40) = v13;
    v10 = v209;
  }
  if ( v210 != v10 )
    RtlDeleteBoundaryDescriptor((__int64)v10);
  v209 = v210;
  v208 = 0x1000000;
  v210[0] = 0;
  if ( v207 != v206 )
    RtlDeleteBoundaryDescriptor((__int64)v206);
  return (unsigned int)v13;
}
