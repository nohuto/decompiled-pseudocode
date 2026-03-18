/*
 * XREFs of LocalGetAclForString @ 0x14057BEE8
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057B9FC (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140019210 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     wcstoul @ 0x140160A10 (wcstoul.c)
 *     wcsncpy_s @ 0x140164E40 (wcsncpy_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlAddAce @ 0x140486100 (RtlAddAce.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlNtStatusToDosError @ 0x14056B830 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x14057C44C (LookupAccessMaskInTable.c)
 *     LocalGetSidForString @ 0x14057C4E4 (LocalGetSidForString.c)
 *     LookupAceTypeInTable @ 0x14057C714 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     LocalGetSDDLDeliminator @ 0x14057C7F8 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x14057C864 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140720400 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140720460 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140720760 (RtlAddAuditAccessObjectAce.c)
 *     LookupAceFlagsInTable @ 0x140733614 (LookupAceFlagsInTable.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x140733F54 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140736660 (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str,
        char a2,
        PVOID *a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t *v11; // rbx
  unsigned int AceCount; // esi
  unsigned int v13; // r14d
  __int64 result; // rax
  wchar_t *v15; // rax
  __int64 v16; // rax
  wchar_t *v17; // rax
  unsigned int v18; // r15d
  unsigned int v19; // edi
  _BYTE *v20; // rax
  __int16 v21; // cx
  _BYTE *v22; // rax
  PSID v23; // r12
  ACCESS_MASK v24; // r15d
  wchar_t *v25; // rdi
  __int64 v26; // rax
  unsigned __int8 v27; // si
  __int64 v28; // rax
  wchar_t *v29; // rbx
  wchar_t *v30; // rbx
  wchar_t **v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  const wchar_t *v34; // rbx
  unsigned int i; // edi
  int v36; // r12d
  _WORD *v37; // rcx
  char *v38; // r15
  _WORD *j; // rbx
  int v40; // edx
  unsigned int v41; // ebx
  unsigned int v42; // edi
  ULONG v43; // ecx
  ULONG v44; // r12d
  int v45; // r8d
  int v46; // eax
  int v47; // r14d
  PVOID v48; // rdi
  PVOID v49; // rbx
  unsigned int v50; // edx
  _BYTE *v51; // rax
  __int64 v52; // rax
  unsigned int ConditionForString; // eax
  bool v54; // zf
  unsigned int v55; // edx
  int v56; // eax
  bool v57; // cf
  unsigned int v58; // ecx
  unsigned __int64 v59; // rcx
  unsigned int v60; // edi
  _WORD *v61; // rax
  _WORD *v62; // r14
  int v63; // edx
  _WORD *v64; // r15
  char v65; // al
  unsigned int v66; // eax
  size_t v67; // rbx
  int v68; // edi
  char *v69; // rcx
  unsigned int v70; // ebx
  unsigned int v71; // ebx
  unsigned int v72; // ebx
  unsigned int v73; // ebx
  unsigned int v74; // ebx
  int v75; // ecx
  char *v76; // rdi
  ULONG v77; // eax
  unsigned int v78; // ebx
  ULONG v79; // eax
  size_t v80; // r8
  __int64 v81; // rax
  __int64 v82; // rdi
  ULONG v83; // eax
  unsigned int v84; // ebx
  ULONG v85; // eax
  ULONG v86; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v91; // [rsp+50h] [rbp-B0h]
  PVOID Src; // [rsp+58h] [rbp-A8h] BYREF
  char v93; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v94; // [rsp+61h] [rbp-9Fh]
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-9Ch]
  PSID v96; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  size_t v98; // [rsp+78h] [rbp-88h]
  unsigned int v99; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v100; // [rsp+84h] [rbp-7Ch]
  PSID Sid; // [rsp+88h] [rbp-78h] BYREF
  int v102; // [rsp+90h] [rbp-70h]
  unsigned int Size; // [rsp+94h] [rbp-6Ch]
  int Size_4; // [rsp+98h] [rbp-68h]
  _WORD *v105; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v106; // [rsp+A8h] [rbp-58h]
  GUID *p_Guid; // [rsp+B0h] [rbp-50h]
  wchar_t *v108; // [rsp+B8h] [rbp-48h] BYREF
  int v109[2]; // [rsp+C0h] [rbp-40h]
  wchar_t *EndPtr; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Ace; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t **v112; // [rsp+D8h] [rbp-28h]
  __int64 v113; // [rsp+E0h] [rbp-20h]
  int v114; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v115; // [rsp+ECh] [rbp-14h]
  GUID Guid; // [rsp+F0h] [rbp-10h] BYREF
  GUID v117; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[40]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)v109 = a5;
  v113 = a6;
  v11 = Str;
  v112 = a4;
  v99 = 0;
  AceCount = 0;
  v93 = 0;
  v13 = 0;
  v96 = 0LL;
  Sid = 0LL;
  P = 0LL;
  v98 = 0LL;
  Src = 0LL;
  Ace = 0LL;
  v114 = 0;
  v115 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v11 + 17;
    return AceCount;
  }
  v102 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v11);
  if ( (_DWORD)result )
    return result;
  v15 = *a4;
  if ( *a4 == v11 )
    return 87LL;
  if ( v15 )
  {
    v17 = v15 - 1;
  }
  else
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v11[v16] );
    v17 = &v11[v16];
  }
  *a4 = v17;
  AceCount = LocalGetAceCount(v11, v17, &v99);
  if ( AceCount )
    return AceCount;
  v18 = v99;
  if ( !v99 )
  {
    v51 = (_BYTE *)SddlpAlloc(8uLL);
    *a3 = v51;
    if ( v51 )
    {
      *v51 = 2;
      *((_BYTE *)*a3 + 1) = 0;
      *((_WORD *)*a3 + 1) = 8;
      *((_WORD *)*a3 + 2) = 0;
      *((_WORD *)*a3 + 3) = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v19 = 84 * v99 + 8;
  if ( v19 > 0xFFFF )
    v19 = 0xFFFF;
  Size = v19;
  v20 = (_BYTE *)SddlpAlloc(v19);
  *a3 = v20;
  if ( !v20 )
    return 8;
  *v20 = 2;
  v21 = 8;
  v22 = *a3;
  Size_4 = 0;
  v100 = 8;
  v22[1] = 0;
  *((_WORD *)*a3 + 1) = v19;
  *((_WORD *)*a3 + 2) = 0;
  *((_WORD *)*a3 + 3) = 0;
  v23 = v96;
  if ( !v18 )
  {
    v49 = Src;
    goto LABEL_76;
  }
  while ( 1 )
  {
    v91 = 0;
    v24 = 0;
    AccessMask = 0;
    p_Guid = 0LL;
    v106 = 0LL;
    while ( *v11 == 32 )
      ++v11;
    v25 = v11 + 1;
    if ( *v11 != 40 )
      v25 = v11;
    while ( *v25 == 32 )
      ++v25;
    v26 = LookupAceTypeInTable(v25);
    if ( !v26 )
    {
      v49 = Src;
      AceCount = 1804;
      goto LABEL_247;
    }
    v27 = *(_BYTE *)(v26 + 12);
    v28 = *(unsigned int *)(v26 + 8);
    v94 = v27;
    v29 = &v25[v28];
    if ( *v29 != 59 && *v29 != 32 )
    {
LABEL_97:
      AceCount = 1336;
      goto LABEL_245;
    }
    v30 = v29 + 1;
    if ( (unsigned __int8)(v27 - 5) <= 3u || v27 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v30 == 32 )
      ++v30;
    v31 = v112;
    while ( v30 != *v31 )
    {
      if ( *v30 == 59 )
      {
LABEL_30:
        ++v30;
        break;
      }
      for ( ; *v30 == 32; ++v30 )
        ;
      v52 = LookupAceFlagsInTable(v30);
      if ( !v52 )
      {
        AceCount = 1004;
        goto LABEL_245;
      }
      v91 |= *(_BYTE *)(v52 + 12);
      v30 += *(unsigned int *)(v52 + 8);
    }
    if ( *v30 == 32 )
      goto LABEL_30;
    while ( *v30 != 59 )
    {
      for ( ; *v30 == 32; ++v30 )
        ;
      v32 = LookupAccessMaskInTable(v30);
      if ( v32 )
      {
        v24 |= *(_DWORD *)(v32 + 12);
        v33 = *(unsigned int *)(v32 + 8);
        AccessMask = v24;
        v30 += v33;
      }
      else
      {
        v24 |= wcstoul(v30, &EndPtr, 0);
        AccessMask = v24;
        if ( EndPtr == v30 )
          goto LABEL_97;
        v30 = EndPtr;
      }
    }
    v34 = v30 + 1;
    for ( i = 0; i < 2; ++i )
    {
      while ( *v34 == 32 )
        ++v34;
      if ( *v34 != 59 )
      {
        if ( (unsigned __int8)(v27 - 5) > 3u && v27 != 11 )
          goto LABEL_97;
        wcsncpy_s(Dst, 0x25uLL, v34, 0x24uLL);
        Dst[36] = 0;
        if ( i )
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v117) )
            goto LABEL_116;
          v106 = &v117;
        }
        else
        {
          if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
            goto LABEL_116;
          p_Guid = &Guid;
        }
        v34 += 36;
        if ( *v34 != 59 && *v34 != 32 )
        {
LABEL_116:
          AceCount = 1705;
          goto LABEL_245;
        }
      }
      ++v34;
    }
    while ( *v34 == 32 )
      ++v34;
    v36 = 0;
    AceCount = LocalGetSidForString(
                 (_DWORD)v34,
                 (unsigned int)&Sid,
                 (unsigned int)&v105,
                 (unsigned int)&v93,
                 *(__int64 *)v109,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
      goto LABEL_244;
    v37 = v105;
    if ( !v105 )
      break;
    v38 = (char *)Sid;
    v96 = Sid;
    if ( !Sid )
      goto LABEL_144;
    for ( j = v105; *j == 32; ++j )
      ;
    LOBYTE(i) = v94;
    if ( v94 > 0x15u )
      goto LABEL_47;
    v40 = 2371072;
    if ( !_bittest(&v40, i) )
      goto LABEL_47;
    if ( *j != 59 )
      goto LABEL_144;
    do
      ++j;
    while ( *j == 32 );
    if ( *j != 40 )
    {
      v36 = HIDWORD(v98);
      v37 = j;
      v105 = j;
LABEL_132:
      if ( v13 )
        goto LABEL_134;
      goto LABEL_133;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13 = 0;
    LODWORD(v98) = 0;
    LODWORD(Sid) = 0;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    HIDWORD(v98) = 0;
    LODWORD(v108) = 0;
    if ( (_BYTE)i != 18 )
    {
      ConditionForString = LocalGetConditionForString(
                             (_DWORD)j,
                             (unsigned int)&v105,
                             (unsigned int)&P,
                             (unsigned int)&Sid,
                             *(__int64 *)v109,
                             v113,
                             0LL,
                             a8);
      v13 = (unsigned int)Sid;
      AceCount = ConditionForString;
      v37 = v105;
      LODWORD(v98) = (_DWORD)Sid;
      goto LABEL_132;
    }
    AceCount = LocalGetRelativeAttributeForString(
                 (_DWORD)j,
                 (unsigned int)&v105,
                 (unsigned int)&Src,
                 (unsigned int)&v108,
                 *(__int64 *)v109,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
      goto LABEL_145;
    v36 = (int)v108;
    v37 = v105;
    HIDWORD(v98) = (_DWORD)v108;
LABEL_133:
    if ( !v36 )
      goto LABEL_144;
LABEL_134:
    if ( AceCount )
      goto LABEL_145;
LABEL_47:
    if ( *v37 == 32 )
    {
      do
        ++v37;
      while ( *v37 == 32 );
      v105 = v37;
    }
    if ( *v37 != 41 )
    {
LABEL_144:
      AceCount = 1336;
LABEL_145:
      v23 = v96;
      goto LABEL_245;
    }
    v108 = v37 + 1;
    v41 = (unsigned __int8)i;
    if ( (unsigned __int8)i > 0x11u )
    {
      if ( (unsigned __int8)i != 18 )
      {
        if ( (unsigned __int8)i == 19 || (unsigned __int8)i == 20 )
        {
LABEL_52:
          v42 = 12;
          goto LABEL_53;
        }
        v54 = (unsigned __int8)i == 21;
        goto LABEL_143;
      }
      v42 = HIDWORD(v98) + 12;
      v57 = (unsigned int)(HIDWORD(v98) + 12) < HIDWORD(v98);
    }
    else
    {
      if ( (unsigned __int8)i == 17 || (unsigned __int8)i <= 3u )
        goto LABEL_52;
      if ( (unsigned __int8)i <= 4u )
        goto LABEL_144;
      if ( (unsigned __int8)i <= 8u )
      {
        v42 = 16;
        if ( p_Guid )
          v42 = 32;
        if ( v106 )
          v42 = p_Guid != 0LL ? 48 : 32;
        goto LABEL_53;
      }
      if ( (unsigned __int8)i <= 0xAu )
        goto LABEL_152;
      if ( (unsigned __int8)i != 11 )
      {
        v54 = (unsigned __int8)i == 13;
LABEL_143:
        if ( !v54 )
          goto LABEL_144;
LABEL_152:
        if ( v13 > 0xFFFFFFFC )
        {
LABEL_231:
          v49 = Src;
          AceCount = 534;
          goto LABEL_78;
        }
        v42 = -1;
        v58 = (v13 + 3) & 0xFFFFFFFC;
        v57 = v58 + 12 < v58;
        if ( v58 + 12 >= v58 )
          v42 = v58 + 12;
        goto LABEL_165;
      }
      if ( v13 > 0xFFFFFFFC )
        goto LABEL_231;
      v42 = -1;
      v55 = (v13 + 3) & 0xFFFFFFFC;
      v56 = p_Guid != 0LL ? 48 : 32;
      if ( !v106 )
        v56 = p_Guid != 0LL ? 32 : 16;
      v57 = v56 + v55 < v55;
      if ( v56 + v55 >= v55 )
        v42 = v56 + v55;
    }
LABEL_165:
    if ( v57 )
      goto LABEL_166;
LABEL_53:
    v43 = v42 + RtlLengthSid(v38) - 4;
    if ( v43 < v42 || (v44 = v43, v100 += v43, v100 < v43) )
    {
LABEL_166:
      AceCount = 534;
      goto LABEL_145;
    }
    if ( v100 > Size )
    {
      v59 = v43 * (unsigned __int64)(v99 - Size_4);
      if ( v59 > 0xFFFFFFFF || (unsigned int)v59 + Size < (unsigned int)v59 )
        goto LABEL_166;
      v60 = v59 + Size;
      v61 = (_WORD *)SddlpAlloc((unsigned int)v59 + Size);
      v62 = v61;
      if ( !v61 )
      {
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0);
        v54 = v93 == 1;
        *a3 = 0LL;
        if ( v54 )
        {
          if ( v38 )
            ExFreePoolWithTag(v38, 0);
          v23 = 0LL;
          v93 = 0;
        }
        else
        {
          v23 = v96;
        }
        AceCount = 8;
        goto LABEL_245;
      }
      memmove(v61, *a3, Size);
      v62[1] = v60;
      if ( *a3 )
        ExFreePoolWithTag(*a3, 0);
      *a3 = v62;
      Size = v60;
    }
    if ( v41 <= 0xB )
    {
      if ( v41 != 11 )
      {
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            v46 = RtlpAddKnownAce((PACL)*a3, 2u, v91, AccessMask, (unsigned __int8 *)v38, 1u);
            goto LABEL_61;
          }
          if ( v41 != 2 )
          {
            switch ( v41 )
            {
              case 5u:
                v46 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v106, v38);
                goto LABEL_61;
              case 6u:
                v46 = RtlAddAccessDeniedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v106, v38);
                goto LABEL_61;
              case 7u:
                v46 = RtlAddAuditAccessObjectAce(
                        (PACL)*a3,
                        4u,
                        v91,
                        AccessMask,
                        p_Guid,
                        v106,
                        v38,
                        v91 & 0x40,
                        v91 & 0x80);
                goto LABEL_61;
            }
            if ( v41 <= 8 )
              goto LABEL_179;
LABEL_224:
            if ( v44 >= 0xFFFF )
              goto LABEL_240;
            v81 = SddlpAlloc(v44);
            v82 = v81;
            if ( v81 )
            {
              *(_BYTE *)v81 = v94;
              *(_DWORD *)(v81 + 4) = AccessMask;
              *(_BYTE *)(v81 + 1) = v91;
              *(_WORD *)(v81 + 2) = v44;
              v83 = RtlLengthSid(v38);
              RtlCopySid(v83, (PSID)(v82 + 8), v38);
              if ( (_DWORD)v98 )
              {
                v84 = v98;
                v85 = RtlLengthSid(v38);
                memmove((void *)(v82 + v85 + 8LL), P, v84);
              }
              v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, (PVOID)v82, v44);
              ExFreePoolWithTag((PVOID)v82, 0);
            }
            else
            {
LABEL_222:
              v47 = -1073741801;
            }
            goto LABEL_62;
          }
          InheritedObjectTypeGuida = 2;
          v63 = v91 & 0x3F | 0x40;
          if ( (v91 & 0x40) == 0 )
            v63 = v91 & 0x3F;
          v45 = v63 | 0x80;
          if ( (v91 & 0x80u) == 0 )
            v45 = v63;
        }
        else
        {
          v45 = v91;
          InheritedObjectTypeGuida = 0;
        }
        v46 = RtlpAddKnownAce((PACL)*a3, 2u, v45, AccessMask, (unsigned __int8 *)v38, InheritedObjectTypeGuida);
        goto LABEL_61;
      }
      if ( v44 >= 0xFFFF )
        goto LABEL_240;
      v47 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v106, v38);
      if ( v47 < 0 )
        goto LABEL_241;
      v47 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
      if ( v47 < 0 )
        goto LABEL_241;
      v64 = Ace;
      v65 = 9;
      if ( *(_BYTE *)Ace == 5 )
        v65 = 11;
      *(_BYTE *)Ace = v65;
      v66 = v98;
      v64[1] = v44;
      if ( !v66 )
      {
        v38 = (char *)v96;
        goto LABEL_62;
      }
      v67 = v66;
      if ( *(_BYTE *)v64 == 11 )
      {
        v68 = *((_DWORD *)v64 + 2);
        v69 = (char *)&v64[8 * (v68 & 1) + 6 + 4 * (v68 & 2)] + RtlLengthSid(v96);
      }
      else
      {
        v69 = (char *)v64 + RtlLengthSid(v96) + 8;
      }
      v48 = P;
      memmove(v69, P, v67);
      v38 = (char *)v96;
LABEL_63:
      v49 = Src;
      goto LABEL_64;
    }
    v70 = v41 - 13;
    if ( !v70 )
      goto LABEL_224;
    v71 = v70 - 4;
    if ( !v71 )
    {
      v46 = SddlAddMandatoryAce((PACL)*a3, ObjectTypeGuid, AccessMask);
LABEL_61:
      v47 = v46;
LABEL_62:
      v48 = P;
      goto LABEL_63;
    }
    v72 = v71 - 1;
    if ( v72 )
    {
      v73 = v72 - 1;
      if ( !v73 )
      {
        v46 = SddlAddScopedPolicyIDAce((PACL)*a3, v38);
        goto LABEL_61;
      }
      v74 = v73 - 1;
      if ( !v74 )
      {
        v46 = SddlAddProcessTrustLabelAce((PACL)*a3, ObjectTypeGuid, AccessMask);
        goto LABEL_61;
      }
      if ( v74 == 1 )
      {
        if ( (unsigned int)v98 >= 0xFFFF )
          goto LABEL_240;
        v48 = P;
        v47 = SddlAddAccessFilterAce((PACL)*a3, ObjectTypeGuid, AccessMask, P, v98);
        goto LABEL_63;
      }
LABEL_179:
      v47 = -1073741811;
LABEL_241:
      v49 = Src;
LABEL_242:
      v86 = RtlNtStatusToDosError(v47);
      v23 = v96;
      AceCount = v86;
LABEL_247:
      if ( AceCount )
        goto LABEL_248;
LABEL_75:
      v21 = v100;
LABEL_76:
      *((_WORD *)*a3 + 1) = v21;
      goto LABEL_77;
    }
    if ( v44 >= 0xFFFF || (v91 & 0xE0) != 0 || AccessMask )
      goto LABEL_240;
    v75 = *(_DWORD *)(v38 + 2) - v114;
    if ( !v75 )
      v75 = *((unsigned __int16 *)v38 + 3) - v115;
    if ( v75 || v38[1] != 1 || *((_DWORD *)v38 + 2) )
    {
LABEL_240:
      v47 = -1073741705;
      goto LABEL_241;
    }
    v76 = (char *)SddlpAlloc(v44);
    if ( !v76 )
      goto LABEL_222;
    *v76 = v94;
    v76[1] = v91;
    *((_WORD *)v76 + 1) = v44;
    *((_DWORD *)v76 + 1) = 0;
    v77 = RtlLengthSid(v38);
    RtlCopySid(v77, v76 + 8, v38);
    if ( HIDWORD(v98) )
    {
      v78 = HIDWORD(v98);
      v79 = RtlLengthSid(v38);
      v80 = v78;
      v49 = Src;
      memmove(&v76[v79 + 8], Src, v80);
    }
    else
    {
      v49 = Src;
    }
    v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v76, v44);
    ExFreePoolWithTag(v76, 0);
    v48 = P;
LABEL_64:
    if ( v47 < 0 )
      goto LABEL_242;
    if ( v93 == 1 )
      ExFreePoolWithTag(v38, 0);
    Sid = 0LL;
    v23 = 0LL;
    if ( v48 )
    {
      ExFreePoolWithTag(v48, 0);
      P = 0LL;
    }
    v13 = 0;
    LODWORD(v98) = 0;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    v50 = Size_4 + 1;
    HIDWORD(v98) = 0;
    ++Size_4;
    v11 = v108 + 1;
    if ( *v108 != 40 )
      v11 = v108;
    if ( v50 >= v99 )
    {
      v49 = Src;
      goto LABEL_75;
    }
  }
  AceCount = 1336;
LABEL_244:
  v23 = Sid;
LABEL_245:
  v49 = Src;
LABEL_248:
  if ( *a3 )
    ExFreePoolWithTag(*a3, 0);
  *a3 = 0LL;
LABEL_77:
  if ( v93 && v23 )
    ExFreePoolWithTag(v23, 0);
LABEL_78:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  return AceCount;
}
