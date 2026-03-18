/*
 * XREFs of RtlFormatMessageEx @ 0x14071F1A4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x14071F150 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400DEF40 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400FB3CC (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r10
  unsigned int v10; // r13d
  char v12; // r14
  unsigned int v13; // r11d
  NTSTRSAFE_PWSTR v14; // r8
  NTSTRSAFE_PWSTR v15; // rbx
  unsigned int v16; // r9d
  signed int v17; // r12d
  unsigned int v18; // esi
  NTSTRSAFE_PWSTR v19; // rdi
  __int16 v20; // ax
  wchar_t v21; // cx
  NTSTRSAFE_PWSTR v22; // rdx
  unsigned __int16 v23; // dx
  int v24; // r14d
  int v25; // ecx
  int v26; // r14d
  int v27; // ecx
  int v28; // r14d
  int v29; // edi
  int v30; // esi
  __int64 v31; // r14
  _WORD *v32; // r15
  NTSTRSAFE_PWSTR v33; // r8
  char v34; // dl
  wchar_t v35; // cx
  unsigned int v36; // eax
  int v37; // ecx
  NTSTATUS v38; // eax
  __int16 v39; // dx
  char *v40; // rcx
  unsigned __int16 v41; // ax
  int v42; // edi
  __int64 v43; // rdx
  signed __int64 v44; // r8
  __int16 v45; // ax
  unsigned __int16 v46; // ax
  signed __int64 v47; // r8
  __int16 v48; // ax
  char *v49; // rax
  __int16 v50; // ax
  __int64 v51; // rcx
  __int64 v52; // rax
  wchar_t *v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r11d
  __int64 v59; // rax
  NTSTRSAFE_PWSTR v60; // rdx
  __int16 v61; // ax
  NTSTRSAFE_PWSTR v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  _WORD *v65; // rdi
  _WORD *v66; // rbx
  _DWORD *v68; // rcx
  __int64 v69; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+54h] [rbp-ACh]
  NTSTRSAFE_PWSTR v73; // [rsp+58h] [rbp-A8h]
  unsigned int v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PWSTR v79; // [rsp+88h] [rbp-78h]
  NTSTRSAFE_PWSTR v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  _QWORD v82[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v84[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  wchar_t v85[9]; // [rsp+71Eh] [rbp+61Eh] BYREF

  v9 = a6;
  v10 = 0;
  v12 = a3;
  v13 = 0;
  v14 = a7;
  v81 = a9;
  v15 = a7;
  v16 = a2;
  v75 = (__int64)a6;
  v79 = a7;
  v72 = 0;
  v17 = a8 >> 1;
LABEL_2:
  v18 = 0;
  v74 = 0;
LABEL_3:
  v19 = 0LL;
  v73 = 0LL;
  while ( 1 )
  {
    v20 = *a1;
    if ( !*a1 )
      break;
    if ( v20 != 37 )
    {
      ++a1;
      if ( v20 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_107;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_109:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v15 = v20;
          if ( v20 == 32 )
            v19 = v15;
          ++v15;
          ++v18;
          v73 = v19;
          goto LABEL_113;
        }
        if ( *a1 != 13 )
        {
LABEL_107:
          if ( !v16 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return 2147483653LL;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
            goto LABEL_2;
          }
          v19 = v15;
          v20 = 32;
          goto LABEL_109;
        }
      }
      ++a1;
      goto LABEL_107;
    }
    v21 = a1[1];
    v22 = v15;
    v80 = v15;
    if ( (unsigned __int16)(v21 - 49) > 8u )
    {
      switch ( v21 )
      {
        case 0x30u:
          goto LABEL_136;
        case 0u:
          return 3221225485LL;
        case 0x72u:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v15++ = 13;
          a1 += 2;
LABEL_99:
          v73 = 0LL;
          v19 = 0LL;
          v18 = 0;
          goto LABEL_113;
        case 0x6Eu:
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *(_DWORD *)v15 = 655373;
          v15 += 2;
          a1 += 2;
          goto LABEL_99;
        case 0x74u:
          if ( --v17 < 0 )
            return 2147483653LL;
          if ( (v18 & 7) != 0 )
            v18 = (v18 + 7) & 0xFFFFFFF8;
          else
            v18 += 8;
          v73 = v15;
          *v15 = 9;
          v19 = v15;
          goto LABEL_96;
        case 0x62u:
          if ( --v17 < 0 )
            return 2147483653LL;
          v73 = v15;
          *v15 = 32;
          v19 = v15;
          goto LABEL_96;
      }
      if ( v12 )
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v15 = 37;
        v15[1] = a1[1];
        v15 += 2;
      }
      else
      {
        if ( --v17 < 0 )
          return 2147483653LL;
        *v15 = v21;
LABEL_96:
        ++v15;
      }
      a1 += 2;
      goto LABEL_98;
    }
    v23 = a1[2];
    a1 += 2;
    v24 = v21 - 48;
    if ( (unsigned __int16)(v23 - 48) <= 9u )
    {
      v25 = 5 * v24;
      ++a1;
      v26 = v23 - 48;
      v23 = *a1;
      v24 = v26 + 2 * v25;
      if ( (unsigned __int16)(*a1 - 48) <= 9u )
      {
        v27 = 5 * v24;
        ++a1;
        v28 = v23 - 48;
        v23 = *a1;
        v24 = v28 + 2 * v27;
        if ( (unsigned __int16)(*a1 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v29 = v24;
    v30 = v24;
    v31 = (unsigned int)(v24 - 1);
    if ( v23 == 33 )
    {
      v32 = a1 + 1;
      v33 = v84;
      ppszDestEnd = v84;
      pszDest = 37;
      v34 = 0;
      v35 = *v32;
      if ( *v32 != 33 )
      {
        while ( v35 )
        {
          if ( v33 >= v85 )
            break;
          if ( v35 == 42 )
          {
            v36 = v10++;
            if ( v36 > 1 )
              break;
          }
          ++v32;
          *v33++ = v35;
          ppszDestEnd = v33;
          v35 = *v32;
          if ( *v32 == 33 )
            goto LABEL_17;
        }
        return 3221225485LL;
      }
LABEL_17:
      a1 = v32 + 1;
      *v33 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v33 = ppszDestEnd;
      v34 = 1;
      v9 = (__int64 *)v75;
      v13 = v72;
    }
    if ( !a3 )
    {
      if ( !v9 || (unsigned int)v31 + v10 >= 0xC8 )
        return 3221225485LL;
      if ( !a4 )
        goto LABEL_56;
      v39 = *(v33 - 1);
      v40 = (char *)(v33 - 1);
      if ( v39 == 99 )
      {
        v41 = *(v33 - 2) - 104;
        if ( v41 > 0xFu || (v42 = 32785, !_bittest(&v42, v41)) )
        {
          v43 = 3LL;
          v44 = (char *)L"hc" - v40;
          while ( v43 != -2147483643 )
          {
            v45 = *(_WORD *)&v40[v44];
            if ( !v45 )
              break;
            *(_WORD *)v40 = v45;
            v40 += 2;
            if ( !--v43 )
            {
              *((_WORD *)v40 - 1) = 0;
              goto LABEL_56;
            }
          }
LABEL_48:
          v49 = v40 - 2;
          if ( v43 )
            v49 = v40;
          *(_WORD *)v49 = 0;
          goto LABEL_56;
        }
      }
      else
      {
        v42 = 32785;
      }
      if ( v39 == 115 )
      {
        v46 = *(v33 - 2) - 104;
        if ( v46 > 0xFu || !_bittest(&v42, v46) )
        {
          v43 = 3LL;
          v47 = (char *)L"hs" - v40;
          do
          {
            if ( v43 == -2147483643 )
              break;
            v48 = *(_WORD *)&v40[v47];
            if ( !v48 )
              break;
            *(_WORD *)v40 = v48;
            v40 += 2;
            --v43;
          }
          while ( v43 );
          goto LABEL_48;
        }
      }
      if ( v39 == 83 )
      {
        v50 = 115;
      }
      else
      {
        if ( v39 != 67 )
          goto LABEL_56;
        v50 = 99;
      }
      *(_WORD *)v40 = v50;
LABEL_56:
      if ( (unsigned int)v31 >= v13 )
      {
        do
        {
          v51 = v13;
          if ( a5 )
          {
            v52 = *v9++;
          }
          else
          {
            *v9 += 8LL;
            v52 = *(_QWORD *)(*v9 - 8);
          }
          ++v13;
          v82[v51] = v52;
        }
        while ( v13 <= (unsigned int)v31 );
        v72 = v13;
        v75 = (__int64)v9;
      }
      v53 = (wchar_t *)v82[v31];
      v54 = 0LL;
      ppszDestEnd = v53;
      v55 = 0LL;
      if ( v10 )
      {
        if ( a5 )
        {
          v55 = *v9;
          v56 = v13++;
          ++v9;
          v72 = v13;
          v75 = (__int64)v9;
          v82[v56] = v55;
        }
        else
        {
          *v9 += 8LL;
          v55 = *(_QWORD *)(*v9 - 8);
        }
        if ( v10 > 1 )
        {
          if ( a5 )
          {
            v54 = *v9;
            v57 = v13;
            v58 = v13 + 1;
            v75 = (__int64)(v9 + 1);
          }
          else
          {
            *v9 += 8LL;
            v54 = *(_QWORD *)(*v9 - 8);
            v57 = v13;
            v58 = v13 + 1;
          }
          v72 = v58;
          v82[v57] = v54;
        }
      }
      v10 = 0;
      if ( RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, &pszDest, v53, v55, v54) < 0 )
        return 2147483653LL;
      goto LABEL_72;
    }
    if ( v34 == 1 )
      goto LABEL_26;
    v37 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v37 = v84[0] - aS_1[1];
      if ( v84[0] == aS_1[1] )
        v37 = v84[1] - aS_1[2];
    }
    if ( !v37 )
    {
LABEL_26:
      LODWORD(v69) = v29;
      v10 = 0;
      v38 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u", v69);
    }
    else
    {
      LODWORD(v69) = v30;
      v10 = 0;
      v38 = RtlStringCchPrintfExW(v15, v17, &v78, 0LL, 0, L"%%%u!%s!", v69, v84);
    }
    if ( v38 < 0 )
      return 2147483653LL;
LABEL_72:
    v59 = v78 - v15;
    v17 -= v59;
    if ( v17 < 0 )
      return 2147483653LL;
    v19 = v73;
    v18 = v74;
    v22 = v80;
    v9 = (__int64 *)v75;
    v13 = v72;
    v14 = v79;
    v16 = a2;
    v12 = a3;
    v15 += (int)v59;
LABEL_98:
    if ( !v22 )
      goto LABEL_99;
    v18 += v15 - v22;
LABEL_113:
    v74 = v18;
    if ( v16 - 1 <= 0xFFFFFFFD && v18 >= v16 )
    {
      if ( v19 )
      {
        v60 = v19;
        do
        {
          if ( *v60 != 32 && *v60 != 9 )
            break;
          ++v60;
        }
        while ( v60 != v15 );
        if ( v19 > v14 )
        {
          do
          {
            v61 = *(v19 - 1);
            v62 = v19 - 1;
            if ( v61 != 32 && v61 != 9 )
              break;
            --v19;
          }
          while ( v62 > v14 );
        }
        v63 = v60 - v19;
        if ( (_DWORD)v63 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_129;
          return 2147483653LL;
        }
        if ( (unsigned int)v63 > 2 )
          v17 = v63 + v17 - 2;
LABEL_129:
        v64 = v15 - v60;
        v18 = v64;
        v74 = v64;
        memmove(v19 + 2, v60, 2 * v64);
        v9 = (__int64 *)v75;
        v13 = v72;
        v14 = v79;
        v16 = a2;
        *v19 = 13;
        v65 = v19 + 1;
        *v65 = 10;
        v66 = &v65[(unsigned int)v64];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v15 = 13;
        v18 = 0;
        v66 = v15 + 1;
        v74 = 0;
        *v66 = 10;
      }
      v15 = v66 + 1;
      goto LABEL_3;
    }
  }
LABEL_136:
  if ( v17 < 1 )
    return 2147483653LL;
  v68 = (_DWORD *)v81;
  *v15 = 0;
  if ( v68 )
    *v68 = 2 * (((char *)v15 - (char *)v14 + 2) >> 1);
  return 0LL;
}
