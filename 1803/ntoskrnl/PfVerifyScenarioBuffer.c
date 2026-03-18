/*
 * XREFs of PfVerifyScenarioBuffer @ 0x140528280
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCbLengthW @ 0x14007A3C8 (StringCbLengthW.c)
 *     StringCchPrintfW @ 0x1400CC590 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfMetadataRecordIsEqual @ 0x14048FDCC (PfMetadataRecordIsEqual.c)
 *     PfVerifyScenarioId @ 0x140529254 (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned __int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r12
  unsigned int *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rbp
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  char *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // ebp
  unsigned int v25; // r11d
  int v26; // r10d
  int *v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r14
  unsigned int v33; // r8d
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // r10d
  int v37; // r15d
  int v38; // edi
  int v39; // edx
  __int64 v40; // r11
  __int64 v41; // rbp
  int *v42; // r9
  int v43; // esi
  int v44; // eax
  int v46; // edx
  unsigned __int64 v47; // r9
  unsigned int v48; // r10d
  unsigned int v49; // r14d
  unsigned int v50; // r15d
  unsigned __int64 v51; // r11
  unsigned int *v52; // rsi
  unsigned int v53; // r9d
  int v54; // ebp
  unsigned __int64 v55; // rdi
  unsigned __int16 *v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // r9
  char *v59; // rdx
  int v60; // eax
  int v61; // ecx
  _DWORD *v62; // rcx
  unsigned __int64 v63; // r11
  __int64 v64; // r10
  char *v65; // rdx
  unsigned int v66; // edx
  unsigned int v67; // r8d
  int v68; // r9d
  _DWORD *v69; // rcx
  __int64 v70; // r11
  int v71; // eax
  int v72; // eax
  unsigned int v73; // r10d
  int v74; // eax
  _DWORD *v75; // rcx
  __int64 v76; // rdx
  unsigned __int16 *v77; // rcx
  unsigned int v78; // r9d
  unsigned __int16 v79; // dx
  unsigned __int16 *v80; // r8
  __int64 v81; // rax
  int v82; // r9d
  unsigned int v83; // r10d
  __int64 v84; // [rsp+20h] [rbp-128h]
  __int64 v85; // [rsp+28h] [rbp-120h]
  int v86; // [rsp+30h] [rbp-118h]
  unsigned int v87; // [rsp+34h] [rbp-114h]
  unsigned __int64 v88; // [rsp+38h] [rbp-110h]
  unsigned __int64 v90; // [rsp+48h] [rbp-100h]
  unsigned int v91; // [rsp+50h] [rbp-F8h]
  unsigned int v92; // [rsp+54h] [rbp-F4h]
  unsigned int v93; // [rsp+60h] [rbp-E8h]
  unsigned int v94; // [rsp+64h] [rbp-E4h]
  int v95; // [rsp+68h] [rbp-E0h]
  unsigned int v96; // [rsp+6Ch] [rbp-DCh]
  unsigned __int64 v97; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v98; // [rsp+78h] [rbp-D0h]
  int *v99; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v100; // [rsp+88h] [rbp-C0h]
  _WORD v101[16]; // [rsp+90h] [rbp-B8h] BYREF
  wchar_t pszDest[40]; // [rsp+B0h] [rbp-98h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = (unsigned int *)a1;
  if ( a2 < 0x130 )
  {
    v3 = 10;
  }
  else if ( (a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *(_DWORD *)a1 == 30 && *(_DWORD *)(a1 + 4) == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == *(_DWORD *)(a1 + 12) )
    {
      if ( *(_DWORD *)(a1 + 80) > 1u )
      {
        v3 = 27;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 88);
        v94 = v7;
        if ( v7 > 0x4000
          || (v8 = *(unsigned int *)(a1 + 112), v96 = v8, (unsigned int)v8 > 0x4000)
          || (v9 = *(_DWORD *)(a1 + 96), v91 = v9, v9 > 0x100000)
          || (v10 = *(_DWORD *)(a1 + 104), v10 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v7 && v9 && v10 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 212) - 1) > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 16) )
          {
            v14 = (unsigned __int64)v6 + v6[21];
            v97 = v14;
            if ( (v14 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v14 < (unsigned __int64)v6
                   || (v15 = (char *)v6 + v11, v90 = (unsigned __int64)v6 + v11, v14 >= (unsigned __int64)v6 + v11) )
            {
              v3 = 40;
            }
            else
            {
              v16 = 32LL * v7 + v14 - 1;
              if ( v16 < (unsigned __int64)v6 || v16 >= (unsigned __int64)v15 )
              {
                v3 = 45;
              }
              else
              {
                v17 = (unsigned __int64)v6 + v6[23];
                v98 = v17;
                if ( (v17 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v17 < (unsigned __int64)v6 || v17 >= (unsigned __int64)v15 )
                {
                  v3 = 50;
                }
                else
                {
                  v18 = v17 + 8 * v13 - 1;
                  if ( v18 < (unsigned __int64)v6 || v18 >= (unsigned __int64)v15 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v19 = (unsigned __int64)v6 + v6[25];
                    v100 = v19;
                    if ( (v19 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v19 < (unsigned __int64)v6 || v19 >= (unsigned __int64)v15 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v20 = v19 + v12 - 1;
                      if ( v20 < (unsigned __int64)v6 || v20 >= (unsigned __int64)v15 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v21 = (unsigned __int64)v6 + v6[27];
                        v88 = v21;
                        if ( (v21 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v21 < (unsigned __int64)v6 || v21 >= (unsigned __int64)v15 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v22 = v21 + v6[29] - 1LL;
                          if ( v22 < (unsigned __int64)v6 || v22 >= (unsigned __int64)v15 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v23 = 96 * v8 + v21 - 1;
                            if ( v23 < (unsigned __int64)v6 || v23 >= (unsigned __int64)v15 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v92 = v6[31];
                              if ( v92 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v87 = 0;
                                v24 = v13;
                                v25 = 0;
                                v26 = 0;
                                while ( 1 )
                                {
                                  v27 = (int *)(v14 + 32LL * v25);
                                  v99 = v27;
                                  v28 = v19 + (unsigned int)v27[3];
                                  if ( (v28 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v28 < (unsigned __int64)v6 || v28 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v29 = (unsigned int)v27[4];
                                  if ( !(_DWORD)v29 )
                                  {
                                    v3 = 90;
                                    goto LABEL_67;
                                  }
                                  if ( (unsigned int)v29 > 0x400 )
                                  {
                                    v3 = 100;
                                    goto LABEL_67;
                                  }
                                  v30 = (unsigned int)(2 * v29 + 2) + v28 - 1;
                                  if ( v30 < (unsigned __int64)v6 || v30 >= (unsigned __int64)v15 )
                                  {
                                    v3 = 110;
                                    goto LABEL_67;
                                  }
                                  if ( *(_WORD *)(v28 + 2 * v29) )
                                  {
                                    v3 = 120;
                                    goto LABEL_67;
                                  }
                                  v31 = v27[1];
                                  if ( v31 > 0x2000 )
                                  {
                                    v3 = 140;
                                    goto LABEL_67;
                                  }
                                  if ( v31 > v24 )
                                  {
                                    v3 = 150;
                                    goto LABEL_67;
                                  }
                                  v32 = *v27;
                                  v24 -= v31;
                                  v93 = v24;
                                  if ( (_DWORD)v32 == -1 && v31 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v32 != v26 && (_DWORD)v32 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v33 = v27[5];
                                  v95 = v31 + v26;
                                  if ( (v33 & 0x7F00) == 0 && (v33 & 1) == 0 && (v33 & 0xFE) == 0 )
                                  {
                                    v3 = 155;
                                    goto LABEL_67;
                                  }
                                  v34 = v27[5] & 1;
                                  if ( (v33 & 1) == 0 && !v27[2] )
                                  {
                                    v3 = 157;
                                    goto LABEL_67;
                                  }
                                  v35 = v32 + v31;
                                  v86 = 0;
                                  v36 = *v27;
                                  v37 = 0;
                                  v38 = 0;
                                  v39 = 0;
                                  if ( (int)v32 < v35 )
                                    break;
LABEL_75:
                                  if ( v37 != v27[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v34 && (v39 != (unsigned __int8)v33 >> 1 || v38 != ((v33 >> 8) & 0x7F)) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v6 = (unsigned int *)a1;
                                  v87 = ++v25;
                                  if ( v25 >= v94 )
                                  {
                                    v47 = v88;
                                    if ( v24 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v48 = v96;
                                      v49 = 0;
                                      v50 = 0;
                                      if ( v96 )
                                      {
                                        while ( 1 )
                                        {
                                          v51 = v88;
                                          v52 = (unsigned int *)(v47 + 96LL * v50++);
                                          v53 = v50;
                                          v54 = v52[4];
                                          v97 = *((_QWORD *)v52 + 1);
                                          if ( v50 < v48 )
                                            break;
LABEL_86:
                                          v55 = v51 + *v52;
                                          if ( (v55 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v55 < a1 || v55 >= v90 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v56 = (unsigned __int16 *)(v55 + 2LL * v52[1]);
                                          if ( (unsigned __int64)v56 + 1 < a1 || (unsigned __int64)v56 + 1 >= v90 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v56 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          memset(v101, 0, sizeof(v101));
                                          v57 = v52[2];
                                          v58 = v52[3];
                                          v101[13] &= 0xFFE1u;
                                          LODWORD(v85) = v54;
                                          LODWORD(v84) = v57;
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v58,
                                            v84,
                                            v85);
                                          v59 = (char *)pszDest - v55;
                                          do
                                          {
                                            v60 = *(unsigned __int16 *)&v59[v55];
                                            v61 = *(unsigned __int16 *)v55 - v60;
                                            if ( v61 )
                                              break;
                                            v55 += 2LL;
                                          }
                                          while ( v60 );
                                          if ( v61 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v62 = (_DWORD *)(v88 + v52[5]);
                                          if ( ((unsigned __int8)v62 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          v6 = (unsigned int *)a1;
                                          if ( (unsigned __int64)v62 < a1 || (v63 = v90, (unsigned __int64)v62 >= v90) )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v64 = v52[6];
                                          if ( (unsigned int)v64 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v65 = (char *)v62 + v64 - 1;
                                          if ( (unsigned __int64)v65 < a1 || (unsigned __int64)v65 >= v90 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v62 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v66 = v62[1];
                                          if ( v66 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v67 = *(_DWORD *)(a1 + 124);
                                          v68 = 0;
                                          if ( v67 )
                                          {
                                            v69 = v52 + 9;
                                            v70 = v67;
                                            do
                                            {
                                              v71 = *v69 + v69[7];
                                              ++v69;
                                              v68 += v71;
                                              --v70;
                                            }
                                            while ( v70 );
                                            v63 = v90;
                                          }
                                          if ( v68 != v66 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v72 = 24;
                                          if ( v66 )
                                            v72 = 8 * v66 + 16;
                                          if ( v72 != (_DWORD)v64 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v73 = v52[8];
                                          if ( v73 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v74 = 0;
                                          if ( v67 )
                                          {
                                            v75 = v52 + 16;
                                            v76 = *(unsigned int *)(a1 + 124);
                                            do
                                            {
                                              v74 += *v75++;
                                              --v76;
                                            }
                                            while ( v76 );
                                          }
                                          if ( v74 != v73 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v49 += v74;
                                          v77 = (unsigned __int16 *)(v88 + v52[7]);
                                          if ( ((unsigned __int8)v77 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v78 = 0;
                                          if ( v73 )
                                          {
                                            while ( (unsigned __int64)v77 >= a1 && (unsigned __int64)v77 < v63 )
                                            {
                                              if ( (unsigned __int64)v77 + 3 < a1 || (unsigned __int64)v77 + 3 >= v63 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              v79 = *v77;
                                              if ( *v77 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v80 = &v77[v79 + 1];
                                              if ( (unsigned __int64)v80 + 1 < a1 || (unsigned __int64)v80 + 1 >= v63 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( v77[v79 + 1] )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v78;
                                              v77 = v80 + 1;
                                              if ( v78 >= v73 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v48 = *(_DWORD *)(a1 + 112);
                                          if ( v50 >= v48 )
                                            goto LABEL_129;
                                          v47 = v88;
                                        }
                                        while ( !PfMetadataRecordIsEqual(v51 + 96LL * v53, &v97, v54) )
                                        {
                                          v53 = v82 + 1;
                                          if ( v53 >= v83 )
                                            goto LABEL_86;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v49 == v6[30] )
                                        {
                                          if ( v49 > 0x80000 )
                                          {
                                            v3 = 340;
                                          }
                                          else
                                          {
                                            v81 = v6[55];
                                            if ( ((_DWORD)v81 == 0) == (v6[56] == 0) )
                                            {
                                              if ( (_DWORD)v81
                                                && StringCbLengthW((STRSAFE_PCNZWCH)((char *)v6 + v81), v6[56], 0LL) < 0 )
                                              {
                                                v3 = 360;
                                              }
                                              else
                                              {
                                                v4 = 1;
                                              }
                                            }
                                            else
                                            {
                                              v3 = 350;
                                            }
                                          }
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v26 = v95;
                                  v19 = v100;
                                  v14 = v97;
                                }
                                v40 = *v27;
                                v41 = v35;
                                v42 = (int *)(v98 + 4 + 8 * v32);
                                while ( 1 )
                                {
                                  v43 = v38;
                                  if ( v40 < 0 || v36 >= v91 )
                                    break;
                                  if ( v36 != (_DWORD)v32 && *(v42 - 1) <= (unsigned int)*(v42 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v44 = *v42;
                                  if ( (*v42 & 1) == 0 && (((unsigned int)*v42 >> 4) & 7) > v92 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v44 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v42 & 1) != 0 )
                                  {
                                    if ( (v44 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v37;
                                    v46 = 1 << (((unsigned int)*v42 >> 4) & 7);
                                    if ( (v44 & 4) != 0 )
                                      v86 |= v46;
                                    v38 |= v46;
                                    if ( (v44 & 2) == 0 )
                                      v38 = v43;
                                  }
                                  ++v36;
                                  ++v40;
                                  v42 += 2;
                                  if ( v40 >= v41 )
                                  {
                                    v27 = v99;
                                    v39 = v86;
                                    v25 = v87;
                                    v15 = (char *)v90;
                                    v24 = v93;
                                    goto LABEL_75;
                                  }
                                }
                                v3 = 160;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v3 = 37;
          }
        }
        else
        {
          v3 = 33;
        }
      }
    }
    else
    {
      v3 = 26;
    }
  }
  else
  {
    v3 = 20;
  }
LABEL_67:
  *a3 = v3;
  return v4;
}
