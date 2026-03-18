/*
 * XREFs of vSrcTranCopyS4D16 @ 0x1C0253090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // rax
  int v13; // ecx
  int *v14; // rcx
  int v15; // r10d
  int v16; // eax
  int v17; // edi
  int v18; // esi
  int v19; // ebx
  int v20; // ebp
  _WORD *v23; // r12
  unsigned int v24; // r8d
  __int64 result; // rax
  _BYTE *v26; // r14
  int v27; // r8d
  __int64 v28; // rcx
  char *v29; // r15
  _WORD *v30; // r11
  unsigned __int8 v31; // al
  unsigned int v32; // r11d
  int v33; // r9d
  unsigned int v34; // edx
  __int64 v35; // r10
  unsigned int v36; // edx
  _DWORD *v37; // rax
  int v38; // r11d
  _DWORD *v39; // rax
  unsigned int v40; // r11d
  unsigned int v41; // r8d
  int v42; // edx
  _DWORD *v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r8d
  int v46; // r11d
  __int64 v47; // rcx
  char v48; // r12
  unsigned __int8 v49; // al
  __int16 v50; // ax
  int v51; // r9d
  unsigned int v52; // edx
  __int64 v53; // r10
  _DWORD *v54; // rax
  unsigned int v55; // r8d
  _DWORD *v56; // rax
  int v57; // edx
  _DWORD *v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r8d
  _WORD *v61; // r11
  unsigned __int8 v62; // r12
  unsigned int v63; // r12d
  int v64; // r9d
  _DWORD *v65; // rax
  __int64 v66; // r10
  unsigned int v67; // edx
  int v68; // r12d
  _DWORD *v69; // rax
  unsigned int v70; // r8d
  unsigned int v71; // r12d
  int v72; // edx
  _DWORD *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // r8d
  int v76; // r12d
  unsigned __int8 v77; // al
  unsigned int v78; // r15d
  int v79; // r9d
  unsigned int v80; // edx
  __int64 v81; // r10
  _DWORD *v82; // rax
  int v83; // r15d
  _DWORD *v84; // rax
  unsigned int v85; // r15d
  unsigned int v86; // r8d
  int v87; // edx
  _DWORD *v88; // rax
  unsigned int v89; // edx
  unsigned int v90; // r8d
  int v91; // r15d
  unsigned int v92; // [rsp+0h] [rbp-78h]
  unsigned int v93; // [rsp+4h] [rbp-74h]
  __int64 v94; // [rsp+8h] [rbp-70h]
  _WORD *v95; // [rsp+10h] [rbp-68h]
  __int64 v96; // [rsp+28h] [rbp-50h]
  _BYTE *v97; // [rsp+80h] [rbp+8h]
  unsigned int v98; // [rsp+88h] [rbp+10h]
  int v99; // [rsp+88h] [rbp+10h]
  int v101; // [rsp+98h] [rbp+20h]
  int v102; // [rsp+A0h] [rbp+28h]
  unsigned int v103; // [rsp+C0h] [rbp+48h]
  char v104; // [rsp+D0h] [rbp+58h]

  v12 = *(_QWORD *)(a11 + 128);
  if ( !v12 )
    v12 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1824LL);
  v13 = *(_DWORD *)(v12 + 24);
  if ( (v13 & 2) != 0 )
  {
    v14 = *(int **)(v12 + 120);
    v15 = *v14;
    v16 = v14[6];
    v17 = v14[1];
    v18 = v14[7];
    v19 = v14[2];
    v20 = v14[8];
    v101 = *v14;
  }
  else
  {
    v17 = 992;
    LOBYTE(v18) = 5;
    if ( (v13 & 4) != 0 )
    {
      LOBYTE(v16) = 0;
      v15 = 31;
      v101 = 31;
      v19 = 31744;
      LOBYTE(v20) = 10;
    }
    else
    {
      LOBYTE(v16) = 10;
      v15 = 31744;
      v101 = 31744;
      LOBYTE(v20) = 0;
      v19 = 31;
    }
  }
  v104 = v16;
  v103 = (a9 & (unsigned int)v15) >> v16;
  v23 = (_WORD *)(a4 + 2LL * a5);
  v24 = (a5 + 1) & 0xFFFFFFFE;
  v95 = v23;
  v92 = (a9 & (unsigned int)v17) >> v18;
  v93 = (a9 & (unsigned int)v19) >> v20;
  v102 = (int)((a6 & 0xFFFFFFFE) - v24) / 2;
  result = (unsigned int)(a2 / 2);
  v26 = (_BYTE *)((int)result + a1);
  v97 = v26;
  if ( a8 )
  {
    v27 = v24 - a5;
    v28 = v27;
    v96 = v27;
    do
    {
      v29 = v26;
      v30 = v23;
      if ( v28 )
      {
        v31 = *v26 & 0xF;
        if ( v31 )
        {
          if ( v31 == 15 )
          {
            LOWORD(v32) = a9;
          }
          else
          {
            v33 = (unsigned __int16)*v23;
            v34 = v33 & v15;
            v35 = v31;
            v36 = v34 >> v104;
            v37 = &unk_1C02E25D0;
            if ( (int)(v103 - v36) >= 0 )
              v37 = &unk_1C02E2590;
            v38 = v37[v35];
            v39 = &unk_1C02E25D0;
            v40 = v101 & (((v36 << 16) + (v103 - v36) * v38) >> 16 << v104);
            v41 = (v33 & (unsigned int)v17) >> v18;
            if ( (int)(v92 - v41) >= 0 )
              v39 = &unk_1C02E2590;
            v42 = v39[v35];
            v43 = &unk_1C02E25D0;
            v44 = (v41 << 16) + (v92 - v41) * v42;
            v45 = (v33 & (unsigned int)v19) >> v20;
            v46 = v17 & (HIWORD(v44) << v18) | v40;
            if ( (int)(v93 - v45) >= 0 )
              v43 = &unk_1C02E2590;
            v32 = v19 & (((v45 << 16) + (v93 - v45) * v43[v35]) >> 16 << v20) | v46;
          }
          *v23 = v32;
        }
        v30 = v23 + 1;
        v29 = v26 + 1;
      }
      if ( v102 > 0 )
      {
        v47 = (unsigned int)v102;
        v94 = (unsigned int)v102;
        do
        {
          v48 = *v29;
          v49 = (unsigned __int8)*v29 >> 4;
          if ( v49 )
          {
            if ( v49 == 15 )
            {
              v50 = a9;
            }
            else
            {
              v51 = (unsigned __int16)*v30;
              v52 = (v51 & (unsigned int)v101) >> v104;
              v53 = v49;
              v54 = &unk_1C02E25D0;
              if ( (int)(v103 - v52) >= 0 )
                v54 = &unk_1C02E2590;
              v55 = (v51 & (unsigned int)v17) >> v18;
              v98 = v101 & (((v52 << 16) + (v103 - v52) * v54[v53]) >> 16 << v104);
              v56 = &unk_1C02E25D0;
              if ( (int)(v92 - v55) >= 0 )
                v56 = &unk_1C02E2590;
              v57 = v56[v53];
              v58 = &unk_1C02E25D0;
              v59 = (v55 << 16) + (v92 - v55) * v57;
              v60 = (v51 & (unsigned int)v19) >> v20;
              v99 = v17 & (HIWORD(v59) << v18) | v98;
              if ( (int)(v93 - v60) >= 0 )
                v58 = &unk_1C02E2590;
              v47 = v94;
              v50 = v19 & (((v60 << 16) + (v93 - v60) * v58[v53]) >> 16 << v20) | v99;
            }
            *v30 = v50;
          }
          v61 = v30 + 1;
          v62 = v48 & 0xF;
          if ( v62 )
          {
            if ( v62 == 15 )
            {
              LOWORD(v63) = a9;
            }
            else
            {
              v64 = (unsigned __int16)*v61;
              v65 = &unk_1C02E25D0;
              v66 = v62;
              v67 = (v64 & (unsigned int)v101) >> v104;
              if ( (int)(v103 - v67) >= 0 )
                v65 = &unk_1C02E2590;
              v68 = v65[v62];
              v69 = &unk_1C02E25D0;
              v70 = (v64 & (unsigned int)v17) >> v18;
              v71 = v101 & (((v67 << 16) + (v103 - v67) * v68) >> 16 << v104);
              if ( (int)(v92 - v70) >= 0 )
                v69 = &unk_1C02E2590;
              v72 = v69[v66];
              v73 = &unk_1C02E25D0;
              v74 = (v70 << 16) + (v92 - v70) * v72;
              v75 = (v64 & (unsigned int)v19) >> v20;
              v76 = v17 & (HIWORD(v74) << v18) | v71;
              if ( (int)(v93 - v75) >= 0 )
                v73 = &unk_1C02E2590;
              v63 = v19 & (((v75 << 16) + (v93 - v75) * v73[v66]) >> 16 << v20) | v76;
            }
            v47 = v94;
            *v61 = v63;
          }
          v30 = v61 + 1;
          ++v29;
          v94 = --v47;
        }
        while ( v47 );
        v26 = v97;
        v23 = v95;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v77 = (unsigned __int8)*v29 >> 4;
        if ( v77 )
        {
          if ( v77 == 15 )
          {
            LOWORD(v78) = a9;
          }
          else
          {
            v79 = (unsigned __int16)*v30;
            v80 = (v79 & (unsigned int)v101) >> v104;
            v81 = v77;
            v82 = &unk_1C02E25D0;
            if ( (int)(v103 - v80) >= 0 )
              v82 = &unk_1C02E2590;
            v83 = v82[v81];
            v84 = &unk_1C02E25D0;
            v85 = v101 & (((v80 << 16) + (v103 - v80) * v83) >> 16 << v104);
            v86 = (v79 & (unsigned int)v17) >> v18;
            if ( (int)(v92 - v86) >= 0 )
              v84 = &unk_1C02E2590;
            v87 = v84[v81];
            v88 = &unk_1C02E25D0;
            v89 = (v86 << 16) + (v92 - v86) * v87;
            v90 = (v79 & (unsigned int)v19) >> v20;
            v91 = v17 & (HIWORD(v89) << v18) | v85;
            if ( (int)(v93 - v90) >= 0 )
              v88 = &unk_1C02E2590;
            v78 = v19 & (((v90 << 16) + (v93 - v90) * v88[v81]) >> 16 << v20) | v91;
          }
          *v30 = v78;
        }
      }
      v26 += a3;
      result = (unsigned int)(a8 - 1);
      v15 = v101;
      v23 = (_WORD *)((char *)v23 + a7);
      v28 = v96;
      a8 = result;
      v97 = v26;
      v95 = v23;
    }
    while ( (_DWORD)result );
  }
  return result;
}
