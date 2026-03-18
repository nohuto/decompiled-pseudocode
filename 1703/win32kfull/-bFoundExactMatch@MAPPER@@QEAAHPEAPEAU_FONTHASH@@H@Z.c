/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0056630
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00582F4 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     cCapString @ 0x1C002CDA8 (cCapString.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C002E804 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C002FFD0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  int v4; // r13d
  MAPPER *v5; // r10
  __int64 v6; // r12
  WCHAR *v7; // r15
  struct _HASHBUCKET *k; // r14
  const unsigned __int16 *v9; // r9
  char *v10; // r11
  WCHAR *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rbx
  WCHAR *v16; // rax
  int v17; // ecx
  int v18; // edx
  struct _HASHBUCKET *v19; // r9
  WCHAR *v20; // rdx
  unsigned int j; // ecx
  int v22; // eax
  WCHAR *v23; // rcx
  WCHAR v24; // dx
  struct _HASHBUCKET *v25; // rbx
  struct _HASHBUCKET *v26; // rax
  char *v27; // r15
  int v28; // r12d
  struct _HASHBUCKET **v29; // rsi
  int v30; // edi
  struct _HASHBUCKET *v31; // r14
  _QWORD *v32; // r11
  unsigned int v33; // ebx
  _DWORD *v34; // rdx
  int v35; // ecx
  _DWORD *v36; // rax
  _QWORD *v38; // rbx
  int v39; // eax
  int v40; // r8d
  __int64 v41; // r9
  _QWORD *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  const unsigned __int16 *v45; // rbx
  struct _HASHBUCKET *v46; // rax
  __int64 v47; // r9
  __int16 AppCompatFlags2; // ax
  struct _HASHBUCKET *v49; // rax
  char *v50; // rdi
  WCHAR *v51; // rax
  int v52; // edx
  int v53; // ecx
  struct _HASHBUCKET *v54; // rax
  unsigned __int8 v55; // [rsp+30h] [rbp-99h] BYREF
  char v56; // [rsp+31h] [rbp-98h]
  char v57; // [rsp+34h] [rbp-95h] BYREF
  char v58; // [rsp+35h] [rbp-94h]
  char v59; // [rsp+36h] [rbp-93h]
  MAPPER *v60; // [rsp+38h] [rbp-91h]
  const unsigned __int16 *i; // [rsp+40h] [rbp-89h]
  char *v62; // [rsp+48h] [rbp-81h] BYREF
  int v63; // [rsp+50h] [rbp-79h]
  int v64; // [rsp+54h] [rbp-75h]
  int v65; // [rsp+58h] [rbp-71h]
  int v66; // [rsp+5Ch] [rbp-6Dh]
  _QWORD *v67; // [rsp+60h] [rbp-69h]
  _QWORD v68[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _HASHBUCKET *v71; // [rsp+98h] [rbp-31h] BYREF
  struct _HASHBUCKET *v72; // [rsp+A0h] [rbp-29h]
  struct _HASHBUCKET *v73; // [rsp+A8h] [rbp-21h]
  WCHAR v74[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v66 = a3;
  v5 = this;
  v60 = this;
  v67 = 0LL;
  *v3 &= ~1u;
  v6 = (__int64)*a2;
  v55 = 1;
  v63 = 0;
  v68[0] = a2;
  v68[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  k = 0LL;
  v9 = 0LL;
  v10 = (char *)gpfsTable;
  v11 = v7;
  v64 = *(_DWORD *)(v6 + 4);
  v12 = (char *)gpfsTable;
  v13 = *((_QWORD *)this + 1);
  v73 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v56 = *(_BYTE *)(v13 + 23);
  v58 = v56;
  v59 = v56;
  v57 = v56;
  v62 = 0LL;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  for ( i = 0LL; v11 < v7 + 31; ++v11 )
  {
    if ( !*v11 )
      break;
  }
  v15 = v11 - v7;
  if ( (_DWORD)v15 )
  {
    SourceString.Buffer = v7;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v15;
    DestinationString.Buffer = v74;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v10 = (char *)gpfsTable;
    v9 = 0LL;
    v5 = v60;
  }
  v74[(int)v15] = 0;
  if ( v12 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = v74;
    do
    {
      v17 = *(WCHAR *)((char *)v16 + v12 + 64 - (char *)v74);
      v18 = *v16 - v17;
      if ( v18 )
        break;
      ++v16;
    }
    while ( v17 );
    if ( v18 )
      goto LABEL_12;
    if ( v12 != v10 )
    {
      if ( (v12[129] & 1) != 0 )
      {
        v62 = v12;
      }
      else
      {
        if ( v56 == v12[128] )
          v9 = (const unsigned __int16 *)v12;
        i = v9;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL);
    v9 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v10 = (char *)gpfsTable;
LABEL_12:
    v12 += 196;
    if ( v12 >= v14 )
      goto LABEL_13;
  }
  v62 = v12;
LABEL_13:
  v5 = v60;
  if ( v9 )
  {
LABEL_72:
    if ( (*((_BYTE *)v9 + 195) & 1) != 0 )
    {
      v71 = FHOBJ::pbktSearch((FHOBJ *)v68, v7, 0LL, 0LL, 0);
      k = v71;
      v46 = FHOBJ::pbktSearch((FHOBJ *)v68, i + 65, 0LL, 0LL, 0);
      v5 = v60;
      v25 = v46;
      v72 = v46;
    }
    else
    {
      v49 = FHOBJ::pbktSearch((FHOBJ *)v68, v9 + 65, 0LL, 0LL, 0);
      v5 = v60;
      v25 = v49;
      v72 = v49;
      v58 = *((_BYTE *)i + 194);
    }
    goto LABEL_29;
  }
LABEL_14:
  v9 = (const unsigned __int16 *)v62;
  i = (const unsigned __int16 *)v62;
  if ( v62 )
    goto LABEL_72;
  v19 = 0LL;
  if ( v7 )
  {
    v20 = v7;
    for ( j = 0; *v20; j = v22 + 257 * j )
      v22 = *(unsigned __int8 *)v20++;
    for ( k = *(struct _HASHBUCKET **)(v6 + 8LL * (j % *(_DWORD *)(v6 + 8)) + 40); k; k = *(struct _HASHBUCKET **)k )
    {
      v23 = v7;
      if ( *v7 == *((_WORD *)k + 30) )
      {
        v24 = *v7;
        while ( v24 )
        {
          v24 = v23[1];
          if ( v24 != *(WCHAR *)((char *)++v23 + k - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_23;
        }
        if ( (*((_DWORD *)k + 8) & 2) == 0 )
          goto LABEL_26;
        v19 = k;
      }
LABEL_23:
      ;
    }
    k = v19;
  }
LABEL_26:
  v71 = k;
  if ( v66 )
  {
    if ( !k )
    {
      v45 = (const unsigned __int16 *)gpfmffTable;
      if ( gpfmffTable )
      {
        v50 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
        cCapString(v74, v7, 32);
        if ( v45 < (const unsigned __int16 *)v50 )
        {
          while ( 1 )
          {
            v51 = v74;
            do
            {
              v52 = *(WCHAR *)((char *)v51 + (char *)v45 - (char *)v74);
              v53 = *v51 - v52;
              if ( v53 )
                break;
              ++v51;
            }
            while ( v52 );
            if ( !v53 )
              break;
            v45 += 64;
            if ( v45 >= (const unsigned __int16 *)v50 )
              goto LABEL_93;
          }
          if ( v45 )
          {
            v54 = FHOBJ::pbktSearch((FHOBJ *)v68, v45 + 32, 0LL, 0LL, 0);
            v5 = v60;
            v25 = v54;
            v72 = v54;
            v63 = 1;
            goto LABEL_29;
          }
        }
LABEL_93:
        v5 = v60;
      }
    }
  }
  v25 = 0LL;
LABEL_29:
  if ( *((_WORD *)v5 + 12) && v64 == 1 )
  {
    v26 = FHOBJ::pbktSearch((FHOBJ *)v68, (const unsigned __int16 *)v5 + 12, 0LL, 0LL, 0);
    v5 = v60;
    v73 = v26;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !k && !v25 && !v26 )
    return 0LL;
  v27 = &v57;
  v28 = v65;
  v29 = &v71;
  v30 = 0;
  **((_DWORD **)v5 + 29) |= 1u;
  *((_DWORD *)v5 + 63) |= 0x40000000u;
  while ( 1 )
  {
    v31 = *v29;
    if ( *v29 )
    {
      *((_BYTE *)v5 + 284) = *v27;
      if ( (*((_DWORD *)v31 + 8) & 2) != 0 )
        *((_DWORD *)v5 + 63) |= 0x400000u;
      else
        *((_DWORD *)v5 + 63) &= ~0x400000u;
      if ( v30 == 2 )
        *((_DWORD *)v5 + 63) |= 0x80000000;
      else
        *((_DWORD *)v5 + 63) &= ~0x80000000;
      v38 = (_QWORD *)*((_QWORD *)v31 + 1);
      v67 = 0LL;
      if ( v38 )
        break;
    }
LABEL_34:
    ++v30;
    ++v27;
    ++v29;
    if ( v30 >= 3 )
    {
      v32 = v67;
      v33 = 0;
      goto LABEL_36;
    }
  }
  while ( 2 )
  {
    v62 = (char *)v38[1];
    v39 = MAPPER::bNearMatch(v5, (struct PFEOBJ *)&v62, &v55, 0);
    v5 = v60;
    if ( !v39 )
    {
LABEL_52:
      v38 = (_QWORD *)*v38;
      if ( !v38 )
        goto LABEL_34;
      continue;
    }
    break;
  }
  v28 = v30;
  v40 = *((_DWORD *)v60 + 63);
  v32 = v38;
  v41 = v38[1];
  **((_DWORD **)v60 + 27) = *((_DWORD *)v60 + 47);
  v42 = (_QWORD *)*((_QWORD *)v5 + 28);
  v43 = *((_QWORD *)v5 + 24);
  v67 = v38;
  *v42 = v43;
  **((_DWORD **)v5 + 29) = **((_DWORD **)v5 + 29) & 0xFFFFFF | (v55 << 24);
  *((_QWORD *)v5 + 25) = v41;
  if ( (v40 & 0x80u) != 0 )
  {
    *((_DWORD *)v5 + 63) |= 0x1000000u;
  }
  else
  {
    v44 = *(_DWORD *)(v41 + 88);
    *((_DWORD *)v5 + 63) &= ~0x1000000u;
    *((_DWORD *)v5 + 52) = v44;
  }
  if ( *((_DWORD *)v5 + 46) )
  {
LABEL_57:
    *((_DWORD *)v5 + 45) = *((_DWORD *)v5 + 46);
    goto LABEL_52;
  }
  if ( *((_DWORD *)v31 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&v62) & 1) == 0 )
  {
    *((_DWORD *)v5 + 46) = 1;
    goto LABEL_57;
  }
  v33 = 1;
LABEL_36:
  if ( v32 )
  {
    if ( v28 == 1 )
    {
      if ( v63 )
        goto LABEL_39;
    }
    else if ( v64 )
    {
LABEL_39:
      v34 = (_DWORD *)*((_QWORD *)v5 + 29);
      v35 = HIBYTE(*v34);
      if ( HIBYTE(*v34) != 0xFF
        || (v47 = v32[1], *(_DWORD *)(*(_QWORD *)(v47 + 32) + 40LL))
        || (*(_DWORD *)(v47 + 12) & 1) != 0 )
      {
        if ( v35 == 255 )
        {
          v4 = 1;
        }
        else
        {
          v36 = &charsets;
          do
          {
            if ( *v36 == v35 )
            {
              v4 = codepages[v4];
              goto LABEL_44;
            }
            ++v4;
            ++v36;
          }
          while ( (__int64)v36 < (__int64)&_xmm );
          v4 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
        }
      }
      else if ( gbDBCSCodePage )
      {
        v4 = 1252;
      }
LABEL_44:
      *v34 |= v4 << 8;
      goto LABEL_45;
    }
    **((_DWORD **)v5 + 29) |= 2u;
    goto LABEL_39;
  }
LABEL_45:
  *((_DWORD *)v5 + 63) &= ~0x400000u;
  return v33;
}
