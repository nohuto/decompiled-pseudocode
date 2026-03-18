/*
 * XREFs of vSrcTranCopyS4D32 @ 0x1C00D2070
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
  __int64 v11; // rbx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r12d
  int v16; // r13d
  unsigned int v17; // ebp
  int v18; // eax
  int v19; // edx
  int v20; // r15d
  __int64 v22; // r11
  unsigned int v23; // r8d
  __int64 result; // rax
  _BYTE *v25; // rdx
  unsigned int *v26; // rcx
  unsigned int v27; // esi
  __int64 v28; // r8
  char *v29; // rdi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  char v32; // bl
  unsigned __int8 v33; // r9
  unsigned __int8 v34; // bl
  unsigned int v35; // ebx
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  __int64 v38; // r11
  _DWORD *v39; // rcx
  unsigned int v40; // ebp
  unsigned int v41; // r9d
  char *v42; // rcx
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  int v45; // ebp
  char *v46; // rcx
  unsigned int v47; // r10d
  unsigned int v48; // r8d
  __int64 v49; // r11
  _DWORD *v50; // rcx
  unsigned int v51; // ebx
  unsigned int v52; // r9d
  char *v53; // rcx
  unsigned int v54; // r8d
  unsigned int v55; // r9d
  int v56; // ebx
  char *v57; // rcx
  unsigned __int8 v58; // r9
  unsigned int v59; // r10d
  unsigned int v60; // r8d
  __int64 v61; // r11
  _DWORD *v62; // rcx
  unsigned int v63; // ebx
  unsigned int v64; // r9d
  char *v65; // rcx
  unsigned int v66; // r8d
  unsigned int v67; // r9d
  int v68; // ebx
  char *v69; // rcx
  int v70; // r8d
  unsigned __int8 v71; // al
  unsigned int v72; // r10d
  unsigned int v73; // edx
  char *v74; // r8
  __int64 v75; // r11
  unsigned int v76; // r9d
  unsigned int v77; // edx
  int v78; // r9d
  char *v79; // rax
  unsigned int v80; // r8d
  unsigned int v81; // r9d
  char *v82; // rax
  int *v83; // rcx
  unsigned int v84; // [rsp+0h] [rbp-68h]
  unsigned int v85; // [rsp+4h] [rbp-64h]
  unsigned int *v86; // [rsp+8h] [rbp-60h]
  __int64 v87; // [rsp+18h] [rbp-50h]
  __int64 v88; // [rsp+20h] [rbp-48h]
  _BYTE *v90; // [rsp+70h] [rbp+8h]
  char v91; // [rsp+78h] [rbp+10h]
  char v92; // [rsp+88h] [rbp+20h]
  int v93; // [rsp+90h] [rbp+28h]
  unsigned int v94; // [rsp+B0h] [rbp+48h]
  int v95; // [rsp+C0h] [rbp+58h]

  v11 = a3;
  v13 = *(_QWORD *)(a11 + 128);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1824LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v83 = *(int **)(v13 + 120);
    v18 = *v83;
    v19 = v83[6];
    v16 = v83[1];
    v17 = v83[7];
    v20 = v83[2];
    v15 = v83[8];
  }
  else
  {
    LOBYTE(v15) = 0;
    v16 = 65280;
    LOBYTE(v17) = 8;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v19) = 0;
      v18 = 255;
      LOBYTE(v15) = 16;
      v20 = 16711680;
    }
    else
    {
      v18 = 16711680;
      LOBYTE(v19) = 16;
      v20 = 255;
    }
  }
  v22 = a5;
  v95 = v18;
  v91 = v19;
  v94 = (a9 & v18) >> v19;
  v23 = (a5 + 1) & 0xFFFFFFFE;
  v92 = v17;
  v84 = (a9 & v16) >> v17;
  v85 = (a9 & v20) >> v15;
  v93 = (int)((a6 & 0xFFFFFFFE) - v23) / 2;
  result = (unsigned int)(a2 / 2);
  v25 = (_BYTE *)((int)result + a1);
  v26 = (unsigned int *)(a4 + 4 * v22);
  v86 = v26;
  v90 = v25;
  if ( a8 )
  {
    v27 = v94;
    v28 = (int)(v23 - v22);
    v88 = v28;
    v87 = v11;
    do
    {
      v29 = v25;
      v30 = v26;
      if ( v28 )
      {
        v71 = *v25 & 0xF;
        if ( v71 )
        {
          if ( v71 == 15 )
          {
            *v26 = a9;
          }
          else
          {
            v72 = *v26;
            v73 = (*v26 & v95) >> v91;
            if ( (int)(v27 - v73) < 0 )
              v74 = (char *)&unk_1C02E25D0;
            else
              v74 = (char *)&unk_1C02E2590;
            v75 = 4LL * v71;
            v76 = (v73 << 16) + (v27 - v73) * *(_DWORD *)&v74[v75];
            v77 = (v72 & v16) >> v17;
            v78 = v95 & (HIWORD(v76) << v91);
            if ( (int)(v84 - v77) < 0 )
              v79 = (char *)&unk_1C02E25D0;
            else
              v79 = (char *)&unk_1C02E2590;
            v80 = (v72 & v20) >> v15;
            v81 = v16 & (((v77 << 16) + (v84 - v77) * *(_DWORD *)&v79[v75]) >> 16 << v17) | v78;
            v82 = (char *)&unk_1C02E25D0;
            if ( (int)(v85 - v80) >= 0 )
              v82 = (char *)&unk_1C02E2590;
            v26 = v86;
            v25 = v90;
            *v86 = v20 & (((v80 << 16) + (v85 - v80) * *(_DWORD *)&v82[v75]) >> 16 << v15) | v81;
          }
        }
        v30 = v26 + 1;
        v29 = v25 + 1;
      }
      if ( v93 > 0 )
      {
        v31 = (unsigned int)v93;
        do
        {
          v32 = *v29;
          v33 = (unsigned __int8)*v29 >> 4;
          if ( v33 )
          {
            if ( v33 == 15 )
            {
              v17 = a9;
            }
            else
            {
              v36 = *v30;
              v37 = (*v30 & v95) >> v91;
              v38 = 4LL * v33;
              v39 = &unk_1C02E25D0;
              if ( (int)(v94 - v37) >= 0 )
                v39 = &unk_1C02E2590;
              v40 = v95 & (((v37 << 16) + (v94 - v37) * v39[v33]) >> 16 << v91);
              v41 = (v36 & v16) >> v92;
              v42 = (char *)&unk_1C02E25D0;
              if ( (int)(v84 - v41) >= 0 )
                v42 = (char *)&unk_1C02E2590;
              v43 = (v41 << 16) + (v84 - v41) * *(_DWORD *)&v42[v38];
              v44 = (v36 & v20) >> v15;
              v45 = v16 & (HIWORD(v43) << v92) | v40;
              v46 = (char *)&unk_1C02E25D0;
              if ( (int)(v85 - v44) >= 0 )
                v46 = (char *)&unk_1C02E2590;
              v17 = v20 & (((v44 << 16) + (v85 - v44) * *(_DWORD *)&v46[v38]) >> 16 << v15) | v45;
            }
            *v30 = v17;
            LOBYTE(v17) = v92;
          }
          v34 = v32 & 0xF;
          if ( v34 )
          {
            if ( v34 == 15 )
            {
              v35 = a9;
            }
            else
            {
              v47 = v30[1];
              v48 = (v47 & v95) >> v91;
              v49 = 4LL * v34;
              v50 = &unk_1C02E25D0;
              if ( (int)(v94 - v48) >= 0 )
                v50 = &unk_1C02E2590;
              v51 = v95 & (((v48 << 16) + (v94 - v48) * v50[v34]) >> 16 << v91);
              v52 = (v47 & v16) >> v17;
              v53 = (char *)&unk_1C02E25D0;
              if ( (int)(v84 - v52) >= 0 )
                v53 = (char *)&unk_1C02E2590;
              v54 = (v52 << 16) + (v84 - v52) * *(_DWORD *)&v53[v49];
              v55 = (v47 & v20) >> v15;
              v56 = v16 & (HIWORD(v54) << v17) | v51;
              v57 = (char *)&unk_1C02E25D0;
              if ( (int)(v85 - v55) >= 0 )
                v57 = (char *)&unk_1C02E2590;
              v35 = v20 & (((v55 << 16) + (v85 - v55) * *(_DWORD *)&v57[v49]) >> 16 << v15) | v56;
            }
            v30[1] = v35;
          }
          v30 += 2;
          ++v29;
          --v31;
        }
        while ( v31 );
        v27 = v94;
        v25 = v90;
        v26 = v86;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v58 = (unsigned __int8)*v29 >> 4;
        if ( v58 )
        {
          if ( v58 == 15 )
          {
            v25 = v90;
            v26 = v86;
            *v30 = a9;
          }
          else
          {
            v59 = *v30;
            v60 = (*v30 & v95) >> v91;
            v61 = 4LL * v58;
            v62 = &unk_1C02E25D0;
            if ( (int)(v94 - v60) >= 0 )
              v62 = &unk_1C02E2590;
            v63 = v95 & (((v60 << 16) + (v94 - v60) * v62[v58]) >> 16 << v91);
            v64 = (v59 & v16) >> v17;
            v65 = (char *)&unk_1C02E25D0;
            if ( (int)(v84 - v64) >= 0 )
              v65 = (char *)&unk_1C02E2590;
            v66 = v16 & (((v64 << 16) + (v84 - v64) * *(_DWORD *)&v65[v61]) >> 16 << v17);
            v67 = (v59 & v20) >> v15;
            v68 = v66 | v63;
            v69 = (char *)&unk_1C02E25D0;
            if ( (int)(v85 - v67) >= 0 )
              v69 = (char *)&unk_1C02E2590;
            v27 = v94;
            v70 = (v85 - v67) * *(_DWORD *)&v69[v61];
            v25 = v90;
            v26 = v86;
            *v30 = v20 & (((v67 << 16) + v70) >> 16 << v15) | v68;
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v25 += v87;
      v26 = (unsigned int *)((char *)v26 + a7);
      v28 = v88;
      a8 = result;
      v90 = v25;
      v86 = v26;
    }
    while ( (_DWORD)result );
  }
  return result;
}
