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

__int64 __fastcall sub_180039360(PCANSI_STRING SourceString, __int64 a2, __int64 a3, int a4, PVOID *a5, _QWORD *a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  PVOID *v9; // r12
  POBJECT_BOUNDARY_DESCRIPTOR v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // r8
  ULONG_PTR ActiveFrame; // rcx
  unsigned int v19; // esi
  bool v20; // bl
  _DWORD *p_Version; // rsi
  _DWORD *p_ServiceSessionId; // rcx
  __int64 v23; // rcx
  char v24; // r12
  unsigned __int16 v25; // di
  POBJECT_BOUNDARY_DESCRIPTOR v26; // r10
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  _WORD *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // esi
  _QWORD **v32; // rdi
  char v33; // cl
  _QWORD *j; // r14
  volatile signed __int32 *v35; // rbx
  WCHAR *v36; // rdx
  unsigned __int16 *v37; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r10
  __int64 v40; // rax
  signed __int64 v41; // rax
  PSILO_USER_SHARED_DATA v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r14
  _QWORD *v46; // rbx
  signed __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  signed __int64 v50; // rax
  PVOID *v51; // r15
  int v52; // esi
  char *v53; // rax
  char *v54; // r14
  __int64 v55; // rcx
  _QWORD *v56; // r8
  _DWORD *v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r15
  int v60; // edx
  int v61; // ecx
  __int64 v62; // rax
  signed __int64 v63; // rax
  void *v64; // rbx
  char **v65; // rdx
  PVOID *v66; // rcx
  _QWORD *v67; // rbx
  _QWORD *v68; // rdi
  _ACTIVATION_CONTEXT *v69; // rcx
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rdx
  _QWORD *v74; // r8
  bool v75; // zf
  int v76; // eax
  signed __int64 v77; // r8
  __int64 v78; // rdx
  signed __int64 v79; // rdx
  signed __int64 v80; // rtt
  signed __int64 v81; // rcx
  __int64 v82; // rdx
  signed __int64 v83; // rdx
  signed __int64 v84; // rtt
  signed __int64 v85; // rcx
  __int64 v86; // rdx
  signed __int64 v87; // rtt
  unsigned __int16 v88; // di
  unsigned int v89; // r11d
  unsigned int v90; // eax
  POBJECT_BOUNDARY_DESCRIPTOR v91; // r8
  unsigned __int16 Version; // r9
  unsigned int *v93; // r15
  int v94; // ebx
  int v95; // r9d
  int v96; // r8d
  unsigned int *v97; // rcx
  unsigned __int16 *v98; // rdx
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rbx
  int v101; // edi
  unsigned __int64 Version_low; // r8
  unsigned __int64 v103; // r9
  int v104; // r8d
  __int64 v105; // rcx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v107; // rcx
  PSILO_USER_SHARED_DATA v108; // rcx
  __int64 NtSystemRoot; // rdi
  unsigned __int64 v110; // rbx
  __int64 v111; // rbx
  __int16 v112; // ax
  unsigned int v113; // ecx
  int v114; // esi
  unsigned int v115; // ecx
  int v116; // ebx
  char *v117; // rcx
  unsigned int v118; // ecx
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  _UNICODE_STRING *v120; // rdx
  _UNICODE_STRING *p_OriginalName; // rbx
  PWCH Buffer; // rdx
  PWCH v123; // rax
  WCHAR v124; // cx
  WCHAR *v125; // rcx
  unsigned int v126; // r13d
  WCHAR *i; // r8
  __int16 v128; // dx
  __int16 v129; // cx
  __int16 v130; // dx
  unsigned int v131; // r9d
  int v132; // r11d
  WCHAR v134; // r10
  int v135; // eax
  PVOID Heap; // rax
  NTSTATUS v137; // ebx
  __int64 v138; // r8
  _WORD *v139; // rax
  USHORT *v140; // rcx
  USHORT *v141; // rcx
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
  USHORT *v152; // rax
  __int64 v153; // rbx
  _DWORD *v154; // rax
  _OBJECT_BOUNDARY_DESCRIPTOR *v156; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-578h]
  char v158; // [rsp+51h] [rbp-557h]
  int v159; // [rsp+54h] [rbp-554h]
  __int16 v160; // [rsp+58h] [rbp-550h]
  unsigned __int8 v161; // [rsp+BCh] [rbp-4ECh]
  unsigned __int16 v164; // [rsp+D8h] [rbp-4D0h]
  char *Src; // [rsp+E0h] [rbp-4C8h]
  int v166; // [rsp+E8h] [rbp-4C0h]
  __int64 v168; // [rsp+138h] [rbp-470h]
  struct _PEB *v169; // [rsp+150h] [rbp-458h]
  _UNICODE_STRING DestinationString; // [rsp+158h] [rbp-450h] BYREF
  __int16 v171; // [rsp+168h] [rbp-440h]
  __int16 v172; // [rsp+16Ah] [rbp-43Eh]
  __int64 v173; // [rsp+170h] [rbp-438h]
  _WORD *v174; // [rsp+178h] [rbp-430h]
  POBJECT_BOUNDARY_DESCRIPTOR v175; // [rsp+180h] [rbp-428h]
  POBJECT_BOUNDARY_DESCRIPTOR v176; // [rsp+188h] [rbp-420h]
  unsigned __int16 *v177; // [rsp+190h] [rbp-418h]
  __int64 v178; // [rsp+198h] [rbp-410h]
  void *v179; // [rsp+1A0h] [rbp-408h]
  void *v180; // [rsp+1A8h] [rbp-400h]
  void *v181; // [rsp+1B0h] [rbp-3F8h]
  _UNICODE_STRING *v182; // [rsp+1B8h] [rbp-3F0h]
  _WORD *v183; // [rsp+1C0h] [rbp-3E8h]
  PWCH v184; // [rsp+1C8h] [rbp-3E0h]
  WCHAR *v185; // [rsp+1D0h] [rbp-3D8h]
  WCHAR *v186; // [rsp+1D8h] [rbp-3D0h]
  PWCH v187; // [rsp+1E0h] [rbp-3C8h]
  unsigned __int16 *v188; // [rsp+1E8h] [rbp-3C0h]
  PVOID v189; // [rsp+1F0h] [rbp-3B8h]
  _DWORD *v190; // [rsp+1F8h] [rbp-3B0h]
  PVOID v191; // [rsp+200h] [rbp-3A8h]
  ULONG v192; // [rsp+208h] [rbp-3A0h]
  ULONG v193; // [rsp+20Ch] [rbp-39Ch]
  int v194; // [rsp+210h] [rbp-398h]
  __int64 v195; // [rsp+220h] [rbp-388h] BYREF
  int v196; // [rsp+228h] [rbp-380h]
  _QWORD v197[7]; // [rsp+230h] [rbp-378h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+270h] [rbp-338h] BYREF
  __int16 v199; // [rsp+280h] [rbp-328h]
  __int16 v200; // [rsp+282h] [rbp-326h]
  WCHAR *v201; // [rsp+288h] [rbp-320h]
  __int64 v202; // [rsp+290h] [rbp-318h]
  struct _TEB *v203; // [rsp+298h] [rbp-310h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2A0h] [rbp-308h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+340h] [rbp-268h] BYREF
  _WORD v206[128]; // [rsp+350h] [rbp-258h] BYREF
  int v207; // [rsp+450h] [rbp-158h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+458h] [rbp-150h]
  _WORD v209[128]; // [rsp+460h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5A8h] [rbp+0h]

  v6 = a3;
  v7 = a2;
  v9 = a5;
  OriginalName.Buffer = v206;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v206[0] = 0;
  v10 = (POBJECT_BOUNDARY_DESCRIPTOR)v209;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v209;
  v11 = 0;
  v207 = 0x1000000;
  LOWORD(v12) = 256;
  v209[0] = 0;
  v13 = 0;
  if ( !SourceString->Length )
    goto LABEL_8;
  if ( NlsMbCodePageTag )
  {
    v14 = RtlxOemStringToUnicodeSize();
    v10 = BoundaryDescriptor;
    LOWORD(v12) = HIWORD(v207);
    v11 = v207;
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
    if ( v10 == (POBJECT_BOUNDARY_DESCRIPTOR)v209 )
    {
      v156 = (_OBJECT_BOUNDARY_DESCRIPTOR *)sub_18003B5E0(v12);
      v10 = v156;
      if ( v156 )
      {
        v11 = v207;
        if ( !(_WORD)v207 )
          goto LABEL_392;
        memmove(v156, BoundaryDescriptor, (unsigned __int16)v207);
      }
    }
    else
    {
      v10 = (POBJECT_BOUNDARY_DESCRIPTOR)sub_1800D0728(v12, v10);
    }
    v11 = v207;
LABEL_392:
    if ( v10 )
    {
      BoundaryDescriptor = v10;
      HIWORD(v207) = v12;
    }
    else
    {
      v13 = -1073741801;
      v10 = BoundaryDescriptor;
      LOWORD(v12) = HIWORD(v207);
    }
  }
LABEL_5:
  if ( v13 >= 0 )
  {
    DestinationString.Buffer = (PWCH)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v207) = DestinationString.Length + v207;
    v10 = BoundaryDescriptor;
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
    ActivationContextStackPointer->ActiveFrame = (PRTL_ACTIVATION_CONTEXT_STACK_FRAME)v197;
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
    p_Version = &v169->ApiSetMap->Version;
    p_ServiceSessionId = &v169->SharedData->ServiceSessionId;
    if ( p_ServiceSessionId && *p_ServiceSessionId )
      v23 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v23 = 2147353476LL;
    if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v140 = RtlGetCurrentServiceSessionId()
           ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
           : (USHORT *)2147353477;
      if ( (*(_BYTE *)v140 & 0x20) != 0 )
        sub_1800CBAB0(5328, 0, 0, 0, (__int64)&v207, 0LL);
    }
    v164 = 0;
    Src = 0LL;
    v24 = 0;
    v25 = v207;
    if ( (unsigned __int16)v207 >= 8u )
    {
      v26 = BoundaryDescriptor;
      v27 = *(_QWORD *)&BoundaryDescriptor->Version & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v27 == 0x2D004900500041LL || v27 == 0x2D005400580045LL )
      {
        v28 = (unsigned __int16)v207;
        v29 = (_WORD *)((char *)BoundaryDescriptor + (unsigned __int16)v207);
        v174 = v29;
        v30 = (unsigned __int16)v207;
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
        v88 = v25 >> 1;
        if ( v88 )
        {
          v89 = 0;
          v90 = 0;
          v91 = BoundaryDescriptor;
          v175 = BoundaryDescriptor;
          while ( v90 < v88 )
          {
            Version = v91->Version;
            if ( (unsigned __int16)(LOWORD(v91->Version) - 65) <= 0x19u )
              Version += 32;
            v89 = v89 * p_Version[6] + Version;
            ++v90;
            v91 = (POBJECT_BOUNDARY_DESCRIPTOR)((char *)v91 + 2);
            v175 = v91;
          }
          v93 = 0LL;
          v94 = 0;
          v95 = p_Version[3] - 1;
          while ( v94 <= v95 )
          {
            v96 = (v95 + v94) >> 1;
            v97 = (_DWORD *)((char *)&p_Version[2 * v96] + (unsigned int)p_Version[5]);
            if ( v89 < *v97 )
            {
              v95 = v96 - 1;
            }
            else
            {
              if ( v89 <= *v97 )
              {
                v93 = (_DWORD *)((char *)&p_Version[6 * v97[1]] + (unsigned int)p_Version[4]);
                break;
              }
              v94 = v96 + 1;
            }
          }
          if ( v93 )
          {
            v98 = (unsigned __int16 *)((char *)p_Version + v93[1]);
            LODWORD(v99) = v93[3] >> 1;
            v176 = BoundaryDescriptor;
            v177 = v98;
            v100 = v88;
            v101 = v99;
            v99 = v100 > (unsigned int)v99 ? (unsigned int)v99 : (unsigned int)v100;
            while ( 1 )
            {
              if ( v26 >= (POBJECT_BOUNDARY_DESCRIPTOR)((char *)BoundaryDescriptor + 2 * v99) )
              {
                v104 = v100 - v101;
                goto LABEL_164;
              }
              Version_low = LOWORD(v26->Version);
              v103 = *v98;
              if ( (_DWORD)Version_low != (_DWORD)v103 )
              {
                if ( (unsigned int)Version_low >= 0x61 )
                {
                  if ( (unsigned int)Version_low > 0x7A )
                    LODWORD(Version_low) = (unsigned __int16)(Version_low
                                                            + *(_WORD *)(qword_18015B238
                                                                       + 2
                                                                       * ((Version_low & 0xF)
                                                                        + *(unsigned __int16 *)(qword_18015B238
                                                                                              + 2LL
                                                                                              * (((unsigned __int8)Version_low >> 4)
                                                                                               + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (Version_low >> 8)))))));
                  else
                    LODWORD(Version_low) = Version_low - 32;
                }
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
                if ( (_DWORD)Version_low != (_DWORD)v103 )
                  break;
              }
              v26 = (POBJECT_BOUNDARY_DESCRIPTOR)((char *)v26 + 2);
              v176 = v26;
              v177 = ++v98;
            }
            v104 = Version_low - v103;
LABEL_164:
            if ( !v104 )
            {
              if ( a3 != -88 && v93[5] > 1 )
              {
                v105 = sub_18003B6FC(v93, *(_QWORD *)(a3 + 96), *(_WORD *)(a3 + 88) >> 1, p_Version);
                goto LABEL_169;
              }
              if ( v93[5] )
              {
                v105 = (__int64)p_Version + v93[4];
LABEL_169:
                Src = (char *)p_Version + *(unsigned int *)(v105 + 12);
                v164 = *(_WORD *)(v105 + 16);
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
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && SharedData->ServiceSessionId )
          v107 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
        else
          v107 = 2147353476LL;
        if ( *(_BYTE *)v107 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v141 = RtlGetCurrentServiceSessionId()
               ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
               : (USHORT *)2147353477;
          if ( (*(_BYTE *)v141 & 0x20) != 0 )
            sub_1800CBAB0(5329, 0, 0, 0, (__int64)&v207, 0LL);
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
            p_OriginalName = (_UNICODE_STRING *)&v207;
            v182 = (_UNICODE_STRING *)&v207;
            if ( !OriginalName.Length )
            {
              v139 = (_WORD *)((char *)BoundaryDescriptor + (unsigned __int16)v207);
              v183 = v139;
              while ( 1 )
              {
                v183 = --v139;
                if ( v139 < (_WORD *)BoundaryDescriptor )
                  break;
                if ( *v139 == 92 || *v139 == 47 )
                {
                  if ( (unsigned int)sub_18003E414(&v207) != 5 )
                  {
                    v13 = sub_18003FB24(&v207, &OriginalName);
                    if ( v13 >= 0 )
                    {
                      v19 |= 0x600u;
                      v160 = v19;
                    }
                    goto LABEL_207;
                  }
LABEL_255:
                  v13 = sub_18003BE6C(&OriginalName, &v207);
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
                &v207,
                &OriginalName,
                v151);
            }
            v19 |= 0x200u;
            v160 = v19;
            if ( v158 )
            {
              v19 |= 4u;
              v160 = v19;
            }
            p_OriginalName = &OriginalName;
            v182 = &OriginalName;
LABEL_207:
            if ( v13 < 0 )
              goto LABEL_339;
            Buffer = p_OriginalName->Buffer;
            v123 = (PWCH)((char *)Buffer + p_OriginalName->Length);
            v184 = v123;
            while ( 1 )
            {
              v184 = --v123;
              if ( v123 < Buffer )
              {
LABEL_257:
                v13 = sub_18003BE6C(&OriginalName, &Extension);
                goto LABEL_218;
              }
              v124 = *v123;
              if ( *v123 == 46 )
                break;
              if ( v124 == 47 || v124 == 92 )
                goto LABEL_257;
            }
            v125 = (PWCH)((char *)OriginalName.Buffer + OriginalName.Length);
            v185 = v125;
            while ( 1 )
            {
              v185 = --v125;
              if ( v125 < OriginalName.Buffer || *v125 != 46 )
                break;
              OriginalName.Length -= 2;
            }
            v125[1] = 0;
LABEL_218:
            if ( v13 < 0 )
            {
LABEL_339:
              if ( (dword_180156A70 & 3) != 0 )
              {
                LODWORD(NewFlags) = v13;
                sub_1800CA554(
                  (unsigned int)"minkernel\\ntdll\\ldrutil.c",
                  2648,
                  (unsigned int)"LdrpPreprocessDllName",
                  0,
                  "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
                  &v207,
                  NewFlags);
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
                      &OriginalName,
                      *(_QWORD *)(v7 + 16),
                      v19,
                      a3,
                      v9,
                      *(_QWORD *)(v7 + 40));
              goto LABEL_369;
            }
            if ( !*a6 )
            {
              v193 = Flags + 2621440;
              Heap = RtlAllocateHeap(HeapHandle, Flags + 2621440, 0x20uLL);
              *a6 = Heap;
              if ( !Heap )
              {
                v13 = -1073741801;
LABEL_369:
                RtlDeactivateActivationContextUnsafeFast(&v195);
                v10 = BoundaryDescriptor;
                goto LABEL_370;
              }
            }
            v44 = *(_QWORD *)(v7 + 40);
            v168 = v44;
            v126 = v19;
            v45 = *(_QWORD *)(a2 + 16);
            v166 = v45;
            *v9 = 0LL;
            if ( (v19 & 0x20) != 0 )
            {
              v13 = sub_1800385D0(&OriginalName, 0LL, v19, (__int64)v9, 0LL);
            }
            else
            {
              if ( (v19 & 0x200) == 0 )
                goto LABEL_123;
              for ( i = (PWCH)((char *)OriginalName.Buffer + OriginalName.Length - 2); ; --i )
              {
                v128 = (__int16)i;
                v129 = (__int16)i;
                if ( i <= OriginalName.Buffer )
                  break;
                if ( *i == 92 || *i == 47 )
                {
                  ++i;
                  v128 = v129 + 2;
                  break;
                }
              }
              v130 = v128 - LOWORD(OriginalName.Buffer);
              v201 = i;
              v199 = OriginalName.Length - v130;
              v200 = OriginalName.MaximumLength - v130;
              v131 = 0;
              v186 = i;
              v132 = (unsigned __int16)(OriginalName.Length - v130) >> 1;
              while ( v132-- )
              {
                v134 = *i++;
                v186 = i;
                if ( v134 < 0x61u )
                {
                  v135 = v134;
                }
                else if ( v134 > 0x7Au )
                {
                  v135 = (unsigned __int16)(v134
                                          + *(_WORD *)(qword_18015B238
                                                     + 2LL
                                                     * ((v134 & 0xF)
                                                      + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                          + 2LL
                                                                                          * (((v134 >> 4) & 0xF)
                                                                                           + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * ((unsigned __int64)v134 >> 8)))))));
                }
                else
                {
                  v135 = v134 - 32;
                }
                v131 = v135 + 65599 * v131;
              }
              v31 = v131;
              if ( !v131 )
                v31 = 0x80000000;
              RtlAcquireSRWLockExclusive(&stru_18015D070);
              v32 = (_QWORD **)((char *)&unk_18015BFC0 + 16 * (v31 & 0x1F));
              v33 = 0;
              for ( j = *v32; j != v32; j = (_QWORD *)*j )
              {
                v35 = (volatile signed __int32 *)(j - 14);
                if ( v31 == *((_DWORD *)j + 38) && ((v126 & 8) == 0 || (v35[26] & 1) != 0) )
                {
                  if ( OriginalName.Length == *((unsigned __int16 *)v35 + 36) )
                  {
                    v36 = OriginalName.Buffer;
                    v187 = OriginalName.Buffer;
                    v37 = (unsigned __int16 *)*((_QWORD *)v35 + 10);
                    v188 = v37;
                    while ( v36 < (PWCH)((char *)OriginalName.Buffer + OriginalName.Length) )
                    {
                      v38 = *v36;
                      v194 = v38;
                      v39 = *v37;
                      if ( (_DWORD)v38 != (_DWORD)v39 )
                      {
                        if ( (unsigned int)v38 >= 0x61 )
                        {
                          if ( (unsigned int)v38 > 0x7A )
                            LODWORD(v38) = (unsigned __int16)(v38
                                                            + *(_WORD *)(qword_18015B238
                                                                       + 2
                                                                       * ((v38 & 0xF)
                                                                        + *(unsigned __int16 *)(qword_18015B238
                                                                                              + 2LL
                                                                                              * (((unsigned __int8)v38 >> 4)
                                                                                               + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v38 >> 8)))))));
                          else
                            LODWORD(v38) = v38 - 32;
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
                        if ( (_DWORD)v38 != (_DWORD)v39 )
                          goto LABEL_41;
                      }
                      v187 = ++v36;
                      v188 = ++v37;
                    }
                    v33 = 1;
                    v40 = *((_QWORD *)v35 + 19);
                    if ( *(_DWORD *)(v40 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v40 - 56LL) & 0x20) == 0 )
                      _InterlockedIncrement(v35 + 69);
                    *a5 = (PVOID)v35;
                    break;
                  }
LABEL_41:
                  v33 = 0;
                }
              }
              if ( v33 )
                v13 = 0;
              else
                v13 = -1073741515;
              v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, 0LL, 1LL);
              if ( v41 != 1 )
              {
                do
                {
                  v81 = v41 & 6;
                  v82 = 3LL;
                  if ( v81 != 2 )
                    v82 = -1LL;
                  v83 = v41 + v82;
                  v84 = v41;
                  v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, v83, v41);
                }
                while ( v84 != v41 );
                if ( v81 == 2 )
                  sub_180070AAC(&stru_18015D070, v83, 0LL);
              }
              if ( v13 < 0 )
                v161 = 3;
              else
                v161 = 0;
              v42 = NtCurrentPeb()->SharedData;
              if ( v42 && v42->ServiceSessionId )
                v43 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
              else
                v43 = 2147353476LL;
              if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
              {
                v152 = RtlGetCurrentServiceSessionId()
                     ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
                     : (USHORT *)2147353477;
                if ( (*(_BYTE *)v152 & 0x20) != 0 )
                  sub_1800CBAB0(5280, 0, 0, v161, (__int64)&OriginalName, 0LL);
              }
              LOWORD(v19) = v160;
              v44 = v168;
              LODWORD(v45) = v166;
            }
            if ( v13 != -1073741515 )
            {
              v46 = *a5;
              RtlAcquireSRWLockExclusive(&stru_18015D070);
              v48 = v46[19];
              v49 = *(_DWORD *)(v48 + 24);
              if ( v49 != -1 )
              {
                if ( v49 )
                {
                  *(_DWORD *)(v48 + 24) = v49 + 1;
                }
                else
                {
                  v203 = NtCurrentTeb();
                  if ( (v203->SameTebFlags & 0x1000) != 0 )
                    ++*(_DWORD *)(v48 + 28);
                }
              }
              v50 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, 0LL, 1LL);
              if ( v50 != 1 )
              {
                do
                {
                  v85 = v50 & 6;
                  v86 = 3LL;
                  if ( v85 != 2 )
                    v86 = -1LL;
                  v47 = v50 + v86;
                  v87 = v50;
                  v50 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, v47, v50);
                }
                while ( v87 != v50 );
                if ( v85 == 2 )
                  sub_180070AAC(&stru_18015D070, v47, 0LL);
              }
              LOWORD(v19) = v160;
              v51 = a5;
              goto LABEL_60;
            }
LABEL_123:
            v51 = a5;
            v13 = sub_180040E38((unsigned int)&OriginalName, v45, v126, a4, a3, (__int64)a5, v44);
            if ( v13 >= 0 )
              v13 = sub_180040514(*((PCUNICODE_STRING *)*a5 + 22));
LABEL_60:
            v159 = v13;
            if ( !*v51 )
            {
              v9 = a5;
              v7 = a2;
              goto LABEL_369;
            }
            v52 = v19 & 0x400;
            if ( v52 && v13 == -1073741515 )
            {
              v153 = *((_QWORD *)*v51 + 22);
              v202 = v153;
              *(_DWORD *)(v153 + 32) |= 0x4000000u;
              LOBYTE(v47) = 1;
              sub_1800426E8(v153, v47);
              v13 = **(_DWORD **)(v153 + 40);
              v159 = v13;
            }
            RtlAcquireSRWLockExclusive(&stru_18015D070);
            v53 = (char *)*v51;
            v54 = v53;
            v189 = *v51;
            if ( v53 )
            {
              v55 = *((_QWORD *)v53 + 22);
              if ( v55 )
              {
                if ( (*(_DWORD *)(v55 + 32) & 0x80000) == 0 && *(char **)(v55 + 56) != v53 )
                {
                  v54 = *(char **)(v55 + 56);
                  v189 = v54;
                  *(_QWORD *)(v55 + 56) = v53;
                }
              }
            }
            v191 = v54;
            v56 = a6;
            *(_DWORD *)(*a6 + 24LL) &= ~1u;
            v57 = (_DWORD *)*a6;
            v7 = a2;
            v58 = *((_QWORD *)v54 + 19);
            v59 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL);
            if ( v59 != v58
              && (*(_DWORD *)(v58 + 56) != 9
               || *(_DWORD *)(v58 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v58 - 56LL) & 0x20) == 0) )
            {
              v70 = *(_QWORD **)(v59 + 40);
              if ( !v70 )
              {
LABEL_103:
                if ( !v57 )
                {
                  v192 = Flags + 2359296;
                  v154 = RtlAllocateHeap(HeapHandle, Flags + 2359296, 0x20uLL);
                  v57 = v154;
                  if ( !v154 )
                  {
                    MEMORY[0] = -1073741801;
                    v57 = 0LL;
                    v56 = a6;
                    goto LABEL_69;
                  }
                  v154[6] |= 1u;
                }
                v72 = *(_QWORD **)(v59 + 40);
                if ( v72 )
                {
                  *(_QWORD *)v57 = *v72;
                  *v72 = v57;
                }
                else
                {
                  *(_QWORD *)v57 = v57;
                }
                *(_QWORD *)(v59 + 40) = v57;
                *((_QWORD *)v57 + 1) = v58;
                v73 = v57 + 4;
                v74 = *(_QWORD **)(v58 + 48);
                if ( v74 )
                {
                  *v73 = *v74;
                  *v74 = v73;
                }
                else
                {
                  *v73 = v73;
                }
                *(_QWORD *)(v58 + 48) = v73;
                v75 = (v57[6] & 1) == 0;
                v76 = v57[6] & 1;
                *((_QWORD *)v57 + 3) = v59;
                if ( !v75 )
                  v57[6] = v76 | v59 & 0xFFFFFFFE;
                v57 = 0LL;
                v56 = a6;
LABEL_69:
                v190 = v57;
                *v56 = v57;
                if ( v13 == -1073741515 )
                {
                  v13 = -1073741515;
                  if ( !v52 )
                  {
                    sub_1800709B0(*((_QWORD *)v54 + 22));
                    v159 = 0;
                    v56 = a6;
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
                  v62 = *((_QWORD *)v54 + 19);
                  if ( *(_DWORD *)(v62 + 24) != -1
                    && (*(_BYTE *)(*(_QWORD *)v62 - 56LL) & 0x20) == 0
                    && _InterlockedExchangeAdd((volatile signed __int32 *)v54 + 69, 0xFFFFFFFF) == 1 )
                  {
                    RtlAcquireSRWLockExclusive(&stru_18015D070);
                    v65 = (char **)*((_QWORD *)v54 + 20);
                    v66 = (PVOID *)*((_QWORD *)v54 + 21);
                    if ( v65[1] != v54 + 160 || *v66 != v54 + 160 )
                      __fastfail(3u);
                    *v66 = v65;
                    v65[1] = (char *)v66;
                    v67 = (_QWORD *)*((_QWORD *)v54 + 19);
                    v68 = (_QWORD *)*v67;
                    RtlReleaseSRWLockExclusive(&stru_18015D070);
                    if ( *((_WORD *)v54 + 55) )
                      sub_18007D794(v54, 0LL);
                    sub_180074114(v54);
                    v69 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v54 + 17);
                    if ( (unsigned __int64)&v69[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
                      RtlReleaseActivationContext(v69);
                    if ( *((_QWORD *)v54 + 10) )
                      sub_180042420(v54 + 72);
                    RtlFreeHeap(HeapHandle, 0, v54);
                    if ( v68 == v67 )
                      sub_180071914(v67);
                  }
                  v63 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, 0LL, 1LL);
                  if ( v63 != 1 )
                  {
                    do
                    {
                      v77 = v63 & 6;
                      v78 = 3LL;
                      if ( v77 != 2 )
                        v78 = -1LL;
                      v79 = v63 + v78;
                      v80 = v63;
                      v63 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_18015D070, v79, v63);
                    }
                    while ( v80 != v63 );
                    if ( v77 == 2 )
                      sub_180070AAC(&stru_18015D070, v79, 0LL);
                  }
                  v9 = a5;
                  v64 = v191;
                  if ( v191 != *a5 )
                  {
                    sub_18006B460(*a5);
                    *a5 = v64;
                  }
                  v13 = v159;
                  goto LABEL_369;
                }
LABEL_72:
                v61 = *(_DWORD *)(a2 + 100);
                if ( v61 )
                {
                  if ( *v56 || *(int *)(*((_QWORD *)v54 + 19) + 56LL) >= 2 )
                    *(_DWORD *)(a2 + 100) = v61 - 1;
                }
                else if ( *(int *)(*((_QWORD *)v54 + 19) + 56LL) < 2 )
                {
                  *(_QWORD *)(a2 + 80) = v54;
                  *(_DWORD *)(a2 + 100) = 1;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
                  v159 = 259;
                }
                goto LABEL_75;
              }
              v71 = *(_QWORD **)(v59 + 40);
              while ( 1 )
              {
                v71 = (_QWORD *)*v71;
                if ( v71[1] == v58 )
                  break;
                if ( v71 == v70 )
                  goto LABEL_103;
              }
            }
            v60 = *(_DWORD *)(v58 + 24);
            if ( (unsigned int)(v60 - 2) <= 0xFFFFFFFC )
              *(_DWORD *)(v58 + 24) = v60 - 1;
            goto LABEL_69;
          }
          OriginalName.Length = 0;
          v108 = NtCurrentPeb()->SharedData;
          if ( v108 && v108->ServiceSessionId )
            NtSystemRoot = (__int64)NtCurrentPeb()->SharedData->NtSystemRoot;
          else
            NtSystemRoot = 2147352624LL;
          v178 = NtSystemRoot;
          v172 = 0;
          LOWORD(v110) = 0;
          v171 = 0;
          v173 = NtSystemRoot;
          if ( NtSystemRoot )
          {
            v111 = -1LL;
            do
              ++v111;
            while ( *(_WORD *)(NtSystemRoot + 2 * v111) );
            v110 = 2 * v111;
            v112 = v110;
            if ( v110 >= 0xFFFE )
            {
              LOWORD(v110) = -4;
              v112 = -4;
            }
            v171 = v110;
            v172 = v112 + 2;
          }
          if ( (_WORD)v110 )
          {
            v113 = (unsigned __int16)v110 + 2;
            v114 = 0;
            if ( v113 > OriginalName.MaximumLength )
            {
              if ( v113 <= 0xFFFE )
              {
                v142 = ((unsigned __int16)v110 + 65) & 0xFFFFFFC0;
                v143 = v142;
                if ( v142 > 0xFFFE )
                {
                  LOWORD(v142) = -2;
                  v143 = 65534;
                }
                if ( OriginalName.Buffer == v206 )
                {
                  v144 = (void *)sub_18003B5E0(v143);
                  v179 = v144;
                  if ( v144 && OriginalName.Length )
                    memmove(v144, OriginalName.Buffer, OriginalName.Length);
                }
                else
                {
                  v144 = (void *)sub_1800D0728(v143, OriginalName.Buffer);
                  v179 = v144;
                }
                if ( v144 )
                {
                  OriginalName.Buffer = (PWCH)v144;
                  OriginalName.MaximumLength = v142;
                }
                else
                {
                  v114 = -1073741801;
                }
              }
              else
              {
                v114 = -1073741562;
              }
            }
            if ( v114 >= 0 )
            {
              memmove(
                (char *)OriginalName.Buffer + OriginalName.Length,
                (const void *)NtSystemRoot,
                (unsigned __int16)v110);
              OriginalName.Length += v110;
              OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
            }
          }
          v115 = OriginalName.Length + 22;
          v116 = 0;
          if ( v115 > OriginalName.MaximumLength )
          {
            if ( v115 <= 0xFFFE )
            {
              v145 = (OriginalName.Length + 85) & 0xFFFFFFC0;
              v146 = v145;
              if ( v145 > 0xFFFE )
              {
                LOWORD(v145) = -2;
                v146 = 65534;
              }
              if ( OriginalName.Buffer == v206 )
              {
                v147 = (void *)sub_18003B5E0(v146);
                v180 = v147;
                if ( v147 && OriginalName.Length )
                  memmove(v147, OriginalName.Buffer, OriginalName.Length);
              }
              else
              {
                v147 = (void *)sub_1800D0728(v146, OriginalName.Buffer);
                v180 = v147;
              }
              if ( v147 )
              {
                OriginalName.Buffer = (PWCH)v147;
                OriginalName.MaximumLength = v145;
              }
              else
              {
                v116 = -1073741801;
              }
            }
            else
            {
              v116 = -1073741562;
            }
          }
          if ( v116 >= 0 )
          {
            v117 = (char *)OriginalName.Buffer + OriginalName.Length;
            *(_OWORD *)v117 = *(_OWORD *)L"\\SYSTEM32\\";
            *((_DWORD *)v117 + 4) = *(_DWORD *)L"2\\";
            OriginalName.Length += 20;
            OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
          }
          v118 = v164 + OriginalName.Length + 2;
          v13 = 0;
          if ( v118 > OriginalName.MaximumLength )
          {
            if ( v118 <= 0xFFFE )
            {
              v148 = (v118 + 63) & 0xFFFFFFC0;
              v149 = v148;
              if ( v148 > 0xFFFE )
              {
                LOWORD(v148) = -2;
                v149 = 65534;
              }
              if ( OriginalName.Buffer == v206 )
              {
                v150 = (void *)sub_18003B5E0(v149);
                v181 = v150;
                if ( v150 && OriginalName.Length )
                  memmove(v150, OriginalName.Buffer, OriginalName.Length);
              }
              else
              {
                v150 = (void *)sub_1800D0728(v149, OriginalName.Buffer);
                v181 = v150;
              }
              if ( v150 )
              {
                OriginalName.Buffer = (PWCH)v150;
                OriginalName.MaximumLength = v148;
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
            memmove((char *)OriginalName.Buffer + OriginalName.Length, Src, v164);
            OriginalName.Length += v164;
            OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
            ProcessParameters = v169->ProcessParameters;
            v20 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
            v120 = &OriginalName;
LABEL_198:
            if ( v13 >= 0 && v20 && !byte_18015C298 )
            {
              v137 = RtlDosApplyFileIsolationRedirection_Ustr(
                       1u,
                       v120,
                       (PUNICODE_STRING)&Extension,
                       0LL,
                       &DynamicString,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
              if ( v137 >= 0 )
              {
                v158 = 1;
                sub_18003FB24(&DynamicString, &OriginalName);
                sub_180042420(&DynamicString);
              }
              if ( v137 != -1072365560 )
                v13 = v137;
            }
            goto LABEL_200;
          }
          v20 = 1;
        }
        v120 = (_UNICODE_STRING *)&v207;
        goto LABEL_198;
      }
      v138 = 5330LL;
    }
    else
    {
      v138 = 5331LL;
    }
    sub_18003BC9C(0LL, &v207, v138);
    goto LABEL_175;
  }
LABEL_370:
  if ( v13 < 0 )
  {
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = v13;
    v10 = BoundaryDescriptor;
  }
  if ( v209 != (_WORD *)v10 )
    RtlDeleteBoundaryDescriptor(v10);
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v209;
  v207 = 0x1000000;
  v209[0] = 0;
  if ( v206 != OriginalName.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)OriginalName.Buffer);
  return (unsigned int)v13;
}
