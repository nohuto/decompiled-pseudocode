/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003A84C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C003BD8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00ACEF0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  char *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rax
  char v13; // r11
  char *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  const unsigned __int16 *v17; // rbx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  struct _HASHBUCKET *v21; // r9
  WCHAR *v22; // rdx
  unsigned int j; // ecx
  int v24; // eax
  WCHAR *v25; // rcx
  WCHAR v26; // dx
  struct _HASHBUCKET *v27; // rbx
  struct _HASHBUCKET *v28; // rax
  char *v29; // r15
  int v30; // r12d
  struct _HASHBUCKET **v31; // rsi
  int v32; // edi
  struct _HASHBUCKET *v33; // r14
  _QWORD *v34; // r11
  unsigned int v35; // ebx
  _DWORD *v36; // rdx
  int v37; // ecx
  _DWORD *v38; // rax
  _QWORD *v40; // rbx
  int v41; // eax
  int v42; // r8d
  __int64 v43; // r9
  _QWORD *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  const unsigned __int16 *v47; // rbx
  struct _HASHBUCKET *v48; // rax
  __int64 v49; // r9
  __int16 AppCompatFlags2; // ax
  struct _HASHBUCKET *v51; // rax
  char *v52; // rdi
  unsigned __int16 *v53; // rax
  int v54; // edx
  int v55; // ecx
  struct _HASHBUCKET *v56; // rax
  char v57; // [rsp+30h] [rbp-99h]
  unsigned __int8 v58[3]; // [rsp+31h] [rbp-98h] BYREF
  char v59; // [rsp+34h] [rbp-95h] BYREF
  char v60; // [rsp+35h] [rbp-94h]
  char v61; // [rsp+36h] [rbp-93h]
  MAPPER *v62; // [rsp+38h] [rbp-91h]
  const unsigned __int16 *i; // [rsp+40h] [rbp-89h] BYREF
  int v64; // [rsp+48h] [rbp-81h]
  int v65; // [rsp+4Ch] [rbp-7Dh]
  int v66; // [rsp+50h] [rbp-79h]
  int v67; // [rsp+54h] [rbp-75h]
  _QWORD *v68; // [rsp+58h] [rbp-71h]
  _QWORD v69[2]; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-49h] BYREF
  struct _HASHBUCKET *v72; // [rsp+90h] [rbp-39h] BYREF
  struct _HASHBUCKET *v73; // [rsp+98h] [rbp-31h]
  struct _HASHBUCKET *v74; // [rsp+A0h] [rbp-29h]
  _WORD v75[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v67 = a3;
  v5 = this;
  v62 = this;
  v68 = 0LL;
  *v3 &= ~1u;
  v6 = (__int64)*a2;
  v58[0] = 1;
  v64 = 0;
  v69[0] = a2;
  v69[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  k = 0LL;
  v9 = 0LL;
  v10 = (char *)gpfsTable;
  v11 = v7;
  v65 = *(_DWORD *)(v6 + 4);
  v12 = *((_QWORD *)this + 1);
  v74 = 0LL;
  v73 = 0LL;
  v72 = 0LL;
  v13 = *(_BYTE *)(v12 + 23);
  v57 = v13;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  v60 = v13;
  v61 = v13;
  v59 = v13;
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
    DestinationString.Buffer = v75;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v5 = v62;
    v9 = 0LL;
    v13 = v57;
  }
  v16 = (int)v15;
  v17 = 0LL;
  v75[v16] = 0;
  if ( v10 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v18 = v75;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v18 + v10 + 64 - (char *)v75);
      v20 = *v18 - v19;
      if ( v20 )
        break;
      ++v18;
    }
    while ( v19 );
    if ( v20 )
      goto LABEL_12;
    if ( v10 != gpfsTable )
    {
      if ( (v10[129] & 1) != 0 )
      {
        v17 = (const unsigned __int16 *)v10;
      }
      else
      {
        if ( v13 == v10[128] )
          v9 = (const unsigned __int16 *)v10;
        i = v9;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(0x400u);
    v9 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v13 = v57;
LABEL_12:
    v10 += 196;
    if ( v10 >= v14 )
      goto LABEL_13;
  }
  v17 = (const unsigned __int16 *)v10;
LABEL_13:
  v5 = v62;
  if ( v9 )
  {
LABEL_73:
    if ( (*((_BYTE *)v9 + 195) & 1) != 0 )
    {
      v72 = FHOBJ::pbktSearch((FHOBJ *)v69, v7, 0LL, 0LL, 0);
      k = v72;
      v48 = FHOBJ::pbktSearch((FHOBJ *)v69, i + 65, 0LL, 0LL, 0);
      v5 = v62;
      v27 = v48;
      v73 = v48;
    }
    else
    {
      v51 = FHOBJ::pbktSearch((FHOBJ *)v69, v9 + 65, 0LL, 0LL, 0);
      v5 = v62;
      v27 = v51;
      v73 = v51;
      v60 = *((_BYTE *)i + 194);
    }
    goto LABEL_30;
  }
LABEL_14:
  i = v17;
  v9 = v17;
  if ( v17 )
    goto LABEL_73;
  v21 = 0LL;
  if ( v7 )
  {
    v22 = v7;
    for ( j = 0; *v22; j = v24 + 257 * j )
      v24 = *(unsigned __int8 *)v22++;
    for ( k = *(struct _HASHBUCKET **)(v6 + 8LL * (j % *(_DWORD *)(v6 + 8)) + 40); k; k = *(struct _HASHBUCKET **)k )
    {
      v25 = v7;
      if ( *v7 == *((_WORD *)k + 30) )
      {
        v26 = *v7;
        while ( v26 )
        {
          v26 = v25[1];
          if ( v26 != *(WCHAR *)((char *)++v25 + k - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_20;
        }
        if ( (*((_DWORD *)k + 8) & 2) == 0 )
          goto LABEL_27;
        v21 = k;
      }
LABEL_20:
      ;
    }
    k = v21;
  }
LABEL_27:
  v72 = k;
  if ( v67 )
  {
    if ( !k )
    {
      v47 = (const unsigned __int16 *)gpfmffTable;
      if ( gpfmffTable )
      {
        v52 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
        cCapString(v75, v7, 32LL);
        if ( v47 < (const unsigned __int16 *)v52 )
        {
          while ( 1 )
          {
            v53 = v75;
            do
            {
              v54 = *(unsigned __int16 *)((char *)v53 + (char *)v47 - (char *)v75);
              v55 = *v53 - v54;
              if ( v55 )
                break;
              ++v53;
            }
            while ( v54 );
            if ( !v55 )
              break;
            v47 += 64;
            if ( v47 >= (const unsigned __int16 *)v52 )
              goto LABEL_93;
          }
          if ( v47 )
          {
            v56 = FHOBJ::pbktSearch((FHOBJ *)v69, v47 + 32, 0LL, 0LL, 0);
            v5 = v62;
            v27 = v56;
            v73 = v56;
            v64 = 1;
            goto LABEL_30;
          }
        }
LABEL_93:
        v5 = v62;
      }
    }
  }
  v27 = 0LL;
LABEL_30:
  if ( *((_WORD *)v5 + 12) && v65 == 1 )
  {
    v28 = FHOBJ::pbktSearch((FHOBJ *)v69, (const unsigned __int16 *)v5 + 12, 0LL, 0LL, 0);
    v5 = v62;
    v74 = v28;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !k && !v27 && !v28 )
    return 0LL;
  v29 = &v59;
  v30 = v66;
  v31 = &v72;
  v32 = 0;
  **((_DWORD **)v5 + 29) |= 1u;
  *((_DWORD *)v5 + 63) |= 0x40000000u;
  while ( 1 )
  {
    v33 = *v31;
    if ( *v31 )
    {
      *((_BYTE *)v5 + 284) = *v29;
      if ( (*((_DWORD *)v33 + 8) & 2) != 0 )
        *((_DWORD *)v5 + 63) |= 0x400000u;
      else
        *((_DWORD *)v5 + 63) &= ~0x400000u;
      if ( v32 == 2 )
        *((_DWORD *)v5 + 63) |= 0x80000000;
      else
        *((_DWORD *)v5 + 63) &= ~0x80000000;
      v40 = (_QWORD *)*((_QWORD *)v33 + 1);
      v68 = 0LL;
      if ( v40 )
        break;
    }
LABEL_35:
    ++v32;
    ++v29;
    ++v31;
    if ( v32 >= 3 )
    {
      v34 = v68;
      v35 = 0;
      goto LABEL_37;
    }
  }
  while ( 2 )
  {
    i = (const unsigned __int16 *)v40[1];
    v41 = MAPPER::bNearMatch(v5, (struct PFEOBJ *)&i, v58, 0);
    v5 = v62;
    if ( !v41 )
    {
LABEL_53:
      v40 = (_QWORD *)*v40;
      if ( !v40 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v30 = v32;
  v42 = *((_DWORD *)v62 + 63);
  v34 = v40;
  v43 = v40[1];
  **((_DWORD **)v62 + 27) = *((_DWORD *)v62 + 47);
  v44 = (_QWORD *)*((_QWORD *)v5 + 28);
  v45 = *((_QWORD *)v5 + 24);
  v68 = v40;
  *v44 = v45;
  **((_DWORD **)v5 + 29) = **((_DWORD **)v5 + 29) & 0xFFFFFF | (v58[0] << 24);
  *((_QWORD *)v5 + 25) = v43;
  if ( (v42 & 0x80u) != 0 )
  {
    *((_DWORD *)v5 + 63) |= 0x1000000u;
  }
  else
  {
    v46 = *(_DWORD *)(v43 + 88);
    *((_DWORD *)v5 + 63) &= ~0x1000000u;
    *((_DWORD *)v5 + 52) = v46;
  }
  if ( *((_DWORD *)v5 + 46) )
  {
LABEL_58:
    *((_DWORD *)v5 + 45) = *((_DWORD *)v5 + 46);
    goto LABEL_53;
  }
  if ( *((_DWORD *)v33 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&i) & 1) == 0 )
  {
    *((_DWORD *)v5 + 46) = 1;
    goto LABEL_58;
  }
  v35 = 1;
LABEL_37:
  if ( v34 )
  {
    if ( v30 == 1 )
    {
      if ( v64 )
        goto LABEL_40;
    }
    else if ( v65 )
    {
LABEL_40:
      v36 = (_DWORD *)*((_QWORD *)v5 + 29);
      v37 = HIBYTE(*v36);
      if ( HIBYTE(*v36) != 0xFF
        || (v49 = v34[1], *(_DWORD *)(*(_QWORD *)(v49 + 32) + 40LL))
        || (*(_DWORD *)(v49 + 12) & 1) != 0 )
      {
        if ( v37 == 255 )
        {
          v4 = 1;
        }
        else
        {
          v38 = &charsets;
          do
          {
            if ( *v38 == v37 )
            {
              v4 = codepages[v4];
              goto LABEL_45;
            }
            ++v4;
            ++v38;
          }
          while ( (__int64)v38 < (__int64)codepages );
          v4 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
        }
      }
      else if ( gbDBCSCodePage )
      {
        v4 = 1252;
      }
LABEL_45:
      *v36 |= v4 << 8;
      goto LABEL_46;
    }
    **((_DWORD **)v5 + 29) |= 2u;
    goto LABEL_40;
  }
LABEL_46:
  *((_DWORD *)v5 + 63) &= ~0x400000u;
  return v35;
}
