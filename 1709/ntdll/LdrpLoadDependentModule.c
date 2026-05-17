/*
 * XREFs of LdrpLoadDependentModule @ 0x18002F160
 * Callers:
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpAllocatePlaceHolder @ 0x1800204C0 (LdrpAllocatePlaceHolder.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180031110 (RtlDeactivateActivationContextUnsafeFast.c)
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     ApiSetpSearchForApiSetHost @ 0x180031460 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 *     RtlReleaseActivationContext @ 0x180035E40 (RtlReleaseActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrpDestroyNode @ 0x180074BE8 (LdrpDestroyNode.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     LdrpUnmapModule @ 0x180076FA8 (LdrpUnmapModule.c)
 *     LdrpReleaseTlsEntry @ 0x18008129C (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D09C0 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D6828 (NtdllpReallocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E90E0 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // r15
  __int64 v8; // r13
  __int64 *v9; // r12
  _WORD *v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int FullPath; // edi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned __int64 ActivationContextStackPointer; // r8
  unsigned __int64 v18; // rcx
  _QWORD *v19; // r14
  int v20; // esi
  unsigned int v21; // esi
  unsigned __int16 *v22; // rdx
  _QWORD **v23; // rdi
  char v24; // cl
  _QWORD *i; // r14
  volatile signed __int32 *v26; // rbx
  unsigned __int16 *v27; // r10
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  __int64 v30; // rax
  signed __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rbx
  signed __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  signed __int64 v40; // rax
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r15
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rax
  signed __int64 v51; // rax
  __int64 v52; // rbx
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  __int64 *v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // r8
  bool v58; // zf
  int v59; // eax
  __int64 *v60; // rax
  signed __int64 v61; // r8
  __int64 v62; // rdx
  signed __int64 v63; // rdx
  signed __int64 v64; // rtt
  signed __int64 v65; // rcx
  __int64 v66; // rdx
  signed __int64 v67; // rtt
  signed __int64 v68; // rcx
  __int64 v69; // rdx
  signed __int64 v70; // rtt
  unsigned __int16 v71; // bx
  unsigned int v72; // r11d
  unsigned int v73; // eax
  unsigned __int16 v74; // r9
  unsigned int *v75; // r15
  int v76; // edi
  int v77; // r9d
  unsigned int *v78; // rcx
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rax
  unsigned int v81; // r8d
  unsigned int v82; // r9d
  unsigned __int16 *v83; // r10
  int *v84; // r14
  __int64 v85; // rcx
  char v86; // r12
  bool v87; // bl
  _DWORD *v88; // rcx
  __int64 v89; // rcx
  _DWORD *v90; // rcx
  __int64 v91; // rdi
  unsigned __int64 v92; // rbx
  __int64 v93; // rbx
  unsigned int v94; // ecx
  int v95; // esi
  unsigned int v96; // ecx
  int v97; // ebx
  char *v98; // rcx
  unsigned int v99; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v101; // rbx
  unsigned __int64 v102; // rdx
  _WORD *v103; // rax
  __int16 v104; // cx
  _WORD *v105; // rcx
  int v106; // r13d
  unsigned __int16 *v107; // r8
  unsigned int v108; // r10d
  int v109; // r11d
  unsigned __int16 v111; // r9
  int v112; // eax
  __int64 Heap; // rax
  int v114; // ebx
  __int64 v115; // r8
  _WORD *v116; // rax
  __int64 v117; // r13
  _DWORD *ApiSetMap; // rsi
  _DWORD *SharedData; // rcx
  __int64 v120; // rcx
  unsigned __int64 v121; // rax
  unsigned int v122; // ebx
  _WORD *v123; // rax
  char *v124; // rcx
  char *v125; // rcx
  unsigned int v126; // r15d
  void *v127; // r12
  void *v128; // rax
  unsigned int v129; // edi
  void *v130; // rsi
  void *v131; // rax
  unsigned int v132; // r14d
  void *v133; // r15
  void *v134; // rax
  const char *v135; // rax
  char *v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rdx
  _QWORD *v140; // rcx
  _QWORD *v141; // rbx
  _QWORD *v142; // rdi
  __int64 v143; // rcx
  _WORD *v144; // rbx
  _WORD *StringRoutine; // rax
  __int64 v147; // [rsp+30h] [rbp-578h]
  char v148; // [rsp+51h] [rbp-557h]
  int v149; // [rsp+54h] [rbp-554h]
  __int16 v150; // [rsp+58h] [rbp-550h]
  unsigned __int8 v151; // [rsp+B4h] [rbp-4F4h]
  unsigned __int16 v154; // [rsp+D0h] [rbp-4D8h]
  char *Src; // [rsp+D8h] [rbp-4D0h]
  __int64 v156; // [rsp+E8h] [rbp-4C0h]
  __int64 v158; // [rsp+130h] [rbp-478h]
  struct _PEB *v159; // [rsp+150h] [rbp-458h]
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp-450h] BYREF
  __int16 v161; // [rsp+168h] [rbp-440h]
  __int16 v162; // [rsp+16Ah] [rbp-43Eh]
  __int64 v163; // [rsp+170h] [rbp-438h]
  unsigned __int64 v164; // [rsp+178h] [rbp-430h]
  unsigned __int16 *v165; // [rsp+180h] [rbp-428h]
  __int64 v166; // [rsp+188h] [rbp-420h]
  __int64 v167; // [rsp+190h] [rbp-418h]
  unsigned int v168; // [rsp+198h] [rbp-410h]
  void *v169; // [rsp+1A0h] [rbp-408h]
  void *v170; // [rsp+1A8h] [rbp-400h]
  void *v171; // [rsp+1B0h] [rbp-3F8h]
  int *v172; // [rsp+1B8h] [rbp-3F0h]
  _WORD *v173; // [rsp+1C0h] [rbp-3E8h]
  _WORD *v174; // [rsp+1C8h] [rbp-3E0h]
  _WORD *v175; // [rsp+1D0h] [rbp-3D8h]
  unsigned __int16 *v176; // [rsp+1D8h] [rbp-3D0h]
  unsigned __int16 *v177; // [rsp+1E0h] [rbp-3C8h]
  unsigned __int16 *v178; // [rsp+1E8h] [rbp-3C0h]
  __int64 v179; // [rsp+1F0h] [rbp-3B8h]
  __int64 v180; // [rsp+1F8h] [rbp-3B0h]
  __int64 v181; // [rsp+200h] [rbp-3A8h]
  int v182; // [rsp+208h] [rbp-3A0h]
  int v183; // [rsp+20Ch] [rbp-39Ch]
  _WORD *v184; // [rsp+210h] [rbp-398h]
  __int64 v185; // [rsp+220h] [rbp-388h] BYREF
  int v186; // [rsp+228h] [rbp-380h]
  _QWORD v187[7]; // [rsp+230h] [rbp-378h] BYREF
  _BYTE v188[16]; // [rsp+270h] [rbp-338h] BYREF
  unsigned __int16 v189; // [rsp+280h] [rbp-328h]
  __int16 v190; // [rsp+282h] [rbp-326h]
  unsigned __int16 *v191; // [rsp+288h] [rbp-320h]
  __int64 v192; // [rsp+290h] [rbp-318h]
  struct _TEB *v193; // [rsp+298h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2A0h] [rbp-308h] BYREF
  const void *v195; // [rsp+340h] [rbp-268h] BYREF
  void *v196; // [rsp+348h] [rbp-260h]
  _WORD v197[128]; // [rsp+350h] [rbp-258h] BYREF
  int v198; // [rsp+450h] [rbp-158h] BYREF
  void *v199; // [rsp+458h] [rbp-150h]
  _WORD v200[128]; // [rsp+460h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5A8h] [rbp+0h]

  v6 = a3;
  v8 = (__int64)a5;
  v9 = a6;
  v196 = v197;
  LODWORD(v195) = 0x1000000;
  v197[0] = 0;
  v10 = v200;
  v199 = v200;
  v11 = 0;
  v198 = 0x1000000;
  LOWORD(v12) = 256;
  v200[0] = 0;
  FullPath = 0;
  if ( !SourceString->Length )
    goto LABEL_8;
  if ( NlsMbCodePageTag )
  {
    v14 = RtlxOemStringToUnicodeSize(SourceString);
    v10 = v199;
    LOWORD(v12) = HIWORD(v198);
    v11 = v198;
  }
  else
  {
    v14 = 2 * SourceString->Length + 2;
  }
  v15 = v14 + v11;
  FullPath = 0;
  if ( v15 > (unsigned __int16)v12 )
  {
    if ( v15 > 0xFFFE )
    {
      FullPath = -1073741562;
      goto LABEL_5;
    }
    v12 = (v15 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v200 )
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = v198;
        if ( !(_WORD)v198 )
          goto LABEL_393;
        memmove(StringRoutine, v199, (unsigned __int16)v198);
      }
    }
    else
    {
      v10 = (_WORD *)NtdllpReallocateStringRoutine(v12);
    }
    v11 = v198;
LABEL_393:
    if ( v10 )
    {
      v199 = v10;
      HIWORD(v198) = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = v199;
      LOWORD(v12) = HIWORD(v198);
    }
  }
LABEL_5:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v198) = DestinationString.Length + v198;
  }
  v6 = a3;
LABEL_8:
  if ( FullPath >= 0 )
  {
    v185 = 72LL;
    v186 = 1;
    memset(v187, 0, sizeof(v187));
    v16 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = (unsigned __int64)NtCurrentTeb()->ActivationContextStackPointer;
    if ( ActivationContextStackPointer )
      v18 = *(_QWORD *)ActivationContextStackPointer;
    else
      v18 = 0LL;
    v187[3] = ~v18;
    v187[4] = ~v16;
    v187[5] = retaddr;
    if ( v18 && (*(_DWORD *)(v18 + 16) & 0x70) != 0x20 )
    {
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = v18;
      ExceptionRecord.ExceptionInformation[2] = v18;
      ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(v18 + 16);
      ExceptionRecord.ExceptionCode = -1072365548;
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      goto LABEL_15;
    }
    v187[0] = v18;
    v187[1] = v16;
    LODWORD(v187[2]) = 32;
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 8) == v16 )
        goto LABEL_14;
    }
    else if ( !v16 )
    {
LABEL_14:
      LODWORD(v187[2]) = 48;
      goto LABEL_15;
    }
    *(_QWORD *)ActivationContextStackPointer = v187;
LABEL_15:
    v19 = (_QWORD *)a2;
    v20 = *(_DWORD *)(a2 + 32) & 0x800000;
    v150 = v20;
    FullPath = 0;
    v148 = 0;
    if ( v20 )
      goto LABEL_184;
    v84 = &v198;
    v159 = NtCurrentPeb();
    v148 = 0;
    v87 = 1;
    v117 = v6 + 88;
    ApiSetMap = v159->ApiSetMap;
    SharedData = v159->SharedData;
    if ( SharedData && *SharedData )
      v120 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v120 = 2147353476LL;
    if ( *(_BYTE *)v120 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v124 = (unsigned int)RtlGetCurrentServiceSessionId(v120, v16)
           ? (char *)NtCurrentPeb()->SharedData + 555
           : (char *)2147353477;
      if ( (*v124 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v198, 0LL);
    }
    v154 = 0;
    Src = 0LL;
    v86 = 0;
    if ( (unsigned __int16)v198 >= 8u )
    {
      v83 = (unsigned __int16 *)v199;
      v121 = *(_QWORD *)v199 & 0xFFFFFFDFFFDFFFDFuLL;
      v16 = 0x2D004900500041LL;
      if ( v121 == 0x2D004900500041LL || (v16 = 0x2D005400580045LL, v121 == 0x2D005400580045LL) )
      {
        v122 = (unsigned __int16)v198;
        v123 = (char *)v199 + (unsigned __int16)v198;
        v184 = v123;
        do
        {
          if ( v122 <= 1 )
            break;
          v122 -= 2;
          v184 = --v123;
        }
        while ( *v123 != 45 );
        v71 = (unsigned __int16)v122 >> 1;
        if ( v71 )
        {
          v72 = 0;
          v73 = 0;
          ActivationContextStackPointer = (unsigned __int64)v199;
          v164 = (unsigned __int64)v199;
          while ( v73 < v71 )
          {
            v74 = *(_WORD *)ActivationContextStackPointer;
            if ( (unsigned __int16)(*(_WORD *)ActivationContextStackPointer - 65) <= 0x19u )
              v74 += 32;
            v16 = v72 * ApiSetMap[6];
            v72 = v16 + v74;
            ++v73;
            ActivationContextStackPointer += 2LL;
            v164 = ActivationContextStackPointer;
          }
          v75 = 0LL;
          v76 = 0;
          v77 = ApiSetMap[3] - 1;
          while ( v76 <= v77 )
          {
            ActivationContextStackPointer = (unsigned int)((v77 + v76) >> 1);
            v16 = (int)ActivationContextStackPointer;
            v78 = (_DWORD *)((char *)&ApiSetMap[2 * (int)ActivationContextStackPointer] + (unsigned int)ApiSetMap[5]);
            if ( v72 < *v78 )
            {
              v77 = ActivationContextStackPointer - 1;
            }
            else
            {
              if ( v72 <= *v78 )
              {
                v16 = 3LL * v78[1];
                v75 = (_DWORD *)((char *)&ApiSetMap[6 * v78[1]] + (unsigned int)ApiSetMap[4]);
                break;
              }
              v76 = ActivationContextStackPointer + 1;
            }
          }
          if ( v75 )
          {
            v16 = (__int64)ApiSetMap + v75[1];
            v79 = v75[3] >> 1;
            v165 = (unsigned __int16 *)v199;
            v166 = v16;
            v80 = v71 > v79 ? v79 : v71;
            while ( 1 )
            {
              if ( v83 >= (unsigned __int16 *)((char *)v199 + 2 * v80) )
              {
                ActivationContextStackPointer = v71 - (unsigned int)v79;
                goto LABEL_147;
              }
              v81 = *v83;
              v82 = *(unsigned __int16 *)v16;
              if ( v81 != v82 )
              {
                if ( v81 >= 0x61 )
                {
                  if ( v81 > 0x7A )
                    v81 = (unsigned __int16)(v81
                                           + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                      + 2LL
                                                      * ((v81 & 0xF)
                                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                             + 2LL
                                                                             * (((unsigned __int8)v81 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v81)))))));
                  else
                    v81 -= 32;
                }
                if ( v82 >= 0x61 )
                {
                  if ( v82 > 0x7A )
                    v82 = (unsigned __int16)(v82
                                           + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                      + 2LL
                                                      * ((v82 & 0xF)
                                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                             + 2LL
                                                                             * (((unsigned __int8)v82 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v82)))))));
                  else
                    v82 -= 32;
                }
                if ( v81 != v82 )
                  break;
              }
              v165 = ++v83;
              v16 += 2LL;
              v166 = v16;
            }
            ActivationContextStackPointer = v81 - v82;
LABEL_147:
            if ( !(_DWORD)ActivationContextStackPointer )
            {
              v84 = &v198;
              if ( v117 && v75[5] > 1 )
              {
                v85 = ApiSetpSearchForApiSetHost(v75, *(_QWORD *)(v117 + 8), *(_WORD *)v117 >> 1, ApiSetMap);
                goto LABEL_152;
              }
              if ( v75[5] )
              {
                v85 = (__int64)ApiSetMap + v75[4];
LABEL_152:
                Src = (char *)ApiSetMap + *(unsigned int *)(v85 + 12);
                v154 = *(_WORD *)(v85 + 16);
                v86 = 1;
                v87 = 1;
                goto LABEL_153;
              }
            }
          }
        }
        v87 = 1;
        v84 = &v198;
      }
    }
LABEL_153:
    if ( v86 )
    {
      if ( v154 )
      {
        v88 = NtCurrentPeb()->SharedData;
        if ( v88 && *v88 )
          v89 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v89 = 2147353476LL;
        if ( *(_BYTE *)v89 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v125 = (unsigned int)RtlGetCurrentServiceSessionId(v89, v16)
               ? (char *)NtCurrentPeb()->SharedData + 555
               : (char *)2147353477;
          if ( (*v125 & 0x20) != 0 )
            LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)&v198, 0LL);
        }
LABEL_158:
        FullPath = 0;
        if ( v86 )
        {
          if ( !v154 )
          {
            FullPath = -1073740671;
LABEL_183:
            v20 = 0;
            v9 = a6;
            v8 = (__int64)a5;
            v19 = (_QWORD *)a2;
LABEL_184:
            if ( FullPath < 0 )
              goto LABEL_332;
            v101 = &v198;
            v172 = &v198;
            if ( !(_WORD)v195 )
            {
              v116 = (char *)v199 + (unsigned __int16)v198;
              v173 = v116;
              while ( 1 )
              {
                v173 = --v116;
                if ( v116 < v199 )
                  break;
                if ( *v116 == 92 || *v116 == 47 )
                {
                  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v198, v199, ActivationContextStackPointer, 0LL) != 5 )
                  {
                    FullPath = LdrpGetFullPath(&v198, &v195);
                    if ( FullPath >= 0 )
                    {
                      v20 |= 0x600u;
                      v150 = v20;
                    }
                    goto LABEL_190;
                  }
LABEL_237:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v195, &v198);
                  goto LABEL_190;
                }
              }
              v20 |= 0x20u;
              v150 = v20;
              goto LABEL_237;
            }
            if ( (LdrpDebugFlags & 5) != 0 )
            {
              v135 = "SxS";
              if ( !v148 )
                v135 = "API set";
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                2587,
                (unsigned int)"LdrpPreprocessDllName",
                2,
                "DLL %wZ was redirected to %wZ by %s\n",
                &v198,
                &v195,
                v135);
            }
            v20 |= 0x200u;
            v150 = v20;
            if ( v148 )
            {
              v20 |= 4u;
              v150 = v20;
            }
            v101 = (int *)&v195;
            v172 = (int *)&v195;
LABEL_190:
            if ( FullPath < 0 )
              goto LABEL_332;
            v102 = *((_QWORD *)v101 + 1);
            v103 = (_WORD *)(v102 + *(unsigned __int16 *)v101);
            v174 = v103;
            while ( 1 )
            {
              v174 = --v103;
              if ( (unsigned __int64)v103 < v102 )
              {
LABEL_240:
                FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v195, L"\b\n");
                goto LABEL_201;
              }
              v104 = *v103;
              if ( *v103 == 46 )
                break;
              if ( v104 == 47 || v104 == 92 )
                goto LABEL_240;
            }
            v105 = (char *)v196 + (unsigned __int16)v195;
            v175 = v105;
            while ( 1 )
            {
              v175 = --v105;
              if ( v105 < v196 || *v105 != 46 )
                break;
              LOWORD(v195) = (_WORD)v195 - 2;
            }
            v105[1] = 0;
LABEL_201:
            if ( FullPath < 0 )
            {
LABEL_332:
              if ( (LdrpDebugFlags & 3) != 0 )
              {
                LODWORD(v147) = FullPath;
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2645,
                  (unsigned int)"LdrpPreprocessDllName",
                  0,
                  "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                  &v198,
                  v147);
              }
              if ( (LdrpDebugFlags & 0x10) != 0 )
                __debugbreak();
            }
            if ( FullPath < 0 )
            {
LABEL_372:
              RtlDeactivateActivationContextUnsafeFast(&v185);
              v144 = v199;
              if ( FullPath >= 0 )
                goto LABEL_373;
              goto LABEL_397;
            }
            if ( (v20 & 0x800000) != 0 )
            {
              FullPath = LdrpFindOrPrepareEnclaveModule(v19[21], (unsigned int)&v195, v19[2], v20, a3, v8, v19[5]);
              goto LABEL_372;
            }
            if ( !*v9 )
            {
              v183 = NtdllBaseTag + 2621440;
              Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
              *v9 = Heap;
              if ( !Heap )
              {
                FullPath = -1073741801;
                goto LABEL_372;
              }
            }
            v34 = v19[5];
            v158 = v34;
            v106 = v20;
            v35 = v19[2];
            v156 = v35;
            v60 = a5;
            *a5 = 0LL;
            if ( (v20 & 0x20) != 0 )
            {
              FullPath = LdrpFindLoadedDllByName((unsigned __int16 *)&v195, 0LL, v20, (__int64)a5, 0LL);
            }
            else
            {
              if ( (v20 & 0x200) == 0 )
                goto LABEL_101;
              v107 = (unsigned __int16 *)((char *)v196 + (unsigned __int16)v195);
              while ( --v107 > v196 )
              {
                if ( *v107 == 92 || *v107 == 47 )
                {
                  ++v107;
                  break;
                }
              }
              v191 = v107;
              v189 = (_WORD)v195 - ((_WORD)v107 - (_WORD)v196);
              v190 = WORD1(v195) - ((_WORD)v107 - (_WORD)v196);
              v108 = 0;
              v176 = v107;
              v109 = v189 >> 1;
              while ( v109-- )
              {
                v111 = *v107++;
                v176 = v107;
                if ( v111 < 0x61u )
                {
                  v112 = v111;
                }
                else if ( v111 > 0x7Au )
                {
                  v112 = (unsigned __int16)(v111
                                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                     + 2LL
                                                     * ((v111 & 0xF)
                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                          + 2LL
                                                                                          * (((v111 >> 4) & 0xF)
                                                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v111 >> 8)))))));
                }
                else
                {
                  v112 = v111 - 32;
                }
                v108 = v112 + 65599 * v108;
              }
              v21 = v108;
              if ( !v108 )
                v21 = 0x80000000;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v23 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v21 & 0x1F));
              v24 = 0;
              for ( i = *v23; i != v23; i = (_QWORD *)*i )
              {
                v26 = (volatile signed __int32 *)(i - 14);
                if ( v21 == *((_DWORD *)i + 38) && ((v106 & 8) == 0 || (v26[26] & 1) != 0) )
                {
                  if ( (unsigned __int16)v195 == *((unsigned __int16 *)v26 + 36) )
                  {
                    v22 = (unsigned __int16 *)v196;
                    v177 = (unsigned __int16 *)v196;
                    v27 = (unsigned __int16 *)*((_QWORD *)v26 + 10);
                    v178 = v27;
                    while ( v22 < (unsigned __int16 *)((char *)v196 + (unsigned __int16)v195) )
                    {
                      v28 = *v22;
                      v168 = v28;
                      v29 = *v27;
                      if ( v28 != v29 )
                      {
                        if ( v28 >= 0x61 )
                        {
                          if ( v28 > 0x7A )
                            v28 = (unsigned __int16)(v28
                                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * ((v28 & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2LL
                                                                                     * (((unsigned __int8)v28 >> 4)
                                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v28)))))));
                          else
                            v28 -= 32;
                        }
                        if ( v29 >= 0x61 )
                        {
                          if ( v29 > 0x7A )
                            v29 = (unsigned __int16)(v29
                                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                              + 2LL
                                                              * ((v29 & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2LL
                                                                                     * (((unsigned __int8)v29 >> 4)
                                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v29)))))));
                          else
                            v29 -= 32;
                        }
                        if ( v28 != v29 )
                          goto LABEL_342;
                      }
                      v177 = ++v22;
                      v178 = ++v27;
                    }
                    v24 = 1;
                    v30 = *((_QWORD *)v26 + 19);
                    if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement(v26 + 69);
                    *a5 = (__int64)v26;
                    break;
                  }
LABEL_342:
                  v24 = 0;
                }
              }
              if ( v24 )
                FullPath = 0;
              else
                FullPath = -1073741515;
              v31 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
              if ( v31 != 1 )
              {
                do
                {
                  v65 = v31 & 6;
                  v66 = 3LL;
                  if ( v65 != 2 )
                    v66 = -1LL;
                  v22 = (unsigned __int16 *)(v31 + v66);
                  v67 = v31;
                  v31 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, (signed __int64)v22, v31);
                }
                while ( v67 != v31 );
                if ( v65 == 2 )
                  RtlpWakeSRWLock(&LdrpModuleDatatableLock, v22, 0LL);
              }
              if ( FullPath < 0 )
                v151 = 3;
              else
                v151 = 0;
              v32 = NtCurrentPeb()->SharedData;
              if ( v32 && *v32 )
                v33 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v33 = 2147353476LL;
              if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
              {
                v136 = (unsigned int)RtlGetCurrentServiceSessionId(v32, v22)
                     ? (char *)NtCurrentPeb()->SharedData + 555
                     : (char *)2147353477;
                if ( (*v136 & 0x20) != 0 )
                  LdrpLogEtwEvent(5280, 0, 0, v151, (__int64)&v195, 0LL);
              }
              LOWORD(v20) = v150;
              v34 = v158;
              v35 = v156;
            }
            if ( FullPath != -1073741515 )
            {
              v8 = (__int64)a5;
              v36 = *a5;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v38 = *(_QWORD *)(v36 + 152);
              v39 = *(_DWORD *)(v38 + 24);
              if ( v39 != -1 )
              {
                if ( v39 )
                {
                  *(_DWORD *)(v38 + 24) = v39 + 1;
                }
                else
                {
                  v193 = NtCurrentTeb();
                  if ( (v193->SameTebFlags & 0x1000) != 0 )
                    ++*(_DWORD *)(v38 + 28);
                }
              }
              v40 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
              if ( v40 != 1 )
              {
                do
                {
                  v68 = v40 & 6;
                  v69 = 3LL;
                  if ( v68 != 2 )
                    v69 = -1LL;
                  v37 = v40 + v69;
                  v70 = v40;
                  v40 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v37, v40);
                }
                while ( v70 != v40 );
                if ( v68 == 2 )
                  RtlpWakeSRWLock(&LdrpModuleDatatableLock, v37, 0LL);
              }
              LOWORD(v20) = v150;
              goto LABEL_51;
            }
            v60 = a5;
LABEL_101:
            FullPath = LdrpAllocatePlaceHolder(&v195, v35, v106, a4, a3, v60, v34);
            v8 = (__int64)a5;
            if ( FullPath >= 0 )
              FullPath = LdrpLoadKnownDll(*(_QWORD *)(*a5 + 176));
LABEL_51:
            v149 = FullPath;
            if ( !*(_QWORD *)v8 )
              goto LABEL_372;
            v41 = v20 & 0x400;
            if ( v41 && FullPath == -1073741515 )
            {
              v137 = *(_QWORD *)(*(_QWORD *)v8 + 176LL);
              v192 = v137;
              *(_DWORD *)(v137 + 32) |= 0x4000000u;
              LOBYTE(v37) = 1;
              LdrpProcessWork(v137, v37);
              FullPath = **(_DWORD **)(v137 + 40);
              v149 = FullPath;
            }
            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
            v42 = *(_QWORD *)v8;
            v43 = v42;
            v179 = *(_QWORD *)v8;
            if ( v42 )
            {
              v44 = *(_QWORD *)(v42 + 176);
              if ( v44 )
              {
                if ( (*(_DWORD *)(v44 + 32) & 0x80000) == 0 && *(_QWORD *)(v44 + 56) != v42 )
                {
                  v43 = *(_QWORD *)(v44 + 56);
                  v179 = v43;
                  *(_QWORD *)(v44 + 56) = v42;
                }
              }
            }
            v181 = v43;
            *(_DWORD *)(*a6 + 24) &= ~1u;
            v45 = *a6;
            v46 = *(_QWORD *)(v43 + 152);
            v47 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL);
            if ( v47 != v46
              && (*(_DWORD *)(v46 + 56) != 9
               || *(_DWORD *)(v46 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v46 - 56LL) & 0x20) == 0) )
            {
              v53 = *(_QWORD **)(v47 + 40);
              if ( !v53 )
              {
LABEL_85:
                if ( !v45 )
                {
                  v182 = NtdllBaseTag + 2359296;
                  v138 = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 2359296), 32LL);
                  v45 = v138;
                  if ( !v138 )
                  {
                    MEMORY[0] = -1073741801;
                    v45 = 0LL;
                    goto LABEL_60;
                  }
                  *(_DWORD *)(v138 + 24) |= 1u;
                }
                v55 = *(__int64 **)(v47 + 40);
                if ( v55 )
                {
                  *(_QWORD *)v45 = *v55;
                  *v55 = v45;
                }
                else
                {
                  *(_QWORD *)v45 = v45;
                }
                *(_QWORD *)(v47 + 40) = v45;
                *(_QWORD *)(v45 + 8) = v46;
                v56 = (_QWORD *)(v45 + 16);
                v57 = *(_QWORD **)(v46 + 48);
                if ( v57 )
                {
                  *v56 = *v57;
                  *v57 = v56;
                }
                else
                {
                  *v56 = v56;
                }
                *(_QWORD *)(v46 + 48) = v56;
                v58 = (*(_DWORD *)(v45 + 24) & 1) == 0;
                v59 = *(_DWORD *)(v45 + 24) & 1;
                *(_QWORD *)(v45 + 24) = v47;
                if ( !v58 )
                {
                  *(_DWORD *)(v45 + 24) &= ~1u;
                  *(_DWORD *)(v45 + 24) |= v59;
                }
                v45 = 0LL;
LABEL_60:
                v180 = v45;
                *a6 = v45;
                if ( FullPath == -1073741515 )
                {
                  if ( !v41 )
                  {
                    LdrpQueueWork(*(_QWORD *)(v43 + 176));
                    v149 = 0;
                    goto LABEL_63;
                  }
                }
                else if ( FullPath == -1073741267 )
                {
                  v149 = 0;
                  goto LABEL_63;
                }
                if ( FullPath < 0 )
                {
LABEL_66:
                  v50 = *(_QWORD *)(v43 + 152);
                  if ( *(_DWORD *)(v50 + 24) != -1
                    && (*(_BYTE *)(*(_QWORD *)v50 - 56LL) & 0x20) == 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 276), 0xFFFFFFFF) == 1 )
                  {
                    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                    v139 = *(_QWORD *)(v43 + 160);
                    v140 = *(_QWORD **)(v43 + 168);
                    if ( *(_QWORD *)(v139 + 8) != v43 + 160 || *v140 != v43 + 160 )
                      __fastfail(3u);
                    *v140 = v139;
                    *(_QWORD *)(v139 + 8) = v140;
                    v141 = *(_QWORD **)(v43 + 152);
                    v142 = (_QWORD *)*v141;
                    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                    if ( *(_WORD *)(v43 + 110) )
                      LdrpReleaseTlsEntry(v43, 0LL);
                    LdrpUnmapModule(v43);
                    v143 = *(_QWORD *)(v43 + 136);
                    if ( (unsigned __int64)(v143 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                      RtlReleaseActivationContext(v143);
                    if ( *(_QWORD *)(v43 + 80) )
                      LdrpFreeUnicodeString(v43 + 72);
                    RtlFreeHeap(LdrpHeap, 0LL, v43);
                    if ( v142 == v141 )
                      LdrpDestroyNode(v141);
                  }
                  v51 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
                  if ( v51 != 1 )
                  {
                    do
                    {
                      v61 = v51 & 6;
                      v62 = 3LL;
                      if ( v61 != 2 )
                        v62 = -1LL;
                      v63 = v51 + v62;
                      v64 = v51;
                      v51 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v63, v51);
                    }
                    while ( v64 != v51 );
                    if ( v61 == 2 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v63, 0LL);
                  }
                  v52 = v181;
                  if ( v181 != *(_QWORD *)v8 )
                  {
                    LdrpFreeReplacedModule();
                    *(_QWORD *)v8 = v52;
                  }
                  FullPath = v149;
                  goto LABEL_372;
                }
LABEL_63:
                v49 = *(_DWORD *)(a2 + 100);
                if ( v49 )
                {
                  if ( *a6 || *(int *)(*(_QWORD *)(v43 + 152) + 56LL) >= 2 )
                    *(_DWORD *)(a2 + 100) = v49 - 1;
                }
                else if ( *(int *)(*(_QWORD *)(v43 + 152) + 56LL) < 2 )
                {
                  *(_QWORD *)(a2 + 80) = v43;
                  *(_DWORD *)(a2 + 100) = 1;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
                  v149 = 259;
                }
                goto LABEL_66;
              }
              v54 = *(_QWORD **)(v47 + 40);
              while ( 1 )
              {
                v54 = (_QWORD *)*v54;
                if ( v54[1] == v46 )
                  break;
                if ( v54 == v53 )
                  goto LABEL_85;
              }
            }
            v48 = *(_DWORD *)(v46 + 24);
            if ( (unsigned int)(v48 - 2) <= 0xFFFFFFFC )
              *(_DWORD *)(v46 + 24) = v48 - 1;
            goto LABEL_60;
          }
          LOWORD(v195) = 0;
          v90 = NtCurrentPeb()->SharedData;
          if ( v90 && *v90 )
            v91 = (__int64)NtCurrentPeb()->SharedData + 30;
          else
            v91 = 2147352624LL;
          v167 = v91;
          v162 = 0;
          LOWORD(v92) = 0;
          v161 = 0;
          v163 = v91;
          if ( v91 )
          {
            v93 = -1LL;
            do
              ++v93;
            while ( *(_WORD *)(v91 + 2 * v93) );
            v92 = 2 * v93;
            if ( v92 >= 0xFFFE )
              LOWORD(v92) = -4;
            v161 = v92;
            v162 = v92 + 2;
          }
          if ( (_WORD)v92 )
          {
            v94 = (unsigned __int16)v92 + 2;
            v95 = 0;
            if ( v94 > WORD1(v195) )
            {
              if ( v94 <= 0xFFFE )
              {
                v126 = ((unsigned __int16)v92 + 65) & 0xFFFFFFC0;
                if ( v126 > 0xFFFE )
                  v126 = 65534;
                if ( v196 == v197 )
                {
                  v128 = (void *)NtdllpAllocateStringRoutine(v126);
                  v127 = v128;
                  v169 = v128;
                  if ( v128 && (_WORD)v195 )
                    memmove(v128, v196, (unsigned __int16)v195);
                }
                else
                {
                  v127 = (void *)NtdllpReallocateStringRoutine(v126);
                  v169 = v127;
                }
                if ( v127 )
                {
                  v196 = v127;
                  WORD1(v195) = v126;
                }
                else
                {
                  v95 = -1073741801;
                }
              }
              else
              {
                v95 = -1073741562;
              }
            }
            if ( v95 >= 0 )
            {
              memmove((char *)v196 + (unsigned __int16)v195, (const void *)v91, (unsigned __int16)v92);
              LOWORD(v195) = v92 + (_WORD)v195;
              *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
            }
          }
          v96 = (unsigned __int16)v195 + 22;
          v97 = 0;
          if ( v96 > WORD1(v195) )
          {
            if ( v96 <= 0xFFFE )
            {
              v129 = ((unsigned __int16)v195 + 85) & 0xFFFFFFC0;
              if ( v129 > 0xFFFE )
                v129 = 65534;
              if ( v196 == v197 )
              {
                v131 = (void *)NtdllpAllocateStringRoutine(v129);
                v130 = v131;
                v170 = v131;
                if ( v131 && (_WORD)v195 )
                  memmove(v131, v196, (unsigned __int16)v195);
              }
              else
              {
                v130 = (void *)NtdllpReallocateStringRoutine(v129);
                v170 = v130;
              }
              if ( v130 )
              {
                v196 = v130;
                WORD1(v195) = v129;
              }
              else
              {
                v97 = -1073741801;
              }
            }
            else
            {
              v97 = -1073741562;
            }
          }
          if ( v97 >= 0 )
          {
            v98 = (char *)v196 + (unsigned __int16)v195;
            *(_OWORD *)v98 = *(_OWORD *)L"\\SYSTEM32\\";
            *((_DWORD *)v98 + 4) = *(_DWORD *)L"2\\";
            LOWORD(v195) = (_WORD)v195 + 20;
            *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
          }
          v99 = v154 + (unsigned __int16)v195 + 2;
          FullPath = 0;
          if ( v99 > WORD1(v195) )
          {
            if ( v99 <= 0xFFFE )
            {
              v132 = (v99 + 63) & 0xFFFFFFC0;
              if ( v132 > 0xFFFE )
                v132 = 65534;
              if ( v196 == v197 )
              {
                v134 = (void *)NtdllpAllocateStringRoutine(v132);
                v133 = v134;
                v171 = v134;
                if ( v134 && (_WORD)v195 )
                  memmove(v134, v196, (unsigned __int16)v195);
              }
              else
              {
                v133 = (void *)NtdllpReallocateStringRoutine(v132);
                v171 = v133;
              }
              if ( v133 )
              {
                v196 = v133;
                WORD1(v195) = v132;
              }
              else
              {
                FullPath = -1073741801;
              }
            }
            else
            {
              FullPath = -1073741562;
            }
          }
          if ( FullPath < 0 )
          {
            v87 = 1;
            v84 = &v198;
          }
          else
          {
            memmove((char *)v196 + (unsigned __int16)v195, Src, v154);
            LOWORD(v195) = v154 + (_WORD)v195;
            *((_WORD *)v196 + ((unsigned __int64)(unsigned __int16)v195 >> 1)) = 0;
            ProcessParameters = v159->ProcessParameters;
            v87 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v84 = (int *)&v195;
          }
        }
        if ( FullPath >= 0 && v87 && !LdrpIsSecureProcess )
        {
          v114 = RtlDosApplyFileIsolationRedirection_Ustr(
                   1,
                   (_DWORD)v84,
                   (unsigned int)L"\b\n",
                   0,
                   (__int64)v188,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
          if ( v114 >= 0 )
          {
            v148 = 1;
            LdrpGetFullPath(v188, &v195);
            LdrpFreeUnicodeString(v188);
          }
          if ( v114 != -1072365560 )
            FullPath = v114;
        }
        goto LABEL_183;
      }
      v115 = 5330LL;
    }
    else
    {
      v115 = 5331LL;
    }
    LdrpLogDllState(0LL, &v198, v115);
    goto LABEL_158;
  }
LABEL_397:
  *(_QWORD *)v8 = 0LL;
  **(_DWORD **)(a2 + 40) = FullPath;
  v144 = v199;
LABEL_373:
  if ( v200 != v144 )
    NtdllpFreeStringRoutine(v144);
  v199 = v200;
  v198 = 0x1000000;
  v200[0] = 0;
  if ( v197 != v196 )
    NtdllpFreeStringRoutine(v196);
  return (unsigned int)FullPath;
}
