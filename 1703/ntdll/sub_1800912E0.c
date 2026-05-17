/*
 * XREFs of sub_1800912E0 @ 0x1800912E0
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_18007C110 @ 0x18007C110 (sub_18007C110.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_18007C34C @ 0x18007C34C (sub_18007C34C.c)
 *     LdrQueryImageFileKeyOption @ 0x18007C560 (LdrQueryImageFileKeyOption.c)
 *     sub_18008A7B4 @ 0x18008A7B4 (sub_18008A7B4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D6E6C @ 0x1800D6E6C (sub_1800D6E6C.c)
 *     sub_1800D7198 @ 0x1800D7198 (sub_1800D7198.c)
 *     sub_1800D781C @ 0x1800D781C (sub_1800D781C.c)
 *     sub_1800D79F0 @ 0x1800D79F0 (sub_1800D79F0.c)
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 *     sub_1800E21DC @ 0x1800E21DC (sub_1800E21DC.c)
 */

__int64 __fastcall sub_1800912E0(unsigned __int16 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  unsigned __int64 v6; // r15
  __int16 v7; // bx
  _QWORD *v8; // r12
  char v11; // si
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rsi
  _DWORD *v16; // r15
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rsi
  _DWORD *v22; // rbx
  int v23; // eax
  __int64 i; // rbx
  wchar_t *v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // rbx
  _DWORD *v28; // rsi
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rsi
  _DWORD *v33; // r15
  int v34; // eax
  int v35; // ebx
  char v36; // al
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // r12
  int v41; // ecx
  unsigned int v42; // ebx
  void *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // r12d
  void *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // r12d
  void *v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  unsigned __int64 v59; // r12
  int v60; // ecx
  unsigned int v61; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v64; // eax
  unsigned int v65; // eax
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+30h] [rbp-D0h]
  unsigned int v74; // [rsp+40h] [rbp-C0h] BYREF
  int v75; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v78; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v79; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v80; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v81; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD *v82; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  int v84; // [rsp+78h] [rbp-88h] BYREF
  __int64 v85; // [rsp+80h] [rbp-80h] BYREF
  __int64 v86; // [rsp+88h] [rbp-78h] BYREF
  int v87; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v88[4]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v89; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v90[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v91; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v92[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v93; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v94[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v95; // [rsp+D0h] [rbp-30h]
  int v96; // [rsp+D8h] [rbp-28h] BYREF
  char *v97; // [rsp+E0h] [rbp-20h]
  __int64 v98; // [rsp+E8h] [rbp-18h]
  __int64 v99; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  int v101; // [rsp+108h] [rbp+8h] BYREF
  __int64 v102; // [rsp+110h] [rbp+10h]
  void *v103; // [rsp+118h] [rbp+18h]
  int v104; // [rsp+120h] [rbp+20h]
  __int128 v105; // [rsp+128h] [rbp+28h]
  _BYTE v106[1024]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v107[1024]; // [rsp+540h] [rbp+440h] BYREF
  _BYTE v108[1024]; // [rsp+940h] [rbp+840h] BYREF
  _BYTE v109[1024]; // [rsp+D40h] [rbp+C40h] BYREF
  char v110; // [rsp+1140h] [rbp+1040h] BYREF
  WCHAR SourceString[200]; // [rsp+1160h] [rbp+1060h] BYREF

  v6 = 0LL;
  v7 = 0;
  *a4 = 0LL;
  v8 = a4;
  v98 = a6;
  v77 = 0LL;
  *a5 = 0LL;
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 32);
  v85 = 0LL;
  v82 = a4;
  v99 = a3;
  v13 = (*(_DWORD *)(v12 + 8) & 0x4000) == 0;
  v76 = 0;
  v84 = 0;
  v83 = 0LL;
  v86 = 0LL;
  if ( !v13 || (int)sub_18007C34C(a1, 9u, (__int64)&v77) < 0 )
  {
LABEL_50:
    if ( qword_18016B370 )
      v7 |= 1u;
    sub_18008A7B4(v7, *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL));
    if ( v11 && !byte_18015B26C && (MEMORY[0x7FFE03A0] & 1) != 0 )
    {
      if ( (int)sub_1800DB144(a1, v31, &v85) < 0 )
      {
        v85 = 0LL;
        goto LABEL_61;
      }
      v32 = v85;
      if ( (int)RtlInitUnicodeStringEx((__int64)v94, (__int64)L"GlobalFlag") < 0 )
        goto LABEL_61;
      v33 = v109;
      v34 = ZwQueryValueKey(v32, v94, 2LL, v109, 1024, &v81);
      v35 = v34;
      if ( v34 >= 0 )
      {
        v59 = 0LL;
LABEL_157:
        v60 = v33[1];
        if ( ((v60 - 3) & 0xFFFFFFFB) != 0 )
        {
          switch ( v60 )
          {
            case 4:
              if ( v33[2] == 4 )
              {
                v81 = 4;
                v75 = v33[3];
              }
              else
              {
                v35 = -1073741820;
              }
              break;
            case 11:
              v35 = -1073741788;
              break;
            case 1:
              if ( ((unsigned __int8)&v75 & 3) != 0 )
              {
                v35 = -2147483646;
              }
              else
              {
                v81 = 4;
                v95 = v33 + 3;
                v94[0] = *((_WORD *)v33 + 4);
                v94[1] = *((_WORD *)v33 + 4);
                v35 = RtlUnicodeStringToInteger(v94, 0, &v75);
              }
              break;
            default:
              v35 = -1073741788;
              break;
          }
        }
        else if ( v60 == 4 )
        {
          v81 = v33[2];
          v65 = v33[2];
          if ( v65 > 4 )
            v35 = -2147483643;
          else
            memmove(&v75, v33 + 3, v65);
        }
        else
        {
          v35 = -1073741788;
        }
LABEL_179:
        if ( v59 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v59);
        v8 = v82;
        goto LABEL_59;
      }
      if ( v34 != -2147483643 )
      {
LABEL_59:
        if ( v35 >= 0 )
        {
          *(_DWORD *)(a2 + 188) |= v75 & 0x2000100;
          v86 = v85;
        }
        goto LABEL_61;
      }
      while ( 1 )
      {
        v61 = v81;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          break;
        Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1572864, v81);
        v59 = Heap;
        if ( !Heap )
          break;
        v33 = (_DWORD *)Heap;
        v64 = ZwQueryValueKey(v32, v94, 2LL, Heap, v61, &v81);
        v35 = v64;
        if ( v64 >= 0 )
          goto LABEL_157;
        if ( v64 != -2147483643 )
          goto LABEL_179;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v33);
      }
      v8 = v82;
    }
LABEL_61:
    v20 = 0;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v20 = sub_1800D7198((_DWORD)a1, a2, v76, v86, v99, v98);
      if ( v20 < 0 )
      {
        v36 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            7802,
            (unsigned int)"LdrpInitializeExecutionOptions",
            0,
            "Initializing the application verifier package failed with status 0x%08lx\n",
            v20);
          v36 = dword_180155A10;
        }
        if ( (v36 & 0x10) != 0 )
          __debugbreak();
LABEL_67:
        if ( v20 < 0 )
          goto LABEL_68;
      }
    }
    else if ( !v83 )
    {
      v38 = v77;
      if ( v77 || !*(_BYTE *)(a2 + 2) )
        goto LABEL_79;
      v39 = *(_QWORD *)(a2 + 32);
      v97 = &v110;
      v96 = 0x200000;
      if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v39 + 128), &qword_1801108B0, (__int64)&v96) < 0
        || (v20 = RtlUnicodeStringToInteger((unsigned __int16 *)&v96, 0, (int *)&v74), v20 < 0)
        || !v74 )
      {
        *(_DWORD *)(a2 + 188) |= 0x70u;
      }
      goto LABEL_67;
    }
    v38 = v77;
LABEL_79:
    sub_18007C110(v38);
    goto LABEL_72;
  }
  *v8 = v77;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)sub_1800D6E6C(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)sub_1800E21DC(&DestinationString, v77, &v83) >= 0 )
      *a5 = v83;
  }
  v14 = v83;
  sub_18007C1E0(v83, v77, (__int64)L"DisableHeapLookaside", 4u, (__int64)&dword_18015C3B8, 4, v66, 0LL);
  sub_18007C1E0(v14, v77, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v84, 4, v67, 0LL);
  sub_18007C1E0(v14, v77, (__int64)L"ShutdownFlags", 4u, (__int64)&byte_18015C3BC, 4, v68, 0LL);
  v74 = 0;
  sub_18007C1E0(v14, v77, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v74, 4, v69, 0LL);
  if ( v74 )
    dword_180158690 = v74;
  v74 = 0;
  sub_18007C1E0(v83, v77, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v74, 4, v70, 0LL);
  if ( v74 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v74;
  v74 = 0;
  sub_18007C1E0(v83, v77, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v74, 4, v71, 0LL);
  if ( v74 )
    byte_18015B2E8 = 1;
  v74 = 0;
  sub_18007C1E0(v83, v77, (__int64)L"TracingFlags", 4u, (__int64)&v74, 4, v72, 0LL);
  if ( v74 )
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v74);
  v15 = v77;
  v74 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v88, (__int64)L"CFGOptions") >= 0 )
  {
    v16 = v106;
    v17 = ZwQueryValueKey(v15, v88, 2LL, v106, 1024, &v78);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v40 = 0LL;
LABEL_87:
      v41 = v16[1];
      if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v41 )
        {
          case 4:
            if ( v16[2] == 4 )
            {
              v78 = 4;
              v74 = v16[3];
            }
            else
            {
              v18 = -1073741820;
            }
            break;
          case 11:
            v18 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&v74 & 3) != 0 )
            {
              v18 = -2147483646;
            }
            else
            {
              v78 = 4;
              v89 = v16 + 3;
              v88[0] = *((_WORD *)v16 + 4);
              v88[1] = *((_WORD *)v16 + 4);
              v18 = RtlUnicodeStringToInteger(v88, 0, (int *)&v74);
            }
            break;
          default:
            v18 = -1073741788;
            break;
        }
      }
      else if ( v41 == 4 )
      {
        v78 = v16[2];
        v46 = v16[2];
        if ( v46 > 4 )
          v18 = -2147483643;
        else
          memmove(&v74, v16 + 3, v46);
      }
      else
      {
        v18 = -1073741788;
      }
LABEL_109:
      if ( v40 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v40);
      v8 = v82;
    }
    else if ( v17 == -2147483643 )
    {
      while ( 1 )
      {
        v42 = v78;
        v43 = NtCurrentPeb()->ProcessHeap;
        if ( !v43 )
          break;
        v44 = RtlAllocateHeap((__int64)v43, dword_18015B268 + 1572864, v78);
        v40 = v44;
        if ( !v44 )
          break;
        v16 = (_DWORD *)v44;
        v45 = ZwQueryValueKey(v15, v88, 2LL, v44, v42, &v78);
        v18 = v45;
        if ( v45 >= 0 )
          goto LABEL_87;
        if ( v45 != -2147483643 )
          goto LABEL_109;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v16);
      }
      v8 = v82;
      goto LABEL_21;
    }
    if ( v18 >= 0 && (v74 & 1) != 0 )
    {
      sub_18001DEA8(0);
      byte_18016B282 = 1;
      sub_18001DEA8(1);
    }
LABEL_21:
    v6 = 0LL;
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
    goto LABEL_25;
  v102 = v77;
  v101 = 48;
  v103 = &unk_180110920;
  v104 = 64;
  v105 = 0LL;
  v19 = ZwOpenKey(&qword_18015AEC0, 1LL, &v101);
  v20 = v19;
  if ( v19 == -1073741772 )
  {
    qword_18015AEC0 = 0LL;
LABEL_25:
    v21 = v77;
    if ( (int)RtlInitUnicodeStringEx((__int64)v90, (__int64)L"MinimumStackCommitInBytes") < 0 )
      goto LABEL_28;
    v22 = v107;
    v23 = ZwQueryValueKey(v21, v90, 2LL, v107, 1024, &v79);
    if ( v23 >= 0 )
    {
LABEL_121:
      v51 = v22[1];
      if ( ((v51 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v51 == 4 )
        {
          if ( v22[2] == 4 )
          {
            v79 = 4;
            v74 = v22[3];
          }
        }
        else if ( v51 == 1 && ((unsigned __int8)&v74 & 3) == 0 )
        {
          v79 = 4;
          v91 = v22 + 3;
          v90[0] = *((_WORD *)v22 + 4);
          v90[1] = *((_WORD *)v22 + 4);
          RtlUnicodeStringToInteger(v90, 0, (int *)&v74);
        }
      }
      else if ( v51 == 4 )
      {
        v79 = v22[2];
        v52 = v22[2];
        if ( v52 <= 4 )
          memmove(&v74, v22 + 3, v52);
      }
LABEL_131:
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      if ( v23 != -2147483643 )
        goto LABEL_28;
      while ( 1 )
      {
        v47 = v79;
        v48 = NtCurrentPeb()->ProcessHeap;
        if ( !v48 )
          break;
        v49 = RtlAllocateHeap((__int64)v48, dword_18015B268 + 1572864, v79);
        v6 = v49;
        if ( !v49 )
          break;
        v22 = (_DWORD *)v49;
        v50 = ZwQueryValueKey(v21, v90, 2LL, v49, v47, &v79);
        if ( v50 >= 0 )
        {
          v8 = v82;
          goto LABEL_121;
        }
        if ( v50 != -2147483643 )
        {
          v8 = v82;
          goto LABEL_131;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v22);
      }
      v8 = v82;
    }
    v6 = 0LL;
LABEL_28:
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v74 )
      *(_QWORD *)(a2 + 792) = v74;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v25 = (&off_180111240)[i];
      v74 = 0;
      LdrQueryImageFileKeyOption(v77, (__int64)v25, 4, (int *)&v74, 4u, 0LL);
      v26 = *(&off_180111240 + i + 1);
      if ( v74 )
        *v26 = 1;
      else
        *v26 = 0;
    }
    v27 = v77;
    v74 = 0;
    if ( (int)RtlInitUnicodeStringEx((__int64)v92, (__int64)L"MaxDeadActivationContexts") >= 0 )
    {
      v28 = v108;
      v29 = ZwQueryValueKey(v27, v92, 2LL, v108, 1024, &v80);
      if ( v29 >= 0 )
      {
LABEL_143:
        v57 = v28[1];
        if ( ((v57 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v57 == 4 )
          {
            if ( v28[2] == 4 )
            {
              v80 = 4;
              v74 = v28[3];
            }
          }
          else if ( v57 == 1 && ((unsigned __int8)&v74 & 3) == 0 )
          {
            v80 = 4;
            v93 = v28 + 3;
            v92[0] = *((_WORD *)v28 + 4);
            v92[1] = *((_WORD *)v28 + 4);
            RtlUnicodeStringToInteger(v92, 0, (int *)&v74);
          }
        }
        else if ( v57 == 4 )
        {
          v80 = v28[2];
          v58 = v28[2];
          if ( v58 <= 4 )
            memmove(&v74, v28 + 3, v58);
        }
LABEL_153:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( v74 )
          dword_180158694 = v74;
      }
      else if ( v29 == -2147483643 )
      {
        while ( 1 )
        {
          v53 = v80;
          v54 = NtCurrentPeb()->ProcessHeap;
          if ( !v54 )
            break;
          v55 = RtlAllocateHeap((__int64)v54, dword_18015B268 + 1572864, v80);
          v6 = v55;
          if ( !v55 )
            break;
          v28 = (_DWORD *)v55;
          v56 = ZwQueryValueKey(v27, v92, 2LL, v55, v53, &v80);
          if ( v56 >= 0 )
          {
            v8 = v82;
            goto LABEL_143;
          }
          if ( v56 != -2147483643 )
          {
            v8 = v82;
            goto LABEL_153;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v28);
        }
        v8 = v82;
      }
    }
    if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
      v76 = 1;
    v30 = v83;
    if ( (int)sub_18007C1E0(v83, v77, (__int64)L"GlobalFlag", 4u, (__int64)&v75, 4, v73, &v86) < 0 )
      goto LABEL_48;
    if ( (v75 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)sub_1800D781C(a2, v30, v77) )
        v75 &= 0xFDFFFEFF;
      if ( (v75 & 0x2000100) != 0 )
      {
        if ( (int)sub_1800D79F0(a1, &v87) < 0 )
          goto LABEL_48;
        if ( !v87 )
          v75 &= 0xFDFFFEFF;
      }
    }
    *(_DWORD *)(a2 + 188) = v75;
LABEL_48:
    v7 = v84;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    {
      v11 = 0;
    }
    else
    {
      v86 = 0LL;
      v11 = 1;
    }
    goto LABEL_50;
  }
  if ( v19 >= 0 )
    goto LABEL_25;
LABEL_68:
  if ( *v8 )
  {
    ZwClose(*v8);
    *v8 = 0LL;
  }
  if ( *a5 )
  {
    ZwClose(*a5);
    *a5 = 0LL;
  }
LABEL_72:
  if ( v85 )
    ZwClose(v85);
  return (unsigned int)v20;
}
