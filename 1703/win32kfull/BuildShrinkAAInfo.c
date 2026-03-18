/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00367DC (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C0036BA0 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // r13d
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r15
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int16 v26; // r10
  unsigned __int64 v27; // r11
  int v28; // r12d
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 v31; // r14
  unsigned int v32; // ecx
  char *v33; // rax
  _DWORD *v34; // rbx
  int *v35; // rdi
  int v36; // esi
  int v37; // ebp
  int v38; // r9d
  _DWORD *v39; // r8
  int *v40; // rdx
  int v41; // eax
  int v42; // r14d
  int v43; // eax
  _WORD *v44; // r8
  __int64 v45; // rdi
  int v46; // r15d
  int v47; // r12d
  int v48; // r11d
  int v49; // edx
  int v50; // r9d
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // r10
  __int16 v54; // r9
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // r11d
  int v59; // r10d
  _WORD *v60; // r8
  _WORD *v61; // r9
  int v62; // r11d
  int v63; // edx
  int v64; // eax
  int v65; // ecx
  int v67; // edx
  __int16 v68; // ax
  unsigned __int64 v69; // rax
  __int16 v70; // r10
  _OWORD *v71; // r14
  unsigned int v72; // eax
  __int64 v73; // rax
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  int v80; // [rsp+20h] [rbp-98h]
  int v81; // [rsp+24h] [rbp-94h]
  int v82; // [rsp+28h] [rbp-90h]
  int v83; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v84; // [rsp+30h] [rbp-88h]
  __int64 v85; // [rsp+38h] [rbp-80h] BYREF
  int v86; // [rsp+40h] [rbp-78h]
  int v87; // [rsp+44h] [rbp-74h]
  int v88; // [rsp+48h] [rbp-70h]
  int v89; // [rsp+4Ch] [rbp-6Ch]
  int v90; // [rsp+50h] [rbp-68h]
  int v91; // [rsp+54h] [rbp-64h] BYREF
  int v92; // [rsp+58h] [rbp-60h]
  int v93; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v94; // [rsp+60h] [rbp-58h]
  unsigned __int64 v95; // [rsp+68h] [rbp-50h]
  __int64 v96; // [rsp+70h] [rbp-48h]
  int v99; // [rsp+E8h] [rbp+30h]
  __int64 v100; // [rsp+108h] [rbp+50h] BYREF
  va_list va; // [rsp+108h] [rbp+50h]
  va_list va1; // [rsp+110h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v100 = va_arg(va1, _QWORD);
  v9 = *a3;
  v88 = 0;
  v10 = *a4;
  v89 = 0;
  v90 = 0;
  v84 = v9;
  if ( v10 < v9 || a7 <= a6 )
    return 0LL;
  v11 = a7 - a6;
  v80 = 0;
  v12 = v9;
  v13 = v10 - v9;
  v86 = v10 - v9;
  if ( v9 < 0 )
    v12 = 0;
  v92 = v12;
  if ( v10 > a5 )
    v10 = a5;
  v82 = -1;
  v87 = v10;
  v93 = *a8;
  v14 = v93 - 1;
  v83 = v93 - 1;
  v15 = *a9;
  v81 = *a9;
  if ( v93 - 1 >= *a9 )
    return 0LL;
  if ( v13 <= v11 )
    return 0LL;
  v16 = v15 - v14;
  v17 = v15 - v14 + 1;
  if ( v16 + 1 < v16 )
    return 0LL;
  v18 = v13 * (unsigned __int64)v17;
  v96 = v13;
  if ( v18 > 0xFFFFFFFF )
    return 0LL;
  v19 = v18 + v11 - 1;
  if ( v19 < (unsigned int)v18 )
    return 0LL;
  v20 = v19 / v11;
  v21 = v19 / v11 + 4;
  if ( v20 + 4 < v20 )
    return 0LL;
  v22 = v13;
  if ( v21 <= v13 )
    v22 = v21;
  if ( (int)ALIGN_MEM(&v91, 2048LL) < 0 )
    return 0LL;
  if ( (int)v22 + 1 < (unsigned int)v22 )
    return 0LL;
  v24 = 2LL * (unsigned int)(v22 + 1);
  if ( v24 > v23 )
    return 0LL;
  if ( (int)ALIGN_MEM(&v85, (unsigned int)v24) < 0 )
    return 0LL;
  v28 = v85 + v91;
  if ( (int)v85 + v91 < (unsigned int)v85 )
    return 0LL;
  v94 = ((unsigned __int64)v11 << 13) / v25;
  if ( (v26 & 0x4A80) != 0 )
  {
    if ( v16 + 4 < v16 )
      return 0LL;
    v69 = 2LL * (v16 + 4);
    if ( v69 > v27 || (int)ALIGN_MEM(&v85, (unsigned int)v69) < 0 )
      return 0LL;
    v29 = v85;
    if ( (v70 & 0x200) != 0 )
      v28 = 0;
  }
  else
  {
    v29 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v100) >= 0 )
  {
    v30 = v29 + v28;
    if ( v29 + v28 >= v29 )
    {
      v31 = (unsigned int)v100;
      v32 = v30 + v100;
      if ( v30 + (unsigned int)v100 >= v30 && v32 + 240 >= v32 )
      {
        v33 = (char *)EngAllocMem(1u, v32 + 240, 0x35355448u);
        v34 = v33;
        if ( !v33 )
          return v34;
        v35 = (int *)(v33 + 240);
        if ( (_DWORD)v31 )
        {
          *((_QWORD *)v33 + 4) = v35;
          v35 = (int *)((char *)v35 + v31);
        }
        if ( v29 )
        {
          v71 = v33 + 48;
          *((_QWORD *)v33 + 11) = v35;
          *((_DWORD *)v33 + 12) = v86;
          *((_DWORD *)v33 + 16) = v92;
          *((_DWORD *)v33 + 17) = v87;
          *((_DWORD *)v33 + 18) = v93;
          *((_DWORD *)v33 + 19) = v81;
          v72 = v16 + 1;
          v37 = v84;
          v34[13] = v11;
          *((_QWORD *)v34 + 12) = (char *)v35 + 2 * (int)v72;
          v73 = (int)v29;
          v36 = a6;
          v35 = (int *)((char *)v35 + v73);
          if ( !(unsigned int)BuildRepData(v71, v84, (unsigned int)a6) )
          {
LABEL_93:
            EngFreeMem(v34);
            return 0LL;
          }
          v74 = v71[1];
          *((_OWORD *)v34 + 7) = *v71;
          v75 = v71[2];
          *((_OWORD *)v34 + 8) = v74;
          v76 = v71[3];
          *((_OWORD *)v34 + 9) = v75;
          *((_OWORD *)v34 + 10) = v76;
          v77 = *((_OWORD *)v34 + 8);
          *((_OWORD *)v34 + 11) = *((_OWORD *)v34 + 7);
          v78 = *((_OWORD *)v34 + 9);
          *((_OWORD *)v34 + 12) = v77;
          v79 = *((_OWORD *)v34 + 10);
          *((_OWORD *)v34 + 13) = v78;
          *((_OWORD *)v34 + 14) = v79;
        }
        else
        {
          v36 = a6;
          v37 = v84;
        }
        if ( !v28 )
        {
          v63 = v34[17] - 1;
          v59 = v34[16];
          v65 = v34[19] - 1;
          v62 = v34[18];
LABEL_69:
          *a3 = v59;
          *a4 = v63;
          *a8 = v62;
          *a9 = v65;
          *v34 = v63 - v59 + 1;
          v34[1] = v65 - v62 + 1;
          return v34;
        }
        v38 = v94;
        v39 = v35 + 512;
        *((_QWORD *)v34 + 3) = v35;
        *((_WORD *)v34 + 6) = 1;
        v40 = v35 + 256;
        *((_QWORD *)v34 + 5) = v35 + 512;
        v95 = (unsigned __int64)v35 + 2 * v22 + 2048;
        v41 = -v38;
        v42 = -(v38 + 1);
        do
        {
          v41 += v38;
          v42 += v38 + 1;
          *v35 = v41;
          v35[256] = v42;
          ++v35;
        }
        while ( v35 < v40 );
        v43 = v86;
        v44 = (_WORD *)v39 - 1;
        v85 = 0LL;
        LOWORD(v45) = 0;
        v46 = v86;
        v47 = v86;
        if ( v86 )
        {
          v48 = -1;
          v49 = -v86;
          v50 = a6 - a7;
          v91 = -v86;
          v51 = -v86;
          while ( 1 )
          {
            v52 = v51 - v50;
            LODWORD(v53) = v47;
            v47 -= v11;
            v99 = v52;
            v54 = 0;
            --v46;
            if ( v47 > 0 )
            {
              LODWORD(v53) = v11;
            }
            else
            {
              v42 = v52;
              v47 += v43;
              v54 = 0x4000;
              v99 = v49 + v52;
              ++v36;
            }
            v55 = v83;
            v56 = v81;
            if ( v36 >= v83 - 1 && v36 <= v81 )
            {
              v57 = (((__int64)(int)v53 << 13) + v85) % v96;
              v53 = (((__int64)(int)v53 << 13) + v85) / v96;
              v85 = v57;
              if ( (int)v53 > (int)v94 )
                v54 |= 0x8000u;
              LOWORD(v45) = v53 + v45;
              if ( (v54 & 0x4000) != 0 )
              {
                v85 = ((__int64)v42 << 13) % v96;
                v45 = ((__int64)v42 << 13) / v96;
                if ( (int)v45 + (int)v53 > (int)v94 )
                  v54 |= 0x8000u;
                else
                  v54 &= ~0x8000u;
                v42 = 0;
              }
              v55 = v83;
              v56 = v81;
            }
            if ( v36 >= v55 && v36 <= v56 )
              break;
            if ( v48 != -1 )
            {
              v88 = v37;
              if ( (unsigned __int64)(v44 + 1) < v95 )
                ++v44;
              *v44 = (0x2000 - v45) | 0x4000;
LABEL_78:
              v46 = 0;
              ++v80;
            }
LABEL_56:
            v51 = v99;
            ++v37;
            v43 = v86;
            v49 = v91;
            v50 = -v11;
            if ( !v46 )
              goto LABEL_57;
          }
          if ( v37 < v92 || v37 >= v87 )
          {
            if ( v48 == -1 )
              goto LABEL_56;
            if ( (unsigned __int64)(v44 + 1) < v95 )
              ++v44;
            if ( (v54 & 0x4000) == 0 )
              LOWORD(v53) = 0x2000 - v45 + v53;
            *v44 = v54 | v53 | 0x4000;
            goto LABEL_78;
          }
          v58 = ((v54 & 0x4000) != 0) + v80;
          v80 = v58;
          if ( (unsigned __int64)(v44 + 1) < v95 )
            ++v44;
          *v44 = v54 | v53;
          if ( v82 != -1 )
          {
            v90 = v36;
LABEL_55:
            v48 = v82;
            v88 = v37;
            goto LABEL_56;
          }
          v82 = v37;
          v67 = v36;
          v89 = v36;
          if ( (v54 & 0x4000) != 0 )
          {
            if ( v36 == v83 )
            {
              *((_WORD *)v34 + 7) = v45;
              *((_WORD *)v34 + 5) = 1;
              v80 = v58 - 1;
              --v44;
LABEL_83:
              v90 = v67;
              goto LABEL_55;
            }
            v67 = v36 - 1;
            v68 = 0x2000;
            v89 = v36 - 1;
          }
          else
          {
            v68 = v45;
          }
          *((_WORD *)v34 + 7) = v68 - v53;
          goto LABEL_83;
        }
LABEL_57:
        v59 = v82;
        v60 = v44 + 1;
        if ( v82 != -1 )
        {
          v61 = (_WORD *)*((_QWORD *)v34 + 5);
          if ( v60 != v61 )
          {
            v62 = v89;
            v63 = v87 - 1;
            v64 = v93;
            if ( v88 < v87 )
              v63 = v88;
            if ( v89 < v93 )
            {
              ++*((_WORD *)v34 + 6);
              v62 = v64;
            }
            v65 = v81 - 1;
            if ( v90 < v81 )
              v65 = v90;
            if ( *((_WORD *)v34 + 5) )
            {
              if ( !*((_WORD *)v34 + 7) )
              {
                *((_WORD *)v34 + 5) = 0;
                v59 = v82 + 1;
              }
            }
            v34[4] = v60 - v61;
            v34[5] = v80;
            *v60 = 0;
            goto LABEL_69;
          }
        }
        goto LABEL_93;
      }
    }
  }
  return 0LL;
}
