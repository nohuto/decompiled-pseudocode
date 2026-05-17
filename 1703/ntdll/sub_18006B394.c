/*
 * XREFs of sub_18006B394 @ 0x18006B394
 * Callers:
 *     sub_18006B178 @ 0x18006B178 (sub_18006B178.c)
 *     sub_1800F7E44 @ 0x1800F7E44 (sub_1800F7E44.c)
 * Callees:
 *     sub_18006B334 @ 0x18006B334 (sub_18006B334.c)
 *     sub_18006BB70 @ 0x18006BB70 (sub_18006BB70.c)
 *     sub_1800F76B4 @ 0x1800F76B4 (sub_1800F76B4.c)
 *     sub_1800F76DC @ 0x1800F76DC (sub_1800F76DC.c)
 *     sub_1800F770C @ 0x1800F770C (sub_1800F770C.c)
 *     sub_1800F7828 @ 0x1800F7828 (sub_1800F7828.c)
 *     sub_1800F78BC @ 0x1800F78BC (sub_1800F78BC.c)
 *     sub_1800F7988 @ 0x1800F7988 (sub_1800F7988.c)
 *     sub_1800F7A2C @ 0x1800F7A2C (sub_1800F7A2C.c)
 *     sub_1800F7A54 @ 0x1800F7A54 (sub_1800F7A54.c)
 *     sub_1800F7A9C @ 0x1800F7A9C (sub_1800F7A9C.c)
 *     sub_1800F7C1C @ 0x1800F7C1C (sub_1800F7C1C.c)
 *     sub_1800F7C8C @ 0x1800F7C8C (sub_1800F7C8C.c)
 *     sub_1800F7D44 @ 0x1800F7D44 (sub_1800F7D44.c)
 *     sub_1800F7E44 @ 0x1800F7E44 (sub_1800F7E44.c)
 *     sub_1800F7F4C @ 0x1800F7F4C (sub_1800F7F4C.c)
 */

__int64 __fastcall sub_18006B394(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
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
  unsigned __int16 *v16; // rax
  __int64 v17; // rdx
  unsigned __int8 v18; // r15
  char v19; // cl
  unsigned int v20; // eax
  unsigned int v21; // r10d
  unsigned __int8 v22; // r15
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // r10
  __int64 v37; // rax
  char v38; // di
  char v39; // al
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // eax
  int v45; // eax
  signed int v46; // esi
  __int64 v47; // rcx
  unsigned __int16 v48; // di
  __int64 v49; // rcx
  unsigned __int16 v50; // si
  unsigned __int16 *v51; // rax
  __int64 v52; // rdx
  unsigned __int16 *v53; // r10
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // r10
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // eax
  unsigned __int16 *v70; // r8
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  unsigned __int16 v74; // cx
  unsigned __int16 *v75; // rax
  unsigned __int16 *v76; // rax
  unsigned int v77; // r9d
  unsigned int v78; // r9d

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_24;
  while ( 1 )
  {
    switch ( v5 )
    {
      case 0u:
        goto LABEL_132;
      case 0xFBu:
        if ( !*(_BYTE *)(a1 + 113) )
          return 3221227287LL;
LABEL_132:
        v9 = sub_18006B334(v4, a2);
        goto LABEL_10;
      case 0xFCu:
        return 3221227287LL;
      case 0xFDu:
        return sub_1800F7E44(a1, a2, v4);
      case 0xFEu:
        v76 = *(unsigned __int16 **)(v4 + 16);
        if ( v76 == *(unsigned __int16 **)(v4 + 8) )
          return 3221227287LL;
        v74 = *v76;
        *(_QWORD *)(v4 + 16) = v76 + 1;
        if ( (unsigned __int16)(v74 + 9216) > 0x3FFu )
          return 3221227287LL;
        a2 = v74 + ((a2 - 55287) << 10);
        v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
        goto LABEL_126;
      case 0xFFu:
        if ( (int)a2 < 44032 )
        {
          if ( a2 - 4352 <= 0x12 )
          {
            v75 = *(unsigned __int16 **)(v4 + 16);
            if ( v75 == *(unsigned __int16 **)(v4 + 8) )
              goto LABEL_24;
            v68 = *v75;
            *(_QWORD *)(v4 + 16) = v75 + 1;
            v69 = sub_1800F76B4(a2, v68);
            if ( v69 )
            {
              a2 = v69;
              if ( v70 == *(unsigned __int16 **)(v4 + 8) )
                goto LABEL_24;
              v52 = *v70;
              v53 = v70 + 1;
              v54 = v69;
LABEL_89:
              *(_QWORD *)(v4 + 16) = v53;
              v55 = sub_1800F76DC(v54, v52);
              if ( v55 )
              {
LABEL_90:
                a2 = v55;
                goto LABEL_24;
              }
              v16 = (unsigned __int16 *)(v56 - 2);
            }
            else
            {
              v16 = v70 - 1;
            }
            *(_QWORD *)(v4 + 16) = v16;
LABEL_24:
            v15 = sub_18006B334(v4, a2);
            return v15 == 0 ? 0xC0000023 : 0;
          }
          if ( a2 - 4449 <= 0x14 )
          {
            v57 = sub_1800F7828(v4);
            if ( v57 - 4352 <= 0x12 )
            {
              sub_1800F7D44(v4, v58, v59, v57);
              v55 = sub_1800F76B4(v78, a2);
              goto LABEL_90;
            }
            goto LABEL_24;
          }
          if ( a2 - 4520 <= 0x1A )
          {
            v60 = sub_1800F7828(v4);
            if ( (unsigned __int8)sub_1800F770C(v60, v61, v62, v60) )
            {
              sub_1800F7D44(v4, v63, v64, v65);
              v55 = sub_1800F76DC(v77, a2);
              goto LABEL_90;
            }
            goto LABEL_24;
          }
          if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
            goto LABEL_24;
        }
        else
        {
          if ( (int)a2 < 55204 )
          {
            if ( *(_BYTE *)(a1 + 112) == 1 )
            {
              v46 = a2 - 44032;
              if ( !(unsigned __int8)sub_18006BB70(v4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0LL, 0LL) )
                return 3221225507LL;
              v48 = (int)(a2 - 44032) % 588 / 28 + 4449;
              if ( !(unsigned __int8)sub_18006BB70(v47, v48, 0LL, 0LL) )
                return 3221225507LL;
              v50 = (unsigned __int16)(v46 % 28) != 0 ? v46 % 28 + 4519 : 0;
              if ( v50 )
              {
                if ( !(unsigned __int8)sub_18006BB70(v49, v50, 0LL, 0LL) )
                  return 3221225507LL;
                v48 = v50;
              }
              *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
              *(_DWORD *)(v4 + 88) = v48;
              goto LABEL_12;
            }
            if ( (unsigned __int8)sub_1800F770C(a2, v5, a3, a4) )
            {
              v51 = *(unsigned __int16 **)(v4 + 16);
              if ( v51 != *(unsigned __int16 **)(v4 + 8) )
              {
                v52 = *v51;
                v53 = v51 + 1;
                v54 = a2;
                goto LABEL_89;
              }
            }
            goto LABEL_24;
          }
          if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
            goto LABEL_24;
        }
        v5 = -5;
        break;
      default:
        v8 = *(_BYTE *)((a2 & 0x7F) + ((__int64)(v5 - 1) << 7) + *(_QWORD *)(a1 + 40));
        if ( !v8 )
          goto LABEL_9;
        v11 = v8 & 0xC0;
        v12 = v8 & 0x3F;
        if ( (v8 & 0x3F) != 0 && v12 != 63 )
        {
          if ( (v8 & 0x80) == 0 )
          {
            LOBYTE(a4) = v8 & 0xC0;
            LOBYTE(a3) = v8 & 0x3F;
            if ( (unsigned __int8)sub_18006BB70(v4, a2, a3, a4) )
            {
              *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
              *(_DWORD *)(v4 + 88) = a2;
              *(_BYTE *)(v4 + 92) = v12;
              *(_BYTE *)(v4 + 93) = v11;
              return 0LL;
            }
            return 3221225507LL;
          }
          sub_1800F7828(v4);
          v18 = *(_BYTE *)(v4 + 72);
          if ( !v18 || v18 == 63 || (v19 = *(_BYTE *)(v4 + 73), (v19 & 0xBF) == 0) )
          {
            v19 = *(_BYTE *)(v4 + 73);
            *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
            *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
            *(_BYTE *)(v4 + 92) = v18;
            *(_BYTE *)(v4 + 93) = v19;
            *(_QWORD *)(v4 + 96) = 0LL;
          }
          if ( v11 == (char)0x80 || (((*(_BYTE *)(v4 + 93) | *(_BYTE *)(v4 + 92)) + 64) & 0xBF) == 0 )
          {
            LOBYTE(v17) = v12;
            sub_1800F7988(v4, v17);
            goto LABEL_63;
          }
          if ( !v18 || v18 == 63 )
          {
            v40 = sub_1800F7F4C(a1, *(unsigned int *)(v4 + 88), a2);
            a4 = v40;
            if ( v40 )
            {
              sub_1800F7D44(v4, v41, a3, v40);
              a3 = a4 & 0x7F;
              a2 = a4;
              v42 = *(_QWORD *)(a1 + 40);
              v43 = a3 + ((__int64)(*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7);
              v11 = *(_BYTE *)(v43 + v42) & 0xC0;
              v12 = *(_BYTE *)(v43 + v42) & 0x3F;
            }
            goto LABEL_19;
          }
          if ( (v19 & 0xBF) == 0 )
          {
            if ( v19 == 64 && (unsigned int)sub_1800F7F4C(a1, *(unsigned int *)(v4 + 88), a2) )
            {
              sub_1800F7D44(v4, v29, a3, a4);
              v30 = *(_QWORD *)(a1 + 40);
              LOBYTE(v32) = *(_BYTE *)((v31 & 0x7F)
                                     + ((__int64)(*(unsigned __int8 *)((v31 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                                     + v30) & 0x3F;
              if ( (unsigned __int8)sub_18006BB70(
                                      v4,
                                      (unsigned int)v31,
                                      v32,
                                      *(_BYTE *)((v31 & 0x7F)
                                               + ((__int64)(*(unsigned __int8 *)((v31 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                                               + v30) & 0xC0) )
              {
                v33 = *(_QWORD *)(v4 + 64);
                *(_QWORD *)(v4 + 96) = 0LL;
                *(_QWORD *)(v4 + 80) = v33 + 2;
                *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
                *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
                *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
                return 0LL;
              }
              return 3221225507LL;
            }
            if ( v18 <= v12 )
              goto LABEL_19;
            if ( v18 == *(_BYTE *)(a1 + 116) )
            {
              if ( v12 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v12 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_19;
                goto LABEL_40;
              }
LABEL_72:
              v44 = sub_1800F7A2C(v4);
              v45 = sub_1800F7F4C(a1, v44, a2);
              v36 = v45;
              if ( !v45 )
                goto LABEL_19;
LABEL_52:
              v37 = *(_QWORD *)(a1 + 40);
              v38 = *(_BYTE *)((v36 & 0x7F)
                             + ((__int64)(*(unsigned __int8 *)((v36 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                             + v37) & 0xC0;
              LOBYTE(a4) = v38;
              v39 = sub_1800F7C1C(
                      v4,
                      (unsigned int)v36,
                      *(_BYTE *)((v36 & 0x7F)
                               + ((__int64)(*(unsigned __int8 *)((v36 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                               + v37) & 0x3F,
                      a4);
LABEL_53:
              if ( !v39 )
                return 3221225507LL;
              v28 = v38 == 64;
LABEL_55:
              if ( v28 )
                sub_1800F7A9C(v4);
              return 0LL;
            }
            if ( v18 != *(_BYTE *)(a1 + 118) || v12 != *(_BYTE *)(a1 + 117) )
              goto LABEL_72;
LABEL_40:
            v20 = sub_1800F7A54(v4);
            v21 = sub_1800F7F4C(a1, v20, a2);
            if ( !v21 )
              goto LABEL_19;
LABEL_104:
            v67 = *(_QWORD *)(a1 + 40);
            v38 = *(_BYTE *)((v21 & 0x7F)
                           + ((__int64)(*(unsigned __int8 *)(((__int64)(int)v21 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                           + v67) & 0xC0;
            LOBYTE(a4) = v38;
            v39 = sub_1800F7C8C(
                    v4,
                    v21,
                    *(_BYTE *)((v21 & 0x7F)
                             + ((__int64)(*(unsigned __int8 *)(((__int64)(int)v21 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                             + v67) & 0x3F,
                    a4);
            goto LABEL_53;
          }
          LOBYTE(v17) = v12;
          if ( (unsigned __int8)sub_1800F7988(v4, v17) )
            goto LABEL_63;
          v22 = *(_BYTE *)(v4 + 92);
          if ( !v22 || v22 == 63 || *(_BYTE *)(v4 + 93) == 64 )
          {
            v23 = sub_1800F7F4C(a1, *(unsigned int *)(v4 + 88), a2);
            a4 = v23;
            if ( v23 )
            {
              v24 = *(_QWORD *)(a1 + 32);
              v25 = *(_QWORD *)(a1 + 40);
              *(_DWORD *)(v4 + 88) = a4;
              v26 = *(_BYTE *)((a4 & 0x7F) + ((__int64)(*(unsigned __int8 *)((a4 >> 7) + v24) - 1) << 7) + v25);
              v27 = *(_QWORD *)(v4 + 80);
              *(_BYTE *)(v4 + 93) = v26 & 0xC0;
              v28 = (v26 & 0xC0) == 64;
              *(_BYTE *)(v4 + 92) = v26 & 0x3F;
              *(_WORD *)(v27 - 2) = a4;
              goto LABEL_55;
            }
            if ( !v22 || v22 == 63 )
              goto LABEL_63;
          }
          if ( v22 <= v12 )
            goto LABEL_63;
          if ( v22 == *(_BYTE *)(a1 + 116) )
          {
            if ( v12 >= *(_BYTE *)(a1 + 114) )
            {
              if ( v12 != *(_BYTE *)(a1 + 115) )
                goto LABEL_63;
LABEL_103:
              v66 = sub_1800F7A54(v4);
              v21 = sub_1800F7F4C(a1, v66, a2);
              if ( v21 )
                goto LABEL_104;
LABEL_63:
              a3 = *(_QWORD *)(v4 + 104);
              v14 = v4;
              v13 = a2;
              if ( a3 == *(_QWORD *)(v4 + 40) )
                goto LABEL_20;
              v15 = sub_1800F78BC(v4, a2);
              return v15 == 0 ? 0xC0000023 : 0;
            }
          }
          else if ( v22 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
          {
            goto LABEL_103;
          }
          v34 = sub_1800F7A2C(v4);
          v35 = sub_1800F7F4C(a1, v34, a2);
          v36 = v35;
          if ( v35 )
            goto LABEL_52;
          goto LABEL_63;
        }
        if ( v8 == 127 )
        {
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_9:
          v9 = sub_18006BB70(v4, a2, 0LL, 0LL);
LABEL_10:
          if ( !v9 )
            return 3221225507LL;
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = a2;
LABEL_12:
          *(_WORD *)(v4 + 92) = 0;
          return 0LL;
        }
        if ( v8 == 191 )
          return sub_1800F7E44(a1, a2, v4);
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
          v15 = sub_18006BB70(v14, v13, a3, a4);
          return v15 == 0 ? 0xC0000023 : 0;
        }
        v71 = sub_1800F7828(v4);
        v72 = sub_1800F7F4C(a1, v71, a2);
        a4 = v72;
        if ( !v72 )
          goto LABEL_19;
        sub_1800F7D44(v4, v73, a3, v72);
        a2 = a4;
LABEL_126:
        if ( !v5 )
          goto LABEL_24;
        break;
    }
  }
}
