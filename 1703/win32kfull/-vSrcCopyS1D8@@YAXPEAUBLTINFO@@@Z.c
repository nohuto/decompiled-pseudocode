/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C00AD5A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  __int64 v3; // rdx
  char *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  char v7; // al
  int v8; // ebx
  int v9; // r14d
  int v10; // eax
  int v11; // esi
  unsigned __int8 v12; // r9
  int v13; // r15d
  int v14; // r12d
  int v15; // ecx
  int v16; // edx
  int v17; // r13d
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // eax
  _DWORD *v21; // r11
  int v22; // ebx
  __int64 v23; // rcx
  char *v24; // r8
  int v25; // eax
  __int64 v26; // r10
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r13
  char v30; // cl
  unsigned __int64 v31; // rax
  BOOL v32; // ebx
  char v33; // r12
  __int64 v34; // rsi
  unsigned __int8 v35; // r13
  unsigned __int8 v36; // al
  char *v37; // r13
  unsigned __int64 v38; // rax
  _BYTE *v39; // rdx
  int v40; // r11d
  _BYTE *v41; // r8
  int v42; // edi
  char v43; // r9
  _BYTE *v44; // r13
  unsigned __int8 v45; // al
  _BYTE *v46; // rdi
  unsigned __int8 v47; // bl
  _BYTE *v48; // rcx
  unsigned __int64 v49; // rax
  _BYTE *v50; // r13
  _BYTE *v51; // rdi
  unsigned __int8 v52; // bl
  _BYTE *v53; // rcx
  unsigned __int64 v54; // rax
  _BYTE *v55; // r13
  unsigned __int8 v56; // bl
  _BYTE *v57; // rdi
  _BYTE *v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // ecx
  int v61; // r11d
  unsigned __int64 v62; // rdx
  int v63; // eax
  _BYTE *v64; // r8
  int v65; // ebx
  unsigned __int8 v66; // r13
  unsigned __int8 v67; // r9
  _BYTE *v68; // r10
  _BYTE *v69; // rcx
  unsigned __int64 v70; // rax
  unsigned __int8 v71; // r14
  __int64 v72; // r10
  __int64 v73; // rcx
  unsigned __int8 v74; // r9
  unsigned __int64 v75; // rax
  unsigned __int8 v76; // [rsp+8h] [rbp-79h]
  _BYTE v77[4]; // [rsp+Ch] [rbp-75h]
  int v78; // [rsp+10h] [rbp-71h]
  int v79; // [rsp+14h] [rbp-6Dh]
  int v80; // [rsp+18h] [rbp-69h]
  int v81; // [rsp+1Ch] [rbp-65h]
  int v82; // [rsp+20h] [rbp-61h]
  __int64 v83; // [rsp+28h] [rbp-59h]
  int v84; // [rsp+30h] [rbp-51h]
  int v85; // [rsp+34h] [rbp-4Dh]
  struct BLTINFO *v86; // [rsp+38h] [rbp-49h]
  int v87; // [rsp+40h] [rbp-41h]
  int v88; // [rsp+48h] [rbp-39h]
  __int64 v89; // [rsp+50h] [rbp-31h]
  _DWORD v90[2]; // [rsp+68h] [rbp-19h]
  int v91; // [rsp+70h] [rbp-11h]
  int v92; // [rsp+74h] [rbp-Dh]
  int v93; // [rsp+78h] [rbp-9h]
  int v94; // [rsp+7Ch] [rbp-5h]
  int v95; // [rsp+80h] [rbp-1h]
  int v96; // [rsp+84h] [rbp+3h]
  int v97; // [rsp+88h] [rbp+7h]
  int v98; // [rsp+8Ch] [rbp+Bh]
  int v99; // [rsp+90h] [rbp+Fh]
  int v100; // [rsp+94h] [rbp+13h]
  int v101; // [rsp+98h] [rbp+17h]
  int v102; // [rsp+9Ch] [rbp+1Bh]
  int v103; // [rsp+A0h] [rbp+1Fh]
  int v104; // [rsp+A4h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v86 = a1;
  v80 = 1;
  v3 = 0LL;
  v4 = *(char **)(v1 + 16);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  do
  {
    v7 = *v4;
    v4 += 4;
    v77[v3++] = v7;
  }
  while ( v3 < 2 );
  v8 = *((_DWORD *)v2 + 12);
  v9 = v8 & 7;
  v85 = v9;
  v10 = *((_DWORD *)v2 + 14);
  v90[0] = ((v5 | (v5 << 8)) << 16) | v5 | (v5 << 8);
  v11 = v10 & 7;
  v84 = v11;
  v97 = v6 | (v90[0] << 8);
  v93 = v5 | (v97 << 8);
  v99 = v6 | (v93 << 8);
  v94 = v5 | (v99 << 8);
  v91 = v5 | (v94 << 8);
  v98 = v6 | (v91 << 8);
  v101 = v6 | (v98 << 8);
  v103 = v6 | (v101 << 8);
  v104 = v6 | (v103 << 8);
  v96 = v5 | (v104 << 8);
  v100 = v6 | (v96 << 8);
  v102 = v6 | (v100 << 8);
  v12 = (v8 & 7) - v11;
  v95 = v5 | (v102 << 8);
  v92 = v5 | (v95 << 8);
  v90[1] = v5 | (v92 << 8);
  if ( v9 < v11 )
    v12 += 8;
  v13 = *((_DWORD *)v2 + 11);
  v14 = *((_DWORD *)v2 + 10);
  v82 = (unsigned __int8)(8 - v12);
  v15 = *((_DWORD *)v2 + 7);
  v16 = v10 >> 3;
  v76 = v12;
  v87 = v13;
  v81 = v14;
  v88 = v10 + v15;
  v17 = (v10 + v15) >> 3;
  v78 = v10 >> 3;
  v79 = v17;
  if ( v17 != v10 >> 3 )
  {
    v18 = v10 + 7;
    LODWORD(v19) = v17 - ((v10 + 7) >> 3);
    v20 = v8 + (-v11 & 7);
    v21 = (_DWORD *)(*((_QWORD *)v2 + 2) + (v18 & 0xFFFFFFFFFFFFFFF8uLL));
    v22 = *((_DWORD *)v2 + 8);
    LODWORD(v23) = v13 - 8 * v19;
    v24 = (char *)(*((_QWORD *)v2 + 1) + ((__int64)v20 >> 3));
    v25 = v14 - v19;
    if ( v12 )
    {
      if ( !v22 )
        goto LABEL_16;
      v33 = v82;
      v19 = (int)v19;
      v83 = (int)v19;
      v34 = v25;
      v35 = v12;
      do
      {
        v36 = *v24 << v35;
        --v22;
        if ( v24 != &v24[v19] )
        {
          v37 = &v24[v19];
          do
          {
            v38 = v36 | ((unsigned __int64)(unsigned __int8)*++v24 >> v33);
            *v21 = v90[v38 >> 4];
            v21[1] = v90[v38 & 0xF];
            v21 += 2;
            v36 = *v24 << v12;
          }
          while ( v24 != v37 );
          v19 = v83;
          v35 = v12;
        }
        v21 = (_DWORD *)((char *)v21 + (int)v23);
        v24 += v34;
      }
      while ( v22 );
      v13 = v87;
      v14 = v81;
    }
    else
    {
      if ( !v22 )
      {
LABEL_16:
        v16 = v78;
        v32 = v80;
        v15 = 8 - v11;
        goto LABEL_17;
      }
      v23 = (int)v23;
      v89 = (int)v23;
      v26 = v25;
      v27 = (int)v19;
      do
      {
        --v22;
        v28 = v27;
        v29 = 0LL;
        if ( v24 > &v24[v27] )
          v28 = 0LL;
        if ( v28 )
        {
          do
          {
            v30 = *v24;
            ++v29;
            v31 = (unsigned __int8)*v24++;
            *v21 = v90[v31 >> 4];
            v21[1] = v90[v30 & 0xF];
            v21 += 2;
          }
          while ( v29 != v28 );
          v23 = v89;
        }
        v21 = (_DWORD *)((char *)v21 + v23);
        v24 += v26;
      }
      while ( v22 );
    }
    v17 = v79;
    v9 = v85;
    v11 = v84;
    v2 = v86;
    goto LABEL_16;
  }
  v32 = v15 + v9 > 8;
LABEL_17:
  if ( v11 | (v17 == v16) )
  {
    v39 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v40 = *((_DWORD *)v2 + 8);
    v41 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v9 <= v11 )
    {
      if ( !v40 )
        goto LABEL_48;
      v55 = (_BYTE *)v15;
      do
      {
        --v40;
        v56 = *v41 << v9;
        v57 = v55;
        v58 = v39;
        if ( v39 > &v55[(_QWORD)v39] )
          v57 = 0LL;
        if ( v57 )
        {
          do
          {
            v59 = v56;
            v56 *= 2;
            *v58++ = v77[v59 >> 7];
          }
          while ( (_BYTE *)(v58 - v39) != v57 );
        }
        v39 += v13;
        v41 += v14;
      }
      while ( v40 );
      goto LABEL_47;
    }
    if ( v32 )
    {
      if ( v40 )
      {
        v42 = v12;
        v43 = v82;
        v80 = v42;
        v44 = (_BYTE *)v15;
        do
        {
          --v40;
          v45 = *v41 << v42;
          v46 = v44;
          v47 = (v45 | (unsigned __int8)(v41[1] >> v43)) << v11;
          v48 = v39;
          if ( v39 > &v44[(_QWORD)v39] )
            v46 = 0LL;
          if ( v46 )
          {
            do
            {
              v49 = v47;
              v47 *= 2;
              *v48++ = v77[v49 >> 7];
            }
            while ( (_BYTE *)(v48 - v39) != v46 );
          }
          LOBYTE(v42) = v80;
          v39 += v13;
          v41 += v14;
        }
        while ( v40 );
LABEL_46:
        v12 = v76;
LABEL_47:
        v2 = v86;
        v14 = v81;
        v17 = v79;
      }
    }
    else if ( v40 )
    {
      v80 = v12;
      v50 = (_BYTE *)v15;
      do
      {
        --v40;
        v51 = v50;
        v52 = *v41 << v12 << v11;
        v53 = v39;
        if ( v39 > &v50[(_QWORD)v39] )
          v51 = 0LL;
        if ( v51 )
        {
          do
          {
            v54 = v52;
            v52 *= 2;
            *v53++ = v77[v54 >> 7];
          }
          while ( (_BYTE *)(v53 - v39) != v51 );
        }
        v39 += v13;
        v41 += v14;
      }
      while ( v40 );
      goto LABEL_46;
    }
LABEL_48:
    v16 = v78;
  }
  if ( (v88 & 7) != 0 && v17 != v16 )
  {
    v60 = *((_DWORD *)v2 + 13) - 1;
    v61 = *((_DWORD *)v2 + 8);
    v62 = *((_QWORD *)v2 + 2) + (v88 & 0xFFFFFFFFFFFFFFF8uLL);
    v63 = ((_BYTE)v88 - 1) & 7;
    v64 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v60 >> 3));
    v65 = v63 + 1;
    if ( (v60 & 7) < v63 )
    {
      if ( v61 )
      {
        v71 = v12;
        do
        {
          --v61;
          v72 = v65;
          v73 = 0LL;
          v74 = (*v64 >> v82) | (*(v64 - 1) << v71);
          if ( v62 > v62 + v65 )
            v72 = 0LL;
          if ( v72 )
          {
            do
            {
              v75 = v74;
              v74 *= 2;
              *(_BYTE *)(v73 + v62) = v77[v75 >> 7];
              ++v73;
            }
            while ( v73 != v72 );
          }
          v62 += v13;
          v64 += v14;
        }
        while ( v61 );
      }
    }
    else if ( v61 )
    {
      v66 = v12;
      do
      {
        --v61;
        v67 = *v64 << v66;
        v68 = (_BYTE *)v65;
        v69 = (_BYTE *)v62;
        if ( v62 > v62 + v65 )
          v68 = 0LL;
        if ( v68 )
        {
          do
          {
            v70 = v67;
            v67 *= 2;
            *v69++ = v77[v70 >> 7];
          }
          while ( &v69[-v62] != v68 );
        }
        v62 += v13;
        v64 += v14;
      }
      while ( v61 );
    }
  }
}
