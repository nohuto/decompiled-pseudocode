/*
 * XREFs of vSrcTranCopyS4D32 @ 0x1C00C25C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r12d
  int v16; // r13d
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // r15d
  char v22; // cl
  __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned int v25; // eax
  int v26; // r10d
  __int64 result; // rax
  _BYTE *v28; // r8
  unsigned int *v29; // rcx
  char *v30; // rdi
  int *v31; // rax
  __int64 v32; // rsi
  char v33; // bl
  unsigned __int8 v34; // r9
  unsigned __int8 v35; // bl
  unsigned int v36; // ebx
  int v37; // r10d
  unsigned int v38; // r8d
  __int64 v39; // r11
  _DWORD *v40; // rcx
  unsigned int v41; // ebp
  unsigned int v42; // r9d
  char *v43; // rcx
  unsigned int v44; // r8d
  unsigned int v45; // r9d
  int v46; // ebp
  char *v47; // rcx
  int v48; // r10d
  unsigned int v49; // r8d
  __int64 v50; // r11
  _DWORD *v51; // rcx
  unsigned int v52; // ebx
  unsigned int v53; // r9d
  char *v54; // rcx
  unsigned int v55; // r8d
  unsigned int v56; // r9d
  int v57; // ebx
  char *v58; // rcx
  unsigned __int8 v59; // dl
  int v60; // r11d
  unsigned int v61; // r8d
  char *v62; // r10
  __int64 v63; // rbx
  unsigned int v64; // r10d
  unsigned int v65; // r8d
  int v66; // r10d
  char *v67; // rdx
  unsigned int v68; // r9d
  unsigned int v69; // r10d
  char *v70; // rcx
  unsigned int v71; // r8d
  int v72; // r10d
  unsigned __int8 v73; // al
  unsigned int v74; // r10d
  unsigned int v75; // edx
  char *v76; // r8
  __int64 v77; // r11
  unsigned int v78; // r9d
  unsigned int v79; // edx
  int v80; // r9d
  char *v81; // rax
  unsigned int v82; // r8d
  unsigned int v83; // r8d
  unsigned int v84; // r9d
  char *v85; // rax
  unsigned int v86; // edx
  int *v87; // rcx
  unsigned int v88; // [rsp+0h] [rbp-58h]
  unsigned int v89; // [rsp+4h] [rbp-54h]
  int v90; // [rsp+8h] [rbp-50h]
  unsigned int *v91; // [rsp+10h] [rbp-48h]
  __int64 v92; // [rsp+18h] [rbp-40h]
  _BYTE *v94; // [rsp+60h] [rbp+8h]
  char v95; // [rsp+68h] [rbp+10h]
  char v96; // [rsp+78h] [rbp+20h]
  int v97; // [rsp+80h] [rbp+28h]
  int v98; // [rsp+88h] [rbp+30h]
  unsigned int v99; // [rsp+A0h] [rbp+48h]
  int v100; // [rsp+B0h] [rbp+58h]

  v12 = a3;
  v13 = *(_QWORD *)(a11 + 128);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1824LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v87 = *(int **)(v13 + 120);
    v19 = *v87;
    v18 = v87[6];
    v16 = v87[1];
    v17 = v87[7];
    v20 = v87[2];
    v15 = v87[8];
    v100 = *v87;
  }
  else
  {
    LOBYTE(v15) = 0;
    v16 = 65280;
    LOBYTE(v17) = 8;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v18) = 0;
      v19 = 255;
      v100 = 255;
      v20 = 16711680;
      LOBYTE(v15) = 16;
    }
    else
    {
      LOBYTE(v18) = 16;
      v19 = 16711680;
      v100 = 16711680;
      v20 = 255;
    }
  }
  v22 = v18;
  v23 = a5;
  v95 = v18;
  v24 = a6 & 0xFFFFFFFE;
  v98 = a6 - (a6 & 0xFFFFFFFE);
  v25 = a9 & v16;
  v99 = (a9 & v19) >> v22;
  v88 = v25 >> v17;
  v96 = v17;
  v89 = (a9 & v20) >> v15;
  v90 = ((a5 + 1) & 0xFFFFFFFE) - a5;
  v26 = (int)(v24 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v97 = v26;
  result = (unsigned int)(a2 / 2);
  v28 = (_BYTE *)((int)result + a1);
  v29 = (unsigned int *)(a4 + 4 * v23);
  v91 = v29;
  v94 = v28;
  if ( a8 )
  {
    v92 = v12;
    do
    {
      v30 = v28;
      v31 = (int *)v29;
      if ( v90 )
      {
        v73 = *v28 & 0xF;
        if ( v73 )
        {
          if ( v73 == 15 )
          {
            *v29 = a9;
          }
          else
          {
            v74 = *v29;
            v75 = (*v29 & v19) >> v95;
            if ( (int)(v99 - v75) < 0 )
              v76 = (char *)&unk_1C02DC070;
            else
              v76 = (char *)&unk_1C02DC030;
            v77 = 4LL * v73;
            v78 = (v75 << 16) + (v99 - v75) * *(_DWORD *)&v76[v77];
            v79 = (v74 & v16) >> v17;
            v80 = v19 & (HIWORD(v78) << v95);
            if ( (int)(v88 - v79) < 0 )
              v81 = (char *)&unk_1C02DC070;
            else
              v81 = (char *)&unk_1C02DC030;
            v82 = v74 & v20;
            v26 = v97;
            v83 = v82 >> v15;
            v84 = v16 & (((v79 << 16) + (v88 - v79) * *(_DWORD *)&v81[v77]) >> 16 << v17) | v80;
            v85 = (char *)&unk_1C02DC070;
            if ( (int)(v89 - v83) >= 0 )
              v85 = (char *)&unk_1C02DC030;
            v86 = (v83 << 16) + (v89 - v83) * *(_DWORD *)&v85[v77];
            v28 = v94;
            v29 = v91;
            *v91 = v20 & (HIWORD(v86) << v15) | v84;
          }
        }
        v31 = (int *)(v29 + 1);
        v30 = v28 + 1;
      }
      if ( v26 > 0 )
      {
        v32 = (unsigned int)v26;
        do
        {
          v33 = *v30;
          v34 = (unsigned __int8)*v30 >> 4;
          if ( v34 )
          {
            if ( v34 == 15 )
            {
              v17 = a9;
            }
            else
            {
              v37 = *v31;
              v38 = (*v31 & (unsigned int)v100) >> v95;
              v39 = 4LL * v34;
              v40 = &unk_1C02DC070;
              if ( (int)(v99 - v38) >= 0 )
                v40 = &unk_1C02DC030;
              v41 = v100 & (((v38 << 16) + (v99 - v38) * v40[v34]) >> 16 << v95);
              v42 = (v37 & (unsigned int)v16) >> v96;
              v43 = (char *)&unk_1C02DC070;
              if ( (int)(v88 - v42) >= 0 )
                v43 = (char *)&unk_1C02DC030;
              v44 = (v42 << 16) + (v88 - v42) * *(_DWORD *)&v43[v39];
              v45 = (v37 & (unsigned int)v20) >> v15;
              v46 = v16 & (HIWORD(v44) << v96) | v41;
              v47 = (char *)&unk_1C02DC070;
              if ( (int)(v89 - v45) >= 0 )
                v47 = (char *)&unk_1C02DC030;
              v17 = v20 & (((v45 << 16) + (v89 - v45) * *(_DWORD *)&v47[v39]) >> 16 << v15) | v46;
            }
            *v31 = v17;
            LOBYTE(v17) = v96;
          }
          v35 = v33 & 0xF;
          if ( v35 )
          {
            if ( v35 == 15 )
            {
              v36 = a9;
            }
            else
            {
              v48 = v31[1];
              v49 = (v48 & (unsigned int)v100) >> v95;
              v50 = 4LL * v35;
              v51 = &unk_1C02DC070;
              if ( (int)(v99 - v49) >= 0 )
                v51 = &unk_1C02DC030;
              v52 = v100 & (((v49 << 16) + (v99 - v49) * v51[v35]) >> 16 << v95);
              v53 = (v48 & (unsigned int)v16) >> v17;
              v54 = (char *)&unk_1C02DC070;
              if ( (int)(v88 - v53) >= 0 )
                v54 = (char *)&unk_1C02DC030;
              v55 = (v53 << 16) + (v88 - v53) * *(_DWORD *)&v54[v50];
              v56 = (v48 & (unsigned int)v20) >> v15;
              v57 = v16 & (HIWORD(v55) << v17) | v52;
              v58 = (char *)&unk_1C02DC070;
              if ( (int)(v89 - v56) >= 0 )
                v58 = (char *)&unk_1C02DC030;
              v36 = v20 & (((v56 << 16) + (v89 - v56) * *(_DWORD *)&v58[v50]) >> 16 << v15) | v57;
            }
            v31[1] = v36;
          }
          v31 += 2;
          ++v30;
          --v32;
        }
        while ( v32 );
        v19 = v100;
        v28 = v94;
        v29 = v91;
      }
      if ( v98 )
      {
        v59 = (unsigned __int8)*v30 >> 4;
        if ( v59 )
        {
          if ( v59 == 15 )
          {
            v28 = v94;
            v29 = v91;
            *v31 = a9;
          }
          else
          {
            v60 = *v31;
            v61 = (*v31 & (unsigned int)v19) >> v95;
            if ( (int)(v99 - v61) < 0 )
              v62 = (char *)&unk_1C02DC070;
            else
              v62 = (char *)&unk_1C02DC030;
            v63 = 4LL * v59;
            v64 = (v61 << 16) + (v99 - v61) * *(_DWORD *)&v62[v63];
            v65 = (v60 & (unsigned int)v16) >> v17;
            v66 = v19 & (HIWORD(v64) << v95);
            if ( (int)(v88 - v65) < 0 )
              v67 = (char *)&unk_1C02DC070;
            else
              v67 = (char *)&unk_1C02DC030;
            v68 = (v60 & (unsigned int)v20) >> v15;
            v69 = v16 & (((v65 << 16) + (v88 - v65) * *(_DWORD *)&v67[v63]) >> 16 << v17) | v66;
            v70 = (char *)&unk_1C02DC070;
            if ( (int)(v89 - v68) >= 0 )
              v70 = (char *)&unk_1C02DC030;
            v71 = ((v68 << 16) + (v89 - v68) * *(_DWORD *)&v70[v63]) >> 16 << v15;
            v29 = v91;
            v72 = v20 & v71 | v69;
            v28 = v94;
            *v31 = v72;
          }
        }
      }
      v28 += v92;
      result = (unsigned int)(a8 - 1);
      v26 = v97;
      v29 = (unsigned int *)((char *)v29 + a7);
      a8 = result;
      v94 = v28;
      v91 = v29;
    }
    while ( (_DWORD)result );
  }
  return result;
}
