/*
 * XREFs of RtlFormatMessageEx @ 0x1406E73C4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x1406E7370 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14004C0E0 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400819F0 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
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
        _DWORD *a9)
{
  __int64 *v9; // r10
  char v11; // r13
  unsigned int v12; // r11d
  NTSTRSAFE_PWSTR v13; // r8
  NTSTRSAFE_PWSTR v14; // rbx
  unsigned int v15; // r9d
  signed int v16; // r12d
  unsigned int v17; // r14d
  NTSTRSAFE_PWSTR v18; // rsi
  __int16 v19; // ax
  wchar_t v20; // cx
  NTSTRSAFE_PWSTR v21; // rdx
  unsigned __int16 v22; // dx
  int v23; // esi
  int v24; // ecx
  int v25; // esi
  int v26; // ecx
  int v27; // esi
  int v28; // r14d
  int v29; // r15d
  unsigned int v30; // r13d
  __int64 v31; // rsi
  _WORD *v32; // rdi
  NTSTRSAFE_PWSTR v33; // rdx
  char v34; // r8
  wchar_t v35; // cx
  unsigned int v36; // eax
  int v37; // ecx
  NTSTATUS v38; // eax
  __int16 v39; // r8
  char *v40; // rcx
  unsigned __int16 v41; // ax
  int v42; // r14d
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
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r11d
  __int64 v59; // rax
  NTSTRSAFE_PWSTR v60; // rdx
  __int16 v61; // ax
  NTSTRSAFE_PWSTR v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  _WORD *v65; // rsi
  _WORD *v66; // rbx
  __int64 v68; // [rsp+30h] [rbp-D0h]
  unsigned int v71; // [rsp+54h] [rbp-ACh]
  NTSTRSAFE_PWSTR v72; // [rsp+58h] [rbp-A8h]
  unsigned int v73; // [rsp+60h] [rbp-A0h]
  __int64 v74; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v77; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+88h] [rbp-78h]
  NTSTRSAFE_PWSTR v79; // [rsp+90h] [rbp-70h]
  _DWORD *v80; // [rsp+98h] [rbp-68h]
  _QWORD v81[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v83[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  wchar_t v84[9]; // [rsp+71Eh] [rbp+61Eh] BYREF

  v9 = a6;
  v11 = a3;
  v80 = a9;
  v12 = 0;
  v13 = a7;
  v14 = a7;
  v15 = a2;
  v74 = (__int64)a6;
  v78 = a7;
  v71 = 0;
  v16 = a8 >> 1;
LABEL_2:
  v17 = 0;
  v73 = 0;
LABEL_3:
  v18 = 0LL;
  v72 = 0LL;
  while ( 1 )
  {
    v19 = *a1;
    if ( !*a1 )
      break;
    if ( v19 != 37 )
    {
      ++a1;
      if ( v19 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_107;
      }
      else
      {
        if ( v19 != 10 )
        {
LABEL_109:
          if ( --v16 < 0 )
            return 2147483653LL;
          *v14 = v19;
          if ( v19 == 32 )
            v18 = v14;
          ++v14;
          ++v17;
          v72 = v18;
          goto LABEL_113;
        }
        if ( *a1 != 13 )
        {
LABEL_107:
          if ( !v15 )
          {
            v16 -= 2;
            if ( v16 < 0 )
              return 2147483653LL;
            *(_DWORD *)v14 = 655373;
            v14 += 2;
            goto LABEL_2;
          }
          v18 = v14;
          v19 = 32;
          goto LABEL_109;
        }
      }
      ++a1;
      goto LABEL_107;
    }
    v20 = a1[1];
    v21 = v14;
    v79 = v14;
    if ( (unsigned __int16)(v20 - 49) > 8u )
    {
      switch ( v20 )
      {
        case 0x30u:
          goto LABEL_136;
        case 0u:
          return 3221225485LL;
        case 0x72u:
          if ( --v16 < 0 )
            return 2147483653LL;
          *v14++ = 13;
          a1 += 2;
LABEL_99:
          v18 = 0LL;
          v72 = 0LL;
          v17 = 0;
          goto LABEL_113;
        case 0x6Eu:
          v16 -= 2;
          if ( v16 < 0 )
            return 2147483653LL;
          *(_DWORD *)v14 = 655373;
          v14 += 2;
          a1 += 2;
          goto LABEL_99;
        case 0x74u:
          if ( --v16 < 0 )
            return 2147483653LL;
          if ( (v17 & 7) != 0 )
            v17 = (v17 + 7) & 0xFFFFFFF8;
          else
            v17 += 8;
          v72 = v14;
          *v14 = 9;
          v18 = v14;
          goto LABEL_96;
        case 0x62u:
          if ( --v16 < 0 )
            return 2147483653LL;
          v72 = v14;
          *v14 = 32;
          v18 = v14;
          goto LABEL_96;
      }
      if ( v11 )
      {
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v14 = 37;
        v14[1] = a1[1];
        v14 += 2;
      }
      else
      {
        if ( --v16 < 0 )
          return 2147483653LL;
        *v14 = v20;
LABEL_96:
        ++v14;
      }
      a1 += 2;
      goto LABEL_98;
    }
    v22 = a1[2];
    a1 += 2;
    v23 = v20 - 48;
    if ( (unsigned __int16)(v22 - 48) <= 9u )
    {
      v24 = 5 * v23;
      ++a1;
      v25 = v22 - 48;
      v22 = *a1;
      v23 = v25 + 2 * v24;
      if ( (unsigned __int16)(*a1 - 48) <= 9u )
      {
        v26 = 5 * v23;
        ++a1;
        v27 = v22 - 48;
        v22 = *a1;
        v23 = v27 + 2 * v26;
        if ( (unsigned __int16)(*a1 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v28 = v23;
    v29 = v23;
    v30 = 0;
    v31 = (unsigned int)(v23 - 1);
    if ( v22 == 33 )
    {
      v32 = a1 + 1;
      v33 = v83;
      ppszDestEnd = v83;
      pszDest = 37;
      v34 = 0;
      v35 = *v32;
      if ( *v32 != 33 )
      {
        while ( v35 )
        {
          if ( v33 >= v84 )
            break;
          if ( v35 == 42 )
          {
            v36 = v30++;
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
      v9 = (__int64 *)v74;
      v12 = v71;
    }
    if ( !a3 )
    {
      if ( !v9 || (unsigned int)v31 + v30 >= 0xC8 )
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
      if ( (unsigned int)v31 >= v12 )
      {
        do
        {
          v51 = v12;
          if ( a5 )
          {
            v52 = *v9++;
          }
          else
          {
            *v9 += 8LL;
            v52 = *(_QWORD *)(*v9 - 8);
          }
          ++v12;
          v81[v51] = v52;
        }
        while ( v12 <= (unsigned int)v31 );
        v71 = v12;
        v74 = (__int64)v9;
      }
      v53 = (wchar_t *)v81[v31];
      v54 = 0LL;
      v55 = 0LL;
      ppszDestEnd = v53;
      if ( v30 )
      {
        if ( a5 )
        {
          v54 = *v9;
          v56 = v12++;
          ++v9;
          v71 = v12;
          v74 = (__int64)v9;
          v81[v56] = v54;
        }
        else
        {
          *v9 += 8LL;
          v54 = *(_QWORD *)(*v9 - 8);
        }
        if ( v30 > 1 )
        {
          if ( a5 )
          {
            v55 = *v9;
            v57 = v12;
            v58 = v12 + 1;
            v74 = (__int64)(v9 + 1);
          }
          else
          {
            *v9 += 8LL;
            v55 = *(_QWORD *)(*v9 - 8);
            v57 = v12;
            v58 = v12 + 1;
          }
          v71 = v58;
          v81[v57] = v55;
        }
      }
      if ( RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, &pszDest, v53, v54, v55) < 0 )
        return 2147483653LL;
      goto LABEL_72;
    }
    if ( v34 == 1 )
      goto LABEL_26;
    v37 = pszDest - aS_3[0];
    if ( pszDest == aS_3[0] )
    {
      v37 = v83[0] - aS_3[1];
      if ( v83[0] == aS_3[1] )
        v37 = v83[1] - aS_3[2];
    }
    if ( !v37 )
    {
LABEL_26:
      LODWORD(v68) = v28;
      v38 = RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, L"%%%u", v68);
    }
    else
    {
      LODWORD(v68) = v29;
      v38 = RtlStringCchPrintfExW(v14, v16, &v77, 0LL, 0, L"%%%u!%s!", v68, v83);
    }
    if ( v38 < 0 )
      return 2147483653LL;
LABEL_72:
    v59 = v77 - v14;
    v16 -= v59;
    if ( v16 < 0 )
      return 2147483653LL;
    v18 = v72;
    v17 = v73;
    v9 = (__int64 *)v74;
    v21 = v79;
    v12 = v71;
    v13 = v78;
    v15 = a2;
    v11 = a3;
    v14 += (int)v59;
LABEL_98:
    if ( !v21 )
      goto LABEL_99;
    v17 += v14 - v21;
LABEL_113:
    v73 = v17;
    if ( v15 - 1 <= 0xFFFFFFFD && v17 >= v15 )
    {
      if ( v18 )
      {
        v60 = v18;
        do
        {
          if ( *v60 != 32 && *v60 != 9 )
            break;
          ++v60;
        }
        while ( v60 != v14 );
        if ( v18 > v13 )
        {
          do
          {
            v61 = *(v18 - 1);
            v62 = v18 - 1;
            if ( v61 != 32 && v61 != 9 )
              break;
            --v18;
          }
          while ( v62 > v13 );
        }
        v63 = v60 - v18;
        if ( (_DWORD)v63 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_129;
          return 2147483653LL;
        }
        if ( (unsigned int)v63 > 2 )
          v16 = v63 + v16 - 2;
LABEL_129:
        v64 = v14 - v60;
        v17 = v64;
        v73 = v64;
        memmove(v18 + 2, v60, 2 * v64);
        v9 = (__int64 *)v74;
        v12 = v71;
        v13 = v78;
        v15 = a2;
        *v18 = 13;
        v65 = v18 + 1;
        *v65 = 10;
        v66 = &v65[(unsigned int)v64];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return 2147483653LL;
        *v14 = 13;
        v17 = 0;
        v66 = v14 + 1;
        v73 = 0;
        *v66 = 10;
      }
      v14 = v66 + 1;
      goto LABEL_3;
    }
  }
LABEL_136:
  if ( v16 < 1 )
    return 2147483653LL;
  *v14 = 0;
  if ( v80 )
    *v80 = 2 * (((char *)v14 - (char *)v13 + 2) >> 1);
  return 0LL;
}
