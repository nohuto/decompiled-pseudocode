/*
 * XREFs of vSrcOpaqCopyS1D8 @ 0x1C0270AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

char __fastcall vSrcOpaqCopyS1D8(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r15d
  int v11; // r13d
  int v12; // r14d
  __int64 v13; // r12
  int v14; // edi
  unsigned int v15; // r10d
  _DWORD *v16; // r11
  int v17; // edx
  unsigned __int8 *v18; // rsi
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r13
  _DWORD *v24; // r12
  _DWORD *v25; // r10
  unsigned int v26; // edx
  unsigned __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  int v35; // r10d
  _DWORD *v36; // rcx
  unsigned __int8 *v37; // r9
  _DWORD *v38; // rsi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v41; // r8d
  int v42; // r10d
  int v43; // r11d
  int *v44; // r8
  int *v45; // r15
  unsigned __int8 *v46; // r9
  unsigned int v47; // edx
  __int64 v48; // r8
  char *v49; // r9
  __int64 v50; // r11
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  char v57; // al
  char v58; // al
  char v59; // al
  int v60; // ecx
  char v61; // al
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  int v65; // ecx
  _BYTE *v66; // r8
  unsigned __int8 *v67; // r9
  _BYTE *v68; // r11
  unsigned __int64 v69; // rcx
  int v70; // edx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned __int64 v73; // rax
  int v74; // ecx
  __int64 v76; // [rsp+8h] [rbp-99h]
  unsigned int v77; // [rsp+10h] [rbp-91h]
  __int64 v78; // [rsp+18h] [rbp-89h]
  __int64 v79; // [rsp+20h] [rbp-81h]
  __int64 v82; // [rsp+38h] [rbp-69h]
  _DWORD *v84; // [rsp+48h] [rbp-59h]
  _DWORD v85[2]; // [rsp+58h] [rbp-49h]
  int v86; // [rsp+60h] [rbp-41h]
  int v87; // [rsp+64h] [rbp-3Dh]
  int v88; // [rsp+68h] [rbp-39h]
  int v89; // [rsp+6Ch] [rbp-35h]
  int v90; // [rsp+70h] [rbp-31h]
  int v91; // [rsp+74h] [rbp-2Dh]
  int v92; // [rsp+78h] [rbp-29h]
  int v93; // [rsp+7Ch] [rbp-25h]
  int v94; // [rsp+80h] [rbp-21h]
  int v95; // [rsp+84h] [rbp-1Dh]
  int v96; // [rsp+88h] [rbp-19h]
  int v97; // [rsp+8Ch] [rbp-15h]
  int v98; // [rsp+90h] [rbp-11h]
  int v99; // [rsp+94h] [rbp-Dh]

  v10 = a5;
  v11 = a2;
  v12 = a6;
  v13 = a1;
  v14 = a3;
  v15 = (a5 + 7) & 0xFFFFFFF8;
  v82 = a4;
  v77 = (a6 & 0xFFFFFFF8) - v15;
  v85[0] = ((a10 | (a10 << 8)) << 16) | a10 | (a10 << 8);
  v92 = a9 | (v85[0] << 8);
  v88 = a10 | (v92 << 8);
  v94 = a9 | (v88 << 8);
  v89 = a10 | (v94 << 8);
  v86 = a10 | (v89 << 8);
  v93 = a9 | (v86 << 8);
  v96 = a9 | (v93 << 8);
  v98 = a9 | (v96 << 8);
  v99 = a9 | (v98 << 8);
  v91 = a10 | (v99 << 8);
  v95 = a9 | (v91 << 8);
  v97 = a9 | (v95 << 8);
  v90 = a10 | (v97 << 8);
  v87 = a10 | (v90 << 8);
  v85[1] = a10 | (v87 << 8);
  v16 = (_DWORD *)(a4 + v15);
  v76 = a8 * a7;
  v84 = (_DWORD *)((char *)v16 + v76);
  v17 = a3 - (v77 >> 3);
  v18 = (unsigned __int8 *)(a1 + ((__int64)(v11 + 7) >> 3));
  v19 = a7 - v77;
  if ( (a6 & 0xFFFFFFF8) > v15 )
  {
    v20 = v77 & 0xFFFFFFE0;
    v21 = v19;
    v22 = v17;
    v79 = v19;
    v78 = v17;
    do
    {
      v23 = (_DWORD *)((char *)v16 + v20);
      v24 = (_DWORD *)((char *)v16 + v77);
      v25 = (_DWORD *)((char *)v16 + (v77 & 0xFFFFFFF0));
      if ( v16 != (_DWORD *)((char *)v16 + v20) )
      {
        do
        {
          v26 = v18[1];
          v27 = *v18;
          v28 = v18[2];
          v29 = v18[3];
          v18 += 4;
          *v16 = v85[v27 >> 4];
          v16[1] = v85[v27 & 0xF];
          v16[2] = v85[(unsigned __int64)v26 >> 4];
          v16[3] = v85[v26 & 0xF];
          v16[4] = v85[(unsigned __int64)v28 >> 4];
          v16[5] = v85[v28 & 0xF];
          v16[6] = v85[(unsigned __int64)v29 >> 4];
          v16[7] = v85[v29 & 0xF];
          v16 += 8;
        }
        while ( v16 != v23 );
        v21 = v79;
        v22 = v78;
      }
      while ( v16 != v25 )
      {
        v30 = v18[1];
        v31 = (unsigned __int64)*v18 >> 4;
        v32 = *v18 & 0xF;
        v18 += 2;
        *v16 = v85[v31];
        v16[1] = v85[v32];
        v16[2] = v85[(unsigned __int64)v30 >> 4];
        v16[3] = v85[v30 & 0xF];
        v16 += 4;
      }
      while ( v16 != v24 )
      {
        v33 = *v18++;
        *v16 = v85[(unsigned __int64)v33 >> 4];
        v16[1] = v85[v33 & 0xF];
        v16 += 2;
      }
      v16 = (_DWORD *)((char *)v16 + v21);
      v18 += v22;
    }
    while ( v16 != v84 );
    v14 = a3;
    v12 = a6;
    v10 = a5;
    v11 = a2;
    v13 = a1;
    a4 = v82;
  }
  v34 = v10 & 7;
  if ( (v10 & 7) != 0 )
  {
    if ( ((v10 ^ (v12 - 1)) & 0xFFFFFFFC) == 0 )
    {
      v35 = gTextLeftMask[2 * (v10 & 3)] & gTextRightMask[2 * (v12 & 3)];
      v36 = (_DWORD *)(a4 + (v10 & 0xFFFFFFFFFFFFFFFCuLL));
      v37 = (unsigned __int8 *)(v13 + ((__int64)v11 >> 3));
      v38 = (_DWORD *)((char *)v36 + v76);
      do
      {
        v39 = *v37;
        if ( (unsigned int)v34 >= 4 )
          v40 = v39 & 0xF;
        else
          v40 = v39 >> 4;
        v41 = v85[v40];
        v37 += v14;
        LODWORD(v40) = ~v35 & *v36;
        *v36 = v40 | v35 & v41;
        v36 = (_DWORD *)((char *)v36 + a7);
      }
      while ( v36 != v38 );
      return v40;
    }
    if ( (v10 & 0xFFFFFFF8) == ((v12 - 1) & 0xFFFFFFF8) )
    {
      v42 = gTextRightMask[2 * (v12 & 7)] & gTextLeftMask[2 * v34];
      v43 = dword_1C02F3184[2 * (v12 & 7)] & dword_1C02F31C4[2 * v34];
      v44 = (int *)(a4 + (v10 & 0xFFFFFFFFFFFFFFF8uLL));
      v45 = (int *)((char *)v44 + v76);
      v46 = (unsigned __int8 *)(v13 + ((__int64)v11 >> 3));
      do
      {
        v47 = *v46;
        v46 += v14;
        LODWORD(v40) = v44[1] & ~v43;
        *v44 = ~v42 & *v44 | v42 & v85[(unsigned __int64)v47 >> 4];
        v44[1] = v40 | v43 & v85[v47 & 0xF];
        v44 = (int *)((char *)v44 + a7);
      }
      while ( v44 != v45 );
      return v40;
    }
    v40 = a8 * a7;
    v48 = a4 + (v10 & 0xFFFFFFFFFFFFFFF8uLL);
    v49 = (char *)(v13 + ((__int64)v11 >> 3));
    v50 = v76 + v48;
    v51 = v34 - 1;
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( v55 )
            {
              v56 = v55 - 1;
              if ( v56 )
              {
                if ( v56 != 1 )
                  goto LABEL_46;
                do
                {
                  v57 = *v49;
                  v49 += v14;
                  *(_BYTE *)(v48 + 7) = HIBYTE(v85[v57 & 0xF]);
                  v48 += a7;
                }
                while ( v48 != v50 );
              }
              else
              {
                do
                {
                  v58 = *v49;
                  v49 += v14;
                  *(_WORD *)(v48 + 6) = HIWORD(v85[v58 & 0xF]);
                  v48 += a7;
                }
                while ( v48 != v50 );
              }
            }
            else
            {
              do
              {
                v59 = *v49;
                v49 += v14;
                v60 = v85[v59 & 0xF];
                *(_BYTE *)(v48 + 5) = BYTE1(v60);
                *(_WORD *)(v48 + 6) = HIWORD(v60);
                v48 += a7;
              }
              while ( v48 != v50 );
            }
          }
          else
          {
            do
            {
              v61 = *v49;
              v49 += v14;
              *(_DWORD *)(v48 + 4) = v85[v61 & 0xF];
              v48 += a7;
            }
            while ( v48 != v50 );
          }
        }
        else
        {
          do
          {
            v62 = (unsigned __int8)*v49;
            v49 += v14;
            *(_BYTE *)(v48 + 3) = HIBYTE(v85[(unsigned __int64)v62 >> 4]);
            *(_DWORD *)(v48 + 4) = v85[v62 & 0xF];
            v48 += a7;
          }
          while ( v48 != v50 );
        }
      }
      else
      {
        do
        {
          v63 = (unsigned __int8)*v49;
          v49 += v14;
          *(_WORD *)(v48 + 2) = HIWORD(v85[(unsigned __int64)v63 >> 4]);
          *(_DWORD *)(v48 + 4) = v85[v63 & 0xF];
          v48 += a7;
        }
        while ( v48 != v50 );
      }
    }
    else
    {
      do
      {
        v64 = (unsigned __int8)*v49;
        v49 += v14;
        v65 = v85[(unsigned __int64)v64 >> 4];
        *(_BYTE *)(v48 + 1) = BYTE1(v65);
        *(_DWORD *)(v48 + 4) = v85[v64 & 0xF];
        *(_WORD *)(v48 + 2) = HIWORD(v65);
        v48 += a7;
      }
      while ( v48 != v50 );
    }
  }
  v40 = a8 * a7;
LABEL_46:
  if ( (v12 & 7) != 0 )
  {
    v66 = (_BYTE *)(v82 + (v12 & 0xFFFFFFFFFFFFFFF8uLL));
    v67 = (unsigned __int8 *)(a1 + ((__int64)(v11 + v12 - v10) >> 3));
    v68 = &v66[v40];
    switch ( v12 & 7 )
    {
      case 1:
        do
        {
          v40 = *v67;
          v67 += v14;
          LOBYTE(v40) = v85[v40 >> 4];
          *v66 = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 2:
        do
        {
          v40 = *v67;
          v67 += v14;
          LOWORD(v40) = v85[v40 >> 4];
          *(_WORD *)v66 = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 3:
        do
        {
          v73 = *v67;
          v67 += v14;
          v40 = v73 >> 4;
          v74 = v85[v40];
          *(_WORD *)v66 = v74;
          v66[2] = BYTE2(v74);
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 4:
        do
        {
          v40 = *v67;
          v67 += v14;
          LODWORD(v40) = v85[v40 >> 4];
          *(_DWORD *)v66 = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 5:
        do
        {
          v72 = *v67;
          v67 += v14;
          *(_DWORD *)v66 = v85[(unsigned __int64)v72 >> 4];
          LOBYTE(v40) = v85[v72 & 0xF];
          v66[4] = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 6:
        do
        {
          v71 = *v67;
          v67 += v14;
          *(_DWORD *)v66 = v85[(unsigned __int64)v71 >> 4];
          LOWORD(v40) = v85[v71 & 0xF];
          *((_WORD *)v66 + 2) = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
      case 7:
        do
        {
          v69 = *v67;
          v67 += v14;
          v70 = v85[v69 & 0xF];
          LODWORD(v40) = v85[v69 >> 4];
          *((_WORD *)v66 + 2) = v70;
          v66[6] = BYTE2(v70);
          *(_DWORD *)v66 = v40;
          v66 += a7;
        }
        while ( v66 != v68 );
        break;
    }
  }
  return v40;
}
