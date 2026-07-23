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
        PVOID *a5,
        _QWORD *a6)
{
  __int64 v6; // r15
  PVOID *v8; // r13
  _QWORD *v9; // r12
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
  unsigned int v20; // esi
  unsigned int v21; // esi
  _QWORD **v22; // rdi
  char v23; // cl
  _QWORD *i; // r14
  volatile signed __int32 *v25; // rbx
  wchar_t *v26; // rdx
  unsigned __int16 *v27; // r10
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  __int64 v30; // rax
  signed __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r14
  _QWORD *v36; // rbx
  signed __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  signed __int64 v40; // rax
  int v41; // esi
  char *v42; // rax
  char *v43; // r14
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r15
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rax
  signed __int64 v51; // rax
  void *v52; // rbx
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
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
  signed __int64 v67; // rdx
  signed __int64 v68; // rtt
  signed __int64 v69; // rcx
  __int64 v70; // rdx
  signed __int64 v71; // rtt
  unsigned __int16 v72; // bx
  unsigned int v73; // r11d
  unsigned int v74; // eax
  unsigned __int16 v75; // r9
  unsigned int *v76; // r15
  int v77; // edi
  int v78; // r9d
  unsigned int *v79; // rcx
  unsigned __int16 *v80; // rdx
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rax
  unsigned int v83; // r8d
  unsigned int v84; // r9d
  unsigned __int16 *v85; // r10
  _UNICODE_STRING *v86; // r14
  __int64 v87; // rcx
  char v88; // r12
  bool v89; // bl
  _DWORD *v90; // rcx
  __int64 v91; // rcx
  _DWORD *v92; // rcx
  __int64 v93; // rdi
  unsigned __int64 v94; // rbx
  __int64 v95; // rbx
  unsigned int v96; // ecx
  int v97; // esi
  unsigned int v98; // ecx
  int v99; // ebx
  char *v100; // rcx
  unsigned int v101; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *p_OriginalName; // rbx
  wchar_t *Buffer; // rdx
  wchar_t *v105; // rax
  wchar_t v106; // cx
  wchar_t *v107; // rcx
  int v108; // r13d
  wchar_t *v109; // r8
  unsigned int v110; // r10d
  int v111; // r11d
  wchar_t v113; // r9
  int v114; // eax
  PVOID Heap; // rax
  NTSTATUS v116; // ebx
  __int64 v117; // r8
  _WORD *v118; // rax
  __int64 v119; // r13
  _DWORD *ApiSetMap; // rsi
  _DWORD *SharedData; // rcx
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  unsigned int v124; // ebx
  _WORD *v125; // rax
  char *v126; // rcx
  char *v127; // rcx
  unsigned int v128; // r15d
  wchar_t *v129; // r12
  wchar_t *v130; // rax
  unsigned int v131; // edi
  wchar_t *v132; // rsi
  wchar_t *v133; // rax
  unsigned int v134; // r14d
  wchar_t *v135; // r15
  wchar_t *v136; // rax
  const char *v137; // rax
  char *v138; // rax
  __int64 v139; // rbx
  _DWORD *v140; // rax
  char **v141; // rdx
  PVOID *v142; // rcx
  _QWORD *v143; // rbx
  _QWORD *v144; // rdi
  _ACTIVATION_CONTEXT *v145; // rcx
  _WORD *v146; // rbx
  _WORD *StringRoutine; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-578h]
  char v150; // [rsp+51h] [rbp-557h]
  int v151; // [rsp+54h] [rbp-554h]
  __int16 v152; // [rsp+58h] [rbp-550h]
  unsigned __int8 v153; // [rsp+B4h] [rbp-4F4h]
  unsigned __int16 v156; // [rsp+D0h] [rbp-4D8h]
  char *Src; // [rsp+D8h] [rbp-4D0h]
  __int64 v158; // [rsp+E8h] [rbp-4C0h]
  __int64 v160; // [rsp+130h] [rbp-478h]
  struct _PEB *v161; // [rsp+150h] [rbp-458h]
  _UNICODE_STRING DestinationString; // [rsp+158h] [rbp-450h] BYREF
  __int16 v163; // [rsp+168h] [rbp-440h]
  __int16 v164; // [rsp+16Ah] [rbp-43Eh]
  __int64 v165; // [rsp+170h] [rbp-438h]
  unsigned __int64 v166; // [rsp+178h] [rbp-430h]
  unsigned __int16 *v167; // [rsp+180h] [rbp-428h]
  unsigned __int16 *v168; // [rsp+188h] [rbp-420h]
  __int64 v169; // [rsp+190h] [rbp-418h]
  unsigned int v170; // [rsp+198h] [rbp-410h]
  wchar_t *v171; // [rsp+1A0h] [rbp-408h]
  wchar_t *v172; // [rsp+1A8h] [rbp-400h]
  wchar_t *v173; // [rsp+1B0h] [rbp-3F8h]
  _UNICODE_STRING *v174; // [rsp+1B8h] [rbp-3F0h]
  _WORD *v175; // [rsp+1C0h] [rbp-3E8h]
  wchar_t *v176; // [rsp+1C8h] [rbp-3E0h]
  wchar_t *v177; // [rsp+1D0h] [rbp-3D8h]
  wchar_t *v178; // [rsp+1D8h] [rbp-3D0h]
  wchar_t *v179; // [rsp+1E0h] [rbp-3C8h]
  unsigned __int16 *v180; // [rsp+1E8h] [rbp-3C0h]
  PVOID v181; // [rsp+1F0h] [rbp-3B8h]
  _DWORD *v182; // [rsp+1F8h] [rbp-3B0h]
  PVOID v183; // [rsp+200h] [rbp-3A8h]
  ULONG v184; // [rsp+208h] [rbp-3A0h]
  ULONG v185; // [rsp+20Ch] [rbp-39Ch]
  _WORD *v186; // [rsp+210h] [rbp-398h]
  __int64 v187; // [rsp+220h] [rbp-388h] BYREF
  int v188; // [rsp+228h] [rbp-380h]
  _QWORD v189[7]; // [rsp+230h] [rbp-378h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+270h] [rbp-338h] BYREF
  unsigned __int16 v191; // [rsp+280h] [rbp-328h]
  __int16 v192; // [rsp+282h] [rbp-326h]
  wchar_t *v193; // [rsp+288h] [rbp-320h]
  __int64 v194; // [rsp+290h] [rbp-318h]
  struct _TEB *v195; // [rsp+298h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2A0h] [rbp-308h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+340h] [rbp-268h] BYREF
  _WORD v198[128]; // [rsp+350h] [rbp-258h] BYREF
  int v199; // [rsp+450h] [rbp-158h] BYREF
  void *v200; // [rsp+458h] [rbp-150h]
  _WORD v201[128]; // [rsp+460h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5A8h] [rbp+0h]

  v6 = a3;
  v8 = a5;
  v9 = a6;
  OriginalName.Buffer = v198;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v198[0] = 0;
  v10 = v201;
  v200 = v201;
  v11 = 0;
  v199 = 0x1000000;
  LOWORD(v12) = 256;
  v201[0] = 0;
  FullPath = 0;
  if ( !SourceString->Length )
    goto LABEL_8;
  if ( NlsMbCodePageTag )
  {
    v14 = RtlxOemStringToUnicodeSize(SourceString);
    v10 = v200;
    LOWORD(v12) = HIWORD(v199);
    v11 = v199;
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
    if ( v10 == v201 )
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = v199;
        if ( !(_WORD)v199 )
          goto LABEL_393;
        memmove(StringRoutine, v200, (unsigned __int16)v199);
      }
    }
    else
    {
      v10 = (_WORD *)NtdllpReallocateStringRoutine(v12);
    }
    v11 = v199;
LABEL_393:
    if ( v10 )
    {
      v200 = v10;
      HIWORD(v199) = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = v200;
      LOWORD(v12) = HIWORD(v199);
    }
  }
LABEL_5:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v199) = DestinationString.Length + v199;
  }
  v6 = a3;
LABEL_8:
  if ( FullPath >= 0 )
  {
    v187 = 72LL;
    v188 = 1;
    memset(v189, 0, sizeof(v189));
    v16 = *(_QWORD *)(v6 + 136);
    ActivationContextStackPointer = (unsigned __int64)NtCurrentTeb()->ActivationContextStackPointer;
    if ( ActivationContextStackPointer )
      v18 = *(_QWORD *)ActivationContextStackPointer;
    else
      v18 = 0LL;
    v189[3] = ~v18;
    v189[4] = ~v16;
    v189[5] = retaddr;
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
    v189[0] = v18;
    v189[1] = v16;
    LODWORD(v189[2]) = 32;
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 8) == v16 )
        goto LABEL_14;
    }
    else if ( !v16 )
    {
LABEL_14:
      LODWORD(v189[2]) = 48;
      goto LABEL_15;
    }
    *(_QWORD *)ActivationContextStackPointer = v189;
LABEL_15:
    v19 = (_QWORD *)a2;
    v20 = *(_DWORD *)(a2 + 32) & 0x800000;
    v152 = v20;
    FullPath = 0;
    v150 = 0;
    if ( v20 )
      goto LABEL_184;
    v86 = (_UNICODE_STRING *)&v199;
    v161 = NtCurrentPeb();
    v150 = 0;
    v89 = 1;
    v119 = v6 + 88;
    ApiSetMap = v161->ApiSetMap;
    SharedData = v161->SharedData;
    if ( SharedData && *SharedData )
      v122 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v122 = 2147353476LL;
    if ( *(_BYTE *)v122 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v126 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v126 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v199, 0LL);
    }
    v156 = 0;
    Src = 0LL;
    v88 = 0;
    if ( (unsigned __int16)v199 >= 8u )
    {
      v85 = (unsigned __int16 *)v200;
      v123 = *(_QWORD *)v200 & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v123 == 0x2D004900500041LL || v123 == 0x2D005400580045LL )
      {
        v124 = (unsigned __int16)v199;
        v125 = (char *)v200 + (unsigned __int16)v199;
        v186 = v125;
        do
        {
          if ( v124 <= 1 )
            break;
          v124 -= 2;
          v186 = --v125;
        }
        while ( *v125 != 45 );
        v72 = (unsigned __int16)v124 >> 1;
        if ( v72 )
        {
          v73 = 0;
          v74 = 0;
          ActivationContextStackPointer = (unsigned __int64)v200;
          v166 = (unsigned __int64)v200;
          while ( v74 < v72 )
          {
            v75 = *(_WORD *)ActivationContextStackPointer;
            if ( (unsigned __int16)(*(_WORD *)ActivationContextStackPointer - 65) <= 0x19u )
              v75 += 32;
            v73 = v73 * ApiSetMap[6] + v75;
            ++v74;
            ActivationContextStackPointer += 2LL;
            v166 = ActivationContextStackPointer;
          }
          v76 = 0LL;
          v77 = 0;
          v78 = ApiSetMap[3] - 1;
          while ( v77 <= v78 )
          {
            ActivationContextStackPointer = (unsigned int)((v78 + v77) >> 1);
            v79 = (_DWORD *)((char *)&ApiSetMap[2 * (int)ActivationContextStackPointer] + (unsigned int)ApiSetMap[5]);
            if ( v73 < *v79 )
            {
              v78 = ActivationContextStackPointer - 1;
            }
            else
            {
              if ( v73 <= *v79 )
              {
                v76 = (_DWORD *)((char *)&ApiSetMap[6 * v79[1]] + (unsigned int)ApiSetMap[4]);
                break;
              }
              v77 = ActivationContextStackPointer + 1;
            }
          }
          if ( v76 )
          {
            v80 = (unsigned __int16 *)((char *)ApiSetMap + v76[1]);
            v81 = v76[3] >> 1;
            v167 = (unsigned __int16 *)v200;
            v168 = v80;
            v82 = v72 > v81 ? v81 : v72;
            while ( 1 )
            {
              if ( v85 >= (unsigned __int16 *)((char *)v200 + 2 * v82) )
              {
                ActivationContextStackPointer = v72 - (unsigned int)v81;
                goto LABEL_147;
              }
              v83 = *v85;
              v84 = *v80;
              if ( v83 != v84 )
              {
                if ( v83 >= 0x61 )
                {
                  if ( v83 > 0x7A )
                    v83 = (unsigned __int16)(v83
                                           + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                      + 2LL
                                                      * ((v83 & 0xF)
                                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                             + 2LL
                                                                             * (((unsigned __int8)v83 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v83)))))));
                  else
                    v83 -= 32;
                }
                if ( v84 >= 0x61 )
                {
                  if ( v84 > 0x7A )
                    v84 = (unsigned __int16)(v84
                                           + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                      + 2LL
                                                      * ((v84 & 0xF)
                                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                             + 2LL
                                                                             * (((unsigned __int8)v84 >> 4)
                                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v84)))))));
                  else
                    v84 -= 32;
                }
                if ( v83 != v84 )
                  break;
              }
              v167 = ++v85;
              v168 = ++v80;
            }
            ActivationContextStackPointer = v83 - v84;
LABEL_147:
            if ( !(_DWORD)ActivationContextStackPointer )
            {
              v86 = (_UNICODE_STRING *)&v199;
              if ( v119 && v76[5] > 1 )
              {
                v87 = ApiSetpSearchForApiSetHost(v76, *(_QWORD *)(v119 + 8), *(_WORD *)v119 >> 1, ApiSetMap);
                goto LABEL_152;
              }
              if ( v76[5] )
              {
                v87 = (__int64)ApiSetMap + v76[4];
LABEL_152:
                Src = (char *)ApiSetMap + *(unsigned int *)(v87 + 12);
                v156 = *(_WORD *)(v87 + 16);
                v88 = 1;
                v89 = 1;
                goto LABEL_153;
              }
            }
          }
        }
        v89 = 1;
        v86 = (_UNICODE_STRING *)&v199;
      }
    }
LABEL_153:
    if ( v88 )
    {
      if ( v156 )
      {
        v90 = NtCurrentPeb()->SharedData;
        if ( v90 && *v90 )
          v91 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v91 = 2147353476LL;
        if ( *(_BYTE *)v91 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v127 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
          if ( (*v127 & 0x20) != 0 )
            LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)&v199, 0LL);
        }
LABEL_158:
        FullPath = 0;
        if ( v88 )
        {
          if ( !v156 )
          {
            FullPath = -1073740671;
LABEL_183:
            v20 = 0;
            v9 = a6;
            v8 = a5;
            v19 = (_QWORD *)a2;
LABEL_184:
            if ( FullPath < 0 )
              goto LABEL_332;
            p_OriginalName = (_UNICODE_STRING *)&v199;
            v174 = (_UNICODE_STRING *)&v199;
            if ( !OriginalName.Length )
            {
              v118 = (char *)v200 + (unsigned __int16)v199;
              v175 = v118;
              while ( 1 )
              {
                v175 = --v118;
                if ( v118 < v200 )
                  break;
                if ( *v118 == 92 || *v118 == 47 )
                {
                  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&v199, v200, ActivationContextStackPointer, 0LL) != 5 )
                  {
                    FullPath = LdrpGetFullPath(&v199, &OriginalName);
                    if ( FullPath >= 0 )
                    {
                      v20 |= 0x600u;
                      v152 = v20;
                    }
                    goto LABEL_190;
                  }
LABEL_237:
                  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&OriginalName, &v199);
                  goto LABEL_190;
                }
              }
              v20 |= 0x20u;
              v152 = v20;
              goto LABEL_237;
            }
            if ( (LdrpDebugFlags & 5) != 0 )
            {
              v137 = "SxS";
              if ( !v150 )
                v137 = "API set";
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                2587,
                (unsigned int)"LdrpPreprocessDllName",
                2,
                "DLL %wZ was redirected to %wZ by %s\n",
                &v199,
                &OriginalName,
                v137);
            }
            v20 |= 0x200u;
            v152 = v20;
            if ( v150 )
            {
              v20 |= 4u;
              v152 = v20;
            }
            p_OriginalName = &OriginalName;
            v174 = &OriginalName;
LABEL_190:
            if ( FullPath < 0 )
              goto LABEL_332;
            Buffer = p_OriginalName->Buffer;
            v105 = (wchar_t *)((char *)Buffer + p_OriginalName->Length);
            v176 = v105;
            while ( 1 )
            {
              v176 = --v105;
              if ( v105 < Buffer )
              {
LABEL_240:
                FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&OriginalName, &LdrpDefaultExtension);
                goto LABEL_201;
              }
              v106 = *v105;
              if ( *v105 == 46 )
                break;
              if ( v106 == 47 || v106 == 92 )
                goto LABEL_240;
            }
            v107 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
            v177 = v107;
            while ( 1 )
            {
              v177 = --v107;
              if ( v107 < OriginalName.Buffer || *v107 != 46 )
                break;
              OriginalName.Length -= 2;
            }
            v107[1] = 0;
LABEL_201:
            if ( FullPath < 0 )
            {
LABEL_332:
              if ( (LdrpDebugFlags & 3) != 0 )
              {
                LODWORD(NewFlags) = FullPath;
                LdrpLogDbgPrint(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2645,
                  (unsigned int)"LdrpPreprocessDllName",
                  0,
                  "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                  &v199,
                  NewFlags);
              }
              if ( (LdrpDebugFlags & 0x10) != 0 )
                __debugbreak();
            }
            if ( FullPath < 0 )
            {
LABEL_372:
              RtlDeactivateActivationContextUnsafeFast(&v187);
              v146 = v200;
              if ( FullPath >= 0 )
                goto LABEL_373;
              goto LABEL_397;
            }
            if ( (v20 & 0x800000) != 0 )
            {
              FullPath = LdrpFindOrPrepareEnclaveModule(v19[21], &OriginalName, v19[2], v20, a3, v8, v19[5]);
              goto LABEL_372;
            }
            if ( !*v9 )
            {
              v185 = NtdllBaseTag + 2621440;
              Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
              *v9 = Heap;
              if ( !Heap )
              {
                FullPath = -1073741801;
                goto LABEL_372;
              }
            }
            v34 = v19[5];
            v160 = v34;
            v108 = v20;
            v35 = v19[2];
            v158 = v35;
            v60 = (__int64 *)a5;
            *a5 = 0LL;
            if ( (v20 & 0x20) != 0 )
            {
              FullPath = LdrpFindLoadedDllByName(&OriginalName, 0LL, v20, (__int64)a5, 0LL);
            }
            else
            {
              if ( (v20 & 0x200) == 0 )
                goto LABEL_101;
              v109 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
              while ( --v109 > OriginalName.Buffer )
              {
                if ( *v109 == 92 || *v109 == 47 )
                {
                  ++v109;
                  break;
                }
              }
              v193 = v109;
              v191 = OriginalName.Length - ((_WORD)v109 - LOWORD(OriginalName.Buffer));
              v192 = OriginalName.MaximumLength - ((_WORD)v109 - LOWORD(OriginalName.Buffer));
              v110 = 0;
              v178 = v109;
              v111 = v191 >> 1;
              while ( v111-- )
              {
                v113 = *v109++;
                v178 = v109;
                if ( v113 < 0x61u )
                {
                  v114 = v113;
                }
                else if ( v113 > 0x7Au )
                {
                  v114 = (unsigned __int16)(v113
                                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                     + 2LL
                                                     * ((v113 & 0xF)
                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                          + 2LL
                                                                                          * (((v113 >> 4) & 0xF)
                                                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v113 >> 8)))))));
                }
                else
                {
                  v114 = v113 - 32;
                }
                v110 = v114 + 65599 * v110;
              }
              v21 = v110;
              if ( !v110 )
                v21 = 0x80000000;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v22 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v21 & 0x1F));
              v23 = 0;
              for ( i = *v22; i != v22; i = (_QWORD *)*i )
              {
                v25 = (volatile signed __int32 *)(i - 14);
                if ( v21 == *((_DWORD *)i + 38) && ((v108 & 8) == 0 || (v25[26] & 1) != 0) )
                {
                  if ( OriginalName.Length == *((unsigned __int16 *)v25 + 36) )
                  {
                    v26 = OriginalName.Buffer;
                    v179 = OriginalName.Buffer;
                    v27 = (unsigned __int16 *)*((_QWORD *)v25 + 10);
                    v180 = v27;
                    while ( v26 < (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length) )
                    {
                      v28 = *v26;
                      v170 = v28;
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
                      v179 = ++v26;
                      v180 = ++v27;
                    }
                    v23 = 1;
                    v30 = *((_QWORD *)v25 + 19);
                    if ( *(_DWORD *)(v30 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v30 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement(v25 + 69);
                    *a5 = (PVOID)v25;
                    break;
                  }
LABEL_342:
                  v23 = 0;
                }
              }
              if ( v23 )
                FullPath = 0;
              else
                FullPath = -1073741515;
              v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
              if ( v31 != 1 )
              {
                do
                {
                  v65 = v31 & 6;
                  v66 = 3LL;
                  if ( v65 != 2 )
                    v66 = -1LL;
                  v67 = v31 + v66;
                  v68 = v31;
                  v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v67, v31);
                }
                while ( v68 != v31 );
                if ( v65 == 2 )
                  RtlpWakeSRWLock(&LdrpModuleDatatableLock, v67, 0LL);
              }
              if ( FullPath < 0 )
                v153 = 3;
              else
                v153 = 0;
              v32 = NtCurrentPeb()->SharedData;
              if ( v32 && *v32 )
                v33 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v33 = 2147353476LL;
              if ( *(_BYTE *)v33 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
              {
                v138 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
                if ( (*v138 & 0x20) != 0 )
                  LdrpLogEtwEvent(5280, 0, 0, v153, (__int64)&OriginalName, 0LL);
              }
              LOWORD(v20) = v152;
              v34 = v160;
              v35 = v158;
            }
            if ( FullPath != -1073741515 )
            {
              v8 = a5;
              v36 = *a5;
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v38 = v36[19];
              v39 = *(_DWORD *)(v38 + 24);
              if ( v39 != -1 )
              {
                if ( v39 )
                {
                  *(_DWORD *)(v38 + 24) = v39 + 1;
                }
                else
                {
                  v195 = NtCurrentTeb();
                  if ( (v195->SameTebFlags & 0x1000) != 0 )
                    ++*(_DWORD *)(v38 + 28);
                }
              }
              v40 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
              if ( v40 != 1 )
              {
                do
                {
                  v69 = v40 & 6;
                  v70 = 3LL;
                  if ( v69 != 2 )
                    v70 = -1LL;
                  v37 = v40 + v70;
                  v71 = v40;
                  v40 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v37, v40);
                }
                while ( v71 != v40 );
                if ( v69 == 2 )
                  RtlpWakeSRWLock(&LdrpModuleDatatableLock, v37, 0LL);
              }
              LOWORD(v20) = v152;
              goto LABEL_51;
            }
            v60 = (__int64 *)a5;
LABEL_101:
            FullPath = LdrpAllocatePlaceHolder((const void **)&OriginalName, v35, v108, a4, a3, v60, v34);
            v8 = a5;
            if ( FullPath >= 0 )
              FullPath = LdrpLoadKnownDll(*((_QWORD *)*a5 + 22));
LABEL_51:
            v151 = FullPath;
            if ( !*v8 )
              goto LABEL_372;
            v41 = v20 & 0x400;
            if ( v41 && FullPath == -1073741515 )
            {
              v139 = *((_QWORD *)*v8 + 22);
              v194 = v139;
              *(_DWORD *)(v139 + 32) |= 0x4000000u;
              LOBYTE(v37) = 1;
              LdrpProcessWork(v139, v37);
              FullPath = **(_DWORD **)(v139 + 40);
              v151 = FullPath;
            }
            RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
            v42 = (char *)*v8;
            v43 = v42;
            v181 = *v8;
            if ( v42 )
            {
              v44 = *((_QWORD *)v42 + 22);
              if ( v44 )
              {
                if ( (*(_DWORD *)(v44 + 32) & 0x80000) == 0 && *(char **)(v44 + 56) != v42 )
                {
                  v43 = *(char **)(v44 + 56);
                  v181 = v43;
                  *(_QWORD *)(v44 + 56) = v42;
                }
              }
            }
            v183 = v43;
            *(_DWORD *)(*a6 + 24LL) &= ~1u;
            v45 = (_DWORD *)*a6;
            v46 = *((_QWORD *)v43 + 19);
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
                  v184 = NtdllBaseTag + 2359296;
                  v140 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
                  v45 = v140;
                  if ( !v140 )
                  {
                    MEMORY[0] = -1073741801;
                    v45 = 0LL;
                    goto LABEL_60;
                  }
                  v140[6] |= 1u;
                }
                v55 = *(_QWORD **)(v47 + 40);
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
                *((_QWORD *)v45 + 1) = v46;
                v56 = v45 + 4;
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
                v58 = (v45[6] & 1) == 0;
                v59 = v45[6] & 1;
                *((_QWORD *)v45 + 3) = v47;
                if ( !v58 )
                {
                  v45[6] &= ~1u;
                  v45[6] |= v59;
                }
                v45 = 0LL;
LABEL_60:
                v182 = v45;
                *a6 = v45;
                if ( FullPath == -1073741515 )
                {
                  if ( !v41 )
                  {
                    LdrpQueueWork(*((_QWORD *)v43 + 22));
                    v151 = 0;
                    goto LABEL_63;
                  }
                }
                else if ( FullPath == -1073741267 )
                {
                  v151 = 0;
                  goto LABEL_63;
                }
                if ( FullPath < 0 )
                {
LABEL_66:
                  v50 = *((_QWORD *)v43 + 19);
                  if ( *(_DWORD *)(v50 + 24) != -1
                    && (*(_BYTE *)(*(_QWORD *)v50 - 56LL) & 0x20) == 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)v43 + 69, 0xFFFFFFFF) == 1 )
                  {
                    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
                    v141 = (char **)*((_QWORD *)v43 + 20);
                    v142 = (PVOID *)*((_QWORD *)v43 + 21);
                    if ( v141[1] != v43 + 160 || *v142 != v43 + 160 )
                      __fastfail(3u);
                    *v142 = v141;
                    v141[1] = (char *)v142;
                    v143 = (_QWORD *)*((_QWORD *)v43 + 19);
                    v144 = (_QWORD *)*v143;
                    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
                    if ( *((_WORD *)v43 + 55) )
                      LdrpReleaseTlsEntry(v43, 0LL);
                    LdrpUnmapModule(v43);
                    v145 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v43 + 17);
                    if ( (unsigned __int64)&v145[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                      RtlReleaseActivationContext(v145);
                    if ( *((_QWORD *)v43 + 10) )
                      LdrpFreeUnicodeString(v43 + 72);
                    RtlFreeHeap(LdrpHeap, 0, v43);
                    if ( v144 == v143 )
                      LdrpDestroyNode(v143);
                  }
                  v51 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
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
                      v51 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v63, v51);
                    }
                    while ( v64 != v51 );
                    if ( v61 == 2 )
                      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v63, 0LL);
                  }
                  v52 = v183;
                  if ( v183 != *v8 )
                  {
                    LdrpFreeReplacedModule(*v8);
                    *v8 = v52;
                  }
                  FullPath = v151;
                  goto LABEL_372;
                }
LABEL_63:
                v49 = *(_DWORD *)(a2 + 100);
                if ( v49 )
                {
                  if ( *a6 || *(int *)(*((_QWORD *)v43 + 19) + 56LL) >= 2 )
                    *(_DWORD *)(a2 + 100) = v49 - 1;
                }
                else if ( *(int *)(*((_QWORD *)v43 + 19) + 56LL) < 2 )
                {
                  *(_QWORD *)(a2 + 80) = v43;
                  *(_DWORD *)(a2 + 100) = 1;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
                  v151 = 259;
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
          OriginalName.Length = 0;
          v92 = NtCurrentPeb()->SharedData;
          if ( v92 && *v92 )
            v93 = (__int64)NtCurrentPeb()->SharedData + 30;
          else
            v93 = 2147352624LL;
          v169 = v93;
          v164 = 0;
          LOWORD(v94) = 0;
          v163 = 0;
          v165 = v93;
          if ( v93 )
          {
            v95 = -1LL;
            do
              ++v95;
            while ( *(_WORD *)(v93 + 2 * v95) );
            v94 = 2 * v95;
            if ( v94 >= 0xFFFE )
              LOWORD(v94) = -4;
            v163 = v94;
            v164 = v94 + 2;
          }
          if ( (_WORD)v94 )
          {
            v96 = (unsigned __int16)v94 + 2;
            v97 = 0;
            if ( v96 > OriginalName.MaximumLength )
            {
              if ( v96 <= 0xFFFE )
              {
                v128 = ((unsigned __int16)v94 + 65) & 0xFFFFFFC0;
                if ( v128 > 0xFFFE )
                  v128 = 65534;
                if ( OriginalName.Buffer == v198 )
                {
                  v130 = (wchar_t *)NtdllpAllocateStringRoutine(v128);
                  v129 = v130;
                  v171 = v130;
                  if ( v130 && OriginalName.Length )
                    memmove(v130, OriginalName.Buffer, OriginalName.Length);
                }
                else
                {
                  v129 = (wchar_t *)NtdllpReallocateStringRoutine(v128);
                  v171 = v129;
                }
                if ( v129 )
                {
                  OriginalName.Buffer = v129;
                  OriginalName.MaximumLength = v128;
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
              memmove((char *)OriginalName.Buffer + OriginalName.Length, (const void *)v93, (unsigned __int16)v94);
              OriginalName.Length += v94;
              OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
            }
          }
          v98 = OriginalName.Length + 22;
          v99 = 0;
          if ( v98 > OriginalName.MaximumLength )
          {
            if ( v98 <= 0xFFFE )
            {
              v131 = (OriginalName.Length + 85) & 0xFFFFFFC0;
              if ( v131 > 0xFFFE )
                v131 = 65534;
              if ( OriginalName.Buffer == v198 )
              {
                v133 = (wchar_t *)NtdllpAllocateStringRoutine(v131);
                v132 = v133;
                v172 = v133;
                if ( v133 && OriginalName.Length )
                  memmove(v133, OriginalName.Buffer, OriginalName.Length);
              }
              else
              {
                v132 = (wchar_t *)NtdllpReallocateStringRoutine(v131);
                v172 = v132;
              }
              if ( v132 )
              {
                OriginalName.Buffer = v132;
                OriginalName.MaximumLength = v131;
              }
              else
              {
                v99 = -1073741801;
              }
            }
            else
            {
              v99 = -1073741562;
            }
          }
          if ( v99 >= 0 )
          {
            v100 = (char *)OriginalName.Buffer + OriginalName.Length;
            *(_OWORD *)v100 = *(_OWORD *)SlashSystem32SlashString.Buffer;
            *((_DWORD *)v100 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
            OriginalName.Length += 20;
            OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
          }
          v101 = v156 + OriginalName.Length + 2;
          FullPath = 0;
          if ( v101 > OriginalName.MaximumLength )
          {
            if ( v101 <= 0xFFFE )
            {
              v134 = (v101 + 63) & 0xFFFFFFC0;
              if ( v134 > 0xFFFE )
                v134 = 65534;
              if ( OriginalName.Buffer == v198 )
              {
                v136 = (wchar_t *)NtdllpAllocateStringRoutine(v134);
                v135 = v136;
                v173 = v136;
                if ( v136 && OriginalName.Length )
                  memmove(v136, OriginalName.Buffer, OriginalName.Length);
              }
              else
              {
                v135 = (wchar_t *)NtdllpReallocateStringRoutine(v134);
                v173 = v135;
              }
              if ( v135 )
              {
                OriginalName.Buffer = v135;
                OriginalName.MaximumLength = v134;
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
            v89 = 1;
            v86 = (_UNICODE_STRING *)&v199;
          }
          else
          {
            memmove((char *)OriginalName.Buffer + OriginalName.Length, Src, v156);
            OriginalName.Length += v156;
            OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
            ProcessParameters = v161->ProcessParameters;
            v89 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v86 = &OriginalName;
          }
        }
        if ( FullPath >= 0 && v89 && !LdrpIsSecureProcess )
        {
          v116 = RtlDosApplyFileIsolationRedirection_Ustr(
                   1u,
                   v86,
                   (PUNICODE_STRING)&LdrpDefaultExtension,
                   0LL,
                   &DynamicString,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
          if ( v116 >= 0 )
          {
            v150 = 1;
            LdrpGetFullPath(&DynamicString, &OriginalName);
            LdrpFreeUnicodeString(&DynamicString);
          }
          if ( v116 != -1072365560 )
            FullPath = v116;
        }
        goto LABEL_183;
      }
      v117 = 5330LL;
    }
    else
    {
      v117 = 5331LL;
    }
    LdrpLogDllState(0LL, &v199, v117);
    goto LABEL_158;
  }
LABEL_397:
  *v8 = 0LL;
  **(_DWORD **)(a2 + 40) = FullPath;
  v146 = v200;
LABEL_373:
  if ( v201 != v146 )
    NtdllpFreeStringRoutine(v146);
  v200 = v201;
  v199 = 0x1000000;
  v201[0] = 0;
  if ( v198 != OriginalName.Buffer )
    NtdllpFreeStringRoutine(OriginalName.Buffer);
  return (unsigned int)FullPath;
}
