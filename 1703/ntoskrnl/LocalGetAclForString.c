/*
 * XREFs of LocalGetAclForString @ 0x14057F594
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057F358 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x1400880C0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     wcstoul @ 0x14016C130 (wcstoul.c)
 *     wcsncpy_s @ 0x140170640 (wcsncpy_s.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140430830 (RtlNtStatusToDosError.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     RtlAddAce @ 0x1404F5B60 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 *     LookupAccessMaskInTable @ 0x14057FAF0 (LookupAccessMaskInTable.c)
 *     LocalGetSidForString @ 0x14057FB88 (LocalGetSidForString.c)
 *     LookupAceTypeInTable @ 0x14057FDB8 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     LocalGetSDDLDeliminator @ 0x14057FE9C (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x14057FF08 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1406E8620 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1406E8680 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1406E8960 (RtlAddAuditAccessObjectAce.c)
 *     LookupAceFlagsInTable @ 0x1406FBC2C (LookupAceFlagsInTable.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1406FC564 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
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
  unsigned int v45; // eax
  int v46; // r8d
  int v47; // eax
  int v48; // r14d
  PVOID v49; // rdi
  PVOID v50; // rbx
  unsigned int v51; // edx
  _BYTE *v52; // rax
  __int64 v53; // rax
  unsigned int ConditionForString; // eax
  bool v55; // zf
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // eax
  bool v59; // cf
  unsigned __int64 v60; // rcx
  unsigned int v61; // edi
  _WORD *v62; // rax
  _WORD *v63; // r14
  int v64; // edx
  _WORD *v65; // r15
  char v66; // al
  unsigned int v67; // eax
  size_t v68; // rbx
  int v69; // edi
  char *v70; // rcx
  unsigned int v71; // ebx
  unsigned int v72; // ebx
  unsigned int v73; // ebx
  unsigned int v74; // ebx
  unsigned int v75; // ebx
  int v76; // ecx
  char *v77; // rdi
  ULONG v78; // eax
  unsigned int v79; // ebx
  ULONG v80; // eax
  size_t v81; // r8
  __int64 v82; // rax
  __int64 v83; // rdi
  ULONG v84; // eax
  unsigned int v85; // ebx
  ULONG v86; // eax
  ULONG v87; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v92; // [rsp+50h] [rbp-B0h]
  PVOID Src; // [rsp+58h] [rbp-A8h] BYREF
  char v94; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v95; // [rsp+61h] [rbp-9Fh]
  ACCESS_MASK AccessMask; // [rsp+64h] [rbp-9Ch]
  PSID v97; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  size_t v99; // [rsp+78h] [rbp-88h]
  unsigned int v100; // [rsp+80h] [rbp-80h] BYREF
  int v101; // [rsp+84h] [rbp-7Ch]
  PSID Sid; // [rsp+88h] [rbp-78h] BYREF
  int v103; // [rsp+90h] [rbp-70h]
  unsigned int Size; // [rsp+94h] [rbp-6Ch]
  int Size_4; // [rsp+98h] [rbp-68h]
  _WORD *v106; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v107; // [rsp+A8h] [rbp-58h]
  GUID *p_Guid; // [rsp+B0h] [rbp-50h]
  wchar_t *v109; // [rsp+B8h] [rbp-48h] BYREF
  int v110[2]; // [rsp+C0h] [rbp-40h]
  wchar_t *EndPtr; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Ace; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t **v113; // [rsp+D8h] [rbp-28h]
  __int64 v114; // [rsp+E0h] [rbp-20h]
  int v115; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v116; // [rsp+ECh] [rbp-14h]
  GUID Guid; // [rsp+F0h] [rbp-10h] BYREF
  GUID v118; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[40]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)v110 = a5;
  v114 = a6;
  v11 = Str;
  v113 = a4;
  v100 = 0;
  AceCount = 0;
  v94 = 0;
  v13 = 0;
  v97 = 0LL;
  Sid = 0LL;
  P = 0LL;
  v99 = 0LL;
  Src = 0LL;
  Ace = 0LL;
  v115 = 0;
  v116 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v11 + 17;
    return AceCount;
  }
  v103 = 2 - (a2 != 0);
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
  AceCount = LocalGetAceCount(v11, v17, &v100);
  if ( AceCount )
    return AceCount;
  v18 = v100;
  if ( !v100 )
  {
    v52 = (_BYTE *)SddlpAlloc(8uLL);
    *a3 = v52;
    if ( v52 )
    {
      *v52 = 2;
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
  v19 = 84 * v100 + 8;
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
  v101 = 8;
  v22[1] = 0;
  *((_WORD *)*a3 + 1) = v19;
  *((_WORD *)*a3 + 2) = 0;
  *((_WORD *)*a3 + 3) = 0;
  v23 = v97;
  if ( !v18 )
  {
    v50 = Src;
    goto LABEL_76;
  }
  while ( 1 )
  {
    v92 = 0;
    v24 = 0;
    AccessMask = 0;
    p_Guid = 0LL;
    v107 = 0LL;
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
      v50 = Src;
      AceCount = 1804;
      goto LABEL_248;
    }
    v27 = *(_BYTE *)(v26 + 12);
    v28 = *(unsigned int *)(v26 + 8);
    v95 = v27;
    v29 = &v25[v28];
    if ( *v29 != 59 && *v29 != 32 )
    {
LABEL_97:
      AceCount = 1336;
      goto LABEL_246;
    }
    v30 = v29 + 1;
    if ( (unsigned __int8)(v27 - 5) <= 3u || v27 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v30 == 32 )
      ++v30;
    v31 = v113;
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
      v53 = LookupAceFlagsInTable(v30);
      if ( !v53 )
      {
        AceCount = 1004;
        goto LABEL_246;
      }
      v92 |= *(_BYTE *)(v53 + 12);
      v30 += *(unsigned int *)(v53 + 8);
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
          if ( !(unsigned int)SddlpUuidFromString(Dst, &v118) )
            goto LABEL_116;
          v107 = &v118;
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
          goto LABEL_246;
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
                 (unsigned int)&v106,
                 (unsigned int)&v94,
                 *(__int64 *)v110,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
      goto LABEL_245;
    v37 = v106;
    if ( !v106 )
      break;
    v38 = (char *)Sid;
    v97 = Sid;
    if ( !Sid )
      goto LABEL_144;
    for ( j = v106; *j == 32; ++j )
      ;
    LOBYTE(i) = v95;
    if ( v95 > 0x15u )
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
      v36 = HIDWORD(v99);
      v37 = j;
      v106 = j;
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
    LODWORD(v99) = 0;
    LODWORD(Sid) = 0;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    HIDWORD(v99) = 0;
    LODWORD(v109) = 0;
    if ( (_BYTE)i != 18 )
    {
      ConditionForString = LocalGetConditionForString(
                             (_DWORD)j,
                             (unsigned int)&v106,
                             (unsigned int)&P,
                             (unsigned int)&Sid,
                             *(__int64 *)v110,
                             v114,
                             0LL,
                             a8);
      v13 = (unsigned int)Sid;
      AceCount = ConditionForString;
      v37 = v106;
      LODWORD(v99) = (_DWORD)Sid;
      goto LABEL_132;
    }
    AceCount = LocalGetRelativeAttributeForString(
                 (_DWORD)j,
                 (unsigned int)&v106,
                 (unsigned int)&Src,
                 (unsigned int)&v109,
                 *(__int64 *)v110,
                 InheritedObjectTypeGuid,
                 pSid,
                 a8);
    if ( AceCount )
      goto LABEL_145;
    v36 = (int)v109;
    v37 = v106;
    HIDWORD(v99) = (_DWORD)v109;
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
      v106 = v37;
    }
    if ( *v37 != 41 )
    {
LABEL_144:
      AceCount = 1336;
LABEL_145:
      v23 = v97;
      goto LABEL_246;
    }
    v109 = v37 + 1;
    v41 = (unsigned __int8)i;
    if ( (unsigned __int8)i > 0x11u )
    {
      if ( (unsigned __int8)i == 18 )
      {
        v42 = HIDWORD(v99) + 12;
        v59 = (unsigned int)(HIDWORD(v99) + 12) < HIDWORD(v99);
        goto LABEL_167;
      }
      if ( (unsigned __int8)i == 19 || (unsigned __int8)i == 20 )
      {
LABEL_52:
        v42 = 12;
        goto LABEL_53;
      }
      v55 = (unsigned __int8)i == 21;
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
        if ( v107 )
          v42 += 16;
        goto LABEL_53;
      }
      if ( (unsigned __int8)i <= 0xAu )
        goto LABEL_156;
      if ( (unsigned __int8)i == 11 )
      {
        v56 = 16;
        if ( p_Guid )
          v56 = 32;
        if ( v107 )
          v56 += 16;
        if ( v13 > 0xFFFFFFFC )
        {
LABEL_157:
          v50 = Src;
          AceCount = 534;
          goto LABEL_78;
        }
        v57 = (v13 + 3) & 0xFFFFFFFC;
        v58 = v57 + v56;
        goto LABEL_153;
      }
      v55 = (unsigned __int8)i == 13;
    }
    if ( !v55 )
      goto LABEL_144;
LABEL_156:
    if ( v13 > 0xFFFFFFFC )
      goto LABEL_157;
    v57 = (v13 + 3) & 0xFFFFFFFC;
    v58 = v57 + 12;
LABEL_153:
    v59 = v58 < v57;
    v42 = -1;
    if ( v58 >= v57 )
      v42 = v58;
LABEL_167:
    if ( v59 )
      goto LABEL_168;
LABEL_53:
    v43 = v42 + RtlLengthSid(v38) - 4;
    if ( v43 < v42 || (v44 = v43, v45 = v43 + v101, v101 = v45, v45 < v43) )
    {
LABEL_168:
      AceCount = 534;
      goto LABEL_145;
    }
    if ( v45 > Size )
    {
      v60 = v43 * (unsigned __int64)(v100 - Size_4);
      if ( v60 > 0xFFFFFFFF )
        goto LABEL_168;
      v61 = v60 + Size;
      if ( (unsigned int)v60 + Size < (unsigned int)v60 )
        goto LABEL_168;
      v62 = (_WORD *)SddlpAlloc(v61);
      v63 = v62;
      if ( !v62 )
      {
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0);
        v55 = v94 == 1;
        *a3 = 0LL;
        if ( v55 )
        {
          if ( v38 )
            ExFreePoolWithTag(v38, 0);
          v23 = 0LL;
          v94 = 0;
        }
        else
        {
          v23 = v97;
        }
        AceCount = 8;
        goto LABEL_246;
      }
      memmove(v62, *a3, Size);
      v63[1] = v61;
      if ( *a3 )
        ExFreePoolWithTag(*a3, 0);
      *a3 = v63;
      Size = v61;
    }
    if ( v41 <= 0xB )
    {
      if ( v41 != 11 )
      {
        if ( v41 )
        {
          if ( v41 == 1 )
          {
            v47 = RtlpAddKnownAce((ACL *)*a3, 2u, v92, AccessMask, (unsigned __int8 *)v38, 1u);
            goto LABEL_61;
          }
          if ( v41 != 2 )
          {
            switch ( v41 )
            {
              case 5u:
                v47 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v92, AccessMask, p_Guid, v107, v38);
                goto LABEL_61;
              case 6u:
                v47 = RtlAddAccessDeniedObjectAce((PACL)*a3, 4u, v92, AccessMask, p_Guid, v107, v38);
                goto LABEL_61;
              case 7u:
                v47 = RtlAddAuditAccessObjectAce(
                        (PACL)*a3,
                        4u,
                        v92,
                        AccessMask,
                        p_Guid,
                        v107,
                        v38,
                        v92 & 0x40,
                        v92 & 0x80);
                goto LABEL_61;
            }
            if ( v41 <= 8 )
              goto LABEL_181;
LABEL_226:
            if ( v44 >= 0xFFFF )
              goto LABEL_241;
            v82 = SddlpAlloc(v44);
            v83 = v82;
            if ( v82 )
            {
              *(_BYTE *)v82 = v95;
              *(_DWORD *)(v82 + 4) = AccessMask;
              *(_BYTE *)(v82 + 1) = v92;
              *(_WORD *)(v82 + 2) = v44;
              v84 = RtlLengthSid(v38);
              RtlCopySid(v84, (PSID)(v83 + 8), v38);
              if ( (_DWORD)v99 )
              {
                v85 = v99;
                v86 = RtlLengthSid(v38);
                memmove((void *)(v83 + v86 + 8LL), P, v85);
              }
              v48 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, (PVOID)v83, v44);
              ExFreePoolWithTag((PVOID)v83, 0);
            }
            else
            {
LABEL_224:
              v48 = -1073741801;
            }
            goto LABEL_62;
          }
          InheritedObjectTypeGuida = 2;
          v64 = v92 & 0x3F | 0x40;
          if ( (v92 & 0x40) == 0 )
            v64 = v92 & 0x3F;
          v46 = v64 | 0x80;
          if ( (v92 & 0x80u) == 0 )
            v46 = v64;
        }
        else
        {
          v46 = v92;
          InheritedObjectTypeGuida = 0;
        }
        v47 = RtlpAddKnownAce((ACL *)*a3, 2u, v46, AccessMask, (unsigned __int8 *)v38, InheritedObjectTypeGuida);
        goto LABEL_61;
      }
      if ( v44 >= 0xFFFF )
        goto LABEL_241;
      v48 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v92, AccessMask, p_Guid, v107, v38);
      if ( v48 < 0 )
        goto LABEL_242;
      v48 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
      if ( v48 < 0 )
        goto LABEL_242;
      v65 = Ace;
      v66 = 9;
      if ( *(_BYTE *)Ace == 5 )
        v66 = 11;
      *(_BYTE *)Ace = v66;
      v67 = v99;
      v65[1] = v44;
      if ( !v67 )
      {
        v38 = (char *)v97;
        goto LABEL_62;
      }
      v68 = v67;
      if ( *(_BYTE *)v65 == 11 )
      {
        v69 = *((_DWORD *)v65 + 2);
        v70 = (char *)&v65[8 * (v69 & 1) + 6 + 4 * (v69 & 2)] + RtlLengthSid(v97);
      }
      else
      {
        v70 = (char *)v65 + RtlLengthSid(v97) + 8;
      }
      v49 = P;
      memmove(v70, P, v68);
      v38 = (char *)v97;
LABEL_63:
      v50 = Src;
      goto LABEL_64;
    }
    v71 = v41 - 13;
    if ( !v71 )
      goto LABEL_226;
    v72 = v71 - 4;
    if ( !v72 )
    {
      v47 = SddlAddMandatoryAce((PACL)*a3, ObjectTypeGuid, AccessMask);
LABEL_61:
      v48 = v47;
LABEL_62:
      v49 = P;
      goto LABEL_63;
    }
    v73 = v72 - 1;
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( !v74 )
      {
        v47 = SddlAddScopedPolicyIDAce((PACL)*a3, v38);
        goto LABEL_61;
      }
      v75 = v74 - 1;
      if ( !v75 )
      {
        v47 = SddlAddProcessTrustLabelAce((PACL)*a3, ObjectTypeGuid, AccessMask);
        goto LABEL_61;
      }
      if ( v75 == 1 )
      {
        if ( (unsigned int)v99 >= 0xFFFF )
          goto LABEL_241;
        v49 = P;
        v48 = SddlAddAccessFilterAce((PACL)*a3, ObjectTypeGuid, AccessMask, P, v99);
        goto LABEL_63;
      }
LABEL_181:
      v48 = -1073741811;
LABEL_242:
      v50 = Src;
LABEL_243:
      v87 = RtlNtStatusToDosError(v48);
      v23 = v97;
      AceCount = v87;
LABEL_248:
      if ( AceCount )
        goto LABEL_249;
LABEL_75:
      v21 = v101;
LABEL_76:
      *((_WORD *)*a3 + 1) = v21;
      goto LABEL_77;
    }
    if ( v44 >= 0xFFFF || (v92 & 0xE0) != 0 || AccessMask )
      goto LABEL_241;
    v76 = *(_DWORD *)(v38 + 2) - v115;
    if ( !v76 )
      v76 = *((unsigned __int16 *)v38 + 3) - v116;
    if ( v76 || v38[1] != 1 || *((_DWORD *)v38 + 2) )
    {
LABEL_241:
      v48 = -1073741705;
      goto LABEL_242;
    }
    v77 = (char *)SddlpAlloc(v44);
    if ( !v77 )
      goto LABEL_224;
    *v77 = v95;
    v77[1] = v92;
    *((_WORD *)v77 + 1) = v44;
    *((_DWORD *)v77 + 1) = 0;
    v78 = RtlLengthSid(v38);
    RtlCopySid(v78, v77 + 8, v38);
    if ( HIDWORD(v99) )
    {
      v79 = HIDWORD(v99);
      v80 = RtlLengthSid(v38);
      v81 = v79;
      v50 = Src;
      memmove(&v77[v80 + 8], Src, v81);
    }
    else
    {
      v50 = Src;
    }
    v48 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v77, v44);
    ExFreePoolWithTag(v77, 0);
    v49 = P;
LABEL_64:
    if ( v48 < 0 )
      goto LABEL_243;
    if ( v94 == 1 )
      ExFreePoolWithTag(v38, 0);
    Sid = 0LL;
    v23 = 0LL;
    if ( v49 )
    {
      ExFreePoolWithTag(v49, 0);
      P = 0LL;
    }
    v13 = 0;
    LODWORD(v99) = 0;
    if ( Src )
    {
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
    v51 = Size_4 + 1;
    HIDWORD(v99) = 0;
    ++Size_4;
    v11 = v109 + 1;
    if ( *v109 != 40 )
      v11 = v109;
    if ( v51 >= v100 )
    {
      v50 = Src;
      goto LABEL_75;
    }
  }
  AceCount = 1336;
LABEL_245:
  v23 = Sid;
LABEL_246:
  v50 = Src;
LABEL_249:
  if ( *a3 )
    ExFreePoolWithTag(*a3, 0);
  *a3 = 0LL;
LABEL_77:
  if ( v94 && v23 )
    ExFreePoolWithTag(v23, 0);
LABEL_78:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  return AceCount;
}
