/*
 * XREFs of RtlFormatMessageEx @ 0x18006BD70
 * Callers:
 *     RtlFormatMessage @ 0x1800F5640 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x18006BCD4 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x18006C3D8 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        __int16 *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r10
  char v11; // r12
  __int64 *v12; // r11
  __int64 v13; // r8
  int v14; // r14d
  unsigned __int64 v15; // r9
  unsigned int v16; // r15d
  __int16 *v17; // rdi
  __int16 *v18; // rsi
  __int16 *v19; // rbx
  __int16 v20; // ax
  _DWORD *v21; // rdx
  unsigned __int16 v23; // cx
  __int16 *v24; // rdx
  __int64 v25; // rdx
  int v26; // r15d
  int v27; // r12d
  int v28; // r13d
  __int64 v29; // r15
  unsigned int v30; // r10d
  char *v31; // rdx
  char v32; // r8
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rax
  char *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rax
  __int16 *v41; // rbx
  __int16 v42; // cx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  int v48; // ecx
  int v49; // r15d
  unsigned int v50; // eax
  __int16 v51; // r8
  char *v52; // rcx
  int v53; // r9d
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  signed __int64 v56; // r8
  __int16 v57; // ax
  int v58; // ecx
  int v59; // r15d
  int v60; // ecx
  unsigned __int16 v61; // ax
  __int64 v62; // rdx
  signed __int64 v63; // r8
  __int16 v64; // ax
  char *v65; // rax
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // r12d
  __int16 *v70; // rdx
  __int16 v71; // ax
  __int16 *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdi
  _WORD *v75; // rsi
  _WORD *v76; // rdi
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int16 *v80; // [rsp+58h] [rbp-A8h]
  unsigned int v81; // [rsp+68h] [rbp-98h]
  unsigned int v82; // [rsp+70h] [rbp-90h]
  __int64 *v83; // [rsp+78h] [rbp-88h]
  char *v85; // [rsp+88h] [rbp-78h] BYREF
  __int64 v86; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  __int16 *v89; // [rsp+A8h] [rbp-58h]
  __int16 *v90; // [rsp+B0h] [rbp-50h]
  __int64 v91; // [rsp+B8h] [rbp-48h]
  _QWORD v92[200]; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v93; // [rsp+700h] [rbp+600h] BYREF
  _WORD v94[30]; // [rsp+702h] [rbp+602h] BYREF
  char v95; // [rsp+73Eh] [rbp+63Eh] BYREF

  v10 = a10;
  v11 = a3;
  v12 = a6;
  v13 = a2;
  v14 = a8 >> 1;
  v15 = (unsigned __int64)a7;
  v91 = a9;
  v90 = a1;
  v83 = a6;
  v88 = (__int64)a7;
  v81 = 0;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v16 = *(_DWORD *)(a10 + 4);
    *(_DWORD *)a10 &= ~1u;
    v82 = v16;
    v19 = &a1[*(_QWORD *)(a10 + 8)];
    a1 = v19;
    v80 = v19;
    v17 = &a7[*(_QWORD *)(a10 + 16)];
    v47 = *(_QWORD *)(a10 + 24);
    if ( v47 == -1 )
      v18 = 0LL;
    else
      v18 = &a7[v47];
    v14 -= *(_DWORD *)(a10 + 16);
    if ( !a5 && a6 )
      *a6 = *(_QWORD *)(a10 + 32);
    if ( (*(_DWORD *)a10 & 2) != 0 )
    {
      *(_DWORD *)a10 &= ~2u;
      goto LABEL_148;
    }
  }
  else
  {
    v16 = 0;
    v17 = a7;
    v18 = 0LL;
    v82 = 0;
    v19 = a1;
    v80 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *v19;
      if ( !*v19 )
        goto LABEL_16;
      if ( v20 == 37 )
        break;
      ++v19;
      if ( v20 == 13 )
      {
        if ( *v19 != 10 )
          goto LABEL_22;
LABEL_21:
        ++v19;
        goto LABEL_22;
      }
      if ( v20 != 10 )
        goto LABEL_9;
      if ( *v19 == 13 )
        goto LABEL_21;
LABEL_22:
      if ( (_DWORD)v13 )
      {
        v18 = v17;
        v20 = 32;
LABEL_9:
        if ( --v14 < 0 )
          goto LABEL_65;
        *v17 = v20;
        if ( v20 == 32 )
          v18 = v17;
        ++v17;
        ++v16;
        goto LABEL_13;
      }
      v14 -= 2;
      if ( v14 < 0 )
        goto LABEL_65;
      v16 = 0;
      *(_DWORD *)v17 = 655373;
      v82 = 0;
      v17 += 2;
      v80 = v19;
      v18 = 0LL;
      a1 = v19;
    }
    v23 = v19[1];
    v24 = v17;
    v89 = v17;
    if ( (unsigned __int16)(v23 - 49) > 8u )
      break;
    v25 = (unsigned __int16)v19[2];
    v19 += 2;
    v26 = v23 - 48;
    if ( (unsigned __int16)(v25 - 48) <= 9u )
    {
      v48 = 5 * v26;
      ++v19;
      v49 = (unsigned __int16)v25 - 48;
      v25 = (unsigned __int16)*v19;
      v26 = v49 + 2 * v48;
      if ( (unsigned __int16)(v25 - 48) <= 9u )
      {
        v58 = 5 * v26;
        ++v19;
        v59 = (unsigned __int16)v25 - 48;
        v25 = (unsigned __int16)*v19;
        v26 = v59 + 2 * v58;
        if ( (unsigned __int16)(v25 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v27 = v26;
    v28 = v26;
    v87 = 0;
    v29 = (unsigned int)(v26 - 1);
    v30 = 0;
    if ( (_WORD)v25 == 33 )
    {
      v41 = v19 + 1;
      v31 = (char *)v94;
      v85 = (char *)v94;
      v93 = 37;
      v32 = 0;
      v42 = *v41;
      if ( *v41 != 33 )
      {
        while ( v42 )
        {
          if ( v31 >= &v95 )
            break;
          if ( v42 == 42 )
          {
            v50 = v30++;
            if ( v50 > 1 )
              break;
          }
          ++v41;
          *(_WORD *)v31 = v42;
          v31 += 2;
          v85 = v31;
          v42 = *v41;
          if ( *v41 == 33 )
            goto LABEL_51;
        }
        return 3221225485LL;
      }
LABEL_51:
      v19 = v41 + 1;
      *(_WORD *)v31 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&v93, v25, v13, &v85);
      v31 = v85;
      v32 = 1;
      v30 = v87;
      v12 = v83;
    }
    if ( a3 )
    {
      if ( v32 == 1 )
        goto LABEL_54;
      v60 = v93 - aS_0[0];
      if ( v93 == aS_0[0] )
      {
        v60 = v94[0] - aS_0[1];
        if ( v94[0] == aS_0[1] )
          v60 = v94[1] - aS_0[2];
      }
      if ( !v60 )
      {
LABEL_54:
        LODWORD(v77) = v27;
        v39 = RtlStringCchPrintfExW((_DWORD)v17, v14, (unsigned int)&v86, 0, 0, (__int64)L"%%%u", v77);
      }
      else
      {
        LODWORD(v77) = v28;
        v39 = RtlStringCchPrintfExW(
                (_DWORD)v17,
                v14,
                (unsigned int)&v86,
                0,
                0,
                (__int64)"%\x00%\x00%\x00u\x00!\x00%\x00s\x00!",
                v77,
                v94);
      }
      goto LABEL_39;
    }
    if ( !v12 || v30 + (unsigned int)v29 >= 0xC8 )
      return 3221225485LL;
    if ( a4 )
    {
      v51 = *((_WORD *)v31 - 1);
      v52 = v31 - 2;
      if ( v51 == 99 )
      {
        v61 = *((_WORD *)v31 - 2) - 104;
        if ( v61 > 0xFu || (v53 = 32785, !_bittest(&v53, v61)) )
        {
          v62 = 3LL;
          v63 = (char *)L"hc" - v52;
          do
          {
            if ( v62 == -2147483643 )
              break;
            v64 = *(_WORD *)&v52[v63];
            if ( !v64 )
              break;
            *(_WORD *)v52 = v64;
            v52 += 2;
            --v62;
          }
          while ( v62 );
          v65 = v52 - 2;
          if ( v62 )
            v65 = v52;
          *(_WORD *)v65 = 0;
          goto LABEL_32;
        }
      }
      else
      {
        v53 = 32785;
      }
      if ( v51 == 115 )
      {
        v54 = *((_WORD *)v31 - 2) - 104;
        if ( v54 > 0xFu || !_bittest(&v53, v54) )
        {
          v55 = 3LL;
          v56 = (char *)L"hs" - v52;
          while ( v55 != -2147483643 )
          {
            v57 = *(_WORD *)&v52[v56];
            if ( !v57 )
              break;
            *(_WORD *)v52 = v57;
            v52 += 2;
            if ( !--v55 )
            {
              v52 -= 2;
              break;
            }
          }
          *(_WORD *)v52 = 0;
          goto LABEL_32;
        }
      }
      if ( v51 == 83 )
      {
        v66 = 115;
LABEL_129:
        *(_WORD *)v52 = v66;
        goto LABEL_32;
      }
      if ( v51 == 67 )
      {
        v66 = 99;
        goto LABEL_129;
      }
    }
LABEL_32:
    v33 = v81;
    if ( (unsigned int)v29 >= v81 )
    {
      do
      {
        v34 = v33;
        if ( a5 )
        {
          v35 = *v12++;
        }
        else
        {
          *v12 += 8LL;
          v35 = *(_QWORD *)(*v12 - 8);
        }
        ++v33;
        v92[v34] = v35;
      }
      while ( v33 <= (unsigned int)v29 );
      v81 = v33;
      v83 = v12;
    }
    v36 = (char *)v92[v29];
    v37 = 0LL;
    v85 = v36;
    v38 = 0LL;
    if ( v30 )
    {
      if ( a5 )
      {
        v37 = *v12;
        v67 = v33++;
        ++v12;
        v81 = v33;
        v83 = v12;
        v92[v67] = v37;
      }
      else
      {
        *v12 += 8LL;
        v37 = *(_QWORD *)(*v12 - 8);
      }
      if ( v30 > 1 )
      {
        if ( a5 )
        {
          v38 = *v12;
          v68 = v33;
          v69 = v33 + 1;
          v83 = v12 + 1;
        }
        else
        {
          *v12 += 8LL;
          v38 = *(_QWORD *)(*v12 - 8);
          v68 = v33;
          v69 = v33 + 1;
        }
        v81 = v69;
        v92[v68] = v38;
      }
    }
    v39 = RtlStringCchPrintfExW((_DWORD)v17, v14, (unsigned int)&v86, 0, 0, (__int64)&v93, v36, v37, v38);
LABEL_39:
    v16 = v82;
    if ( v39 < 0 || (v40 = (v86 - (__int64)v17) >> 1, v14 -= v40, v14 < 0) )
    {
LABEL_64:
      a1 = v80;
      goto LABEL_65;
    }
    v24 = v89;
    v13 = a2;
    v15 = v88;
    v12 = v83;
    v11 = a3;
    v17 += (int)v40;
LABEL_42:
    if ( v24 )
    {
      v16 += v17 - v24;
      goto LABEL_13;
    }
LABEL_63:
    v18 = 0LL;
    v16 = 0;
LABEL_13:
    v82 = v16;
    v80 = v19;
    a1 = v19;
    if ( (unsigned int)(v13 - 1) <= 0xFFFFFFFD && v16 >= (unsigned int)v13 )
    {
      v10 = a10;
LABEL_148:
      if ( v18 )
      {
        v70 = v18;
        do
        {
          if ( *v70 != 32 && *v70 != 9 )
            break;
          ++v70;
        }
        while ( v70 != v17 );
        if ( (unsigned __int64)v18 > v15 )
        {
          do
          {
            v71 = *(v18 - 1);
            v72 = v18 - 1;
            if ( v71 != 32 && v71 != 9 )
              break;
            --v18;
          }
          while ( (unsigned __int64)v72 > v15 );
          a1 = v80;
        }
        v73 = v70 - v18;
        if ( (_DWORD)v73 == 1 )
        {
          if ( --v14 < 0 )
            goto LABEL_160;
        }
        else if ( (unsigned int)v73 > 2 )
        {
          v14 = v73 + v14 - 2;
        }
        v74 = v17 - v70;
        v16 = v74;
        v82 = v74;
        memmove(v18 + 2, v70, 2 * v74);
        a1 = v80;
        v13 = a2;
        v15 = v88;
        v12 = v83;
        *v18 = 13;
        v75 = v18 + 1;
        *v75 = 10;
        v76 = &v75[(unsigned int)v74];
      }
      else
      {
        v14 -= 2;
        if ( v14 < 0 )
        {
LABEL_160:
          if ( v10 )
          {
            *(_DWORD *)v10 |= 2u;
            goto LABEL_66;
          }
          return 2147483653LL;
        }
        v16 = 0;
        *v17 = 13;
        v76 = v17 + 1;
        v82 = 0;
        *v76 = 10;
      }
      v18 = 0LL;
      v17 = v76 + 1;
    }
  }
  if ( v23 != 48 )
  {
    switch ( v23 )
    {
      case 0u:
        return 3221225485LL;
      case 0x72u:
        if ( --v14 < 0 )
          goto LABEL_64;
        *v17++ = 13;
        v19 += 2;
        goto LABEL_63;
      case 0x6Eu:
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *(_DWORD *)v17 = 655373;
        v17 += 2;
        v19 += 2;
        goto LABEL_63;
      case 0x74u:
        if ( --v14 < 0 )
          goto LABEL_64;
        if ( (v16 & 7) != 0 )
          v16 = (v16 + 7) & 0xFFFFFFF8;
        else
          v16 += 8;
        v18 = v17;
        *v17 = 9;
        break;
      case 0x62u:
        if ( --v14 < 0 )
          goto LABEL_64;
        v18 = v17;
        *v17 = 32;
        break;
      default:
        if ( !v11 )
        {
          if ( --v14 < 0 )
            goto LABEL_64;
          *v17 = v23;
          break;
        }
        v14 -= 2;
        if ( v14 < 0 )
          goto LABEL_64;
        *v17 = 37;
        v17[1] = v19[1];
        v17 += 2;
LABEL_96:
        v19 += 2;
        goto LABEL_42;
    }
    ++v17;
    goto LABEL_96;
  }
  a1 = v80;
LABEL_16:
  if ( v14 < 1 )
  {
LABEL_65:
    v10 = a10;
LABEL_66:
    if ( v10 )
    {
      v43 = v88;
      v44 = a1 - v90;
      v45 = ((__int64)v17 - v88) >> 1;
      *(_DWORD *)(v10 + 4) = v16;
      *(_QWORD *)(v10 + 8) = v44;
      *(_QWORD *)(v10 + 16) = v45;
      if ( v18 )
        v46 = ((__int64)v18 - v43) >> 1;
      else
        v46 = -1LL;
      *(_DWORD *)v10 |= 1u;
      *(_QWORD *)(v10 + 24) = v46;
    }
    return 2147483653LL;
  }
  v21 = (_DWORD *)v91;
  *v17 = 0;
  if ( v21 )
    *v21 = 2 * ((__int64)((__int64)v17 - v15 + 2) >> 1);
  return 0LL;
}
