/*
 * XREFs of sub_1800313E0 @ 0x1800313E0
 * Callers:
 *     RtlWalkFrameChain @ 0x180031370 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_1800313AC @ 0x1800313AC (sub_1800313AC.c)
 *     sub_180032340 @ 0x180032340 (sub_180032340.c)
 *     sub_180089A50 @ 0x180089A50 (sub_180089A50.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4C00 @ 0x1800A4C00 (sub_1800A4C00.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800A9130 @ 0x1800A9130 (sub_1800A9130.c)
 */

__int64 __fastcall sub_1800313E0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // r12d
  char *v8; // r10
  _BYTE *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  char *v14; // r15
  _BYTE *v15; // rdx
  __int64 v16; // rsi
  char v17; // cl
  char v18; // cl
  __int64 v19; // rbx
  char v20; // r14
  unsigned int v21; // esi
  _BYTE *v22; // rdi
  __int64 v23; // r8
  _BYTE *v24; // rdx
  char *v25; // rcx
  NTSTATUS VirtualMemory; // eax
  unsigned int *v27; // r13
  __int64 v28; // r9
  _BYTE *v29; // rcx
  char *v30; // r11
  __int64 v31; // rdi
  unsigned __int8 *v32; // r14
  __int64 v33; // r8
  unsigned int v34; // esi
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned __int8 v37; // cl
  int v38; // eax
  int v39; // eax
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // bl
  __int16 v43; // ax
  unsigned int v44; // esi
  int v45; // r11d
  int v46; // edx
  unsigned int j; // r8d
  __int16 v48; // ax
  int v49; // edx
  bool v50; // zf
  int v51; // edx
  int v52; // eax
  char *v53; // rdx
  __int64 v54; // rcx
  char v55; // r8
  int v56; // eax
  char v57; // al
  char v58; // cl
  __int64 v59; // r9
  _BYTE *v60; // r9
  __int64 v61; // rdx
  char *v62; // rdx
  char **v63; // rcx
  char **v64; // r8
  int v65; // ecx
  int v66; // eax
  char v67; // r8
  _DWORD *v68; // rax
  char v69; // r8
  __int64 v70; // r15
  __int64 v71; // rcx
  char v72; // al
  char *v73; // rcx
  char *v74; // r9
  __int64 v75; // rcx
  _BYTE v77[32]; // [rsp+0h] [rbp-658h] BYREF
  char v78; // [rsp+40h] [rbp-618h] BYREF
  int v79; // [rsp+44h] [rbp-614h]
  char v80; // [rsp+48h] [rbp-610h]
  unsigned int v81; // [rsp+4Ch] [rbp-60Ch]
  char v82; // [rsp+50h] [rbp-608h]
  int v83; // [rsp+54h] [rbp-604h]
  _BYTE *v84; // [rsp+58h] [rbp-600h]
  char *v85; // [rsp+60h] [rbp-5F8h] BYREF
  unsigned __int64 v86; // [rsp+68h] [rbp-5F0h] BYREF
  __int16 v87; // [rsp+70h] [rbp-5E8h]
  NTSTATUS v88; // [rsp+74h] [rbp-5E4h]
  int v89; // [rsp+78h] [rbp-5E0h]
  unsigned int i; // [rsp+7Ch] [rbp-5DCh]
  int v91; // [rsp+80h] [rbp-5D8h]
  int v92; // [rsp+84h] [rbp-5D4h]
  int v93; // [rsp+88h] [rbp-5D0h]
  int v94; // [rsp+8Ch] [rbp-5CCh]
  char *v95; // [rsp+90h] [rbp-5C8h]
  unsigned int v96; // [rsp+98h] [rbp-5C0h]
  unsigned int v97; // [rsp+9Ch] [rbp-5BCh]
  int v98; // [rsp+A0h] [rbp-5B8h]
  unsigned int v99; // [rsp+A4h] [rbp-5B4h]
  int v100; // [rsp+A8h] [rbp-5B0h]
  int v101; // [rsp+ACh] [rbp-5ACh]
  char *v102; // [rsp+B0h] [rbp-5A8h]
  __int128 v103; // [rsp+B8h] [rbp-5A0h]
  __int64 v104; // [rsp+C8h] [rbp-590h]
  _BYTE *v105; // [rsp+D0h] [rbp-588h]
  char *v106; // [rsp+D8h] [rbp-580h]
  char *v107; // [rsp+E0h] [rbp-578h]
  unsigned int *v108; // [rsp+E8h] [rbp-570h]
  __int64 v109; // [rsp+F0h] [rbp-568h]
  unsigned int *v110; // [rsp+100h] [rbp-558h]
  _BYTE *v111; // [rsp+108h] [rbp-550h]
  _BYTE MemoryInformation[48]; // [rsp+120h] [rbp-538h] BYREF
  _BYTE v113[120]; // [rsp+150h] [rbp-508h] BYREF
  _QWORD v114[4]; // [rsp+1C8h] [rbp-490h] BYREF
  char *v115; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v117[102]; // [rsp+2F0h] [rbp-368h] BYREF

  v4 = a4;
  v96 = a4;
  v5 = a2;
  v97 = a2;
  v6 = a1;
  v109 = a1;
  if ( !sub_1800313AC(&v86, (PVOID *)&v85) )
    return 0LL;
  sub_1800A9130(v113);
  v78 = 0;
  v7 = 0;
  v94 = 0;
  v103 = xmmword_18016B4C0;
  v104 = qword_18016B4D0;
  v8 = v115;
LABEL_52:
  if ( ((unsigned __int8)v8 & 7) == 0 && (unsigned __int64)v8 >= v86 && v8 < v85 )
  {
    v80 = 1;
    v27 = (unsigned int *)sub_180032340(BaseAddress);
    v110 = v27;
    if ( !v27 )
      return v7;
    VirtualMemory = 0;
    v91 = 0;
    v28 = *((_QWORD *)&v103 + 1);
    v29 = (_BYTE *)(*((_QWORD *)&v103 + 1) + v27[2]);
    v111 = v29;
    if ( !v29[2] && !v29[1] && (*v29 & 0x20) == 0 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        MemoryBasicInformation,
                        MemoryInformation,
                        0x30uLL,
                        0LL);
      v91 = VirtualMemory;
      if ( VirtualMemory >= 0 && (MemoryInformation[36] & 0x40) != 0 )
      {
        v91 = -1073741823;
        return v7;
      }
      v28 = *((_QWORD *)&v103 + 1);
    }
    if ( VirtualMemory < 0 )
    {
      v8 = v115;
      goto LABEL_47;
    }
    v30 = (char *)BaseAddress;
    v95 = (char *)BaseAddress;
    v108 = v27;
    v31 = 0LL;
    v92 = 0;
    v32 = (unsigned __int8 *)(v28 + v27[2]);
    v33 = *v32;
    v34 = *v32 & 7;
    if ( v78 )
    {
      if ( v34 < 2 )
      {
        v9 = (_BYTE *)(v28 + v27[2]);
        v10 = 0;
        v99 = 0;
        v11 = v32 + 2;
        if ( v32[2] )
        {
LABEL_5:
          v100 = 0;
        }
        else
        {
          while ( (*v9 & 0x20) != 0 )
          {
            v59 = *v11;
            v98 = v59;
            if ( (v59 & 1) != 0 )
            {
              v59 = (unsigned int)(v59 + 1);
              v98 = v59;
            }
            v60 = &v9[2 * v59];
            v99 = ++v10;
            if ( v10 > 0x20 )
              RtlRaiseStatus(-1073741569);
            v61 = *((unsigned int *)v60 + 3);
            v28 = *((_QWORD *)&v103 + 1);
            v9 = (_BYTE *)(*((_QWORD *)&v103 + 1) + v61);
            v11 = v9 + 2;
            if ( v9[2] )
              goto LABEL_5;
          }
          v100 = 1;
          v31 = 1LL;
          v92 = 1;
        }
      }
    }
    else
    {
      v31 = 1LL;
      v92 = 1;
    }
    v12 = (_DWORD)BaseAddress - DWORD2(v103) - *v27;
    v13 = v32[3];
    if ( (v13 & 0xF) == 0 )
    {
      v8 = v115;
LABEL_8:
      v14 = v8;
      v102 = v8;
      goto LABEL_9;
    }
    if ( v12 >= v32[1] || (v33 & 0x20) != 0 )
    {
      v37 = v32[3];
      v38 = (unsigned __int8)v13;
      v8 = v115;
    }
    else
    {
      v70 = 0LL;
      for ( i = 0; (unsigned int)v70 < v32[2]; i = v70 )
      {
        v71 = *(unsigned __int16 *)&v32[2 * v70 + 4];
        v87 = v71;
        if ( (BYTE1(v71) & 0xF) == 3 )
          break;
        v70 = (unsigned int)sub_180089A50(v71, v13, v33, v28) + (unsigned int)v70;
      }
      v8 = v115;
      v28 = *((_QWORD *)&v103 + 1);
      v30 = v95;
      if ( v12 < v32[2 * v70 + 4] )
        goto LABEL_8;
      v38 = v32[3];
      v37 = v32[3];
    }
    v14 = (char *)(v114[v37 & 0xF] - (int)(v38 & 0xFFFFFFF0));
    v102 = v14;
LABEL_9:
    if ( (_DWORD)v31 )
      goto LABEL_23;
    v83 = 0;
    if ( v34 >= 2 )
    {
      v42 = v32[2];
      if ( !v42 )
        goto LABEL_23;
      v43 = *((_WORD *)v32 + 2);
      v87 = v43;
      if ( (HIBYTE(v43) & 0xF) != 6 )
        goto LABEL_23;
      v44 = (unsigned __int8)v43;
      v45 = (_DWORD)v30 - v28;
      if ( (v43 & 0x1000) != 0 )
      {
        v46 = v27[1] - (unsigned __int8)v43;
        v89 = v46;
        if ( v45 - v46 < (unsigned int)(unsigned __int8)v43 )
        {
          v83 = 1;
        }
        else
        {
LABEL_97:
          for ( j = 1; ; ++j )
          {
            i = j;
            if ( j >= v42 )
              goto LABEL_23;
            v48 = *(_WORD *)&v32[2 * j + 4];
            v87 = v48;
            if ( (HIBYTE(v48) & 0xF) != 6 )
              goto LABEL_23;
            v49 = HIBYTE(v48) >> 4 << 8;
            v50 = (unsigned __int8)v48 + v49 == 0;
            v51 = (unsigned __int8)v48 + v49;
            v89 = v51;
            if ( v50 )
              goto LABEL_23;
            v46 = v27[1] - v51;
            v89 = v46;
            if ( v45 - v46 < v44 )
              break;
          }
          v83 = 1;
        }
        sub_1800A4C00(DWORD2(v103), v46, v45 - v46, (_DWORD)v27, (__int64)v113, v31, (__int64)&v86, (__int64)&v85);
        if ( v77 != (_BYTE *)-64LL )
          v78 = 0;
        v8 = v115;
        goto LABEL_45;
      }
      v89 = 0;
      goto LABEL_97;
    }
    v15 = v30;
    v84 = v30;
    v16 = 0LL;
    v101 = 0;
    v17 = *v30;
    if ( *v30 == 72 )
    {
      if ( v30[1] == -125 && v30[2] == -60 )
      {
        v15 = v30 + 4;
        goto LABEL_119;
      }
      if ( v30[1] == -127 && v30[2] == -60 )
        goto LABEL_158;
    }
    if ( (v17 & 0xFE) == 0x48 && v30[1] == -115 )
    {
      v55 = v30[2];
      v56 = v55 & 7;
      v16 = v56 | (8 * (v17 & 1u));
      v101 = v56 | (8 * (v17 & 1));
      if ( v101 )
      {
        if ( (_DWORD)v16 == (v32[3] & 0xF) )
        {
          v69 = v55 & 0xF8;
          if ( v69 == 96 )
          {
            v15 = v30 + 4;
          }
          else
          {
            if ( v69 != -96 )
              goto LABEL_13;
LABEL_158:
            v15 = v30 + 7;
          }
LABEL_119:
          v84 = v15;
        }
      }
    }
LABEL_13:
    while ( (*v15 & 0xF8) == 0x58 )
    {
      ++v15;
LABEL_146:
      v84 = v15;
    }
    if ( (*v15 & 0xF0) == 0x40 && (v15[1] & 0xF8) == 0x58 )
    {
      v15 += 2;
      goto LABEL_146;
    }
    if ( *v15 == 0xF2 )
      v84 = ++v15;
    v18 = *v15;
    if ( (unsigned __int8)(*v15 + 62) <= 1u || v18 == -13 && v15[1] == 0xC3 )
    {
LABEL_123:
      v83 = 1;
      goto LABEL_124;
    }
    if ( ((v18 + 23) & 0xFD) != 0 )
    {
      if ( v18 == -1 && v15[1] == 37 )
        goto LABEL_123;
      if ( (v18 & 0xF8) == 0x48 && v15[1] == 0xFF && (v15[2] & 0x38) == 0x20 )
      {
        LODWORD(v31) = 1;
        v83 = 1;
      }
    }
    else
    {
      v105 = &v15[-v28];
      if ( v18 == -21 )
        v39 = (char)v15[1] + 2;
      else
        v39 = *(_DWORD *)(v15 + 1) + 5;
      v40 = (unsigned __int64)&v15[v39 - v28];
      v105 = (_BYTE *)v40;
      v41 = *v27;
      if ( v40 < v41 || v40 >= v27[1] )
      {
        v68 = (_DWORD *)sub_18008DF80(v27, v28, &v15[v39]);
        if ( !v68 || v40 == *v68 )
        {
          v8 = v115;
          v30 = v95;
          goto LABEL_123;
        }
        v8 = v115;
        v30 = v95;
      }
      else if ( v40 == v41 && (*v32 & 0x20) == 0 )
      {
        LODWORD(v31) = 1;
        v83 = 1;
      }
    }
    if ( !(_DWORD)v31 )
    {
LABEL_23:
      v93 = 0;
      while ( 1 )
      {
        v19 = 0LL;
        v79 = 0;
        v20 = 0;
        v82 = 0;
        v21 = (_DWORD)v95 - *v27 - DWORD2(v103);
        v22 = (_BYTE *)(*((_QWORD *)&v103 + 1) + v27[2]);
        while ( (unsigned int)v19 < (unsigned __int8)v22[2] )
        {
          v23 = (unsigned __int8)v22[2 * v19 + 5] >> 4;
          v24 = &v22[2 * v19];
          if ( v21 >= (unsigned __int8)v24[4] )
          {
            if ( (v22[2 * v19 + 5] & 0xF) == 0 )
            {
              if ( &v86 && ((unsigned __int64)v8 < v86 || v8 > v85 - 8) )
                goto LABEL_202;
              v114[v23] = *(_QWORD *)v8;
              v8 = v115 + 8;
              goto LABEL_30;
            }
            if ( (v22[2 * v19 + 5] & 0xF) == 4 )
            {
              v19 = (unsigned int)(v19 + 1);
              v79 = v19;
              v81 = 8 * *(unsigned __int16 *)&v22[2 * v19 + 4];
              v25 = &v14[v81];
              if ( &v86 && ((unsigned __int64)v25 < v86 || v25 > v85 - 8) )
                goto LABEL_202;
              v114[v23] = *(_QWORD *)v25;
              v8 = v115;
            }
            else
            {
              switch ( v22[2 * v19 + 5] & 0xF )
              {
                case 1:
                  v19 = (unsigned int)(v19 + 1);
                  v79 = v19;
                  v35 = *(unsigned __int16 *)&v22[2 * v19 + 4];
                  v81 = v35;
                  if ( (_DWORD)v23 )
                  {
                    v19 = (unsigned int)(v19 + 1);
                    v79 = v19;
                    v36 = (*(unsigned __int16 *)&v22[2 * v19 + 4] << 16) + v35;
                  }
                  else
                  {
                    v36 = 8 * v35;
                  }
                  v81 = v36;
                  v8 += v36;
                  break;
                case 2:
                  v8 += (unsigned int)(8 * v23 + 8);
                  break;
                case 3:
                  v115 = (char *)v114[v22[3] & 0xF];
                  v8 = &v115[-(v22[3] & 0xF0)];
                  break;
                case 5:
                  v19 = (unsigned int)(v19 + 2);
                  v79 = v19;
                  v81 = *(unsigned __int16 *)&v22[2 * (unsigned int)(v19 - 1) + 4];
                  v81 += *(unsigned __int16 *)&v22[2 * v19 + 4] << 16;
                  v73 = &v14[v81];
                  if ( v77 != (_BYTE *)-104LL && ((unsigned __int64)v73 < v86 || v73 > v85 - 8) )
                    goto LABEL_202;
                  v114[v23] = *(_QWORD *)v73;
                  v8 = v115;
                  goto LABEL_31;
                case 6:
                  LODWORD(v19) = v19 + 1;
                  v79 = v19;
                  goto LABEL_31;
                case 7:
                  LODWORD(v19) = v19 + 2;
                  v79 = v19;
                  goto LABEL_31;
                case 8:
                  v19 = (unsigned int)(v19 + 1);
                  v79 = v19;
                  v81 = 16 * *(unsigned __int16 *)&v22[2 * v19 + 4];
                  v53 = &v14[v81];
                  if ( v77 != (_BYTE *)-104LL && ((unsigned __int64)v53 < v86 || v53 > v85 - 16) )
                    goto LABEL_202;
                  v54 = 2LL * (unsigned int)v23;
                  v117[v54] = *(_QWORD *)v53;
                  v117[v54 + 1] = *((_QWORD *)v53 + 1);
                  v8 = v115;
                  goto LABEL_31;
                case 9:
                  v19 = (unsigned int)(v19 + 2);
                  v79 = v19;
                  v81 = *(unsigned __int16 *)&v22[2 * (unsigned int)(v19 - 1) + 4];
                  v81 += *(unsigned __int16 *)&v22[2 * v19 + 4] << 16;
                  v74 = &v14[v81];
                  if ( v77 != (_BYTE *)-104LL && ((unsigned __int64)v74 < v86 || v74 > v85 - 16) )
                    goto LABEL_202;
                  v75 = 2LL * (unsigned int)v23;
                  v117[v75] = *(_QWORD *)v74;
                  v117[v75 + 1] = *((_QWORD *)v74 + 1);
                  v8 = v115;
                  goto LABEL_31;
                case 0xA:
                  v20 = 1;
                  v82 = 1;
                  v62 = v8;
                  v106 = v8;
                  v63 = (char **)(v8 + 24);
                  v107 = v8 + 24;
                  if ( (_DWORD)v23 )
                  {
                    v62 = v8 + 8;
                    v106 = v8 + 8;
                    v63 = (char **)(v8 + 32);
                    v107 = v8 + 32;
                  }
                  if ( &v86 )
                  {
                    if ( (unsigned __int64)v62 < v86 )
                      goto LABEL_202;
                    v64 = (char **)v85;
                    if ( v62 > v85 - 8 )
                      goto LABEL_202;
                  }
                  else
                  {
                    v64 = (char **)v85;
                  }
                  if ( &v86 && ((unsigned __int64)v63 < v86 || v63 > v64 - 1) )
                    goto LABEL_202;
                  BaseAddress = *(PVOID *)v62;
                  v8 = *v63;
                  break;
                default:
                  RtlRaiseStatus(-1073741569);
              }
LABEL_30:
              v115 = v8;
            }
LABEL_31:
            v19 = (unsigned int)(v19 + 1);
            goto LABEL_32;
          }
          v19 = (unsigned int)sub_180089A50(*((unsigned __int16 *)v24 + 2), v24, v23, v114) + (unsigned int)v19;
          v8 = v115;
LABEL_32:
          v79 = v19;
        }
        if ( (*v22 & 0x20) == 0 )
        {
          if ( v20 )
            goto LABEL_42;
          if ( !&v86 )
            goto LABEL_41;
          if ( (unsigned __int64)v8 >= v86 )
          {
            if ( v8 > v85 - 8 )
            {
              VirtualMemory = -1073741784;
              goto LABEL_46;
            }
LABEL_41:
            BaseAddress = *(PVOID *)v8;
            v8 += 8;
            v115 = v8;
LABEL_42:
            if ( &v78 )
              v78 = v20;
            v108 = v27;
LABEL_45:
            VirtualMemory = 0;
            goto LABEL_46;
          }
LABEL_202:
          VirtualMemory = -1073741784;
          goto LABEL_46;
        }
        v52 = (unsigned __int8)v22[2];
        v79 = v52;
        if ( (v52 & 1) != 0 )
          v79 = ++v52;
        v27 = (unsigned int *)&v22[2 * v52 + 4];
        if ( (unsigned int)++v93 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
    }
LABEL_124:
    v84 = v30;
    if ( (*v30 & 0xF8) != 0x48 )
      goto LABEL_128;
    v57 = v30[1];
    if ( v57 == -125 )
    {
      v8 += v30[3];
      v30 += 4;
      goto LABEL_127;
    }
    if ( v57 == -127 )
    {
      v65 = (unsigned __int8)v30[4] | (*(unsigned __int16 *)(v30 + 5) << 8);
      v66 = (unsigned __int8)v30[3];
      goto LABEL_161;
    }
    if ( v57 != -115 )
      goto LABEL_128;
    v72 = v30[2] & 0xF8;
    if ( v72 == 96 )
    {
      v115 = (char *)v114[v16];
      v8 = &v115[v30[3]];
      v30 += 4;
      goto LABEL_127;
    }
    if ( v72 == -96 )
    {
      v65 = (unsigned __int8)v30[4] | (*(unsigned __int16 *)(v30 + 5) << 8);
      v66 = (unsigned __int8)v30[3];
      v8 = (char *)v114[v16];
      v115 = v8;
LABEL_161:
      v8 += v66 | (v65 << 8);
      v30 += 7;
LABEL_127:
      v84 = v30;
      v115 = v8;
      goto LABEL_128;
    }
    while ( 1 )
    {
LABEL_128:
      v58 = *v30;
      if ( (*v30 & 0xF8) == 0x58 )
      {
        if ( &v86 && ((unsigned __int64)v8 < v86 || v8 > v85 - 8) )
          goto LABEL_202;
        v114[v58 & 7] = *(_QWORD *)v8;
        v8 = v115 + 8;
        ++v30;
      }
      else
      {
        if ( (v58 & 0xF0) != 0x40 || (v67 = v30[1], (v67 & 0xF8) != 0x58) )
        {
          if ( !&v86 )
          {
LABEL_131:
            BaseAddress = *(PVOID *)v8;
            v8 += 8;
            v115 = v8;
            if ( v77 != (_BYTE *)-64LL )
              v78 = 0;
            goto LABEL_45;
          }
          if ( (unsigned __int64)v8 < v86 )
            goto LABEL_202;
          if ( v8 <= v85 - 8 )
            goto LABEL_131;
          VirtualMemory = -1073741784;
LABEL_46:
          v88 = VirtualMemory;
          v91 = VirtualMemory;
          v4 = v96;
          v5 = v97;
          v6 = v109;
LABEL_47:
          if ( VirtualMemory < 0 || !BaseAddress )
            return v7;
          if ( v7 >= v4 )
          {
            *(_QWORD *)(v6 + 8LL * (v7 - v4)) = BaseAddress;
            v8 = v115;
          }
          v94 = ++v7;
          if ( v7 >= v5 )
            return v7;
          goto LABEL_52;
        }
        if ( &v86 )
        {
          if ( (unsigned __int64)v8 < v86 )
            goto LABEL_202;
          if ( v8 > v85 - 8 )
          {
            VirtualMemory = -1073741784;
            goto LABEL_46;
          }
        }
        v114[v67 & 7 | (8 * (v58 & 1u))] = *(_QWORD *)v8;
        v8 = v115 + 8;
        v30 += 2;
      }
      v84 = v30;
      v115 = v8;
    }
  }
  v80 = 0;
  return v7;
}
