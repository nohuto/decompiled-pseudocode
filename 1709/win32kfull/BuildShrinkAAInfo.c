/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0006610
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0074F9C (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C0075F40 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // eax
  int v10; // ecx
  int v11; // ebp
  int v12; // edx
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r10
  __int16 v27; // r11
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // ecx
  _DWORD *v33; // rax
  _DWORD *v34; // rbx
  int *v35; // rdi
  __int64 v36; // rax
  int v37; // esi
  int v38; // r9d
  _DWORD *v39; // r8
  int *v40; // rdx
  int v41; // eax
  int v42; // r14d
  _WORD *v43; // r8
  __int64 v44; // r13
  unsigned int v45; // ecx
  unsigned int v46; // eax
  int v47; // r11d
  int v48; // r10d
  int v49; // edx
  __int16 v50; // di
  __int64 v51; // r9
  int v52; // eax
  int v53; // eax
  __int64 v54; // rdx
  __int16 v55; // r10
  int v56; // r11d
  bool v57; // zf
  int v58; // r10d
  _WORD *v59; // r8
  _WORD *v60; // r9
  int v61; // r11d
  int v62; // edx
  int v63; // eax
  int v64; // ecx
  int v66; // r10d
  __int16 v67; // ax
  unsigned __int64 v68; // rax
  __int16 v69; // r11
  unsigned int v70; // eax
  __int64 v71; // rdx
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int16 v78; // r9
  unsigned int v79; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v80; // [rsp+24h] [rbp-84h] BYREF
  int v81; // [rsp+28h] [rbp-80h]
  unsigned int v82; // [rsp+2Ch] [rbp-7Ch]
  int v83; // [rsp+30h] [rbp-78h]
  int v84; // [rsp+34h] [rbp-74h]
  unsigned int v85; // [rsp+38h] [rbp-70h]
  int v86; // [rsp+3Ch] [rbp-6Ch]
  int v87; // [rsp+40h] [rbp-68h]
  int v88; // [rsp+44h] [rbp-64h]
  int v89; // [rsp+48h] [rbp-60h]
  int v90; // [rsp+4Ch] [rbp-5Ch]
  int v91; // [rsp+50h] [rbp-58h]
  int v92; // [rsp+54h] [rbp-54h]
  __int64 v93; // [rsp+58h] [rbp-50h]
  unsigned __int64 v94; // [rsp+60h] [rbp-48h]
  unsigned __int64 v95; // [rsp+68h] [rbp-40h]
  int v98; // [rsp+D8h] [rbp+30h]
  __int64 v99; // [rsp+F8h] [rbp+50h] BYREF
  va_list va; // [rsp+F8h] [rbp+50h]
  va_list va1; // [rsp+100h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v99 = va_arg(va1, _QWORD);
  v9 = *a3;
  v10 = *a4;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v82 = v9;
  if ( v10 < v9 )
    return 0LL;
  v11 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v12 = v9;
  v98 = 0;
  v13 = a7 - v11;
  v14 = v10 - v9;
  v85 = v10 - v9;
  if ( v9 < 0 )
    v12 = 0;
  v90 = v12;
  if ( v10 > a5 )
    v10 = a5;
  v15 = *a8;
  v83 = -1;
  v84 = v15;
  v86 = v10;
  v16 = v15 - 1;
  v17 = *a9;
  v81 = v17;
  if ( v16 >= v17 )
    return 0LL;
  if ( v14 <= v13 )
    return 0LL;
  v18 = v17 - v16;
  v19 = v17 - v16 + 1;
  if ( v18 + 1 < v18 )
    return 0LL;
  v20 = v14 * (unsigned __int64)v19;
  if ( v20 > 0xFFFFFFFF )
    return 0LL;
  v21 = v20 + v13 - 1;
  if ( v21 < (unsigned int)v20 )
    return 0LL;
  v22 = v21 / v13;
  v23 = v21 / v13 + 4;
  if ( v22 + 4 < v22 )
    return 0LL;
  v24 = v14;
  if ( v23 <= v14 )
    v24 = v23;
  if ( (int)ALIGN_MEM(&v79, 2048LL) < 0 )
    return 0LL;
  if ( (int)v24 + 1 < (unsigned int)v24 )
    return 0LL;
  v25 = 2LL * (unsigned int)(v24 + 1);
  if ( v25 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v80, (unsigned int)v25) < 0 )
    return 0LL;
  v28 = v80;
  v80 += v79;
  if ( v80 < v28 )
    return 0LL;
  v94 = ((unsigned __int64)v13 << 13) / v26;
  if ( (v27 & 0x4A80) != 0 )
  {
    if ( v18 + 4 < v18 )
      return 0LL;
    v68 = 2LL * (v18 + 4);
    if ( v68 > 0xFFFFFFFF || (int)ALIGN_MEM(&v79, (unsigned int)v68) < 0 )
      return 0LL;
    v29 = v79;
    if ( (v69 & 0x200) != 0 )
      v80 = 0;
  }
  else
  {
    v29 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v99) >= 0 )
  {
    v31 = v29 + v30;
    if ( v29 + v30 >= v29 )
    {
      v32 = v31 + v99;
      if ( v31 + (unsigned int)v99 >= v31 && v32 + 240 >= v32 )
      {
        v33 = EngAllocMem(1u, v32 + 240, 0x35355448u);
        v34 = v33;
        if ( !v33 )
          return v34;
        v35 = v33 + 60;
        v36 = (unsigned int)v99;
        if ( (_DWORD)v99 )
        {
          *((_QWORD *)v34 + 4) = v35;
          v35 = (int *)((char *)v35 + v36);
        }
        if ( v29 )
        {
          v34[12] = v85;
          v34[16] = v90;
          v34[17] = v86;
          v34[18] = v84;
          v34[19] = v81;
          v70 = v18 + 1;
          v37 = v82;
          v71 = v82;
          *((_QWORD *)v34 + 11) = v35;
          v34[13] = v13;
          *((_QWORD *)v34 + 12) = (char *)v35 + 2 * (int)v70;
          v35 = (int *)((char *)v35 + (int)v29);
          if ( !(unsigned int)BuildRepData(v34 + 12, v71, (unsigned int)v11) )
          {
LABEL_92:
            EngFreeMem(v34);
            return 0LL;
          }
          v72 = *((_OWORD *)v34 + 4);
          *((_OWORD *)v34 + 7) = *((_OWORD *)v34 + 3);
          v73 = *((_OWORD *)v34 + 5);
          *((_OWORD *)v34 + 8) = v72;
          v74 = *((_OWORD *)v34 + 6);
          v14 = v85;
          *((_OWORD *)v34 + 9) = v73;
          *((_OWORD *)v34 + 10) = v74;
          v75 = *((_OWORD *)v34 + 8);
          *((_OWORD *)v34 + 11) = *((_OWORD *)v34 + 7);
          v76 = *((_OWORD *)v34 + 9);
          *((_OWORD *)v34 + 12) = v75;
          v77 = *((_OWORD *)v34 + 10);
          *((_OWORD *)v34 + 13) = v76;
          *((_OWORD *)v34 + 14) = v77;
        }
        else
        {
          v37 = v82;
        }
        if ( !v80 )
        {
          v62 = v34[17] - 1;
          v58 = v34[16];
          v64 = v34[19] - 1;
          v61 = v34[18];
LABEL_70:
          *a3 = v58;
          *a4 = v62;
          *a8 = v61;
          *a9 = v64;
          *v34 = v62 - v58 + 1;
          v34[1] = v64 - v61 + 1;
          return v34;
        }
        v38 = v94;
        v39 = v35 + 512;
        *((_QWORD *)v34 + 3) = v35;
        *((_WORD *)v34 + 6) = 1;
        v40 = v35 + 256;
        *((_QWORD *)v34 + 5) = v35 + 512;
        v95 = (unsigned __int64)v35 + 2 * v24 + 2048;
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
        v43 = (_WORD *)v39 - 1;
        v93 = 0LL;
        LOWORD(v44) = 0;
        v45 = v14;
        v46 = v14;
        if ( v14 )
        {
          v47 = v83;
          v48 = -v14;
          v91 = v84 - 2;
          v92 = -v14;
          v49 = -v14;
          v50 = 0x4000;
          do
          {
            --v45;
            v49 += v13;
            LODWORD(v51) = v46;
            v79 = v45;
            v52 = v46 - v13;
            v82 = v49;
            v80 = v52;
            if ( v52 > 0 )
            {
              LODWORD(v51) = v13;
              v50 = 0;
            }
            else
            {
              v42 = v49;
              v49 += v48;
              v80 = v14 + v52;
              v82 = v49;
              ++v11;
            }
            v53 = v81;
            if ( v11 >= v91 && v11 <= v81 )
            {
              v54 = (((__int64)(int)v51 << 13) + v93) % v14;
              v51 = (((__int64)(int)v51 << 13) + v93) / v14;
              v93 = v54;
              v55 = v50 | 0x8000;
              if ( (int)v51 <= (int)v94 )
                v55 = v50;
              LOWORD(v44) = v51 + v44;
              v50 = v55;
              if ( (v55 & 0x4000) != 0 )
              {
                v93 = ((__int64)v42 << 13) % v14;
                v44 = ((__int64)v42 << 13) / v14;
                if ( (int)v51 + (int)v44 > (int)v94 )
                  v50 = v55 | 0x8000;
                else
                  v50 = v55 & 0x7FFF;
                v42 = 0;
              }
              v53 = v81;
              v49 = v82;
              v45 = v79;
            }
            v14 = v85;
            if ( v11 < v84 - 1 || v11 > v53 )
            {
              if ( v47 != -1 )
              {
                v87 = v37;
                v50 = 0x4000;
                if ( (unsigned __int64)(v43 + 1) < v95 )
                  ++v43;
                *v43 = (0x2000 - v44) | 0x4000;
                goto LABEL_78;
              }
            }
            else
            {
              if ( v37 >= v90 && v37 < v86 )
              {
                v56 = ((v50 & 0x4000) != 0) + v98;
                v98 = v56;
                if ( (unsigned __int64)(v43 + 1) < v95 )
                  ++v43;
                v57 = v83 == -1;
                *v43 = v50 | v51;
                if ( !v57 )
                {
                  v89 = v11;
LABEL_55:
                  v47 = v83;
                  v45 = v79;
                  v87 = v37;
                  goto LABEL_56;
                }
                v83 = v37;
                v66 = v11;
                v88 = v11;
                if ( (v50 & 0x4000) != 0 )
                {
                  if ( v11 == v84 - 1 )
                  {
                    *((_WORD *)v34 + 7) = v44;
                    *((_WORD *)v34 + 5) = 1;
                    v98 = v56 - 1;
                    --v43;
LABEL_82:
                    v89 = v66;
                    goto LABEL_55;
                  }
                  v66 = v11 - 1;
                  v67 = 0x2000;
                  v88 = v11 - 1;
                }
                else
                {
                  v67 = v44;
                }
                *((_WORD *)v34 + 7) = v67 - v51;
                goto LABEL_82;
              }
              if ( v47 != -1 )
              {
                if ( (unsigned __int64)(v43 + 1) < v95 )
                  ++v43;
                if ( (v50 & 0x4000) == 0 )
                  LOWORD(v51) = 0x2000 - v44 + v51;
                v78 = v50 | v51;
                v50 = 0x4000;
                *v43 = v78 | 0x4000;
LABEL_78:
                v45 = 0;
                ++v98;
                goto LABEL_57;
              }
            }
LABEL_56:
            v50 = 0x4000;
LABEL_57:
            v48 = v92;
            ++v37;
            v46 = v80;
          }
          while ( v45 );
        }
        v58 = v83;
        v59 = v43 + 1;
        if ( v83 != -1 )
        {
          v60 = (_WORD *)*((_QWORD *)v34 + 5);
          if ( v59 != v60 )
          {
            v61 = v88;
            v62 = v86 - 1;
            v63 = v84;
            if ( v87 < v86 )
              v62 = v87;
            if ( v88 < v84 )
            {
              ++*((_WORD *)v34 + 6);
              v61 = v63;
            }
            v64 = v81 - 1;
            if ( v89 < v81 )
              v64 = v89;
            if ( *((_WORD *)v34 + 5) )
            {
              if ( !*((_WORD *)v34 + 7) )
              {
                *((_WORD *)v34 + 5) = 0;
                ++v58;
              }
            }
            v34[4] = v59 - v60;
            v34[5] = v98;
            *v59 = 0;
            goto LABEL_70;
          }
        }
        goto LABEL_92;
      }
    }
  }
  return 0LL;
}
