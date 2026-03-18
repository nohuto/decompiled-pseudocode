/*
 * XREFs of PfVerifyScenarioBuffer @ 0x140453FF0
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     StringCchPrintfW @ 0x14012B374 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PfMetadataRecordIsEqual @ 0x1404436E4 (PfMetadataRecordIsEqual.c)
 *     PfVerifyScenarioId @ 0x14045503C (PfVerifyScenarioId.c)
 */

__int64 __fastcall PfVerifyScenarioBuffer(unsigned int *a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  unsigned __int8 v4; // r12
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int *v12; // r11
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // r15d
  unsigned int v24; // esi
  int v25; // r10d
  unsigned int v26; // eax
  unsigned int *v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rsi
  unsigned int v33; // r8d
  int v34; // ebp
  unsigned int v35; // r9d
  int v36; // r11d
  int v37; // edi
  int v38; // ecx
  __int64 v39; // r10
  unsigned int *v40; // r8
  unsigned int v41; // eax
  unsigned __int64 v43; // r9
  unsigned int v44; // r10d
  unsigned int v45; // r14d
  unsigned int v46; // r15d
  unsigned int *v47; // rsi
  unsigned int v48; // r9d
  int v49; // ebp
  unsigned __int64 v50; // rdi
  unsigned __int16 *v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // r9
  char *v54; // rdx
  int v55; // eax
  int v56; // ecx
  unsigned int *v57; // rcx
  __int64 v58; // r10
  char *v59; // rdx
  unsigned int v60; // edx
  unsigned int v61; // r8d
  int v62; // r9d
  _DWORD *v63; // rcx
  __int64 v64; // r11
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r10d
  int v68; // eax
  _DWORD *v69; // rcx
  __int64 v70; // rdx
  unsigned int *v71; // rcx
  unsigned int v72; // r9d
  unsigned __int16 v73; // dx
  _WORD *v74; // r8
  int v75; // r9d
  unsigned int v76; // r10d
  __int64 v77; // [rsp+20h] [rbp-118h]
  __int64 v78; // [rsp+28h] [rbp-110h]
  int v79; // [rsp+30h] [rbp-108h]
  unsigned int v80; // [rsp+34h] [rbp-104h]
  unsigned int v81; // [rsp+38h] [rbp-100h]
  unsigned __int64 v82; // [rsp+40h] [rbp-F8h]
  unsigned int v84; // [rsp+50h] [rbp-E8h]
  int v85; // [rsp+54h] [rbp-E4h]
  unsigned int v86; // [rsp+5Ch] [rbp-DCh]
  unsigned int v87; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v88; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v89; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v90; // [rsp+78h] [rbp-C0h]
  unsigned int *v91; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v92; // [rsp+88h] [rbp-B0h]
  _WORD v93[16]; // [rsp+90h] [rbp-A8h] BYREF
  wchar_t pszDest[40]; // [rsp+B0h] [rbp-88h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a2 < 0x130 )
  {
    v3 = 10;
  }
  else if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    v3 = 15;
  }
  else if ( *a1 == 30 && a1[1] == 1094927187 )
  {
    if ( a2 > 0x10000000 )
    {
      v3 = 25;
    }
    else if ( a2 == a1[3] )
    {
      if ( a1[20] > 1 )
      {
        v3 = 27;
      }
      else
      {
        v6 = a1[22];
        v86 = v6;
        if ( v6 > 0x4000
          || (v7 = a1[28], v87 = v7, (unsigned int)v7 > 0x4000)
          || (v8 = a1[24], (unsigned int)v8 > 0x100000)
          || (v9 = a1[26], v9 > 0x400000) )
        {
          v3 = 30;
        }
        else if ( v6 && (_DWORD)v8 && v9 )
        {
          if ( a1[53] - 1 > 7 )
          {
            v3 = 35;
          }
          else if ( (unsigned __int8)PfVerifyScenarioId(a1 + 4) )
          {
            v13 = (unsigned __int64)v12 + v12[21];
            v89 = v13;
            if ( (v13 & 3) != 0 )
            {
              v3 = 38;
            }
            else if ( v13 < (unsigned __int64)v12
                   || (v14 = (char *)v12 + v10, v88 = (unsigned __int64)v12 + v10, v13 >= (unsigned __int64)v12 + v10) )
            {
              v3 = 40;
            }
            else
            {
              v15 = 32LL * v6 + v13 - 1;
              if ( v15 < (unsigned __int64)v12 || v15 >= (unsigned __int64)v14 )
              {
                v3 = 45;
              }
              else
              {
                v16 = (unsigned __int64)v12 + v12[23];
                v90 = v16;
                if ( (v16 & 3) != 0 )
                {
                  v3 = 47;
                }
                else if ( v16 < (unsigned __int64)v12 || v16 >= (unsigned __int64)v14 )
                {
                  v3 = 50;
                }
                else
                {
                  v17 = v16 + 8 * v8 - 1;
                  if ( v17 < (unsigned __int64)v12 || v17 >= (unsigned __int64)v14 )
                  {
                    v3 = 55;
                  }
                  else
                  {
                    v18 = (unsigned __int64)v12 + v12[25];
                    v92 = v18;
                    if ( (v18 & 1) != 0 )
                    {
                      v3 = 57;
                    }
                    else if ( v18 < (unsigned __int64)v12 || v18 >= (unsigned __int64)v14 )
                    {
                      v3 = 60;
                    }
                    else
                    {
                      v19 = v18 + v11 - 1;
                      if ( v19 < (unsigned __int64)v12 || v19 >= (unsigned __int64)v14 )
                      {
                        v3 = 70;
                      }
                      else
                      {
                        v20 = (unsigned __int64)v12 + v12[27];
                        v82 = v20;
                        if ( (v20 & 7) != 0 )
                        {
                          v3 = 72;
                        }
                        else if ( v20 < (unsigned __int64)v12 || v20 >= (unsigned __int64)v14 )
                        {
                          v3 = 73;
                        }
                        else
                        {
                          v21 = v20 + v12[29] - 1LL;
                          if ( v21 < (unsigned __int64)v12 || v21 >= (unsigned __int64)v14 )
                          {
                            v3 = 74;
                          }
                          else
                          {
                            v22 = 96 * v7 + v20 - 1;
                            if ( v22 < (unsigned __int64)v12 || v22 >= (unsigned __int64)v14 )
                            {
                              v3 = 75;
                            }
                            else
                            {
                              v23 = v12[31];
                              if ( v23 > 7 )
                              {
                                v3 = 76;
                              }
                              else
                              {
                                v80 = 0;
                                v24 = v8;
                                v25 = 0;
                                v26 = 0;
                                while ( 1 )
                                {
                                  v27 = (unsigned int *)(v13 + 32LL * v26);
                                  v91 = v27;
                                  v28 = v18 + v27[3];
                                  if ( (v28 & 1) != 0 )
                                  {
                                    v3 = 77;
                                    goto LABEL_67;
                                  }
                                  if ( v28 < (unsigned __int64)v12 || v28 >= (unsigned __int64)v14 )
                                  {
                                    v3 = 80;
                                    goto LABEL_67;
                                  }
                                  v29 = v27[4];
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
                                  if ( v30 < (unsigned __int64)v12 || v30 >= (unsigned __int64)v14 )
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
                                  v81 = v24 - v31;
                                  v32 = (int)*v27;
                                  if ( (_DWORD)v32 == -1 && v31 )
                                  {
                                    v3 = 152;
                                    goto LABEL_67;
                                  }
                                  if ( (_DWORD)v32 != v25 && (_DWORD)v32 != -1 )
                                  {
                                    v3 = 153;
                                    goto LABEL_67;
                                  }
                                  v33 = v27[5];
                                  v25 += v31;
                                  v85 = v25;
                                  v84 = v33;
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
                                  v79 = 0;
                                  v35 = *v27;
                                  v36 = 0;
                                  v37 = 0;
                                  v38 = 0;
                                  if ( (int)v32 < (int)(v32 + v31) )
                                    break;
LABEL_75:
                                  if ( v36 != v91[2] )
                                  {
                                    v3 = 185;
                                    goto LABEL_67;
                                  }
                                  if ( !v34 && (v38 != (unsigned __int8)v33 >> 1 || v37 != ((v33 >> 8) & 0x7F)) )
                                  {
                                    v3 = 187;
                                    goto LABEL_67;
                                  }
                                  v12 = a1;
                                  v26 = v80 + 1;
                                  v24 = v81;
                                  v80 = v26;
                                  if ( v26 >= v86 )
                                  {
                                    v43 = v82;
                                    if ( v81 )
                                    {
                                      v3 = 190;
                                    }
                                    else
                                    {
                                      v44 = v87;
                                      v45 = 0;
                                      v46 = 0;
                                      if ( v87 )
                                      {
                                        while ( 1 )
                                        {
                                          v47 = (unsigned int *)(v43 + 96LL * v46++);
                                          v48 = v46;
                                          v49 = v47[4];
                                          v89 = *((_QWORD *)v47 + 1);
                                          if ( v46 < v44 )
                                            break;
LABEL_86:
                                          v50 = v82 + *v47;
                                          if ( (v50 & 1) != 0 )
                                          {
                                            v3 = 195;
                                            goto LABEL_67;
                                          }
                                          if ( v50 < (unsigned __int64)v12 || v50 >= v88 )
                                          {
                                            v3 = 200;
                                            goto LABEL_67;
                                          }
                                          v51 = (unsigned __int16 *)(v50 + 2LL * v47[1]);
                                          if ( (char *)v51 + 1 < (char *)v12 || (unsigned __int64)v51 + 1 >= v88 )
                                          {
                                            v3 = 210;
                                            goto LABEL_67;
                                          }
                                          if ( *v51 )
                                          {
                                            v3 = 220;
                                            goto LABEL_67;
                                          }
                                          memset(v93, 0, sizeof(v93));
                                          v52 = v47[2];
                                          v53 = v47[3];
                                          v93[13] &= 0xFFE1u;
                                          LODWORD(v78) = v49;
                                          LODWORD(v77) = v52;
                                          StringCchPrintfW(
                                            pszDest,
                                            0x23uLL,
                                            L"\\VOLUME{%08lx%08lx-%08lx}",
                                            v53,
                                            v77,
                                            v78);
                                          v54 = (char *)pszDest - v50;
                                          do
                                          {
                                            v55 = *(unsigned __int16 *)&v54[v50];
                                            v56 = *(unsigned __int16 *)v50 - v55;
                                            if ( v56 )
                                              break;
                                            v50 += 2LL;
                                          }
                                          while ( v55 );
                                          if ( v56 )
                                          {
                                            v3 = 222;
                                            goto LABEL_67;
                                          }
                                          v57 = (unsigned int *)(v82 + v47[5]);
                                          if ( ((unsigned __int8)v57 & 7) != 0 )
                                          {
                                            v3 = 225;
                                            goto LABEL_67;
                                          }
                                          v12 = a1;
                                          if ( v57 < a1 || (unsigned __int64)v57 >= v88 )
                                          {
                                            v3 = 230;
                                            goto LABEL_67;
                                          }
                                          v58 = v47[6];
                                          if ( (unsigned int)v58 < 0x18 )
                                          {
                                            v3 = 240;
                                            goto LABEL_67;
                                          }
                                          v59 = (char *)v57 + v58 - 1;
                                          if ( v59 < (char *)a1 || (unsigned __int64)v59 >= v88 )
                                          {
                                            v3 = 245;
                                            goto LABEL_67;
                                          }
                                          if ( *v57 != 3 )
                                          {
                                            v3 = 250;
                                            goto LABEL_67;
                                          }
                                          v60 = v57[1];
                                          if ( v60 > 0x84000 )
                                          {
                                            v3 = 260;
                                            goto LABEL_67;
                                          }
                                          v61 = a1[31];
                                          v62 = 0;
                                          if ( v61 )
                                          {
                                            v63 = v47 + 9;
                                            v64 = v61;
                                            do
                                            {
                                              v65 = *v63 + v63[7];
                                              ++v63;
                                              v62 += v65;
                                              --v64;
                                            }
                                            while ( v64 );
                                            v12 = a1;
                                          }
                                          if ( v62 != v60 )
                                          {
                                            v3 = 265;
                                            goto LABEL_67;
                                          }
                                          v66 = 24;
                                          if ( v60 )
                                            v66 = 8 * v60 + 16;
                                          if ( v66 != (_DWORD)v58 )
                                          {
                                            v3 = 270;
                                            goto LABEL_67;
                                          }
                                          v67 = v47[8];
                                          if ( v67 > 0x80000 )
                                          {
                                            v3 = 280;
                                            goto LABEL_67;
                                          }
                                          v68 = 0;
                                          if ( v61 )
                                          {
                                            v69 = v47 + 16;
                                            v70 = a1[31];
                                            do
                                            {
                                              v68 += *v69++;
                                              --v70;
                                            }
                                            while ( v70 );
                                          }
                                          if ( v68 != v67 )
                                          {
                                            v3 = 281;
                                            goto LABEL_67;
                                          }
                                          v45 += v68;
                                          v71 = (unsigned int *)(v82 + v47[7]);
                                          if ( ((unsigned __int8)v71 & 1) != 0 )
                                          {
                                            v3 = 283;
                                            goto LABEL_67;
                                          }
                                          v72 = 0;
                                          if ( v67 )
                                          {
                                            while ( v71 >= v12 && (unsigned __int64)v71 < v88 )
                                            {
                                              if ( (unsigned int *)((char *)v71 + 3) < v12
                                                || (unsigned __int64)v71 + 3 >= v88 )
                                              {
                                                v3 = 290;
                                                goto LABEL_67;
                                              }
                                              v73 = *(_WORD *)v71;
                                              if ( *(_WORD *)v71 >= 0x400u )
                                              {
                                                v3 = 300;
                                                goto LABEL_67;
                                              }
                                              v74 = (_WORD *)v71 + (unsigned int)v73 + 1;
                                              if ( (unsigned int *)((char *)v74 + 1) < v12
                                                || (unsigned __int64)v74 + 1 >= v88 )
                                              {
                                                v3 = 310;
                                                goto LABEL_67;
                                              }
                                              if ( *((_WORD *)v71 + v73 + 1) )
                                              {
                                                v3 = 320;
                                                goto LABEL_67;
                                              }
                                              ++v72;
                                              v71 = (unsigned int *)(v74 + 1);
                                              if ( v72 >= v67 )
                                                goto LABEL_128;
                                            }
                                            v3 = 285;
                                            goto LABEL_67;
                                          }
LABEL_128:
                                          v44 = v12[28];
                                          if ( v46 >= v44 )
                                            goto LABEL_129;
                                          v43 = v82;
                                        }
                                        while ( !PfMetadataRecordIsEqual(v82 + 96LL * v48, &v89, v49) )
                                        {
                                          v48 = v75 + 1;
                                          if ( v48 >= v76 )
                                            goto LABEL_86;
                                        }
                                        v3 = 192;
                                      }
                                      else
                                      {
LABEL_129:
                                        if ( v45 == v12[30] )
                                        {
                                          if ( v45 > 0x80000 )
                                            v3 = 340;
                                          else
                                            v4 = 1;
                                        }
                                        else
                                        {
                                          v3 = 330;
                                        }
                                      }
                                    }
                                    goto LABEL_67;
                                  }
                                  v14 = (char *)v88;
                                  v18 = v92;
                                  v13 = v89;
                                }
                                v39 = v32;
                                v40 = (unsigned int *)(v90 + 4 + 8 * v32);
                                while ( v39 >= 0 && v35 < (unsigned int)v8 )
                                {
                                  if ( v35 != (_DWORD)v32 && *(v40 - 1) <= *(v40 - 3) )
                                  {
                                    v3 = 165;
                                    goto LABEL_67;
                                  }
                                  v41 = *v40;
                                  if ( (*v40 & 1) == 0 && ((v41 >> 4) & 7) > v23 )
                                  {
                                    v3 = 167;
                                    goto LABEL_67;
                                  }
                                  if ( (v41 & 0xE) == 0 )
                                  {
                                    v3 = 173;
                                    goto LABEL_67;
                                  }
                                  if ( (*v40 & 1) != 0 )
                                  {
                                    if ( (v41 & 8) != 0 )
                                    {
                                      v3 = 175;
                                      goto LABEL_67;
                                    }
                                  }
                                  else
                                  {
                                    ++v36;
                                    if ( (v41 & 4) != 0 )
                                      v79 |= 1 << ((v41 >> 4) & 7);
                                    if ( (v41 & 2) != 0 )
                                      v37 |= 1 << ((v41 >> 4) & 7);
                                  }
                                  ++v35;
                                  ++v39;
                                  v40 += 2;
                                  if ( v39 >= (int)(v32 + v31) )
                                  {
                                    v33 = v84;
                                    v38 = v79;
                                    v25 = v85;
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
