/*
 * XREFs of ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C012783C
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0127388 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bLines(
        struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (**a8)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // r9
  unsigned int v14; // r11d
  __int64 v15; // r13
  unsigned int v16; // edx
  signed int v17; // ecx
  FIX x; // r8d
  FIX v19; // r15d
  FIX y; // r10d
  FIX v21; // esi
  unsigned int v22; // r14d
  unsigned int v23; // r15d
  unsigned int v24; // esi
  int v25; // r8d
  int v26; // r10d
  int v27; // edx
  signed __int64 v28; // r13
  int v29; // r11d
  int v30; // r9d
  signed int v31; // ebx
  signed int v32; // edx
  unsigned int v33; // r9d
  unsigned __int64 v34; // r10
  char *v35; // r8
  int v36; // ebx
  unsigned __int64 v37; // r12
  int v38; // r13d
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  unsigned int v43; // eax
  unsigned int v44; // edx
  unsigned int v45; // r11d
  int v46; // ecx
  int v47; // r8d
  int v48; // r8d
  unsigned int v49; // r11d
  unsigned int v50; // ecx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // r11d
  int v54; // eax
  __int64 v55; // rdx
  int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // eax
  unsigned int v61; // edx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rtt
  int v67; // [rsp+20h] [rbp-2D8h]
  unsigned int v68; // [rsp+28h] [rbp-2D0h]
  unsigned int v69; // [rsp+30h] [rbp-2C8h]
  unsigned int v70; // [rsp+34h] [rbp-2C4h]
  int v71; // [rsp+48h] [rbp-2B0h]
  int v72; // [rsp+4Ch] [rbp-2ACh]
  struct _POINTFIX *v74; // [rsp+70h] [rbp-288h]
  __int64 v75; // [rsp+78h] [rbp-280h]
  __int64 v76; // [rsp+88h] [rbp-270h]
  struct _POINTFIX *v77; // [rsp+E8h] [rbp-210h]
  _BYTE v78[400]; // [rsp+10Ch] [rbp-1ECh] BYREF
  char v79; // [rsp+29Ch] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v80; // [rsp+2A0h] [rbp-58h]
  unsigned int *v81; // [rsp+2A8h] [rbp-50h]

  v12 = a3;
  v74 = a3;
  if ( a1 <= (struct _BMINFO *)&off_1C0324A50 )
  {
LABEL_2:
    v77 = &v12[a5];
    v14 = 0;
    v70 = 0;
    v15 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v16 = 0;
    v69 = 0;
    v72 = 0;
    v17 = 0;
    v68 = 0;
    v80 = a12;
    v81 = a10;
    while ( 1 )
    {
      x = a2->x;
      v19 = v12->x;
      y = a2->y;
      v21 = v12->y;
      v22 = a9;
      if ( v12->x < a2->x )
      {
        x = v12->x;
        v19 = a2->x;
        y = v12->y;
        v21 = a2->y;
        v22 = a9 | 0x20;
      }
      if ( v21 < y )
      {
        y = -y;
        v21 = -v21;
        v22 |= 8u;
      }
      v23 = v19 - x;
      if ( (v23 & 0x80000000) != 0 )
        goto LABEL_27;
      v24 = v21 - y;
      if ( (v24 & 0x80000000) != 0 )
        goto LABEL_27;
      if ( v24 >= v23 )
      {
        if ( v24 == v23 )
        {
          v22 |= 0x10u;
        }
        else
        {
          v43 = v23;
          v23 = v24;
          v24 = v43;
          LOBYTE(v43) = x;
          LOBYTE(x) = y;
          LOBYTE(y) = v43;
          v22 |= 5u;
        }
      }
      v22 |= gaflRound[(v22 >> 2) & 7];
      v25 = x & 0xF;
      v26 = y & 0xF;
      v27 = v26 + 8;
      v28 = (int)v23 * (unsigned __int64)(unsigned int)(v26 + 8) - (int)v24 * (unsigned __int64)(unsigned int)v25;
      if ( (v22 & 0x8000) != 0 )
        --v28;
      v15 = v28 >> 4;
      v75 = v15;
      v76 = ~v15;
      v29 = ((_BYTE)v24 + (_BYTE)v26) & 0xF;
      v30 = ((_BYTE)v23 + (_BYTE)v25) & 0xF;
      v31 = (v23 + v25) >> 4;
      v67 = v22 & 0x20;
      if ( (v22 & 0x20) != 0 )
        break;
      v32 = --v31;
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
      {
        if ( (((_BYTE)v24 + (_BYTE)v26) & 0xF) != 0 )
        {
          if ( (int)abs32(v29 - 8) <= v30 )
            v31 = (v23 + v25) >> 4;
        }
        else
        {
          v31 = (v23 + v25) >> 4;
          if ( v30 - (unsigned int)((v22 & 0x80) != 0) + 8 < 0x10 )
            v31 = v32;
        }
      }
      if ( (v22 & 0x90) != 0x90 )
        goto LABEL_15;
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 && v29 == v30 + 8 )
        --v31;
      if ( v25 && v26 == v25 + 8 )
      {
        v33 = 0;
      }
      else
      {
LABEL_15:
        v33 = 0;
        if ( v25 )
        {
          if ( v26 )
            v33 = (int)abs32(v26 - 8) <= v25;
          else
            LOBYTE(v33) = v25 - (unsigned int)((v22 & 0x80) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v34) = 0;
      if ( v15 >= 0 )
        LODWORD(v34) = (unsigned int)v15 >= v23 - (v24 & -v33);
LABEL_18:
      v72 = v34;
      v16 = v33;
      v69 = v33;
      v17 = v31;
      v68 = v31;
      if ( v31 >= (int)v33 )
      {
        if ( (v22 & 0x40) != 0 )
        {
          v14 = v24;
          v70 = v24;
          goto LABEL_62;
        }
        goto LABEL_20;
      }
      v14 = v70;
LABEL_27:
      while ( (v22 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
LABEL_62:
        v67 = v22 & 0x20;
        if ( (v22 & 0x20) != 0 )
        {
          v33 = v17 - a4->iStop;
          v31 = v17 - a4->iStart;
        }
        else
        {
          v33 = v16 + a4->iStart;
          v31 = v16 + a4->iStop;
        }
        ++a4;
        v24 = v14;
        *((_DWORD *)a6 + 15) = *((_DWORD *)a6 + 16);
        v63 = v15 + v14 * (unsigned __int64)v33;
        if ( v63 >= 0xFFFFFFFF )
          v34 = (v15 + v14 * (unsigned __int64)v33) / v23;
        else
          LODWORD(v34) = (unsigned int)v63 / v23;
LABEL_20:
        if ( (v22 & 0x400) != 0 )
        {
          v44 = *((_DWORD *)a6 + 24);
          v45 = *((_DWORD *)a6 + 25);
          if ( (v22 & 5) != 0 )
          {
            v44 = *((_DWORD *)a6 + 25);
            v45 = *((_DWORD *)a6 + 24);
          }
          if ( v44 == v45 || v24 * (unsigned __int64)v45 <= v23 * (unsigned __int64)v44 )
          {
            *((_DWORD *)a6 + 2) = v44;
            *((_DWORD *)a6 + 3) = 0;
            *((_DWORD *)a6 + 4) = v44;
            v46 = v68 - v69 + 1;
            if ( v67 )
              v47 = v68 - v33 + 1;
            else
              v47 = v33 - v69;
          }
          else
          {
            v64 = v15 + v24 * (unsigned __int64)v68;
            if ( v64 >= 0xFFFFFFFF )
              v65 = (v15 + v24 * (unsigned __int64)v68) / v23;
            else
              LODWORD(v65) = (unsigned int)v64 / v23;
            v44 = v45;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v45;
            *((_DWORD *)a6 + 4) = v45;
            v46 = v65 - v72 + 1;
            if ( v67 )
              v47 = v65 - v34 + 1;
            else
              v47 = v34 - v72;
          }
          v48 = *((_DWORD *)a6 + 15) + v44 * v47;
          *((_DWORD *)a6 + 15) += v44 * v46;
          v49 = *((_DWORD *)a6 + 15);
          v50 = *((_DWORD *)a6 + 14);
          if ( v48 >= v50 )
            v48 %= v50;
          if ( v49 >= v50 )
            *((_DWORD *)a6 + 15) = v49 % v50;
          if ( v67 )
          {
            v48 = -v48;
            if ( v48 < 0 )
              v48 += v50;
            v51 = *((_DWORD *)a6 + 23) == 0;
            v52 = *((_QWORD *)a6 + 9);
          }
          else
          {
            v51 = *((_DWORD *)a6 + 23);
            v52 = *((_QWORD *)a6 + 10);
          }
          *((_DWORD *)a6 + 22) = v51;
          v53 = *((_DWORD *)a6 + 27);
          *((_QWORD *)a6 + 4) = v52 + 4LL * (unsigned int)(v53 - 1);
          *((_QWORD *)a6 + 3) = v52;
          v54 = *((_DWORD *)a6 + 13);
          if ( v48 >= v54 )
          {
            v48 -= v54;
            if ( (v53 & 1) != 0 )
              *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
          }
          v55 = *((_QWORD *)a6 + 3);
          for ( *((_QWORD *)a6 + 5) = v55; ; *((_QWORD *)a6 + 5) = v56 + 1 )
          {
            v56 = (int *)*((_QWORD *)a6 + 5);
            if ( v48 < *v56 )
              break;
            v48 -= *v56;
          }
          v57 = *((_QWORD *)a6 + 5);
          *((_DWORD *)a6 + 12) = *v56 - v48;
          if ( (((_BYTE)v57 - (_BYTE)v55) & 4) != 0 )
            *((_DWORD *)a6 + 22) = *((_DWORD *)a6 + 22) == 0;
        }
        if ( 2 * v24 > v23 )
        {
          LOWORD(v22) = v22 | 2;
          v76 = v15 - v23;
          v24 = v23 - v24;
          LODWORD(v34) = v33 - v34;
        }
        v35 = v78;
        v36 = v31 - v33 + 1;
        LODWORD(v37) = 0;
        v38 = 0;
        v39 = 0;
        v71 = 0;
        if ( v24 )
        {
          v66 = v76 + v23 * (unsigned __int64)(unsigned int)(v34 + 1);
          v37 = v66 % v24;
          v40 = v66 / v24 - v33 + 1;
          v39 = v23 % v24;
          v71 = v23 % v24;
          v38 = v23 / v24;
        }
        else
        {
          v40 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v41 = v36;
          v36 -= v40;
          if ( v36 <= 0 )
            break;
          *(_DWORD *)v35 = v40;
          v35 += 4;
          if ( v35 == &v79 )
          {
            _guard_dispatch_icall_fptr();
            v35 = v78;
            v39 = v71;
          }
          v40 = v38;
          LODWORD(v37) = v39 + v37;
          if ( (unsigned int)v37 >= v24 )
          {
            LODWORD(v37) = v37 - v24;
            v40 = v38 + 1;
          }
        }
        *(_DWORD *)v35 = v41;
        _guard_dispatch_icall_fptr();
        v15 = v75;
        v17 = v68;
        v16 = v69;
        v14 = v70;
      }
      a2 = v74;
      v12 = v74 + 1;
      v74 = v12;
      if ( v12 >= v77 )
        return 1LL;
    }
    if ( (((_BYTE)v24 + (_BYTE)v26) & 0xF) != 0 )
    {
      v27 = v26 + 8;
      if ( v30 + abs32(v29 - 8) > 0x10 )
        ++v31;
    }
    else
    {
      v58 = v31 + 1;
      if ( v30 - (unsigned int)((v22 & 0x80) != 0) + 8 < 0x10 )
        v58 = (v23 + v25) >> 4;
      v31 = v58;
    }
    if ( (v22 & 0x90) == 0x10 )
    {
      if ( (((_BYTE)v24 + (_BYTE)v26) & 0xF) != 0 && v30 == v29 + 8 )
        ++v31;
      if ( v26 && v25 == v27 )
        goto LABEL_84;
    }
    v33 = 1;
    v59 = 0;
    if ( !v26 )
    {
      v60 = v25 - ((v22 & 0x80) != 0) + 8;
      if ( v60 >= 0x10 )
        v59 = v24;
      v33 = 2 - (v60 < 0x10);
      goto LABEL_57;
    }
    if ( v25 + abs32(v26 - 8) > 0x10 )
    {
LABEL_84:
      v59 = v24;
      v33 = 2;
    }
LABEL_57:
    LODWORD(v34) = 0;
    v61 = v15 + v59;
    v62 = (v15 + v59) >> 32;
    if ( v62 >= 0 )
    {
      if ( v62 > 0 || v61 >= 2 * v23 - v24 )
        LODWORD(v34) = 2;
      else
        LODWORD(v34) = v61 >= v23 - v24;
    }
    goto LABEL_18;
  }
  if ( !bUMPDSecurityGateEx() )
  {
    v12 = v74;
    goto LABEL_2;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0LL;
}
