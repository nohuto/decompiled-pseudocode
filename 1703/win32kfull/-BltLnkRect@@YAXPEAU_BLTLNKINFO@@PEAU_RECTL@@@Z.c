/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00A9FD0
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02B6FB4 (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02B7054 (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02B70FC (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  int v4; // ecx
  char *v5; // r12
  unsigned __int8 *v6; // rsi
  LONG top; // r8d
  int v8; // ebx
  LONG left; // edx
  unsigned int v10; // r15d
  __int64 v11; // r13
  int v12; // r11d
  __int64 v13; // r10
  int v14; // r14d
  int v15; // r10d
  __int64 v16; // r11
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // r11d
  char v21; // dl
  int v22; // r13d
  __int64 v23; // r12
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  void (__fastcall *v31)(unsigned __int8 *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // rax
  int v32; // eax
  unsigned int v33; // r8d
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  unsigned int v39; // eax
  unsigned __int8 v40; // r8
  void (__fastcall *v41)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // rax
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // r11d
  int v50; // r11d
  int v51; // r11d
  int v52; // r11d
  unsigned int n; // ecx
  char *v54; // rcx
  unsigned int m; // edx
  int v56; // edx
  unsigned int k; // ecx
  char *v58; // rcx
  unsigned int j; // r8d
  int v60; // ebx
  int v63; // r13d
  __int64 i; // rdx
  unsigned int v65; // r9d
  __int64 v66; // r8
  char *v67; // rcx
  unsigned int v68; // r9d
  int v69; // [rsp+40h] [rbp-658h]
  int v70; // [rsp+44h] [rbp-654h]
  int v71; // [rsp+48h] [rbp-650h]
  unsigned int v72; // [rsp+4Ch] [rbp-64Ch]
  unsigned int v73; // [rsp+50h] [rbp-648h]
  unsigned int v74; // [rsp+54h] [rbp-644h]
  LONG bottom; // [rsp+68h] [rbp-630h]
  int v76; // [rsp+68h] [rbp-630h]
  unsigned int v77; // [rsp+68h] [rbp-630h]
  void (__fastcall *v78)(struct BLTINFO *, unsigned int, unsigned int *, unsigned __int8); // [rsp+68h] [rbp-630h]
  int v79; // [rsp+68h] [rbp-630h]
  int v80; // [rsp+68h] [rbp-630h]
  unsigned int v81; // [rsp+70h] [rbp-628h]
  unsigned int v82; // [rsp+74h] [rbp-624h]
  unsigned int v83; // [rsp+78h] [rbp-620h]
  __int64 v84; // [rsp+80h] [rbp-618h]
  int v85; // [rsp+88h] [rbp-610h]
  int v86; // [rsp+A0h] [rbp-5F8h]
  void (* near *v87)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5F0h]
  void (* near *v88)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5F0h]
  unsigned int v89; // [rsp+A8h] [rbp-5F0h]
  void (* near *v90)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5F0h]
  void (* near *v91)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+A8h] [rbp-5F0h]
  void (*v92)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *); // [rsp+B0h] [rbp-5E8h]
  unsigned int v93; // [rsp+B8h] [rbp-5E0h]
  void (__fastcall *v94)(unsigned __int8 *, unsigned int, unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [rsp+C0h] [rbp-5D8h]
  __int64 v95; // [rsp+C8h] [rbp-5D0h] BYREF
  __int64 v96; // [rsp+D0h] [rbp-5C8h]
  int v97; // [rsp+D8h] [rbp-5C0h]
  int v98; // [rsp+DCh] [rbp-5BCh]
  unsigned int v99; // [rsp+E0h] [rbp-5B8h]
  unsigned int v100; // [rsp+E4h] [rbp-5B4h]
  int v101; // [rsp+E8h] [rbp-5B0h]
  char v102; // [rsp+ECh] [rbp-5ACh]
  void (* near *v103)(struct BLTINFO *); // [rsp+F0h] [rbp-5A8h]
  void (* near *v104)(struct BLTINFO *); // [rsp+F8h] [rbp-5A0h]
  void (* near *v105)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+100h] [rbp-598h]
  __int64 v106; // [rsp+108h] [rbp-590h]
  void (*v107)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [rsp+110h] [rbp-588h]
  XLATEOBJ *v108; // [rsp+120h] [rbp-578h] BYREF
  char *v109; // [rsp+128h] [rbp-570h]
  __int64 v110; // [rsp+130h] [rbp-568h]
  int v111; // [rsp+138h] [rbp-560h]
  unsigned int v112; // [rsp+13Ch] [rbp-55Ch]
  int v113; // [rsp+140h] [rbp-558h]
  int v114; // [rsp+144h] [rbp-554h]
  int v115; // [rsp+148h] [rbp-550h]
  int v116; // [rsp+14Ch] [rbp-54Ch]
  unsigned int v117; // [rsp+150h] [rbp-548h]
  unsigned int v118; // [rsp+154h] [rbp-544h]
  LONG v119; // [rsp+158h] [rbp-540h]
  int v120; // [rsp+15Ch] [rbp-53Ch]
  int v121; // [rsp+160h] [rbp-538h]
  __int64 v122; // [rsp+1C0h] [rbp-4D8h] BYREF
  char *v123; // [rsp+1C8h] [rbp-4D0h]
  char *v124; // [rsp+1D0h] [rbp-4C8h]
  int v125; // [rsp+1D8h] [rbp-4C0h]
  unsigned int v126; // [rsp+1DCh] [rbp-4BCh]
  int v127; // [rsp+1E0h] [rbp-4B8h]
  int v128; // [rsp+1E4h] [rbp-4B4h]
  int v129; // [rsp+1E8h] [rbp-4B0h]
  int v130; // [rsp+1ECh] [rbp-4ACh]
  int v131; // [rsp+1F0h] [rbp-4A8h]
  int v132; // [rsp+1F4h] [rbp-4A4h]
  unsigned int v133; // [rsp+1F8h] [rbp-4A0h]
  int v134; // [rsp+1FCh] [rbp-49Ch]
  int v135; // [rsp+200h] [rbp-498h]
  _DWORD v136[64]; // [rsp+260h] [rbp-438h] BYREF
  _DWORD v137[64]; // [rsp+360h] [rbp-338h] BYREF
  _DWORD v138[64]; // [rsp+460h] [rbp-238h] BYREF
  _DWORD v139[64]; // [rsp+560h] [rbp-138h] BYREF

  v4 = 0;
  v82 = 0;
  v135 = 0;
  v121 = 0;
  v104 = 0LL;
  v103 = 0LL;
  v94 = 0LL;
  v92 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v74 = 0;
  v86 = 0;
  v93 = 0;
  bottom = a2->bottom;
  top = a2->top;
  v8 = bottom - top;
  left = a2->left;
  v10 = a2->right - left;
  v11 = *((_QWORD *)a1 + 2);
  v106 = v11;
  v12 = *(_DWORD *)(v11 + 96);
  switch ( v12 )
  {
    case 6:
      v74 = left;
      v73 = v10;
      v86 = 4;
LABEL_3:
      v82 = v4;
LABEL_4:
      v81 = v4;
      break;
    case 1:
      v74 = left >> 5;
      v82 = (left >> 3) & 3;
      v4 = left & 0x1F;
      v73 = (v4 + v10 + 31) >> 5;
      goto LABEL_4;
    case 2:
      v74 = left >> 3;
      v82 = (left >> 1) & 3;
      v4 = left & 7;
      v73 = (v4 + v10 + 7) >> 3;
      goto LABEL_4;
    case 3:
      v74 = left >> 2;
      v4 = left & 3;
      v73 = (v4 + v10 + 3) >> 2;
      v86 = 1;
      goto LABEL_3;
    case 4:
      v74 = left >> 1;
      v4 = left & 1;
      v82 = 2 * v4;
      v73 = (v4 + v10 + 1) >> 1;
      v86 = 2;
      goto LABEL_4;
    case 5:
      v74 = (3 * left) >> 2;
      v82 = -left & 3;
      v81 = 0;
      v93 = v82;
      v86 = 3;
      v73 = (v82 + 2 * (v10 + 1) + v10 + 1) >> 2;
      break;
  }
  v13 = *((_QWORD *)a1 + 13);
  if ( v13 )
  {
    if ( v12 == 6 )
    {
      v83 = 4 * *((_DWORD *)a1 + 39);
      v28 = 4 * *((_DWORD *)a1 + 41);
      v29 = 4 * left;
    }
    else
    {
      v49 = v12 - 1;
      if ( !v49 )
      {
        v83 = *((_DWORD *)a1 + 39);
        v72 = left - *((_DWORD *)a1 + 41);
        v31 = BltLnkReadPat1;
        goto LABEL_67;
      }
      v50 = v49 - 1;
      if ( !v50 )
      {
        v83 = *((_DWORD *)a1 + 39);
        v72 = left - *((_DWORD *)a1 + 41);
        v31 = BltLnkReadPat4;
        goto LABEL_67;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        v83 = *((_DWORD *)a1 + 39);
        v72 = left - *((_DWORD *)a1 + 41);
        goto LABEL_66;
      }
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 != 1 )
          goto LABEL_68;
        v83 = 3 * *((_DWORD *)a1 + 39);
        v30 = 3 * (left - *((_DWORD *)a1 + 41));
        goto LABEL_65;
      }
      v83 = 2 * *((_DWORD *)a1 + 39);
      v28 = 2 * *((_DWORD *)a1 + 41);
      v29 = 2 * left;
    }
    v30 = v29 - v28;
LABEL_65:
    v72 = v30;
LABEL_66:
    v31 = BltLnkReadPat;
LABEL_67:
    v94 = v31;
LABEL_68:
    if ( v72 >= v83 )
      v72 %= v83;
    v32 = *((_DWORD *)a1 + 40);
    v85 = v32;
    v14 = top - *((_DWORD *)a1 + 42);
    if ( *((int *)a1 + 19) < 0 )
      v14 = v8 + v14 - 1;
    if ( v14 >= v32 )
    {
      v14 %= v32;
    }
    else if ( v14 < 0 )
    {
      v14 = v32 - ~v14 % v32 - 1;
    }
    v6 = (unsigned __int8 *)(v13 + v14 * *((_DWORD *)a1 + 30));
    goto LABEL_7;
  }
  v72 = *((_DWORD *)a1 + 38);
  v14 = v71;
LABEL_7:
  v15 = *((_DWORD *)a1 + 19);
  if ( v15 <= 0 )
    v84 = *((_QWORD *)a1 + 11) + *((_DWORD *)a1 + 29) * (bottom - 1);
  else
    v84 = *((_QWORD *)a1 + 11) + top * *((_DWORD *)a1 + 29);
  v16 = *((_QWORD *)a1 + 10);
  if ( v16 )
  {
    v122 = *((_QWORD *)a1 + 6);
    v17 = top + *((_DWORD *)a1 + 37) - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 52) = v17;
    v18 = a2->left + *((_DWORD *)a1 + 36) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 49) = v18;
    *((_DWORD *)a1 + 50) = v18 + v10;
    if ( v15 <= 0 )
      v19 = *((_DWORD *)a1 + 28) * (v17 + v8 - 1);
    else
      v19 = v17 * *((_DWORD *)a1 + 28);
    v5 = (char *)(v19 + v16);
  }
  v20 = *((_DWORD *)a1 + 58);
  if ( v20 )
  {
    v33 = a2->left + *((_DWORD *)a1 + 45) - *(_DWORD *)a1;
    v34 = a2->top + *((_DWORD *)a1 + 46) - *((_DWORD *)a1 + 1);
    v70 = v34;
    if ( v15 < 0 )
    {
      v34 = v8 + v34 - 1;
      v70 = v34;
    }
    v35 = *((_DWORD *)a1 + 43);
    v77 = v35;
    if ( v33 >= v35 )
    {
      v33 %= v35;
      v34 = v70;
    }
    v36 = *((_DWORD *)a1 + 44);
    if ( v34 >= v36 )
    {
      v70 = v34 % v36;
    }
    else if ( v34 < 0 )
    {
      v70 = v36 - ~v34 % v36 - 1;
    }
    v96 = *((_QWORD *)a1 + 12);
    v95 = v96 + v70 * *((_DWORD *)a1 + 31);
    v100 = v33;
    v99 = v77;
    v98 = v70;
    v97 = v36;
    v102 = *((_BYTE *)a1 + 188);
    v101 = *((_DWORD *)a1 + 35);
    v37 = *(_DWORD *)(v11 + 96);
    if ( v37 == 6 )
    {
      v92 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk32;
    }
    else
    {
      v45 = v37 - 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              if ( v48 == 1 )
                v92 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk24;
            }
            else
            {
              v92 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk16;
            }
          }
          else
          {
            v92 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk8;
          }
        }
        else
        {
          v92 = (void (*)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned int *, unsigned int *))BltLnkSrcCopyMsk4;
        }
      }
      else
      {
        v92 = BltLnkSrcCopyMsk1;
      }
    }
  }
  else
  {
    v70 = v69;
  }
  if ( *((int *)a1 + 18) <= 0 || v15 <= 0 )
    goto LABEL_24;
  v21 = *((_BYTE *)a1 + 64);
  if ( v21 == -52
    && v20
    && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == *(_DWORD *)(v11 + 96)
    && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
  {
    v110 = v84;
    v109 = v5;
    v111 = 1;
    v114 = v15;
    v112 = v10;
    v113 = v8;
    v115 = *((_DWORD *)a1 + 32);
    v116 = *((_DWORD *)a1 + 33);
    v117 = *((_DWORD *)a1 + 49);
    v118 = v10 + v117;
    v119 = a2->left;
    v120 = 0;
    v108 = xloIdent;
    ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _DWORD *))v92)(&v108, &v95, v136, v138);
    return;
  }
  if ( v21 != -72 && v21 != -30 )
    goto LABEL_20;
  if ( v20 )
  {
LABEL_24:
    v22 = *((_DWORD *)a1 + 55);
    if ( v22 )
    {
      v124 = (char *)v136 + v93;
      v123 = v5;
      v125 = 1;
      v128 = v15;
      v126 = v10;
      v127 = 1;
      v129 = 1;
      v130 = 1;
      v131 = *((_DWORD *)a1 + 49);
      v132 = v10 + v131;
      v133 = v81;
      v134 = 1;
      v122 = *((_QWORD *)a1 + 6);
      v23 = v106;
      v24 = 4 * (*(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) | (8 * *(_DWORD *)(v106 + 96)));
      v25 = v24 + 1;
      if ( (*(_DWORD *)(v122 + 4) & 1) == 0 )
        v25 = v24;
      v104 = (&SrcCopyFunctionTable)[v25];
    }
    else
    {
      v23 = v106;
    }
    v110 = v84;
    v109 = (char *)v138 + v93;
    v111 = 1;
    v114 = v15;
    v112 = v10;
    v113 = 1;
    v115 = 1;
    v116 = 1;
    v117 = v81;
    v118 = v81 + v10;
    v119 = a2->left;
    v120 = 0;
    v108 = xloIdent;
    if ( !v20 )
      v103 = (&SrcCopyFunctionTable)[4 * (*(_DWORD *)(v23 + 96) | (unsigned int)(8 * *(_DWORD *)(v23 + 96))) + 1];
    if ( *((_DWORD *)a1 + 57) )
    {
      if ( *((_DWORD *)a1 + 56) )
      {
        if ( v22 )
        {
          v91 = (&RopFunctionTable)[*((_BYTE *)a1 + 64) & 0xF];
          v105 = (&RopFunctionTable)[(unsigned __int64)*((unsigned __int8 *)a1 + 64) >> 4];
          v80 = v8;
          while ( v80-- )
          {
            ((void (__fastcall *)(__int64 *))v104)(&v122);
            v123 += *((int *)a1 + 32);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v91)(v139, v84 + 4LL * v74, v136, v73);
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v105)(v137, v84 + 4LL * v74, v136, v73);
            v63 = v70;
            if ( v6 )
            {
              v94((unsigned __int8 *)v136 + v82, v81, v6, v83, v72, v10, v86);
              if ( *((_DWORD *)a1 + 19) == 1 )
              {
                ++v14;
                v6 += *((int *)a1 + 34);
                if ( v14 >= v85 )
                {
                  v14 = 0;
                  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 13);
                }
              }
              else if ( v14 )
              {
                --v14;
                v6 -= *((int *)a1 + 30);
              }
              else
              {
                v14 = v85 - 1;
                v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 13) + (v85 - 1) * *((_DWORD *)a1 + 30));
              }
              v65 = v73;
              v66 = 0LL;
              while ( v65 )
              {
                i = *(_DWORD *)((char *)v136 + v66) & *(_DWORD *)((char *)v137 + v66) | (unsigned int)~*(_DWORD *)((char *)v136 + v66) & *(_DWORD *)((char *)v139 + v66);
                *(_DWORD *)((char *)v138 + v66) = i;
                v66 += 4LL;
                --v65;
              }
            }
            else if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 96LL) == 5 )
            {
              v67 = (char *)v136 + v93;
              for ( i = v10; (_DWORD)i; i = (unsigned int)(i - 1) )
              {
                *(_WORD *)v67 = v72;
                v67[2] = BYTE2(v72);
                v67 += 3;
              }
              v68 = v73;
              v66 = 0LL;
              while ( v68 )
              {
                i = *(_DWORD *)((char *)v136 + v66) & *(_DWORD *)((char *)v137 + v66) | (unsigned int)~*(_DWORD *)((char *)v136 + v66) & *(_DWORD *)((char *)v139 + v66);
                *(_DWORD *)((char *)v138 + v66) = i;
                v66 += 4LL;
                --v68;
              }
            }
            else
            {
              v66 = v73;
              i = 0LL;
              while ( (_DWORD)v66 )
              {
                *(_DWORD *)((char *)v138 + i) = v72 & *(_DWORD *)((char *)v137 + i) | ~v72 & *(_DWORD *)((char *)v139 + i);
                i += 4LL;
                v66 = (unsigned int)(v66 - 1);
              }
            }
            if ( *((_DWORD *)a1 + 58) )
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v92)(&v108, &v95, v136, 0LL);
              if ( *((int *)a1 + 19) <= 0 )
              {
                if ( v70 )
                {
                  --v70;
                  v95 += *((int *)a1 + 35);
                }
                else
                {
                  v70 = *((_DWORD *)a1 + 44) - 1;
                  v95 = *((_QWORD *)a1 + 12) + v70 * *((_DWORD *)a1 + 31);
                }
              }
              else
              {
                ++v70;
                v95 += *((int *)a1 + 35);
                if ( v63 + 1 >= *((_DWORD *)a1 + 44) )
                {
                  v70 = 0;
                  v95 = *((_QWORD *)a1 + 12);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64, __int64))v103)(&v108, i, v66);
            }
            v84 += *((int *)a1 + 33);
            v110 = v84;
          }
        }
        else
        {
          if ( !v6 )
          {
            if ( *(_DWORD *)(v23 + 96) == 5 )
            {
              v58 = (char *)v137 + v93;
              for ( j = v10; j; --j )
              {
                *(_WORD *)v58 = v72;
                v58[2] = BYTE2(v72);
                v58 += 3;
              }
            }
            else
            {
              for ( k = v73; k; v137[k] = v72 )
                --k;
            }
          }
          v90 = (&RopFunctionTable)[*((_DWORD *)a1 + 53) & 0xF];
          v79 = v8;
          v60 = v70;
          while ( v79-- )
          {
            if ( *((_DWORD *)a1 + 57) && v6 )
            {
              v94((unsigned __int8 *)v137 + v82, v81, v6, v83, v72, v10, v86);
              if ( *((_DWORD *)a1 + 19) == 1 )
              {
                ++v14;
                v6 += *((int *)a1 + 34);
                if ( v14 >= v85 )
                {
                  v14 = 0;
                  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 13);
                }
              }
              else if ( v14 )
              {
                --v14;
                v6 -= *((int *)a1 + 30);
              }
              else
              {
                v14 = v85 - 1;
                v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 13) + (v85 - 1) * *((_DWORD *)a1 + 30));
              }
            }
            ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v90)(v138, v84 + 4LL * v74, v137, v73);
            if ( *((_DWORD *)a1 + 58) )
            {
              ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v92)(&v108, &v95, v136, 0LL);
              if ( *((int *)a1 + 19) <= 0 )
              {
                if ( v60 )
                {
                  --v60;
                  v95 += *((int *)a1 + 35);
                }
                else
                {
                  v60 = *((_DWORD *)a1 + 44) - 1;
                  v95 = *((_QWORD *)a1 + 12) + v60 * *((_DWORD *)a1 + 31);
                }
              }
              else
              {
                ++v60;
                v95 += *((int *)a1 + 35);
                if ( v60 >= *((_DWORD *)a1 + 44) )
                {
                  v60 = 0;
                  v95 = *((_QWORD *)a1 + 12);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(XLATEOBJ **))v103)(&v108);
            }
            v84 += *((int *)a1 + 33);
            v110 = v84;
          }
        }
      }
      else
      {
        v88 = (&RopFunctionTable)[*((_DWORD *)a1 + 54) & 0xF];
        if ( !v6 )
        {
          if ( *(_DWORD *)(v23 + 96) == 5 )
          {
            v54 = (char *)v137 + v93;
            for ( m = v10; m; --m )
            {
              *(_WORD *)v54 = v72;
              v54[2] = BYTE2(v72);
              v54 += 3;
            }
          }
          else
          {
            for ( n = v73; n; v137[n] = v72 )
              --n;
          }
        }
        while ( v8-- )
        {
          if ( *((_DWORD *)a1 + 55) )
          {
            ((void (__fastcall *)(__int64 *))v104)(&v122);
            v123 += *((int *)a1 + 32);
          }
          if ( v6 )
          {
            v94((unsigned __int8 *)v137 + v82, v81, v6, v83, v72, v10, v86);
            if ( *((_DWORD *)a1 + 19) == 1 )
            {
              ++v14;
              v6 += *((int *)a1 + 34);
              if ( v14 >= v85 )
              {
                v14 = 0;
                v6 = (unsigned __int8 *)*((_QWORD *)a1 + 13);
              }
            }
            else if ( v14 )
            {
              --v14;
              v6 -= *((int *)a1 + 30);
            }
            else
            {
              v14 = v85 - 1;
              v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 13) + (v85 - 1) * *((_DWORD *)a1 + 30));
            }
          }
          ((void (__fastcall *)(_DWORD *, _DWORD *, _DWORD *, _QWORD))v88)(v138, v137, v136, v73);
          if ( *((_DWORD *)a1 + 58) )
          {
            ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v92)(&v108, &v95, v136, 0LL);
            v56 = v70;
            if ( *((int *)a1 + 19) <= 0 )
            {
              if ( v70 )
              {
                --v70;
                v95 += *((int *)a1 + 35);
              }
              else
              {
                v70 = *((_DWORD *)a1 + 44) - 1;
                v95 = *((_QWORD *)a1 + 12) + v70 * *((_DWORD *)a1 + 31);
              }
            }
            else
            {
              ++v70;
              v95 += *((int *)a1 + 35);
              if ( v56 + 1 >= *((_DWORD *)a1 + 44) )
              {
                v70 = 0;
                v95 = *((_QWORD *)a1 + 12);
              }
            }
          }
          else
          {
            ((void (__fastcall *)(XLATEOBJ **))v103)(&v108);
          }
          v84 += *((int *)a1 + 33);
          v110 = v84;
        }
      }
    }
    else
    {
      v87 = (&RopFunctionTable)[*((_BYTE *)a1 + 64) & 0xF];
      v76 = v8;
      while ( v76-- )
      {
        if ( *((_DWORD *)a1 + 55) )
        {
          ((void (__fastcall *)(__int64 *))v104)(&v122);
          v123 += *((int *)a1 + 32);
        }
        ((void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD))v87)(v138, v84 + 4LL * v74, v136, v73);
        if ( *((_DWORD *)a1 + 58) )
        {
          ((void (__fastcall *)(XLATEOBJ **, __int64 *, _DWORD *, _QWORD))v92)(&v108, &v95, v139, 0LL);
          v38 = v70;
          if ( *((int *)a1 + 19) <= 0 )
          {
            if ( v70 )
            {
              --v70;
              v95 += *((int *)a1 + 35);
            }
            else
            {
              v70 = *((_DWORD *)a1 + 44) - 1;
              v95 = *((_QWORD *)a1 + 12) + v70 * *((_DWORD *)a1 + 31);
            }
          }
          else
          {
            ++v70;
            v95 += *((int *)a1 + 35);
            if ( v38 + 1 >= *((_DWORD *)a1 + 44) )
            {
              v70 = 0;
              v95 = *((_QWORD *)a1 + 12);
            }
          }
        }
        else
        {
          ((void (__fastcall *)(XLATEOBJ **))v103)(&v108);
        }
        v84 += *((int *)a1 + 33);
        v110 = v84;
      }
    }
    return;
  }
  v89 = *((_DWORD *)a1 + 38);
  if ( v89 == -1 || *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) != 1 || (v39 = *(_DWORD *)(v11 + 96), v39 < 3) || v39 > 6 )
  {
LABEL_20:
    if ( !v20
      && *((_DWORD *)a1 + 55)
      && *((_DWORD *)a1 + 56)
      && *(_DWORD *)(v11 + 96) == 3
      && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3
      && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
    {
      switch ( v21 )
      {
        case 102:
          BltLnkAccel6666(
            (unsigned __int8 *)&v5[*((int *)a1 + 49)],
            (unsigned __int8 *)(v84 + a2->left),
            *((_DWORD *)a1 + 32),
            *((_DWORD *)a1 + 33),
            v10,
            v8);
          return;
        case -120:
          BltLnkAccel8888(
            (unsigned __int8 *)&v5[*((int *)a1 + 49)],
            (unsigned __int8 *)(v84 + a2->left),
            *((_DWORD *)a1 + 32),
            *((_DWORD *)a1 + 33),
            v10,
            v8);
          return;
        case -18:
          BltLnkAccelEEEE(
            (unsigned __int8 *)&v5[*((int *)a1 + 49)],
            (unsigned __int8 *)(v84 + a2->left),
            *((_DWORD *)a1 + 32),
            *((_DWORD *)a1 + 33),
            v10,
            v8);
          return;
      }
    }
    goto LABEL_24;
  }
  v78 = 0LL;
  v40 = -1;
  if ( v39 == 6 )
  {
    v41 = BltLnkPatMaskCopy32;
  }
  else
  {
    v43 = v39 - 3;
    if ( !v43 )
    {
      v41 = BltLnkPatMaskCopy8;
      v42 = 255;
      goto LABEL_98;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
      v41 = BltLnkPatMaskCopy16;
      v42 = 0xFFFF;
      goto LABEL_98;
    }
    if ( v44 != 1 )
    {
      v42 = *((_DWORD *)a1 + 38);
      goto LABEL_99;
    }
    v41 = BltLnkPatMaskCopy24;
  }
  v42 = 0xFFFFFF;
LABEL_98:
  v78 = v41;
LABEL_99:
  v105 = (void (* near *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))*((_QWORD *)a1 + 6);
  v107 = v105[2];
  if ( (v42 & *((_DWORD *)v107 + 1)) != v42 || (*(_DWORD *)v107 & v42) != 0 )
    goto LABEL_20;
  if ( v21 != -30 )
    v40 = 0;
  v110 = v84;
  v109 = v5;
  v111 = 1;
  v114 = v15;
  v112 = v10;
  v113 = v8;
  v115 = *((_DWORD *)a1 + 32);
  v116 = *((_DWORD *)a1 + 33);
  v117 = *((_DWORD *)a1 + 49);
  v118 = v10 + v117;
  v119 = a2->left;
  v120 = 0;
  v108 = (XLATEOBJ *)v105;
  v78((struct BLTINFO *)&v108, v89, v136, v40);
}
