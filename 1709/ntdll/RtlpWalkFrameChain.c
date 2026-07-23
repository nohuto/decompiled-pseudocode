/*
 * XREFs of RtlpWalkFrameChain @ 0x180024BB0
 * Callers:
 *     RtlWalkFrameChain @ 0x180024B40 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpGetStackLimits @ 0x180024B7C (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180025B60 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpSameFunction @ 0x18007C774 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088B08 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F9C0 (RtlpUnwindEpilogue.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     RtlpCaptureContext @ 0x1800A4010 (RtlpCaptureContext.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  char *v9; // r10
  _BYTE *v10; // rdx
  unsigned int v11; // ecx
  unsigned __int8 *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  char *v15; // r15
  int v16; // edi
  _BYTE *v17; // rdx
  int v18; // esi
  char v19; // cl
  char v20; // cl
  __int64 v21; // rbx
  char v22; // r14
  unsigned int v23; // esi
  _BYTE *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // r8
  _BYTE *v27; // rdx
  char *v28; // rcx
  NTSTATUS VirtualMemory; // eax
  unsigned int *v30; // r13
  __int64 v31; // r9
  _BYTE *v32; // rcx
  char *v33; // r12
  int v34; // ebx
  unsigned __int8 *v35; // r14
  __int64 v36; // r8
  unsigned int v37; // esi
  unsigned int v38; // edx
  unsigned int v39; // edx
  int v40; // eax
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  unsigned __int8 v43; // bl
  __int16 v44; // ax
  unsigned int v45; // esi
  int v46; // r11d
  int v47; // edx
  unsigned int j; // r8d
  __int16 v49; // ax
  int v50; // edx
  bool v51; // zf
  int v52; // edx
  char v53; // r8
  char *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r9
  _BYTE *v58; // r9
  __int64 v59; // rdx
  _DWORD *v60; // rax
  char v61; // al
  char v62; // cl
  char *v63; // rdx
  char *v64; // rcx
  int v65; // ecx
  char v66; // r8
  __int64 v67; // rdx
  char v68; // r8
  unsigned int v69; // r15d
  __int64 v70; // rcx
  char v71; // al
  char *v72; // rcx
  char *v73; // r9
  char v75; // [rsp+40h] [rbp-618h]
  unsigned __int64 v76; // [rsp+48h] [rbp-610h] BYREF
  unsigned int v77; // [rsp+50h] [rbp-608h]
  char v78; // [rsp+54h] [rbp-604h]
  int v79; // [rsp+58h] [rbp-600h]
  _BYTE *v80; // [rsp+60h] [rbp-5F8h]
  char *v81; // [rsp+68h] [rbp-5F0h] BYREF
  __int16 v82; // [rsp+70h] [rbp-5E8h]
  unsigned int i; // [rsp+74h] [rbp-5E4h]
  NTSTATUS v84; // [rsp+78h] [rbp-5E0h]
  int v85; // [rsp+7Ch] [rbp-5DCh]
  int v86; // [rsp+80h] [rbp-5D8h]
  int v87; // [rsp+84h] [rbp-5D4h]
  int v88; // [rsp+88h] [rbp-5D0h]
  int v89; // [rsp+8Ch] [rbp-5CCh]
  __int128 v90; // [rsp+90h] [rbp-5C8h]
  __int64 v91; // [rsp+A0h] [rbp-5B8h]
  unsigned int v92; // [rsp+A8h] [rbp-5B0h]
  int v93; // [rsp+ACh] [rbp-5ACh]
  unsigned int v94; // [rsp+B0h] [rbp-5A8h]
  int v95; // [rsp+B4h] [rbp-5A4h]
  char *v96; // [rsp+B8h] [rbp-5A0h]
  unsigned int v97; // [rsp+C0h] [rbp-598h]
  _BYTE *v98; // [rsp+C8h] [rbp-590h]
  char *v99; // [rsp+D0h] [rbp-588h]
  char *v100; // [rsp+D8h] [rbp-580h]
  unsigned int *v101; // [rsp+E0h] [rbp-578h]
  __int64 v102; // [rsp+E8h] [rbp-570h]
  unsigned int *v103; // [rsp+F8h] [rbp-560h]
  _BYTE *v104; // [rsp+100h] [rbp-558h]
  _BYTE MemoryInformation[56]; // [rsp+118h] [rbp-540h] BYREF
  _BYTE v106[120]; // [rsp+150h] [rbp-508h] BYREF
  _QWORD v107[4]; // [rsp+1C8h] [rbp-490h] BYREF
  char *v108; // [rsp+1E8h] [rbp-470h]
  PVOID BaseAddress; // [rsp+248h] [rbp-410h]
  _QWORD v110[102]; // [rsp+2F0h] [rbp-368h]

  v4 = a4;
  v97 = a4;
  v5 = a2;
  v92 = a2;
  v6 = a1;
  v102 = a1;
  if ( !RtlpGetStackLimits(&v76, (void **)&v81) )
    return 0LL;
  RtlpCaptureContext(v106);
  v75 = 0;
  v7 = 0;
  v87 = 0;
  v90 = xmmword_18016F4D0;
  v91 = qword_18016F4E0;
  v8 = v76;
  v9 = v108;
LABEL_51:
  if ( ((unsigned __int8)v9 & 7) != 0 )
    return v7;
  if ( (unsigned __int64)v9 < v8 )
    return v7;
  if ( v9 >= v81 )
    return v7;
  v30 = (unsigned int *)RtlpLookupFunctionEntryForStackWalks(BaseAddress);
  v103 = v30;
  if ( !v30 )
    return v7;
  VirtualMemory = 0;
  v86 = 0;
  v31 = *((_QWORD *)&v90 + 1);
  v32 = (_BYTE *)(*((_QWORD *)&v90 + 1) + v30[2]);
  v104 = v32;
  if ( v32[2] || v32[1] || (*v32 & 0x20) != 0 )
  {
LABEL_56:
    if ( VirtualMemory < 0 )
    {
      v9 = v108;
      v8 = v76;
      goto LABEL_46;
    }
    v33 = (char *)BaseAddress;
    v101 = v30;
    v34 = 0;
    v88 = 0;
    v35 = (unsigned __int8 *)(v31 + v30[2]);
    v36 = *v35;
    v37 = *v35 & 7;
    if ( v75 )
    {
      if ( v37 >= 2 || (v10 = (_BYTE *)(v31 + v30[2]), v11 = 0, v94 = 0, v12 = v35 + 2, v35[2]) )
      {
LABEL_5:
        v13 = (_DWORD)BaseAddress - DWORD2(v90) - *v30;
        v14 = v35[3];
        if ( (v14 & 0xF) == 0 )
        {
          v9 = v108;
          v15 = v108;
          v96 = v108;
          goto LABEL_7;
        }
        if ( v13 >= v35[1] || (v36 & 0x20) != 0 )
        {
          v15 = (char *)(v107[v14 & 0xF] - ((unsigned __int8)v14 & 0xF0));
          v9 = v108;
        }
        else
        {
          v69 = 0;
          for ( i = 0; v69 < v35[2]; i = v69 )
          {
            v70 = *(unsigned __int16 *)&v35[2 * v69 + 4];
            v82 = v70;
            if ( (BYTE1(v70) & 0xF) == 3 )
              break;
            v69 += RtlpUnwindOpSlots(v70, v14, v36, v31);
          }
          v9 = v108;
          v31 = *((_QWORD *)&v90 + 1);
          if ( v13 < v35[2 * v69 + 4] )
          {
            v15 = v108;
            v96 = v108;
LABEL_7:
            if ( v34 )
              goto LABEL_21;
            v16 = 0;
            v79 = 0;
            if ( v37 >= 2 )
            {
              v43 = v35[2];
              if ( !v43 )
                goto LABEL_21;
              v44 = *((_WORD *)v35 + 2);
              v82 = v44;
              if ( (HIBYTE(v44) & 0xF) != 6 )
                goto LABEL_21;
              v45 = (unsigned __int8)v44;
              v46 = (_DWORD)v33 - v31;
              if ( (v44 & 0x1000) != 0 )
              {
                v47 = v30[1] - (unsigned __int8)v44;
                v85 = v47;
                if ( v46 - v47 < (unsigned int)(unsigned __int8)v44 )
                {
                  v79 = 1;
                }
                else
                {
LABEL_90:
                  for ( j = 1; ; ++j )
                  {
                    i = j;
                    if ( j >= v43 )
                      goto LABEL_21;
                    v49 = *(_WORD *)&v35[2 * j + 4];
                    v82 = v49;
                    if ( (HIBYTE(v49) & 0xF) != 6 )
                      goto LABEL_21;
                    v50 = HIBYTE(v49) >> 4 << 8;
                    v51 = (unsigned __int8)v49 + v50 == 0;
                    v52 = (unsigned __int8)v49 + v50;
                    v85 = v52;
                    if ( v51 )
                      goto LABEL_21;
                    v47 = v30[1] - v52;
                    v85 = v47;
                    if ( v46 - v47 < v45 )
                      break;
                  }
                  v79 = 1;
                }
                RtlpUnwindEpilogue(
                  DWORD2(v90),
                  v47,
                  v46 - v47,
                  (_DWORD)v30,
                  (__int64)v106,
                  0LL,
                  (__int64)&v76,
                  (__int64)&v81);
                v75 = 0;
                v9 = v108;
                goto LABEL_44;
              }
              v85 = 0;
              goto LABEL_90;
            }
            v17 = v33;
            v80 = v33;
            v18 = 0;
            v95 = 0;
            v19 = *v33;
            if ( *v33 == 72 )
            {
              if ( v33[1] == -125 && v33[2] == -60 )
              {
                v17 = v33 + 4;
                goto LABEL_121;
              }
              if ( v33[1] == -127 && v33[2] == -60 )
                goto LABEL_153;
            }
            if ( (v19 & 0xFE) != 0x48
              || v33[1] != -115
              || (v53 = v33[2], v18 = v53 & 7 | (8 * (v19 & 1)), (v95 = v18) == 0)
              || v18 != (v35[3] & 0xF) )
            {
              while ( 1 )
              {
LABEL_11:
                if ( (*v17 & 0xF8) == 0x58 )
                {
                  ++v17;
                }
                else
                {
                  if ( (*v17 & 0xF0) != 0x40 || (v17[1] & 0xF8) != 0x58 )
                  {
                    if ( *v17 == 0xF2 )
                      v80 = ++v17;
                    v20 = *v17;
                    if ( (unsigned __int8)(*v17 + 62) <= 1u || v20 == -13 && v17[1] == 0xC3 )
                    {
LABEL_125:
                      v79 = 1;
                      goto LABEL_126;
                    }
                    if ( ((v20 + 23) & 0xFD) != 0 )
                    {
                      if ( v20 == -1 && v17[1] == 37 )
                        goto LABEL_125;
                      if ( (v20 & 0xF8) == 0x48 && v17[1] == 0xFF && (v17[2] & 0x38) == 0x20 )
                      {
                        v16 = 1;
                        v79 = 1;
                      }
                    }
                    else
                    {
                      v98 = &v17[-v31];
                      if ( v20 == -21 )
                        v40 = (char)v17[1] + 2;
                      else
                        v40 = *(_DWORD *)(v17 + 1) + 5;
                      v41 = (unsigned __int64)&v17[v40 - v31];
                      v98 = (_BYTE *)v41;
                      v42 = *v30;
                      if ( v41 < v42 || v41 >= v30[1] )
                      {
                        v60 = (_DWORD *)RtlpSameFunction(v30, v31, &v17[v40]);
                        if ( !v60 || v41 == *v60 )
                        {
                          v9 = v108;
                          goto LABEL_125;
                        }
                        v9 = v108;
                      }
                      else if ( v41 == v42 && (*v35 & 0x20) == 0 )
                      {
                        v16 = 1;
                        v79 = 1;
                      }
                    }
                    if ( !v16 )
                    {
LABEL_21:
                      v89 = 0;
                      while ( 1 )
                      {
                        LODWORD(v21) = 0;
                        v22 = 0;
                        v78 = 0;
                        v23 = (_DWORD)v33 - *v30 - DWORD2(v90);
                        v24 = (_BYTE *)(*((_QWORD *)&v90 + 1) + v30[2]);
                        while ( 1 )
                        {
                          v25 = (unsigned __int8)v24[2];
                          if ( (unsigned int)v21 >= v25 )
                            break;
                          v26 = (unsigned __int8)v24[2 * (unsigned int)v21 + 5] >> 4;
                          v27 = &v24[2 * (unsigned int)v21];
                          if ( v23 < (unsigned __int8)v27[4] )
                          {
                            LODWORD(v21) = RtlpUnwindOpSlots(*((unsigned __int16 *)v27 + 2), v27, v26, v107) + v21;
                            v9 = v108;
                          }
                          else
                          {
                            if ( (v24[2 * (unsigned int)v21 + 5] & 0xF) != 0 )
                            {
                              if ( (v24[2 * (unsigned int)v21 + 5] & 0xF) != 4 )
                              {
                                switch ( v24[2 * (unsigned int)v21 + 5] & 0xF )
                                {
                                  case 1:
                                    v21 = (unsigned int)(v21 + 1);
                                    v38 = *(unsigned __int16 *)&v24[2 * v21 + 4];
                                    v77 = v38;
                                    if ( (_DWORD)v26 )
                                    {
                                      v21 = (unsigned int)(v21 + 1);
                                      v39 = (*(unsigned __int16 *)&v24[2 * v21 + 4] << 16) + v38;
                                    }
                                    else
                                    {
                                      v39 = 8 * v38;
                                    }
                                    v77 = v39;
                                    v9 += v39;
                                    goto LABEL_28;
                                  case 2:
                                    v9 += (unsigned int)(8 * v26 + 8);
                                    goto LABEL_28;
                                  case 3:
                                    v108 = (char *)v107[v24[3] & 0xF];
                                    v9 = &v108[-(v24[3] & 0xF0)];
                                    goto LABEL_28;
                                  case 5:
                                    v21 = (unsigned int)(v21 + 2);
                                    v77 = *(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4];
                                    v77 += *(unsigned __int16 *)&v24[2 * v21 + 4] << 16;
                                    v72 = &v15[v77];
                                    if ( (unsigned __int64)v72 < v76 || v72 > v81 - 8 )
                                      goto LABEL_213;
                                    v107[v26] = *(_QWORD *)v72;
                                    v9 = v108;
                                    goto LABEL_29;
                                  case 6:
                                    LODWORD(v21) = v21 + 1;
                                    goto LABEL_29;
                                  case 7:
                                    LODWORD(v21) = v21 + 2;
                                    goto LABEL_29;
                                  case 8:
                                    v21 = (unsigned int)(v21 + 1);
                                    v77 = 16 * *(unsigned __int16 *)&v24[2 * v21 + 4];
                                    v54 = &v15[v77];
                                    if ( (unsigned __int64)v54 < v76 || v54 > v81 - 16 )
                                      goto LABEL_213;
                                    v55 = 2LL * (unsigned int)v26;
                                    v110[2 * (unsigned int)v26] = *(_QWORD *)v54;
                                    v56 = *((_QWORD *)v54 + 1);
                                    goto LABEL_102;
                                  case 9:
                                    v21 = (unsigned int)(v21 + 2);
                                    v77 = *(unsigned __int16 *)&v24[2 * (unsigned int)(v21 - 1) + 4];
                                    v77 += *(unsigned __int16 *)&v24[2 * v21 + 4] << 16;
                                    v73 = &v15[v77];
                                    if ( (unsigned __int64)v73 < v76 || v73 > v81 - 16 )
                                      goto LABEL_213;
                                    v55 = 2LL * (unsigned int)v26;
                                    v110[2 * (unsigned int)v26] = *(_QWORD *)v73;
                                    v56 = *((_QWORD *)v73 + 1);
LABEL_102:
                                    v110[v55 + 1] = v56;
                                    v9 = v108;
                                    goto LABEL_29;
                                  case 0xA:
                                    v22 = 1;
                                    v78 = 1;
                                    v63 = v9;
                                    v99 = v9;
                                    v64 = v9 + 24;
                                    v100 = v9 + 24;
                                    if ( (_DWORD)v26 )
                                    {
                                      v63 = v9 + 8;
                                      v99 = v9 + 8;
                                      v64 = v9 + 32;
                                      v100 = v9 + 32;
                                    }
                                    v8 = v76;
                                    if ( (unsigned __int64)v63 < v76
                                      || v63 > v81 - 8
                                      || (unsigned __int64)v64 < v76
                                      || v64 > v81 - 8 )
                                    {
                                      goto LABEL_214;
                                    }
                                    BaseAddress = *(PVOID *)v63;
                                    v9 = *(char **)v64;
                                    goto LABEL_28;
                                  default:
                                    RtlRaiseStatus(-1073741569);
                                }
                              }
                              v21 = (unsigned int)(v21 + 1);
                              v77 = 8 * *(unsigned __int16 *)&v24[2 * v21 + 4];
                              v28 = &v15[v77];
                              if ( (unsigned __int64)v28 < v76 || v28 > v81 - 8 )
                              {
LABEL_213:
                                v8 = v76;
LABEL_214:
                                VirtualMemory = -1073741784;
                                goto LABEL_45;
                              }
                              v107[v26] = *(_QWORD *)v28;
                              v9 = v108;
                            }
                            else
                            {
                              if ( (unsigned __int64)v9 < v76 || v9 > v81 - 8 )
                                goto LABEL_213;
                              v107[v26] = *(_QWORD *)v9;
                              v9 = v108 + 8;
LABEL_28:
                              v108 = v9;
                            }
LABEL_29:
                            LODWORD(v21) = v21 + 1;
                          }
                        }
                        if ( (*v24 & 0x20) == 0 )
                          break;
                        if ( (v25 & 1) != 0 )
                          ++v25;
                        v30 = (unsigned int *)&v24[2 * v25 + 4];
                        if ( (unsigned int)++v89 > 0x20 )
                          RtlRaiseStatus(-1073741569);
                      }
                      if ( !v22 )
                      {
                        v8 = v76;
                        if ( (unsigned __int64)v9 < v76 || v9 > v81 - 8 )
                          goto LABEL_214;
                        BaseAddress = *(PVOID *)v9;
                        v9 += 8;
                        v108 = v9;
                      }
                      v75 = v22;
                      v101 = v30;
LABEL_44:
                      VirtualMemory = 0;
                      v8 = v76;
                      goto LABEL_45;
                    }
LABEL_126:
                    v80 = v33;
                    if ( (*v33 & 0xF8) != 0x48 )
                      goto LABEL_130;
                    v61 = v33[1];
                    if ( v61 == -125 )
                    {
                      v9 += v33[3];
                      v33 += 4;
LABEL_129:
                      v80 = v33;
                      v108 = v9;
                      goto LABEL_130;
                    }
                    if ( v61 == -127 )
                    {
                      v65 = (unsigned __int8)v33[3] | (((unsigned __int8)v33[4] | (*(unsigned __int16 *)(v33 + 5) << 8)) << 8);
LABEL_156:
                      v9 += v65;
                      v33 += 7;
                      goto LABEL_129;
                    }
                    if ( v61 != -115 )
                      goto LABEL_130;
                    v71 = v33[2] & 0xF8;
                    if ( v71 == 96 )
                    {
                      v108 = (char *)v107[v18];
                      v9 = &v108[v33[3]];
                      v33 += 4;
                      goto LABEL_129;
                    }
                    if ( v71 == -96 )
                    {
                      v65 = (unsigned __int8)v33[3] | (((unsigned __int8)v33[4] | (*(unsigned __int16 *)(v33 + 5) << 8)) << 8);
                      v9 = (char *)v107[v18];
                      v108 = v9;
                      goto LABEL_156;
                    }
LABEL_130:
                    while ( 2 )
                    {
                      v62 = *v33;
                      if ( (*v33 & 0xF8) == 0x58 )
                      {
                        v8 = v76;
                        if ( (unsigned __int64)v9 < v76 || v9 > v81 - 8 )
                          goto LABEL_193;
                        v107[v62 & 7] = *(_QWORD *)v9;
                        v9 = v108 + 8;
                        ++v33;
LABEL_145:
                        v80 = v33;
                        v108 = v9;
                        continue;
                      }
                      break;
                    }
                    if ( (v62 & 0xF0) == 0x40 )
                    {
                      v66 = v33[1];
                      if ( (v66 & 0xF8) == 0x58 )
                      {
                        v67 = v66 & 7 | (8 * (v62 & 1u));
                        v8 = v76;
                        if ( (unsigned __int64)v9 < v76 )
                          goto LABEL_193;
                        if ( v9 > v81 - 8 )
                        {
                          VirtualMemory = -1073741784;
                          goto LABEL_45;
                        }
                        v107[v67] = *(_QWORD *)v9;
                        v9 = v108 + 8;
                        v33 += 2;
                        goto LABEL_145;
                      }
                    }
                    v8 = v76;
                    if ( (unsigned __int64)v9 < v76 )
                    {
LABEL_193:
                      VirtualMemory = -1073741784;
                      goto LABEL_45;
                    }
                    if ( v9 <= v81 - 8 )
                    {
                      BaseAddress = *(PVOID *)v9;
                      v9 += 8;
                      v108 = v9;
                      v75 = 0;
                      goto LABEL_44;
                    }
                    VirtualMemory = -1073741784;
LABEL_45:
                    v84 = VirtualMemory;
                    v86 = VirtualMemory;
                    v7 = v87;
                    v4 = v97;
                    v5 = v92;
                    v6 = v102;
LABEL_46:
                    if ( VirtualMemory < 0 || !BaseAddress )
                      return v7;
                    if ( v7 >= v4 )
                    {
                      *(_QWORD *)(v6 + 8LL * (v7 - v4)) = BaseAddress;
                      v9 = v108;
                    }
                    v87 = ++v7;
                    if ( v7 >= v5 )
                      return v7;
                    goto LABEL_51;
                  }
                  v17 += 2;
                }
                v80 = v17;
              }
            }
            v68 = v53 & 0xF8;
            if ( v68 == 96 )
            {
              v17 = v33 + 4;
            }
            else
            {
              if ( v68 != -96 )
                goto LABEL_11;
LABEL_153:
              v17 = v33 + 7;
            }
LABEL_121:
            v80 = v17;
            goto LABEL_11;
          }
          v15 = (char *)(v107[v35[3] & 0xF] - (v35[3] & 0xF0));
        }
        v96 = v15;
        goto LABEL_7;
      }
      while ( (*v10 & 0x20) != 0 )
      {
        v57 = *v12;
        v93 = v57;
        if ( (v57 & 1) != 0 )
        {
          v57 = (unsigned int)(v57 + 1);
          v93 = v57;
        }
        v58 = &v10[2 * v57];
        v94 = ++v11;
        if ( v11 > 0x20 )
          RtlRaiseStatus(-1073741569);
        v59 = *((unsigned int *)v58 + 3);
        v31 = *((_QWORD *)&v90 + 1);
        v10 = (_BYTE *)(*((_QWORD *)&v90 + 1) + v59);
        v12 = v10 + 2;
        if ( v10[2] )
          goto LABEL_5;
      }
    }
    v34 = 1;
    v88 = 1;
    goto LABEL_5;
  }
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  v86 = VirtualMemory;
  if ( VirtualMemory < 0 || (MemoryInformation[36] & 0x40) == 0 )
  {
    v31 = *((_QWORD *)&v90 + 1);
    goto LABEL_56;
  }
  v86 = -1073741823;
  return v7;
}
