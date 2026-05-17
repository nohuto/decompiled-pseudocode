/*
 * XREFs of sub_180041A60 @ 0x180041A60
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 * Callees:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 *     RtlReleaseActivationContext @ 0x1800188A0 (RtlReleaseActivationContext.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_180076B14 @ 0x180076B14 (sub_180076B14.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_180079080 @ 0x180079080 (sub_180079080.c)
 *     sub_180081E98 @ 0x180081E98 (sub_180081E98.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 *     RtlxOemStringToUnicodeSize @ 0x180089700 (RtlxOemStringToUnicodeSize.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 *     sub_1800D7B0C @ 0x1800D7B0C (sub_1800D7B0C.c)
 */

__int64 __fastcall sub_180041A60(PCANSI_STRING SourceString, __int64 a2, __int64 a3, int a4, _QWORD *a5, __int64 *a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD *v9; // r12
  unsigned __int16 v10; // si
  unsigned int v11; // ebx
  int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rdx
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  int v16; // edi
  ULONG_PTR ActiveFrame; // rcx
  bool v18; // r14
  __int64 v19; // r13
  _DWORD *ApiSetMap; // rsi
  _DWORD *HotpatchInformation; // rcx
  int v22; // r14d
  _QWORD **v23; // rdi
  char v24; // cl
  _QWORD *i; // rsi
  volatile signed __int32 *v26; // rbx
  unsigned __int16 *v27; // rax
  unsigned __int16 *v28; // r9
  unsigned int v29; // r8d
  unsigned int v30; // r10d
  __int64 v31; // rax
  unsigned __int64 *v32; // r15
  signed __int64 v33; // rax
  _DWORD *v34; // rcx
  __int64 v35; // rax
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // r14
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  int v41; // eax
  signed __int64 v42; // rax
  int v43; // esi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r14
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r15
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rax
  signed __int64 v53; // rax
  unsigned __int64 v54; // rbx
  _QWORD *v55; // rdx
  _QWORD *v56; // rax
  __int64 *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // r8
  bool v60; // zf
  int v61; // eax
  signed __int64 v62; // r8
  __int64 v63; // rdx
  signed __int64 v64; // rdx
  signed __int64 v65; // rtt
  signed __int64 v66; // rcx
  __int64 v67; // rdx
  signed __int64 v68; // rdx
  signed __int64 v69; // rtt
  signed __int64 v70; // rcx
  __int64 v71; // rdx
  signed __int64 v72; // rdx
  signed __int64 v73; // rtt
  unsigned __int16 v74; // bx
  unsigned int v75; // r11d
  unsigned int v76; // edx
  unsigned __int16 *v77; // r8
  unsigned __int16 v78; // r9
  unsigned int *v79; // r15
  int v80; // r9d
  int v81; // r8d
  unsigned int *v82; // rcx
  unsigned __int16 *v83; // rdx
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rax
  unsigned int v86; // r8d
  unsigned int v87; // r9d
  unsigned __int16 *v88; // r10
  int v89; // r8d
  __int64 v90; // rcx
  char v91; // r12
  _DWORD *v92; // rcx
  __int64 v93; // rcx
  _DWORD *v94; // rcx
  __int64 v95; // rdi
  unsigned __int64 v96; // rbx
  __int64 v97; // rbx
  unsigned int v98; // ecx
  int v99; // esi
  unsigned int v100; // ecx
  int v101; // ebx
  char *v102; // rcx
  unsigned int v103; // edx
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v105; // rdx
  int *v106; // rbx
  unsigned __int64 v107; // rdx
  _WORD *v108; // rax
  __int16 v109; // cx
  _WORD *v110; // rax
  int v111; // r13d
  unsigned __int16 *v112; // r8
  int v113; // r10d
  unsigned __int64 v114; // r11
  int v115; // eax
  unsigned __int16 v116; // r9
  int v117; // eax
  __int64 Heap; // rax
  int v119; // ebx
  unsigned __int16 v120; // r8
  _WORD *v121; // rax
  int v122; // eax
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  unsigned int v125; // ebx
  _WORD *v126; // rax
  char *v127; // rcx
  char *v128; // rcx
  unsigned int v129; // r14d
  void *v130; // r15
  unsigned int v131; // edi
  void *v132; // rsi
  unsigned int v133; // esi
  void *v134; // r14
  const char *v135; // rax
  char *v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  _QWORD *v141; // rbx
  _QWORD *v142; // rdi
  volatile signed __int32 *v143; // rcx
  void *v145; // rax
  void *v146; // r15
  __int64 v147; // [rsp+30h] [rbp-578h]
  char v148; // [rsp+50h] [rbp-558h]
  __int16 v149; // [rsp+54h] [rbp-554h]
  int v150; // [rsp+5Ch] [rbp-54Ch]
  unsigned __int8 v151; // [rsp+B4h] [rbp-4F4h]
  unsigned __int16 v153; // [rsp+D0h] [rbp-4D8h]
  char *Src; // [rsp+D8h] [rbp-4D0h]
  __int64 v155; // [rsp+E8h] [rbp-4C0h]
  __int64 v158; // [rsp+138h] [rbp-470h]
  struct _PEB *v159; // [rsp+148h] [rbp-460h]
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp-448h] BYREF
  __int16 v161; // [rsp+170h] [rbp-438h]
  __int16 v162; // [rsp+172h] [rbp-436h]
  __int64 v163; // [rsp+178h] [rbp-430h]
  unsigned __int16 *v164; // [rsp+180h] [rbp-428h]
  unsigned __int16 *v165; // [rsp+188h] [rbp-420h]
  __int64 v166; // [rsp+190h] [rbp-418h]
  int v167; // [rsp+198h] [rbp-410h]
  void *v168; // [rsp+1A0h] [rbp-408h]
  void *v169; // [rsp+1A8h] [rbp-400h]
  void *v170; // [rsp+1B0h] [rbp-3F8h]
  int *v171; // [rsp+1B8h] [rbp-3F0h]
  _WORD *v172; // [rsp+1C0h] [rbp-3E8h]
  _WORD *v173; // [rsp+1C8h] [rbp-3E0h]
  _WORD *v174; // [rsp+1D0h] [rbp-3D8h]
  unsigned __int16 *v175; // [rsp+1D8h] [rbp-3D0h]
  unsigned __int16 *v176; // [rsp+1E0h] [rbp-3C8h]
  unsigned __int16 *v177; // [rsp+1E8h] [rbp-3C0h]
  unsigned __int64 v178; // [rsp+1F0h] [rbp-3B8h]
  __int64 v179; // [rsp+1F8h] [rbp-3B0h]
  unsigned __int64 v180; // [rsp+200h] [rbp-3A8h]
  int v181; // [rsp+208h] [rbp-3A0h]
  _WORD *v182; // [rsp+210h] [rbp-398h]
  unsigned __int16 *v183; // [rsp+218h] [rbp-390h]
  __int64 v184; // [rsp+220h] [rbp-388h] BYREF
  int v185; // [rsp+228h] [rbp-380h]
  _QWORD v186[7]; // [rsp+230h] [rbp-378h] BYREF
  _BYTE v187[16]; // [rsp+270h] [rbp-338h] BYREF
  unsigned __int16 v188; // [rsp+280h] [rbp-328h]
  __int16 v189; // [rsp+282h] [rbp-326h]
  unsigned __int16 *v190; // [rsp+288h] [rbp-320h]
  __int64 v191; // [rsp+290h] [rbp-318h]
  struct _TEB *v192; // [rsp+298h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2A0h] [rbp-308h] BYREF
  const void *v194; // [rsp+340h] [rbp-268h] BYREF
  void *v195; // [rsp+348h] [rbp-260h]
  _WORD v196[128]; // [rsp+350h] [rbp-258h] BYREF
  int v197; // [rsp+450h] [rbp-158h] BYREF
  void *v198; // [rsp+458h] [rbp-150h]
  _WORD v199[128]; // [rsp+460h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5A8h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  v9 = a5;
  v195 = v196;
  LODWORD(v194) = 0x1000000;
  v196[0] = 0;
  v198 = v199;
  v10 = 0;
  v197 = 0x1000000;
  LOWORD(v11) = 256;
  v199[0] = 0;
  v12 = 0;
  if ( SourceString->Length )
  {
    if ( NlsMbCodePageTag )
      v13 = RtlxOemStringToUnicodeSize(SourceString);
    else
      v13 = 2 * SourceString->Length + 2;
    v12 = 0;
    if ( v13 > 0x100 )
    {
      if ( v13 <= 0xFFFE )
      {
        v11 = (v13 + 63) & 0xFFFFFFC0;
        if ( v11 > 0xFFFE )
          v11 = 65534;
        v145 = (void *)sub_180043FE0(v11);
        v146 = v145;
        v10 = v197;
        if ( v145 && (_WORD)v197 )
        {
          memmove(v145, v198, (unsigned __int16)v197);
          v10 = v197;
        }
        if ( v146 )
        {
          v198 = v146;
          HIWORD(v197) = v11;
        }
        else
        {
          v12 = -1073741801;
          LOWORD(v11) = HIWORD(v197);
        }
      }
      else
      {
        v12 = -1073741562;
      }
    }
    if ( v12 >= 0 )
    {
      DestinationString.Buffer = (wchar_t *)((char *)v198 + v10);
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v11 - v10;
      RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      LOWORD(v197) = DestinationString.Length + v197;
    }
    v6 = a3;
  }
  if ( v12 < 0 )
  {
LABEL_385:
    *v9 = 0LL;
    **(_DWORD **)(v7 + 32) = v12;
    goto LABEL_364;
  }
  v184 = 72LL;
  v185 = 1;
  memset(v186, 0, sizeof(v186));
  v14 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  v16 = 0;
  if ( ActivationContextStackPointer )
    ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v186[3] = ~ActiveFrame;
  v186[4] = ~v14;
  v186[5] = retaddr;
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
  v186[0] = ActiveFrame;
  v186[1] = v14;
  LODWORD(v186[2]) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v14 )
      goto LABEL_14;
  }
  else if ( !v14 )
  {
LABEL_14:
    LODWORD(v186[2]) = 48;
    goto LABEL_15;
  }
  ActivationContextStackPointer->ActiveFrame = (struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v186;
LABEL_15:
  v149 = 0;
  v159 = NtCurrentPeb();
  v148 = 0;
  v18 = 1;
  v19 = v6 + 88;
  ApiSetMap = v159->ApiSetMap;
  HotpatchInformation = v159->HotpatchInformation;
  if ( HotpatchInformation && *HotpatchInformation )
    v123 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v123 = 2147353476LL;
  if ( *(_BYTE *)v123 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v127 = (unsigned int)RtlGetCurrentServiceSessionId()
         ? (char *)NtCurrentPeb()->HotpatchInformation + 555
         : (char *)2147353477;
    if ( (*v127 & 0x20) != 0 )
      sub_1800D62F0(5328, 0, 0, 0, (__int64)&v197, 0LL);
  }
  v153 = 0;
  Src = 0LL;
  v91 = 0;
  if ( (unsigned __int16)v197 >= 8u )
  {
    v88 = (unsigned __int16 *)v198;
    v124 = *(_QWORD *)v198 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v124 == 0x2D004900500041LL || v124 == 0x2D005400580045LL )
    {
      v125 = (unsigned __int16)v197;
      v126 = (char *)v198 + (unsigned __int16)v197;
      v182 = v126;
      do
      {
        if ( v125 <= 1 )
          break;
        v125 -= 2;
        v182 = --v126;
      }
      while ( *v126 != 45 );
      v74 = (unsigned __int16)v125 >> 1;
      if ( v74 )
      {
        v75 = 0;
        v76 = 0;
        v77 = (unsigned __int16 *)v198;
        v183 = (unsigned __int16 *)v198;
        while ( v76 < v74 )
        {
          v78 = *v77;
          if ( (unsigned __int16)(*v77 - 65) <= 0x19u )
            v78 += 32;
          v75 = v78 + ApiSetMap[6] * v75;
          ++v76;
          v183 = ++v77;
        }
        v79 = 0LL;
        v80 = ApiSetMap[3] - 1;
        while ( v16 <= v80 )
        {
          v81 = (v80 + v16) >> 1;
          v82 = (_DWORD *)((char *)&ApiSetMap[2 * v81] + (unsigned int)ApiSetMap[5]);
          if ( v75 < *v82 )
          {
            v80 = v81 - 1;
          }
          else
          {
            if ( v75 <= *v82 )
            {
              v79 = (_DWORD *)((char *)&ApiSetMap[6 * v82[1]] + (unsigned int)ApiSetMap[4]);
              break;
            }
            v16 = v81 + 1;
          }
        }
        if ( v79 )
        {
          v83 = (unsigned __int16 *)((char *)ApiSetMap + v79[1]);
          v84 = v79[3] >> 1;
          v164 = (unsigned __int16 *)v198;
          v165 = v83;
          v85 = v74 > v84 ? v84 : v74;
          while ( 1 )
          {
            if ( v88 >= (unsigned __int16 *)((char *)v198 + 2 * v85) )
            {
              v89 = v74 - (_DWORD)v84;
              goto LABEL_145;
            }
            v86 = *v88;
            v87 = *v83;
            if ( v86 != v87 )
            {
              if ( v86 >= 0x61 )
              {
                if ( v86 > 0x7A )
                  v86 = (unsigned __int16)(v86
                                         + *(_WORD *)(qword_180159D68
                                                    + 2LL
                                                    * ((v86 & 0xF)
                                                     + *(unsigned __int16 *)(qword_180159D68
                                                                           + 2LL
                                                                           * (((unsigned __int8)v86 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v86)))))));
                else
                  v86 -= 32;
              }
              if ( v87 >= 0x61 )
              {
                if ( v87 > 0x7A )
                  v87 = (unsigned __int16)(v87
                                         + *(_WORD *)(qword_180159D68
                                                    + 2LL
                                                    * ((v87 & 0xF)
                                                     + *(unsigned __int16 *)(qword_180159D68
                                                                           + 2LL
                                                                           * (((unsigned __int8)v87 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v87)))))));
                else
                  v87 -= 32;
              }
              if ( v86 != v87 )
                break;
            }
            v164 = ++v88;
            v165 = ++v83;
          }
          v89 = v86 - v87;
LABEL_145:
          if ( !v89 )
          {
            if ( v19 && v79[5] > 1 )
            {
              v90 = sub_180076B14(v79, *(_QWORD *)(v19 + 8), *(_WORD *)v19 >> 1, ApiSetMap);
              goto LABEL_150;
            }
            if ( v79[5] )
            {
              v90 = (__int64)ApiSetMap + v79[4];
LABEL_150:
              Src = (char *)ApiSetMap + *(unsigned int *)(v90 + 12);
              v153 = *(_WORD *)(v90 + 16);
              v91 = 1;
            }
          }
        }
      }
    }
  }
  if ( v91 )
  {
    if ( v153 )
    {
      v92 = NtCurrentPeb()->HotpatchInformation;
      if ( v92 && *v92 )
        v93 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      else
        v93 = 2147353476LL;
      if ( *(_BYTE *)v93 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v128 = (unsigned int)RtlGetCurrentServiceSessionId()
             ? (char *)NtCurrentPeb()->HotpatchInformation + 555
             : (char *)2147353477;
        if ( (*v128 & 0x20) != 0 )
          sub_1800D62F0(5329, 0, 0, 0, (__int64)&v197, 0LL);
      }
      goto LABEL_156;
    }
    v120 = 5330;
  }
  else
  {
    v120 = 5331;
  }
  sub_18003CA5C(0, (__int64)&v197, v120);
LABEL_156:
  v12 = 0;
  if ( !v91 )
    goto LABEL_224;
  if ( !v153 )
  {
    v12 = -1073740671;
    goto LABEL_181;
  }
  LOWORD(v194) = 0;
  v94 = NtCurrentPeb()->HotpatchInformation;
  if ( v94 && *v94 )
    v95 = (__int64)NtCurrentPeb()->HotpatchInformation + 30;
  else
    v95 = 2147352624LL;
  v166 = v95;
  v162 = 0;
  LOWORD(v96) = 0;
  v161 = 0;
  v163 = v95;
  if ( v95 )
  {
    v97 = -1LL;
    do
      ++v97;
    while ( *(_WORD *)(v95 + 2 * v97) );
    v96 = 2 * v97;
    if ( v96 >= 0xFFFE )
      LOWORD(v96) = -4;
    v161 = v96;
    v162 = v96 + 2;
  }
  if ( (_WORD)v96 )
  {
    v98 = (unsigned __int16)v96 + 2;
    v99 = 0;
    if ( v98 > WORD1(v194) )
    {
      if ( v98 <= 0xFFFE )
      {
        v129 = ((unsigned __int16)v96 + 65) & 0xFFFFFFC0;
        if ( v129 > 0xFFFE )
          v129 = 65534;
        if ( v195 == v196 )
        {
          v130 = (void *)sub_180043FE0(v129);
          v168 = v130;
          if ( v130 && (_WORD)v194 )
            memmove(v130, v195, (unsigned __int16)v194);
        }
        else
        {
          v130 = (void *)sub_1800D7B0C(v129);
          v168 = v130;
        }
        if ( v130 )
        {
          v195 = v130;
          WORD1(v194) = v129;
        }
        else
        {
          v99 = -1073741801;
        }
        v18 = 1;
      }
      else
      {
        v99 = -1073741562;
      }
    }
    if ( v99 >= 0 )
    {
      memmove((char *)v195 + (unsigned __int16)v194, (const void *)v95, (unsigned __int16)v96);
      LOWORD(v194) = v96 + (_WORD)v194;
      *((_WORD *)v195 + ((unsigned __int64)(unsigned __int16)v194 >> 1)) = 0;
    }
  }
  v100 = (unsigned __int16)v194 + 22;
  v101 = 0;
  if ( v100 > WORD1(v194) )
  {
    if ( v100 <= 0xFFFE )
    {
      v131 = ((unsigned __int16)v194 + 85) & 0xFFFFFFC0;
      if ( v131 > 0xFFFE )
        v131 = 65534;
      if ( v195 == v196 )
      {
        v132 = (void *)sub_180043FE0(v131);
        v169 = v132;
        if ( v132 && (_WORD)v194 )
          memmove(v132, v195, (unsigned __int16)v194);
      }
      else
      {
        v132 = (void *)sub_1800D7B0C(v131);
        v169 = v132;
      }
      if ( v132 )
      {
        v195 = v132;
        WORD1(v194) = v131;
      }
      else
      {
        v101 = -1073741801;
      }
    }
    else
    {
      v101 = -1073741562;
    }
  }
  if ( v101 >= 0 )
  {
    v102 = (char *)v195 + (unsigned __int16)v194;
    *(_OWORD *)v102 = *(_OWORD *)L"\\SYSTEM32\\";
    *((_DWORD *)v102 + 4) = *(_DWORD *)L"2\\";
    LOWORD(v194) = (_WORD)v194 + 20;
    *((_WORD *)v195 + ((unsigned __int64)(unsigned __int16)v194 >> 1)) = 0;
  }
  v103 = (unsigned __int16)v194 + v153 + 2;
  v12 = 0;
  if ( v103 > WORD1(v194) )
  {
    if ( v103 <= 0xFFFE )
    {
      v133 = (v103 + 63) & 0xFFFFFFC0;
      if ( v133 > 0xFFFE )
        v133 = 65534;
      if ( v195 == v196 )
      {
        v134 = (void *)sub_180043FE0(v133);
        v170 = v134;
        if ( v134 && (_WORD)v194 )
          memmove(v134, v195, (unsigned __int16)v194);
      }
      else
      {
        v134 = (void *)sub_1800D7B0C(v133);
        v170 = v134;
      }
      if ( v134 )
      {
        v195 = v134;
        WORD1(v194) = v133;
      }
      else
      {
        v12 = -1073741801;
      }
      v18 = 1;
    }
    else
    {
      v12 = -1073741562;
    }
  }
  if ( v12 >= 0 )
  {
    memmove((char *)v195 + (unsigned __int16)v194, Src, v153);
    LOWORD(v194) = v153 + (_WORD)v194;
    *((_WORD *)v195 + ((unsigned __int64)(unsigned __int16)v194 >> 1)) = 0;
    ProcessParameters = v159->ProcessParameters;
    v18 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
    v105 = (int *)&v194;
  }
  else
  {
LABEL_224:
    v105 = &v197;
  }
  if ( v12 >= 0 && v18 && !byte_18015B26C )
  {
    v119 = RtlDosApplyFileIsolationRedirection_Ustr(1, v105, L"\b\n", 0LL, (__int64)v187, 0LL, 0LL, 0LL, 0LL);
    if ( v119 >= 0 )
    {
      v148 = 1;
      sub_18004BC44(v187, &v194);
      sub_18004C4D8(v187);
    }
    if ( v119 != -1072365560 )
      v12 = v119;
  }
LABEL_181:
  if ( v12 < 0 )
  {
    v36 = 0;
    goto LABEL_198;
  }
  v106 = &v197;
  v171 = &v197;
  if ( (_WORD)v194 )
  {
    if ( (dword_180155A10 & 5) != 0 )
    {
      v135 = "SxS";
      if ( !v148 )
        v135 = "API set";
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2567,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        &v197,
        &v194,
        v135);
    }
    v36 = 512;
    v149 = 512;
    if ( v148 )
    {
      v36 = 516;
      v149 = 516;
    }
    v106 = (int *)&v194;
    v171 = (int *)&v194;
  }
  else
  {
    v121 = (char *)v198 + (unsigned __int16)v197;
    v172 = v121;
    do
    {
      v172 = --v121;
      if ( v121 < v198 )
      {
        v36 = 32;
        v149 = 32;
        v122 = sub_18003CC2C(&v194, (unsigned __int16 *)&v197);
LABEL_233:
        v12 = v122;
        goto LABEL_187;
      }
    }
    while ( *v121 != 92 && *v121 != 47 );
    if ( (unsigned int)sub_18003F2C4((unsigned __int16 *)&v197) == 5 )
    {
      v122 = sub_18003CC2C(&v194, (unsigned __int16 *)&v197);
      v36 = 0;
      goto LABEL_233;
    }
    v12 = sub_18004BC44(&v197, &v194);
    v36 = 0;
    if ( v12 >= 0 )
    {
      v36 = 1536;
      v149 = 1536;
    }
  }
LABEL_187:
  if ( v12 >= 0 )
  {
    v107 = *((_QWORD *)v106 + 1);
    v108 = (_WORD *)(v107 + *(unsigned __int16 *)v106);
    v173 = v108;
    while ( 1 )
    {
      v173 = --v108;
      if ( (unsigned __int64)v108 < v107 )
      {
LABEL_235:
        v12 = sub_18003CC2C(&v194, L"\b\n");
        goto LABEL_198;
      }
      v109 = *v108;
      if ( *v108 == 46 )
        break;
      if ( v109 == 47 || v109 == 92 )
        goto LABEL_235;
    }
    v110 = (char *)v195 + (unsigned __int16)v194;
    v174 = v110;
    while ( 1 )
    {
      v174 = --v110;
      if ( v110 < v195 || *v110 != 46 )
        break;
      LOWORD(v194) = (_WORD)v194 - 2;
    }
    v110[1] = 0;
LABEL_198:
    if ( v12 >= 0 )
      goto LABEL_199;
  }
  if ( (dword_180155A10 & 3) != 0 )
  {
    LODWORD(v147) = v12;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2623,
      (unsigned int)"LdrpPreprocessDllName",
      0,
      "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      &v197,
      v147);
  }
  if ( (dword_180155A10 & 0x10) != 0 )
    __debugbreak();
LABEL_199:
  if ( v12 < 0 )
    goto LABEL_363;
  if ( !*a6 )
  {
    v181 = dword_18015B268 + 2621440;
    Heap = RtlAllocateHeap(qword_18015B328, dword_18015B268 + 2621440, 32LL);
    *a6 = Heap;
    if ( !Heap )
    {
      v12 = -1073741801;
      goto LABEL_363;
    }
  }
  v37 = *(_QWORD *)(a2 + 32);
  v158 = v37;
  v111 = v36;
  v38 = *(_QWORD *)(a2 + 16);
  v155 = v38;
  v32 = a5;
  *a5 = 0LL;
  if ( (v36 & 0x20) != 0 )
  {
    v12 = sub_180021AE0((unsigned __int16 *)&v194, 0LL, v36, (__int64)a5, 0LL);
    goto LABEL_44;
  }
  if ( (v36 & 0x200) == 0 )
    goto LABEL_97;
  v112 = (unsigned __int16 *)((char *)v195 + (unsigned __int16)v194);
  while ( --v112 > v195 )
  {
    if ( *v112 == 92 || *v112 == 47 )
    {
      ++v112;
      break;
    }
  }
  v190 = v112;
  v188 = (_WORD)v194 - ((_WORD)v112 - (_WORD)v195);
  v189 = WORD1(v194) - ((_WORD)v112 - (_WORD)v195);
  v113 = 0;
  v175 = v112;
  v114 = (unsigned __int64)v188 >> 1;
  while ( 1 )
  {
    v115 = v114;
    LODWORD(v114) = v114 - 1;
    if ( !v115 )
      break;
    v116 = *v112++;
    v175 = v112;
    if ( v116 < 0x61u )
    {
      v117 = v116;
    }
    else if ( v116 > 0x7Au )
    {
      v117 = (unsigned __int16)(v116
                              + *(_WORD *)(qword_180159D68
                                         + 2LL
                                         * ((v116 & 0xF)
                                          + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                                              + 2LL
                                                                              * (((v116 >> 4) & 0xF)
                                                                               + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)v116 >> 8)))))));
    }
    else
    {
      v117 = v116 - 32;
    }
    v113 = v117 + 65599 * v113;
  }
  v22 = v113;
  RtlAcquireSRWLockExclusive(&qword_18015C040);
  v23 = (_QWORD **)((char *)&unk_18015AFA0 + 16 * (v22 & 0x1F));
  v24 = 0;
  for ( i = *v23; ; i = (_QWORD *)*i )
  {
    if ( i == v23 )
    {
      v32 = a5;
      goto LABEL_35;
    }
    v26 = (volatile signed __int32 *)(i - 14);
    if ( v22 == *((_DWORD *)i + 38) )
      break;
LABEL_100:
    ;
  }
  if ( (unsigned __int16)v194 != *((unsigned __int16 *)v26 + 36) )
  {
LABEL_334:
    v24 = 0;
    goto LABEL_100;
  }
  v27 = (unsigned __int16 *)v195;
  v176 = (unsigned __int16 *)v195;
  v28 = (unsigned __int16 *)*((_QWORD *)v26 + 10);
  v177 = v28;
  while ( v27 < (unsigned __int16 *)((char *)v195 + (unsigned __int16)v194) )
  {
    v29 = *v27;
    v30 = *v28;
    if ( v29 != v30 )
    {
      if ( v29 >= 0x61 )
      {
        if ( v29 > 0x7A )
          v29 = (unsigned __int16)(v29
                                 + *(_WORD *)(qword_180159D68
                                            + 2LL
                                            * ((v29 & 0xF)
                                             + *(unsigned __int16 *)(qword_180159D68
                                                                   + 2LL
                                                                   * (((unsigned __int8)v29 >> 4)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v29)))))));
        else
          v29 -= 32;
      }
      if ( v30 >= 0x61 )
      {
        if ( v30 > 0x7A )
          v30 = (unsigned __int16)(v30
                                 + *(_WORD *)(qword_180159D68
                                            + 2LL
                                            * ((v30 & 0xF)
                                             + *(unsigned __int16 *)(qword_180159D68
                                                                   + 2LL
                                                                   * (((unsigned __int8)v30 >> 4)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v30)))))));
        else
          v30 -= 32;
      }
      if ( v29 != v30 )
        goto LABEL_334;
    }
    v176 = ++v27;
    v177 = ++v28;
  }
  v24 = 1;
  v31 = *((_QWORD *)v26 + 19);
  if ( *(_DWORD *)(v31 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v31 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v26 + 69);
  v32 = a5;
  *a5 = v26;
LABEL_35:
  if ( v24 )
    v12 = 0;
  else
    v12 = -1073741515;
  v33 = _InterlockedCompareExchange64(&qword_18015C040, 0LL, 1LL);
  if ( v33 != 1 )
  {
    do
    {
      v66 = v33 & 6;
      v67 = 3LL;
      if ( v66 != 2 )
        v67 = -1LL;
      v68 = v33 + v67;
      v69 = v33;
      v33 = _InterlockedCompareExchange64(&qword_18015C040, v68, v33);
    }
    while ( v69 != v33 );
    if ( v66 == 2 )
      sub_180077520(&qword_18015C040, v68, 0LL);
  }
  if ( v12 < 0 )
    v151 = 3;
  else
    v151 = 0;
  v34 = NtCurrentPeb()->HotpatchInformation;
  if ( v34 && *v34 )
    v35 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v35 = 2147353476LL;
  if ( *(_BYTE *)v35 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v136 = (unsigned int)RtlGetCurrentServiceSessionId()
         ? (char *)NtCurrentPeb()->HotpatchInformation + 555
         : (char *)2147353477;
    if ( (*v136 & 0x20) != 0 )
      sub_1800D62F0(5280, 0, 0, v151, (__int64)&v194, 0LL);
  }
  LOWORD(v36) = v149;
  v37 = v158;
  v38 = v155;
LABEL_44:
  if ( v12 != -1073741515 )
  {
    v39 = *v32;
    RtlAcquireSRWLockExclusive(&qword_18015C040);
    v40 = *(_QWORD *)(v39 + 152);
    v41 = *(_DWORD *)(v40 + 24);
    if ( v41 != -1 )
    {
      if ( v41 )
      {
        *(_DWORD *)(v40 + 24) = v41 + 1;
      }
      else
      {
        v192 = NtCurrentTeb();
        if ( (v192->SameTebFlags & 0x1000) != 0 )
          ++*(_DWORD *)(v40 + 28);
      }
    }
    v42 = _InterlockedCompareExchange64(&qword_18015C040, 0LL, 1LL);
    if ( v42 != 1 )
    {
      do
      {
        v70 = v42 & 6;
        v71 = 3LL;
        if ( v70 != 2 )
          v71 = -1LL;
        v72 = v42 + v71;
        v73 = v42;
        v42 = _InterlockedCompareExchange64(&qword_18015C040, v72, v42);
      }
      while ( v73 != v42 );
      if ( v70 == 2 )
        sub_180077520(&qword_18015C040, v72, 0LL);
    }
    LOWORD(v36) = v149;
    goto LABEL_48;
  }
LABEL_97:
  v12 = sub_180039E20(&v194, v38, v111, a4, a3, v32, v37);
  if ( v12 >= 0 )
    v12 = sub_18003AC90(*(_BYTE **)(*v32 + 176));
LABEL_48:
  v150 = v12;
  if ( *v32 )
  {
    v43 = v36 & 0x400;
    if ( v43 && v12 == -1073741515 )
    {
      v137 = *(_QWORD *)(*v32 + 176);
      v191 = v137;
      *(_DWORD *)(v137 + 24) |= 0x4000000u;
      sub_180019170(v137, 1);
      v12 = **(_DWORD **)(v137 + 32);
      v150 = v12;
    }
    RtlAcquireSRWLockExclusive(&qword_18015C040);
    v44 = *v32;
    v45 = v44;
    v178 = *v32;
    if ( v44 )
    {
      v46 = *(_QWORD *)(v44 + 176);
      if ( v46 )
      {
        if ( (*(_DWORD *)(v46 + 24) & 0x80000) == 0 && *(_QWORD *)(v46 + 48) != v44 )
        {
          v45 = *(_QWORD *)(v46 + 48);
          v178 = v45;
          *(_QWORD *)(v46 + 48) = v44;
        }
      }
    }
    v180 = v45;
    *(_DWORD *)(*a6 + 24) &= ~1u;
    v47 = *a6;
    v48 = *(_QWORD *)(v45 + 152);
    v49 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 152LL);
    if ( v49 == v48
      || *(_DWORD *)(v48 + 56) == 9 && (*(_DWORD *)(v48 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v48 - 56LL) & 0x20) != 0) )
    {
      goto LABEL_55;
    }
    v55 = *(_QWORD **)(v49 + 40);
    if ( v55 )
    {
      v56 = *(_QWORD **)(v49 + 40);
      while ( 1 )
      {
        v56 = (_QWORD *)*v56;
        if ( v56[1] == v48 )
          break;
        if ( v56 == v55 )
          goto LABEL_82;
      }
LABEL_55:
      v50 = *(_DWORD *)(v48 + 24);
      if ( (unsigned int)(v50 - 2) <= 0xFFFFFFFC )
        *(_DWORD *)(v48 + 24) = v50 - 1;
    }
    else
    {
LABEL_82:
      if ( !v47 )
      {
        v167 = dword_18015B268 + 2359296;
        v138 = RtlAllocateHeap(qword_18015B328, dword_18015B268 + 2359296, 32LL);
        v47 = v138;
        if ( !v138 )
        {
          MEMORY[0] = -1073741801;
          v47 = 0LL;
          goto LABEL_57;
        }
        *(_DWORD *)(v138 + 24) |= 1u;
      }
      v57 = *(__int64 **)(v49 + 40);
      if ( v57 )
      {
        *(_QWORD *)v47 = *v57;
        *v57 = v47;
      }
      else
      {
        *(_QWORD *)v47 = v47;
      }
      *(_QWORD *)(v49 + 40) = v47;
      *(_QWORD *)(v47 + 8) = v48;
      v58 = (_QWORD *)(v47 + 16);
      v59 = *(_QWORD **)(v48 + 48);
      if ( v59 )
      {
        *v58 = *v59;
        *v59 = v58;
      }
      else
      {
        *v58 = v58;
      }
      *(_QWORD *)(v48 + 48) = v58;
      v60 = (*(_DWORD *)(v47 + 24) & 1) == 0;
      v61 = *(_DWORD *)(v47 + 24) & 1;
      *(_QWORD *)(v47 + 24) = v49;
      if ( !v60 )
      {
        *(_DWORD *)(v47 + 24) &= ~1u;
        *(_DWORD *)(v47 + 24) |= v61;
      }
      v47 = 0LL;
    }
LABEL_57:
    v179 = v47;
    *a6 = v47;
    if ( v12 != -1073741515 )
    {
      if ( v12 != -1073741267 )
        goto LABEL_59;
      v150 = 0;
      goto LABEL_60;
    }
    if ( !v43 )
    {
      sub_1800141D4(*(_QWORD *)(v45 + 176));
      v150 = 0;
      goto LABEL_60;
    }
LABEL_59:
    if ( v12 >= 0 )
    {
LABEL_60:
      v51 = *(_DWORD *)(a2 + 92);
      if ( v51 )
      {
        if ( *a6 || *(int *)(*(_QWORD *)(v45 + 152) + 56LL) >= 2 )
          *(_DWORD *)(a2 + 92) = v51 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v45 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(a2 + 72) = v45;
        *(_DWORD *)(a2 + 92) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 152LL) + 56LL) = 3;
        v150 = 259;
      }
    }
    v52 = *(_QWORD *)(v45 + 152);
    if ( *(_DWORD *)(v52 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v52 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&qword_18015C040);
      v139 = *(_QWORD *)(v45 + 160);
      v140 = *(_QWORD **)(v45 + 168);
      if ( *(_QWORD *)(v139 + 8) != v45 + 160 || *v140 != v45 + 160 )
        __fastfail(3u);
      *v140 = v139;
      *(_QWORD *)(v139 + 8) = v140;
      v141 = *(_QWORD **)(v45 + 152);
      v142 = (_QWORD *)*v141;
      RtlReleaseSRWLockExclusive(&qword_18015C040);
      if ( *(_WORD *)(v45 + 110) )
        sub_18006F890(v45, 0LL);
      sub_180079080(v45);
      v143 = *(volatile signed __int32 **)(v45 + 136);
      if ( (unsigned __int64)v143 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v143);
      if ( *(_QWORD *)(v45 + 80) )
        sub_18004C4D8(v45 + 72);
      RtlFreeHeap(qword_18015B328, 0, v45);
      if ( v142 == v141 )
        sub_180081E98(v141);
    }
    v53 = _InterlockedCompareExchange64(&qword_18015C040, 0LL, 1LL);
    if ( v53 != 1 )
    {
      do
      {
        v62 = v53 & 6;
        v63 = 3LL;
        if ( v62 != 2 )
          v63 = -1LL;
        v64 = v53 + v63;
        v65 = v53;
        v53 = _InterlockedCompareExchange64(&qword_18015C040, v64, v53);
      }
      while ( v65 != v53 );
      if ( v62 == 2 )
        sub_180077520(&qword_18015C040, v64, 0LL);
    }
    v54 = v180;
    if ( v180 != *a5 )
    {
      sub_180086EA8();
      *a5 = v54;
    }
    v12 = v150;
  }
LABEL_363:
  RtlDeactivateActivationContextUnsafeFast(&v184);
  v9 = a5;
  v7 = a2;
  if ( v12 < 0 )
    goto LABEL_385;
LABEL_364:
  if ( v199 != v198 )
    RtlDeleteBoundaryDescriptor();
  v198 = v199;
  v197 = 0x1000000;
  v199[0] = 0;
  if ( v196 != v195 )
    RtlDeleteBoundaryDescriptor();
  return (unsigned int)v12;
}
