/*
 * XREFs of sub_1800CD0D8 @ 0x1800CD0D8
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18004AEE4 @ 0x18004AEE4 (sub_18004AEE4.c)
 *     LdrQueryImageFileKeyOption @ 0x18004B060 (LdrQueryImageFileKeyOption.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004BD30 (RtlQueryEnvironmentVariable_U.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CC970 @ 0x1800CC970 (sub_1800CC970.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800D00B4 @ 0x1800D00B4 (sub_1800D00B4.c)
 *     sub_1800D0288 @ 0x1800D0288 (sub_1800D0288.c)
 *     sub_1800D0368 @ 0x1800D0368 (sub_1800D0368.c)
 *     sub_1800D0488 @ 0x1800D0488 (sub_1800D0488.c)
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 *     sub_1800DBE70 @ 0x1800DBE70 (sub_1800DBE70.c)
 *     sub_1801042E8 @ 0x1801042E8 (sub_1801042E8.c)
 */

__int64 __fastcall sub_1800CD0D8(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  unsigned __int8 v6; // r12
  _QWORD *v7; // rsi
  __int64 *v8; // r15
  __int64 v10; // rbx
  unsigned int v11; // edi
  char v12; // r13
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // ecx
  char v17; // al
  char *v18; // rsi
  int ValueKey; // eax
  int v20; // edi
  unsigned __int64 v21; // r15
  int v22; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  int v28; // edi
  char *v29; // rdi
  int v30; // eax
  unsigned __int64 v31; // rsi
  int v32; // ecx
  void *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  __int64 i; // rdi
  wchar_t *v38; // rdx
  _BYTE *v39; // rax
  int inited; // eax
  char *v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // rsi
  int v44; // ecx
  void *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int16 *v53; // r13
  unsigned int *v54; // rsi
  int v55; // eax
  int v56; // edi
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rcx
  char v62; // al
  int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  unsigned int v75; // [rsp+54h] [rbp-ACh]
  unsigned int v76; // [rsp+58h] [rbp-A8h]
  unsigned int v77; // [rsp+5Ch] [rbp-A4h]
  unsigned int v78; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v79; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v80; // [rsp+70h] [rbp-90h]
  unsigned int v81; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v82; // [rsp+80h] [rbp-80h]
  __int64 v83; // [rsp+88h] [rbp-78h] BYREF
  __int64 v84; // [rsp+90h] [rbp-70h] BYREF
  __int64 v85; // [rsp+98h] [rbp-68h] BYREF
  int v86; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v87[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v88; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v89[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v90; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v91[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v92; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v93[4]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v94; // [rsp+E0h] [rbp-20h]
  int v95; // [rsp+E8h] [rbp-18h] BYREF
  char *v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  int v100; // [rsp+118h] [rbp+18h]
  __int64 v101; // [rsp+120h] [rbp+20h]
  void *v102; // [rsp+128h] [rbp+28h]
  int v103; // [rsp+130h] [rbp+30h]
  __int128 v104; // [rsp+138h] [rbp+38h]
  char v105; // [rsp+150h] [rbp+50h] BYREF
  char v106; // [rsp+550h] [rbp+450h] BYREF
  char v107; // [rsp+950h] [rbp+850h] BYREF
  char v108; // [rsp+D50h] [rbp+C50h] BYREF
  char v109; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = 0;
  v7 = a5;
  v8 = a4;
  v97 = a6;
  v82 = a4;
  *a4 = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  v84 = 0LL;
  v12 = 1;
  v73 = 0LL;
  v81 = 0;
  v83 = 0LL;
  v85 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v98 = a3;
  v80 = a1;
  v79 = a5;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 )
    goto LABEL_121;
  v14 = sub_180076270(a1, 9LL, 0, &v73);
  v10 = v73;
  if ( v14 < 0 )
    goto LABEL_121;
  *v8 = v73;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)sub_1800CC970(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)sub_1800DBE70(&DestinationString, v10, &v83) >= 0 )
      *a5 = v83;
  }
  v15 = v83;
  sub_18004AEE4(v83, v10, (__int64)L"DisableHeapLookaside", 4u, (__int64)&dword_18015D42C, 4, v64, 0LL);
  sub_18004AEE4(v15, v10, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v81, 4, v65, 0LL);
  sub_18004AEE4(v15, v10, (__int64)L"ShutdownFlags", 4u, (__int64)&byte_18015D430, 4, v66, 0LL);
  v72 = 0;
  sub_18004AEE4(v15, v10, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v72, 4, v67, 0LL);
  v16 = dword_180159720;
  if ( v72 )
    v16 = v72;
  v72 = 0;
  dword_180159720 = v16;
  sub_18004AEE4(v15, v10, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v72, 4, v68, 0LL);
  if ( v72 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v72;
  v72 = 0;
  sub_18004AEE4(v83, v10, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v72, 4, v69, 0LL);
  v17 = byte_18015C318;
  if ( v72 )
    v17 = 1;
  byte_18015C318 = v17;
  v72 = 0;
  sub_18004AEE4(v83, v10, (__int64)L"TracingFlags", 4u, (__int64)&v72, 4, v70, 0LL);
  if ( v72 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v72);
    v10 = v73;
  }
  v72 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v87, (__int64)L"CFGOptions") >= 0 )
  {
    v18 = &v105;
    ValueKey = ZwQueryValueKey();
    v20 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1572864, v74);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (char *)Heap;
          v10 = v73;
          v25 = ZwQueryValueKey();
          v20 = v25;
          if ( v25 >= 0 )
            goto LABEL_18;
          if ( v25 != -2147483643 )
            goto LABEL_41;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v18);
        }
        v10 = v73;
        v8 = v82;
        goto LABEL_47;
      }
    }
    else
    {
      v21 = 0LL;
LABEL_18:
      v22 = *((_DWORD *)v18 + 1);
      if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v22 )
        {
          case 4:
            if ( *((_DWORD *)v18 + 2) == 4 )
            {
              v74 = 4;
              v72 = *((_DWORD *)v18 + 3);
            }
            else
            {
              v20 = -1073741820;
            }
            break;
          case 11:
            v20 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&v72 & 3) != 0 )
            {
              v20 = -2147483646;
            }
            else
            {
              v74 = 4;
              v88 = v18 + 12;
              v87[0] = *((_WORD *)v18 + 4);
              v87[1] = *((_WORD *)v18 + 4);
              v20 = RtlUnicodeStringToInteger(v87, 0, (int *)&v72);
            }
            break;
          default:
            v20 = -1073741788;
            break;
        }
      }
      else if ( v22 == 4 )
      {
        v74 = *((_DWORD *)v18 + 2);
        v26 = *((_DWORD *)v18 + 2);
        if ( v26 > 4 )
          v20 = -2147483643;
        else
          memmove(&v72, v18 + 12, v26);
      }
      else
      {
        v20 = -1073741788;
      }
LABEL_41:
      if ( v21 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
        v10 = v73;
      }
      v8 = v82;
    }
    if ( v20 >= 0 && (v72 & 1) != 0 )
    {
      sub_1800259B4(0);
      byte_18016F29A = 1;
      sub_1800259B4(1);
    }
LABEL_47:
    v7 = v79;
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
    goto LABEL_53;
  v100 = 48;
  v102 = &unk_180111268;
  v101 = v10;
  v103 = 64;
  v104 = 0LL;
  v27 = ZwOpenKey();
  v28 = v27;
  if ( v27 == -1073741772 )
  {
    qword_18015BEE0 = 0LL;
    goto LABEL_53;
  }
  if ( v27 >= 0 )
  {
LABEL_53:
    if ( (int)RtlInitUnicodeStringEx((__int64)v89, (__int64)L"MinimumStackCommitInBytes") < 0 )
      goto LABEL_76;
    v29 = &v106;
    v30 = ZwQueryValueKey();
    if ( v30 < 0 )
    {
      if ( v30 != -2147483643 )
        goto LABEL_76;
      while ( 1 )
      {
        v33 = NtCurrentPeb()->ProcessHeap;
        if ( !v33 )
          break;
        v34 = RtlAllocateHeap((__int64)v33, dword_18015C294 + 1572864, v75);
        v31 = v34;
        if ( !v34 )
          break;
        v29 = (char *)v34;
        v10 = v73;
        v35 = ZwQueryValueKey();
        if ( v35 >= 0 )
          goto LABEL_56;
        if ( v35 != -2147483643 )
          goto LABEL_72;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v29);
      }
    }
    else
    {
      v31 = 0LL;
LABEL_56:
      v32 = *((_DWORD *)v29 + 1);
      if ( ((v32 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v32 == 4 )
        {
          if ( *((_DWORD *)v29 + 2) == 4 )
          {
            v75 = 4;
            v72 = *((_DWORD *)v29 + 3);
          }
        }
        else if ( v32 == 1 && ((unsigned __int8)&v72 & 3) == 0 )
        {
          v75 = 4;
          v90 = v29 + 12;
          v89[0] = *((_WORD *)v29 + 4);
          v89[1] = *((_WORD *)v29 + 4);
          RtlUnicodeStringToInteger(v89, 0, (int *)&v72);
        }
      }
      else if ( v32 == 4 )
      {
        v75 = *((_DWORD *)v29 + 2);
        v36 = *((_DWORD *)v29 + 2);
        if ( v36 <= 4 )
          memmove(&v72, v29 + 12, v36);
      }
LABEL_72:
      if ( !v31 )
        goto LABEL_75;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
    }
    v10 = v73;
LABEL_75:
    v7 = v79;
LABEL_76:
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v72 )
      *(_QWORD *)(a2 + 792) = v72;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v38 = (&off_180111230)[i];
      v72 = 0;
      LdrQueryImageFileKeyOption(v10, (__int64)v38, 4, &v72, 4u, 0LL);
      v39 = *(&off_180111230 + i + 1);
      if ( v72 )
        *v39 = 1;
      else
        *v39 = 0;
    }
    v72 = 0;
    inited = RtlInitUnicodeStringEx((__int64)v91, (__int64)L"MaxDeadActivationContexts");
    v8 = v82;
    if ( inited >= 0 )
    {
      v41 = &v107;
      v42 = ZwQueryValueKey();
      if ( v42 < 0 )
      {
        if ( v42 != -2147483643 )
          goto LABEL_109;
        while ( 1 )
        {
          v45 = NtCurrentPeb()->ProcessHeap;
          if ( !v45 )
            break;
          v46 = RtlAllocateHeap((__int64)v45, dword_18015C294 + 1572864, v76);
          v43 = v46;
          if ( !v46 )
            break;
          v41 = (char *)v46;
          v10 = v73;
          v47 = ZwQueryValueKey();
          if ( v47 >= 0 )
            goto LABEL_86;
          if ( v47 != -2147483643 )
            goto LABEL_102;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v41);
        }
        v10 = v73;
      }
      else
      {
        v43 = 0LL;
LABEL_86:
        v44 = *((_DWORD *)v41 + 1);
        if ( ((v44 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v44 == 4 )
          {
            if ( *((_DWORD *)v41 + 2) == 4 )
            {
              v76 = 4;
              v72 = *((_DWORD *)v41 + 3);
            }
          }
          else if ( v44 == 1 && ((unsigned __int8)&v72 & 3) == 0 )
          {
            v76 = 4;
            v92 = v41 + 12;
            v91[0] = *((_WORD *)v41 + 4);
            v91[1] = *((_WORD *)v41 + 4);
            RtlUnicodeStringToInteger(v91, 0, (int *)&v72);
          }
        }
        else if ( v44 == 4 )
        {
          v76 = *((_DWORD *)v41 + 2);
          v48 = *((_DWORD *)v41 + 2);
          if ( v48 <= 4 )
            memmove(&v72, v41 + 12, v48);
        }
LABEL_102:
        if ( v43 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v43);
          v10 = v73;
        }
        v49 = dword_180159788;
        if ( v72 )
          v49 = v72;
        dword_180159788 = v49;
      }
      v7 = v79;
    }
LABEL_109:
    v50 = v83;
    v6 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
    if ( (int)sub_18004AEE4(v83, v10, (__int64)L"GlobalFlag", 4u, (__int64)&v78, 4, v71, &v85) < 0 )
      goto LABEL_118;
    if ( (v78 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)sub_1800D00B4(a2, v50, v10) )
        v78 &= 0xFDFFFEFF;
      if ( (v78 & 0x2000100) != 0 )
      {
        if ( (int)sub_1800D0368(v80, &v86) < 0 )
          goto LABEL_118;
        if ( !v86 )
          v78 &= 0xFDFFFEFF;
      }
    }
    *(_DWORD *)(a2 + 188) = v78;
LABEL_118:
    v11 = v81;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
      v12 = 0;
    else
      v85 = 0LL;
LABEL_121:
    if ( LdrControlFlowGuardEnforced() )
      v11 |= 1u;
    sub_1801042E8(v11, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
    if ( v12 && !byte_18015C298 )
    {
      v53 = v80;
      if ( (MEMORY[0x7FFE03A0] & 1) == 0 )
        goto LABEL_162;
      if ( (int)sub_1800D48E4(v80, v51, &v84) < 0 )
      {
        v84 = 0LL;
        goto LABEL_162;
      }
      if ( (int)RtlInitUnicodeStringEx((__int64)v93, (__int64)L"GlobalFlag") >= 0 )
      {
        v54 = (unsigned int *)&v108;
        v55 = ZwQueryValueKey();
        v56 = v55;
        if ( v55 >= 0 )
        {
          v57 = 0LL;
LABEL_138:
          v52 = v54[1];
          if ( (((_DWORD)v52 - 3) & 0xFFFFFFFB) != 0 )
          {
            switch ( (_DWORD)v52 )
            {
              case 4:
                if ( v54[2] == 4 )
                {
                  v77 = 4;
                  v78 = v54[3];
                }
                else
                {
                  v56 = -1073741820;
                }
                break;
              case 0xB:
                v56 = -1073741788;
                break;
              case 1:
                if ( ((unsigned __int8)&v78 & 3) != 0 )
                {
                  v56 = -2147483646;
                }
                else
                {
                  v77 = 4;
                  v94 = v54 + 3;
                  v93[0] = *((_WORD *)v54 + 4);
                  v93[1] = *((_WORD *)v54 + 4);
                  v56 = RtlUnicodeStringToInteger(v93, 0, (int *)&v78);
                }
                break;
              default:
                v56 = -1073741788;
                break;
            }
          }
          else if ( (_DWORD)v52 == 4 )
          {
            v77 = v54[2];
            v60 = v54[2];
            if ( v60 > 4 )
              v56 = -2147483643;
            else
              memmove(&v78, v54 + 3, v60);
          }
          else
          {
            v56 = -1073741788;
          }
LABEL_155:
          if ( v57 )
          {
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v57);
            v10 = v73;
          }
          v8 = v82;
          goto LABEL_158;
        }
        if ( v55 != -2147483643 )
        {
LABEL_158:
          v7 = v79;
          v53 = v80;
          if ( v56 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v78 & 0x2000100;
            v85 = v84;
          }
LABEL_162:
          v28 = 0;
          if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || (unsigned __int8)sub_1800D0288(v52, v51) )
          {
            v28 = sub_1800CCC9C(v53, a2, v6, v85, v98, v97);
            if ( v28 >= 0 )
              goto LABEL_182;
            v62 = dword_180156A70;
            if ( (dword_180156A70 & 3) != 0 )
            {
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                7794,
                (unsigned int)"LdrpInitializeExecutionOptions",
                0,
                "Initializing the application verifier package failed with status 0x%08lx\n",
                v28);
              v62 = dword_180156A70;
            }
            if ( (v62 & 0x10) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v83 || v10 || !*(_BYTE *)(a2 + 2) )
              goto LABEL_182;
            v61 = *(_QWORD *)(a2 + 32);
            v96 = &v109;
            v95 = 0x200000;
            if ( (int)RtlQueryEnvironmentVariable_U(*(_WORD **)(v61 + 128), &qword_180111220, (__int64)&v95) < 0
              || (v28 = RtlUnicodeStringToInteger((unsigned __int16 *)&v95, 0, (int *)&v72), v28 < 0)
              || !v72 )
            {
              *(_DWORD *)(a2 + 188) |= 0x70u;
            }
          }
          if ( v28 < 0 )
            goto LABEL_178;
LABEL_182:
          sub_1800D0488(v10);
          goto LABEL_183;
        }
        while ( 1 )
        {
          v52 = (__int64)NtCurrentPeb()->ProcessHeap;
          if ( !v52 )
            break;
          v58 = RtlAllocateHeap(v52, dword_18015C294 + 1572864, v77);
          v57 = v58;
          if ( !v58 )
            break;
          v54 = (unsigned int *)v58;
          v59 = ZwQueryValueKey();
          v56 = v59;
          if ( v59 >= 0 )
          {
            v10 = v73;
            goto LABEL_138;
          }
          if ( v59 != -2147483643 )
          {
            v10 = v73;
            goto LABEL_155;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v54);
        }
        v10 = v73;
        v7 = v79;
        v8 = v82;
      }
    }
    v53 = v80;
    goto LABEL_162;
  }
LABEL_178:
  if ( *v8 )
  {
    ZwClose();
    *v8 = 0LL;
  }
  if ( *v7 )
  {
    ZwClose();
    *v7 = 0LL;
  }
LABEL_183:
  if ( v84 )
    ZwClose();
  return (unsigned int)v28;
}
