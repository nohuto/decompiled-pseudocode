/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1800DF5C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // esi
  __int16 v5; // di
  __int16 v6; // ax
  __int64 v7; // rcx
  char v8; // r13
  char v9; // r12
  unsigned int v10; // r10d
  unsigned int v11; // eax
  char *v12; // r13
  char v13; // r8
  __int64 v14; // r15
  __int16 v15; // r12
  __int16 v16; // r9
  int v17; // r11d
  char v18; // cl
  int v19; // edx
  unsigned int v20; // ecx
  _DWORD *v21; // rax
  __int16 v22; // dx
  unsigned int v23; // r12d
  char v24; // r11
  char v25; // r8
  int v26; // r9d
  int v27; // r10d
  __int64 v28; // rax
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rcx
  _WORD *v34; // rax
  __int16 v35; // cx
  __int64 v36; // rcx
  __int16 v37; // ax
  __int16 v38; // ax
  int v39; // r11d
  char v40; // al
  __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  char v43; // dl
  unsigned int v44; // eax
  _DWORD *v45; // rcx
  char v46; // dl
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int16 v49; // r9
  __int128 v50; // xmm1
  __int64 v51; // rcx
  __int16 v52; // ax
  char v53; // r9
  __int64 v54; // r10
  __int128 v55; // xmm0
  char *v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  unsigned __int16 v59; // dx
  __int64 v60; // r10
  unsigned __int16 v61; // dx
  _OWORD *v62; // rdx
  int *v63; // rcx
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int64 v74; // rcx
  __int64 v76; // r9
  __int64 v77; // rax
  __int16 v78; // cx
  __int64 v79; // rcx
  unsigned __int8 v80; // r10
  unsigned int v81; // ecx
  unsigned int j; // r9d
  unsigned __int64 v83; // r8
  __int16 v84; // dx
  int v85; // eax
  __int64 v86; // rcx
  unsigned __int8 v87; // r10
  unsigned int v88; // ecx
  unsigned int i; // r9d
  unsigned __int64 v90; // r8
  __int16 v91; // ax
  int v92; // eax
  __int16 v93; // dx
  char v94; // [rsp+20h] [rbp-E0h]
  char v95; // [rsp+21h] [rbp-DFh]
  char v96; // [rsp+22h] [rbp-DEh]
  char v97; // [rsp+23h] [rbp-DDh]
  unsigned int v98; // [rsp+24h] [rbp-DCh]
  __int16 v99; // [rsp+28h] [rbp-D8h]
  char v100; // [rsp+2Ch] [rbp-D4h]
  unsigned int v101; // [rsp+30h] [rbp-D0h]
  int v102; // [rsp+40h] [rbp-C0h] BYREF
  int v103; // [rsp+44h] [rbp-BCh]
  int v104; // [rsp+50h] [rbp-B0h]
  __int16 v105; // [rsp+55h] [rbp-ABh]
  unsigned __int8 v106; // [rsp+57h] [rbp-A9h]
  __int16 v107; // [rsp+58h] [rbp-A8h]
  __int16 v108; // [rsp+5Ah] [rbp-A6h]
  __int16 v109; // [rsp+5Ch] [rbp-A4h]
  __int16 v110; // [rsp+5Eh] [rbp-A2h]
  __int16 v111; // [rsp+60h] [rbp-A0h]
  _WORD v112[279]; // [rsp+62h] [rbp-9Eh]
  _QWORD v113[2]; // [rsp+290h] [rbp+190h]
  int v114; // [rsp+2A0h] [rbp+1A0h]

  v4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return v4;
  memset_0(&v102, 0, 0x248uLL);
  v97 = 0;
  v100 = 0;
  v5 = 1;
  if ( *((_BYTE *)a2 + 512) )
  {
    if ( *((_DWORD *)a2 + 12) == 1 && !*((_BYTE *)this + 712) )
    {
      v104 = *((_DWORD *)this + 30);
      v103 = *((_DWORD *)a2 + 2);
      v105 = 0;
      v107 = *((_WORD *)a2 + 28);
      v109 = *((_WORD *)a2 + 32);
      v110 = *((_WORD *)a2 + 34);
      v111 = *((_WORD *)a2 + 36);
      v6 = *((_WORD *)a2 + 38);
      v108 = 5;
      v7 = *((_QWORD *)this + 3);
      v112[0] = v6;
      v102 = 327760;
      v106 = 1;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v102);
      ++*((_DWORD *)this + 30);
      return v4;
    }
    return (unsigned int)-2147418113;
  }
  v8 = 0;
  v95 = 0;
  v9 = 0;
  v94 = 0;
  v10 = 0;
  v98 = 0;
  v11 = 0;
  v101 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v12 = (char *)this + 36;
    while ( 1 )
    {
      v13 = 0;
      v14 = 32LL * v11;
      v15 = 0;
      v16 = 0;
      v96 = 0;
      if ( (*(_BYTE *)a2 & 2) != 0 && (*((_BYTE *)a2 + 376) & 0x10) == 0 )
        *(_DWORD *)((char *)a2 + v14 + 60) &= ~2u;
      v17 = *(_DWORD *)((char *)a2 + v14 + 60);
      if ( (v17 & 1) != 0 && !*((_BYTE *)this + 32) )
      {
        ++v95;
        v16 = 8;
      }
      v18 = v94 + 1;
      if ( (v17 & 2) == 0 )
        v18 = v94;
      v19 = *(_DWORD *)((char *)a2 + v14 + 56);
      v94 = v18;
      if ( v19 != *((_DWORD *)this + 29) )
      {
        v20 = 0;
        v21 = (_DWORD *)((char *)this + 36);
        while ( *v21 != v19 )
        {
          ++v20;
          v21 += 2;
          if ( v20 >= 0xA )
            goto LABEL_21;
        }
        v30 = (_DWORD *)((char *)this + 36);
        v31 = 0LL;
        while ( *v30 != v19 )
        {
          v31 = (unsigned int)(v31 + 1);
          v30 += 2;
          if ( (unsigned int)v31 >= 0xA )
          {
            v4 = -2147467259;
            goto LABEL_95;
          }
        }
        v15 = *(_WORD *)&v12[8 * v31 + 4];
        v4 = 0;
        if ( !*((_BYTE *)this + 712) || (v32 = 0, !*((_BYTE *)this + 151)) )
        {
LABEL_43:
          v4 = -2147418113;
          goto LABEL_95;
        }
        v33 = 0LL;
        v34 = (_WORD *)((char *)this + 152);
        while ( v15 != *v34 )
        {
          ++v32;
          ++v33;
          v34 += 28;
          if ( v32 >= *((unsigned __int8 *)this + 151) )
            goto LABEL_43;
        }
        v35 = *((_WORD *)this + 28 * v33 + 77);
        if ( *((_BYTE *)this + 32) )
        {
          if ( (v35 & 4) != 0 )
            goto LABEL_43;
        }
        else if ( (v35 & 8) == 0 )
        {
          goto LABEL_43;
        }
        v36 = 56LL * v32;
        v37 = *(_WORD *)((char *)this + v36 + 154);
        if ( (v17 & 2) != 0 )
        {
          if ( (v37 & 1) != 0 || (v37 & 2) != 0 )
            v38 = 2;
          else
            v38 = 1;
          v16 |= v38;
        }
        else if ( (v37 & 1) != 0 || (v37 & 2) != 0 )
        {
          v16 |= 4u;
        }
        v39 = *(_DWORD *)((_BYTE *)a2 + v14 + 60) & 4;
        v40 = v100;
        if ( v39 )
          v40 = 1;
        *(_WORD *)((char *)this + v36 + 170) = 1;
        v100 = v40;
        v22 = v16 | 0x2000;
        if ( !v39 )
          v22 = v16;
        goto LABEL_69;
      }
LABEL_21:
      if ( (v17 & 2) == 0 )
      {
        v13 = *((_BYTE *)this + 32);
        v96 = v13;
      }
      v22 = v16 | 1;
      if ( (v17 & 2) == 0 )
        v22 = v16;
      if ( !v13 )
      {
        v23 = 0;
        v99 = *((_WORD *)this + 62);
        v24 = 0;
        v25 = 0;
        *((_WORD *)this + 62) = v99 + 1;
        v26 = *(_DWORD *)((char *)a2 + v14 + 56);
        v27 = *((_DWORD *)this + 29);
        if ( v26 == v27 )
        {
          v4 = -2147024809;
          goto LABEL_95;
        }
        v28 = 0LL;
        v29 = (_DWORD *)((char *)this + 36);
        while ( *v29 != v26 )
        {
          if ( !v25 && *v29 == v27 )
          {
            v23 = v28;
            v25 = 1;
          }
          v28 = (unsigned int)(v28 + 1);
          v29 += 2;
          if ( (unsigned int)v28 >= 0xA )
            goto LABEL_63;
        }
        *(_WORD *)&v12[8 * v28 + 4] = v99;
        v24 = 1;
LABEL_63:
        v4 = 0;
        if ( v24 )
          goto LABEL_67;
        if ( !v25 )
        {
          v4 = -2147467259;
LABEL_67:
          if ( (v4 & 0x80000000) != 0 )
            goto LABEL_95;
          v15 = v99;
          goto LABEL_69;
        }
        v41 = v23;
        v15 = v99;
        *(_DWORD *)&v12[8 * v41] = *(_DWORD *)((char *)a2 + v14 + 56);
        *(_WORD *)&v12[8 * v41 + 4] = v99;
      }
LABEL_69:
      if ( v96 )
      {
        v10 = v98;
      }
      else
      {
        v42 = 56LL * v98;
        v10 = ++v98;
        *(__int16 *)((char *)&v109 + v42) = *(_WORD *)((char *)a2 + v14 + 64);
        *(__int16 *)((char *)&v110 + v42) = *(_WORD *)((char *)a2 + v14 + 68);
        v112[v42 / 2 - 1] = *(_WORD *)((char *)a2 + v14 + 72);
        v112[v42 / 2] = *(_WORD *)((char *)a2 + v14 + 76);
        *(__int16 *)((char *)&v107 + v42) = v15;
        *(__int16 *)((char *)&v108 + v42) = v22;
        if ( (*((_BYTE *)a2 + v14 + 60) & 1) == 0 || *((_BYTE *)this + 32) && (*((_BYTE *)a2 + v14 + 60) & 2) == 0 )
        {
          v43 = 0;
          v44 = 0;
          v45 = (_DWORD *)((char *)this + 36);
          while ( *v45 != *(_DWORD *)((char *)a2 + v14 + 56) )
          {
            ++v44;
            v45 += 2;
            if ( v44 >= 0xA )
              goto LABEL_78;
          }
          v43 = 1;
          *(_DWORD *)&v12[8 * v44] = *((_DWORD *)this + 29);
LABEL_78:
          v4 = v43 == 0 ? 0x80004005 : 0;
          if ( !v43 )
            goto LABEL_95;
        }
      }
      v11 = v101 + 1;
      v101 = v11;
      if ( v11 >= *((_DWORD *)a2 + 12) )
      {
        v9 = v94;
        v8 = v95;
        break;
      }
    }
  }
  v46 = *((_BYTE *)this + 712);
  if ( !v46 || (v47 = 0, !*((_BYTE *)this + 151)) )
  {
LABEL_99:
    v57 = 0LL;
    v58 = *((_DWORD *)this + 30);
    v103 = *((_DWORD *)a2 + 2);
    v104 = v58;
    LOBYTE(v105) = v8;
    HIBYTE(v105) = v9;
    v106 = v98;
    v102 = (unsigned __int16)(56 * (v98 - 1) + 80);
    if ( v46 )
    {
      if ( *((_BYTE *)this + 32) || (v59 = 256, (*((_WORD *)this + 65) & 0x100) == 0) )
      {
        v59 = 0;
        if ( !v9 )
        {
          if ( !v8 )
          {
            v60 = 4LL;
            *((_BYTE *)this + 712) = 0;
            HIWORD(v102) = 4;
            v57 = 4LL;
            *((_DWORD *)this + 30) = v58 + 1;
            v59 = 4;
            *((_WORD *)this + 62) = 0;
            goto LABEL_108;
          }
          v86 = *((_QWORD *)this + 3);
          HIWORD(v102) = 4;
          (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v86 + 24LL))(v86, &v102, 0LL);
          v87 = v106;
          v88 = 0;
          for ( i = 0; i < v87; ++i )
          {
            v90 = 56LL * v88;
            v91 = *(&v108 + 28 * i);
            if ( (v91 & 8) != 0 )
            {
              *(&v108 + 28 * v88++) = v91 & 0xFFFB;
              *(__int16 *)((char *)&v107 + v90) = *(&v107 + 28 * i);
              *(__int16 *)((char *)&v109 + v90) = *(&v109 + 28 * i);
              *(__int16 *)((char *)&v110 + v90) = *(&v110 + 28 * i);
              v112[v90 / 2 - 1] = v112[28 * i - 1];
              v112[v90 / 2] = v112[28 * i];
              v87 = v106;
            }
          }
          v92 = *((_DWORD *)this + 30) + 1;
          v106 = v88;
          v93 = HIWORD(v102) & 0xFFFB;
          *((_DWORD *)this + 30) = v92;
          v104 = v92;
          v59 = v93 | 0x101;
          v57 = v59;
          HIWORD(v102) = v59;
          LOWORD(v102) = 56 * (v88 - 1) + 80;
        }
      }
      else
      {
        if ( v9 )
        {
          v76 = 0LL;
          v113[0] = 0LL;
          v113[1] = 0LL;
          v114 = 0;
          if ( (_BYTE)v98 )
          {
            do
            {
              v77 = (unsigned int)v76;
              v76 = (unsigned int)(v76 + 1);
              v78 = *(&v108 + 28 * v77);
              *((_WORD *)v113 + v77) = v78;
              *(&v108 + 28 * v77) = v78 & 0xFFFE;
            }
            while ( (unsigned int)v76 < v106 );
            v57 = HIWORD(v102);
          }
          v79 = *((_QWORD *)this + 3);
          LOWORD(v57) = v57 | 0x104;
          HIBYTE(v105) = 0;
          HIWORD(v102) = v57;
          (*(void (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)v79 + 24LL))(v79, &v102, v57, v76);
          v80 = v106;
          v81 = 0;
          for ( j = 0; j < v80; ++j )
          {
            v83 = 56LL * v81;
            if ( (*(_BYTE *)(&v108 + 28 * j) & 8) != 0 )
            {
              ++v81;
              *(__int16 *)((char *)&v108 + v83) = *((_WORD *)v113 + j);
              *(__int16 *)((char *)&v107 + v83) = *(&v107 + 28 * j);
              *(__int16 *)((char *)&v109 + v83) = *(&v109 + 28 * j);
              *(__int16 *)((char *)&v110 + v83) = *(&v110 + 28 * j);
              v112[v83 / 2 - 1] = v112[28 * j - 1];
              v112[v83 / 2] = v112[28 * j];
              v80 = v106;
            }
          }
          v84 = HIWORD(v102);
          v85 = *((_DWORD *)this + 30) + 1;
          v106 = v81;
          *((_DWORD *)this + 30) = v85;
          v104 = v85;
          HIBYTE(v105) = v9;
          v59 = v84 & 0xFEFA | 1;
          LOWORD(v102) = 56 * (v81 - 1) + 80;
        }
        else if ( !v8 )
        {
          *((_BYTE *)this + 712) = 0;
          *((_DWORD *)this + 30) = v58 + 1;
          v59 = 260;
          *((_WORD *)this + 62) = 0;
        }
        v57 = v59;
        HIWORD(v102) = v59;
      }
    }
    else
    {
      *((_BYTE *)this + 712) = 1;
      if ( v9 )
      {
        v57 = 1LL;
        HIWORD(v102) = 1;
      }
      else if ( v8 )
      {
        v57 = 257LL;
        HIWORD(v102) = 257;
        v5 = 257;
      }
      else
      {
        if ( !*((_BYTE *)this + 32) )
          return (unsigned int)-2147418113;
        v97 = 1;
        v5 = 0;
        *((_BYTE *)this + 712) = 0;
      }
      v59 = v5;
    }
    v60 = 4LL;
LABEL_108:
    if ( v100 )
    {
      v61 = v59 | 0x8000;
      v57 = v61;
      HIWORD(v102) = v61;
    }
    if ( (*(_BYTE *)a2 & 0x20) != 0 )
    {
      LOWORD(v57) = v57 | 0x1000;
      HIWORD(v102) = v57;
    }
    if ( !v97 )
    {
      v62 = (_OWORD *)((char *)this + 128);
      v63 = &v102;
      do
      {
        v64 = *((_OWORD *)v63 + 1);
        *v62 = *(_OWORD *)v63;
        v65 = *((_OWORD *)v63 + 2);
        v62[1] = v64;
        v66 = *((_OWORD *)v63 + 3);
        v62[2] = v65;
        v67 = *((_OWORD *)v63 + 4);
        v62[3] = v66;
        v68 = *((_OWORD *)v63 + 5);
        v62[4] = v67;
        v69 = *((_OWORD *)v63 + 6);
        v62[5] = v68;
        v70 = *((_OWORD *)v63 + 7);
        v63 += 32;
        v62[6] = v69;
        v62 += 8;
        *(v62 - 1) = v70;
        --v60;
      }
      while ( v60 );
      v71 = *((_OWORD *)v63 + 1);
      *v62 = *(_OWORD *)v63;
      v72 = *((_OWORD *)v63 + 2);
      v62[1] = v71;
      v73 = *((_OWORD *)v63 + 3);
      v74 = *((_QWORD *)v63 + 8);
      v62[2] = v72;
      v62[3] = v73;
      *((_QWORD *)v62 + 8) = v74;
      (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        &v102,
        v57);
    }
    return v4;
  }
  while ( 1 )
  {
    v48 = 56LL * v47;
    v49 = *(_WORD *)((char *)this + v48 + 154);
    if ( (v49 & 0xB) != 0 && *(_WORD *)((char *)this + v48 + 170) != 1 )
    {
      v50 = *(_OWORD *)((char *)this + v48 + 168);
      v51 = 28LL * v10;
      v52 = (v49 & 3) != 0 ? 4 : 0;
      v98 = v10 + 1;
      *(_OWORD *)((char *)&v107 + v51 * 2) = *(_OWORD *)((char *)this + v48 + 152);
      v53 = 0;
      v54 = 10LL;
      v55 = *(_OWORD *)((char *)this + v48 + 184);
      *(_OWORD *)&v112[v51 + 3] = v50;
      *(_QWORD *)&v50 = *(_QWORD *)((char *)this + v48 + 200);
      *(_OWORD *)&v112[v51 + 11] = v55;
      *(_QWORD *)&v112[v51 + 19] = v50;
      *(__int16 *)((char *)&v108 + v51 * 2) = v52;
      v56 = (char *)this + 36;
      do
      {
        if ( *((_WORD *)v56 + 2) == *(_WORD *)((char *)this + v48 + 152) )
        {
          v53 = 1;
          *(_DWORD *)v56 = *((_DWORD *)this + 29);
        }
        v56 += 8;
        --v54;
      }
      while ( v54 );
      v4 = v53 == 0 ? 0x80004005 : 0;
      if ( !v53 )
        break;
    }
    if ( ++v47 >= *((unsigned __int8 *)this + 151) )
    {
      v46 = *((_BYTE *)this + 712);
      goto LABEL_99;
    }
    v10 = v98;
  }
LABEL_95:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v4;
}
