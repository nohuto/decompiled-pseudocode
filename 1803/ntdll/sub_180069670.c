/*
 * XREFs of sub_180069670 @ 0x180069670
 * Callers:
 *     sub_180069548 @ 0x180069548 (sub_180069548.c)
 *     sub_1800F59C4 @ 0x1800F59C4 (sub_1800F59C4.c)
 * Callees:
 *     sub_1800697A0 @ 0x1800697A0 (sub_1800697A0.c)
 *     sub_1800697E4 @ 0x1800697E4 (sub_1800697E4.c)
 *     sub_1800F5254 @ 0x1800F5254 (sub_1800F5254.c)
 *     sub_1800F527C @ 0x1800F527C (sub_1800F527C.c)
 *     sub_1800F52AC @ 0x1800F52AC (sub_1800F52AC.c)
 *     sub_1800F53C0 @ 0x1800F53C0 (sub_1800F53C0.c)
 *     sub_1800F5450 @ 0x1800F5450 (sub_1800F5450.c)
 *     sub_1800F5510 @ 0x1800F5510 (sub_1800F5510.c)
 *     sub_1800F55B0 @ 0x1800F55B0 (sub_1800F55B0.c)
 *     sub_1800F55D8 @ 0x1800F55D8 (sub_1800F55D8.c)
 *     sub_1800F5620 @ 0x1800F5620 (sub_1800F5620.c)
 *     sub_1800F5798 @ 0x1800F5798 (sub_1800F5798.c)
 *     sub_1800F5808 @ 0x1800F5808 (sub_1800F5808.c)
 *     sub_1800F58C4 @ 0x1800F58C4 (sub_1800F58C4.c)
 *     sub_1800F59C4 @ 0x1800F59C4 (sub_1800F59C4.c)
 *     sub_1800F5AD0 @ 0x1800F5AD0 (sub_1800F5AD0.c)
 */

__int64 __fastcall sub_180069670(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r15
  int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // dl
  bool v26; // zf
  unsigned int v27; // eax
  unsigned int v28; // eax
  _WORD *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r9
  __int64 v35; // r8
  char v36; // di
  char v37; // di
  char v38; // al
  __int64 v39; // r10
  unsigned __int64 v40; // r8
  unsigned __int8 v41; // r9
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // r9
  __int64 v45; // r8
  char v46; // di
  unsigned int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int16 *v51; // r10
  __int64 v52; // rcx
  signed int v53; // esi
  __int64 v54; // rcx
  unsigned __int16 v55; // di
  __int64 v56; // rcx
  unsigned __int16 v57; // si
  unsigned int v58; // eax
  unsigned int v59; // r11d
  unsigned int v60; // eax
  unsigned int v61; // r11d
  unsigned __int16 *v62; // r8
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r10

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_52;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_128;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_128:
          v9 = sub_1800697E4(v4, a2);
          goto LABEL_10;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return sub_1800F59C4(a1, a2, v4);
        case 0xFEu:
          v29 = *(_WORD **)(v4 + 16);
          if ( v29 == *(_WORD **)(v4 + 8) )
            return 3221227287LL;
          *(_QWORD *)(v4 + 16) = v29 + 1;
          if ( (unsigned __int16)(*v29 + 9216) > 0x3FFu )
            return 3221227287LL;
          a2 = (unsigned __int16)*v29 + ((a2 - 55287) << 10);
          v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
          goto LABEL_56;
      }
      if ( v5 != 255 )
        break;
      if ( (int)a2 >= 44032 )
      {
        if ( (int)a2 >= 55204 )
        {
          if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
            goto LABEL_52;
          goto LABEL_46;
        }
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v53 = a2 - 44032;
          if ( !(unsigned __int8)sub_1800697A0(v4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0LL, 0LL) )
            return 3221225507LL;
          v55 = (int)(a2 - 44032) % 588 / 28 + 4449;
          if ( !(unsigned __int8)sub_1800697A0(v54, v55, 0LL, 0LL) )
            return 3221225507LL;
          v57 = (unsigned __int16)(v53 % 28) != 0 ? v53 % 28 + 4519 : 0;
          if ( v57 )
          {
            if ( !(unsigned __int8)sub_1800697A0(v56, v57, 0LL, 0LL) )
              return 3221225507LL;
            v55 = v57;
          }
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v55;
LABEL_12:
          *(_WORD *)(v4 + 92) = 0;
          return 0LL;
        }
        if ( !(unsigned __int8)sub_1800F52AC(a2) )
          goto LABEL_52;
        v51 = *(unsigned __int16 **)(v4 + 16);
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_52;
        v52 = a2;
        *(_QWORD *)(v4 + 16) = v51 + 1;
        goto LABEL_123;
      }
      if ( a2 - 4352 <= 0x12 )
      {
        v62 = *(unsigned __int16 **)(v4 + 16);
        if ( v62 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_52;
        v63 = *v62;
        *(_QWORD *)(v4 + 16) = v62 + 1;
        v64 = sub_1800F5254(a2, v63);
        if ( !v64 )
        {
          *(_QWORD *)(v4 + 16) = v65;
          goto LABEL_52;
        }
        a2 = v64;
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_52;
        *(_QWORD *)(v4 + 16) = v51 + 1;
        v52 = v64;
LABEL_123:
        v60 = sub_1800F527C(v52, *v51);
        if ( v60 )
          goto LABEL_118;
        *(_QWORD *)(v4 + 16) = v66;
LABEL_52:
        v15 = sub_1800697E4(v4, a2);
        return v15 == 0 ? 0xC0000023 : 0;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        if ( (unsigned int)sub_1800F53C0(v4) - 4352 > 0x12 )
          goto LABEL_52;
        sub_1800F58C4(v4);
        v60 = sub_1800F5254(v61, a2);
        goto LABEL_118;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        v58 = sub_1800F53C0(v4);
        if ( !(unsigned __int8)sub_1800F52AC(v58) )
          goto LABEL_52;
        sub_1800F58C4(v4);
        v60 = sub_1800F527C(v59, a2);
LABEL_118:
        a2 = v60;
        goto LABEL_52;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_52;
LABEL_46:
      v5 = -5;
    }
    v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
    if ( !v8 )
      goto LABEL_9;
    v11 = v8 & 0xC0;
    v12 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v12 != 63 )
      break;
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = sub_1800697A0(v4, a2, 0LL, 0LL);
LABEL_10:
      if ( !v9 )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
      goto LABEL_12;
    }
    if ( v8 == 191 )
      return sub_1800F59C4(a1, a2, v4);
    if ( v8 != 192 )
    {
      if ( v8 == 255 && (a2 || *(_QWORD *)(v4 + 16) != *(_QWORD *)(v4 + 8)) )
        return 3221227287LL;
LABEL_19:
      v13 = a2;
      v14 = v4;
LABEL_20:
      LOBYTE(a3) = v12;
      LOBYTE(a4) = v11;
      v15 = sub_1800697A0(v14, v13, a3, a4);
      return v15 == 0 ? 0xC0000023 : 0;
    }
    v27 = sub_1800F53C0(v4);
    v28 = sub_1800F5AD0(a1, v27, a2);
    a4 = v28;
    if ( !v28 )
      goto LABEL_19;
    sub_1800F58C4(v4);
    a2 = a4;
LABEL_56:
    if ( !v5 )
      goto LABEL_52;
  }
  if ( (v8 & 0x80) == 0 )
  {
    LOBYTE(a4) = v8 & 0xC0;
    LOBYTE(a3) = v8 & 0x3F;
    if ( (unsigned __int8)sub_1800697A0(v4, a2, a3, a4) )
    {
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
      *(_BYTE *)(v4 + 92) = v12;
      *(_BYTE *)(v4 + 93) = v11;
      return 0LL;
    }
    return 3221225507LL;
  }
  sub_1800F53C0(v4);
  v18 = *(_BYTE *)(v4 + 72);
  if ( !v18 || v18 == 63 || (v19 = *(_BYTE *)(v4 + 73), (v19 & v17) == 0) )
  {
    v19 = *(_BYTE *)(v4 + 73);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
    *(_BYTE *)(v4 + 92) = v18;
    *(_BYTE *)(v4 + 93) = v19;
    *(_QWORD *)(v4 + 96) = 0LL;
  }
  if ( v11 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(v4 + 92) | *(_BYTE *)(v4 + 93)) + 64) & v17) == 0 )
  {
    LOBYTE(v16) = v12;
    sub_1800F5510(v4, v16);
    goto LABEL_59;
  }
  if ( !v18 || v18 == 63 )
  {
    v48 = sub_1800F5AD0(a1, *(unsigned int *)(v4 + 88), a2);
    a4 = v48;
    if ( v48 )
    {
      sub_1800F58C4(v4);
      a3 = a4 & 0x7F;
      a2 = a4;
      v49 = *(_QWORD *)(a1 + 40);
      v50 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
      v11 = *(_BYTE *)(v50 + v49 - 128) & 0xC0;
      v12 = *(_BYTE *)(v50 + v49 - 128) & 0x3F;
    }
    goto LABEL_19;
  }
  if ( !v19 )
    goto LABEL_82;
  if ( v19 == 64 )
  {
    if ( (unsigned int)sub_1800F5AD0(a1, *(unsigned int *)(v4 + 88), a2) )
    {
      sub_1800F58C4(v4);
      v40 = (v39 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v39 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
      v41 = *(_BYTE *)(v40 + *(_QWORD *)(a1 + 40) - 128);
      LOBYTE(v40) = v41 & 0x3F;
      if ( (unsigned __int8)sub_1800697A0(v4, (unsigned int)v39, v40, v41 & 0xC0) )
      {
        v42 = *(_QWORD *)(v4 + 64);
        *(_QWORD *)(v4 + 96) = 0LL;
        *(_QWORD *)(v4 + 80) = v42 + 2;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
        *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
LABEL_82:
    if ( v18 <= v12 )
      goto LABEL_19;
    if ( v18 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_19;
LABEL_89:
        v43 = sub_1800F55D8(v4);
        v31 = sub_1800F5AD0(a1, v43, a2);
        if ( !v31 )
          goto LABEL_19;
LABEL_90:
        v44 = v31 & 0x7F;
        v45 = v44 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v46 = *(_BYTE *)(v45 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v45) = v46 & 0x3F;
        v37 = v46 & 0xC0;
        LOBYTE(v44) = v37;
        v38 = sub_1800F5808(v4, v31, v45, v44);
        goto LABEL_74;
      }
    }
    else if ( v18 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_89;
    }
    v47 = sub_1800F55B0(v4);
    v33 = sub_1800F5AD0(a1, v47, a2);
    if ( !v33 )
      goto LABEL_19;
    goto LABEL_73;
  }
  LOBYTE(v16) = v12;
  if ( (unsigned __int8)sub_1800F5510(v4, v16) )
    goto LABEL_59;
  v20 = *(_BYTE *)(v4 + 92);
  if ( !v20 || v20 == 63 || *(_BYTE *)(v4 + 93) == 64 )
  {
    v21 = sub_1800F5AD0(a1, *(unsigned int *)(v4 + 88), a2);
    v22 = v21;
    if ( v21 )
    {
      v23 = *(_QWORD *)(a1 + 32);
      v24 = *(_QWORD *)(v4 + 80);
      *(_DWORD *)(v4 + 88) = v22;
      v25 = *(_BYTE *)((v22 & 0x7F)
                     + ((unsigned __int64)*(unsigned __int8 *)((v22 >> 7) + v23) << 7)
                     + *(_QWORD *)(a1 + 40)
                     - 128);
      *(_WORD *)(v24 - 2) = v22;
      *(_BYTE *)(v4 + 93) = v25 & 0xC0;
      v26 = (v25 & 0xC0) == 64;
      *(_BYTE *)(v4 + 92) = v25 & 0x3F;
LABEL_76:
      if ( v26 )
        sub_1800F5620(v4);
      return 0LL;
    }
    if ( !v20 || v20 == 63 )
      goto LABEL_59;
  }
  if ( v20 <= v12 )
    goto LABEL_59;
  if ( v20 != *(_BYTE *)(a1 + 116) )
  {
    if ( v20 != *(_BYTE *)(a1 + 118) || v12 != *(_BYTE *)(a1 + 117) )
      goto LABEL_72;
LABEL_70:
    v30 = sub_1800F55D8(v4);
    v31 = sub_1800F5AD0(a1, v30, a2);
    if ( !v31 )
      goto LABEL_59;
    goto LABEL_90;
  }
  if ( v12 >= *(_BYTE *)(a1 + 114) )
  {
    if ( v12 == *(_BYTE *)(a1 + 115) )
      goto LABEL_70;
LABEL_59:
    a3 = *(_QWORD *)(v4 + 104);
    v14 = v4;
    v13 = a2;
    if ( a3 == *(_QWORD *)(v4 + 40) )
      goto LABEL_20;
    v15 = sub_1800F5450(v4, a2);
    return v15 == 0 ? 0xC0000023 : 0;
  }
LABEL_72:
  v32 = sub_1800F55B0(v4);
  v33 = sub_1800F5AD0(a1, v32, a2);
  if ( !v33 )
    goto LABEL_59;
LABEL_73:
  v34 = v33 & 0x7F;
  v35 = v34 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
  v36 = *(_BYTE *)(v35 + *(_QWORD *)(a1 + 40) - 128);
  LOBYTE(v35) = v36 & 0x3F;
  v37 = v36 & 0xC0;
  LOBYTE(v34) = v37;
  v38 = sub_1800F5798(v4, v33, v35, v34);
LABEL_74:
  if ( v38 )
  {
    v26 = v37 == 64;
    goto LABEL_76;
  }
  return 3221225507LL;
}
