/*
 * XREFs of LocalGetAclForString @ 0x140601100
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     RtlGetAce @ 0x1400A0E40 (RtlGetAce.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     wcstoul @ 0x14018ABB0 (wcstoul.c)
 *     wcsncpy_s @ 0x14018EDE0 (wcsncpy_s.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     RtlAddAce @ 0x140546E50 (RtlAddAce.c)
 *     RtlNtStatusToDosError @ 0x1405B74B0 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x140601690 (LookupAccessMaskInTable.c)
 *     LocalGetSidForString @ 0x140601728 (LocalGetSidForString.c)
 *     LookupAceTypeInTable @ 0x140601958 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406019F0 (SddlpAlloc.c)
 *     LocalGetSDDLDeliminator @ 0x140601A3C (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x140601AA8 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140783B10 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140783B70 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140783E70 (RtlAddAuditAccessObjectAce.c)
 *     LookupAceFlagsInTable @ 0x140796EB8 (LookupAceFlagsInTable.c)
 *     SddlAddAccessFilterAce @ 0x140796F78 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140797194 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1407972F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140797448 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1407977FC (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x140799754 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x140799EA8 (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str,
        char a2,
        const void **a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t *v8; // rbx
  unsigned int AceCount; // esi
  char *v12; // r14
  unsigned int v13; // r12d
  __int64 result; // rax
  wchar_t *v16; // rax
  __int64 v17; // rax
  wchar_t *v18; // rdx
  unsigned int v19; // r15d
  unsigned int v20; // edi
  _BYTE *v21; // rax
  __int16 v22; // cx
  wchar_t *v23; // rdi
  wchar_t v24; // cx
  __int64 v25; // rax
  unsigned __int8 v26; // r15
  __int64 v27; // rax
  wchar_t *v28; // rbx
  wchar_t *v29; // rbx
  wchar_t **v30; // rdi
  wchar_t v31; // ax
  __int64 v32; // rax
  ACCESS_MASK v33; // ecx
  __int64 v34; // rax
  const wchar_t *v35; // rbx
  int v36; // edi
  unsigned int SidForString; // eax
  _WORD *v38; // rcx
  _WORD *i; // rbx
  int v40; // edx
  unsigned int v41; // edi
  ULONG v42; // r12d
  ULONG v43; // ecx
  bool v44; // cf
  int v45; // r8d
  int v46; // eax
  int v47; // r14d
  PVOID v48; // rbx
  PSID v49; // r12
  unsigned int v50; // edx
  _WORD *v51; // rax
  _BYTE *v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rax
  int v55; // edi
  bool v56; // zf
  unsigned int v57; // ecx
  bool v58; // cf
  int v59; // eax
  unsigned int v60; // edx
  unsigned __int64 v61; // rcx
  unsigned int v62; // edi
  _WORD *v63; // rax
  void *v64; // rcx
  _WORD *v65; // r14
  int v66; // edx
  _WORD *v67; // r15
  char v68; // al
  unsigned int v69; // eax
  size_t v70; // rbx
  int v71; // edi
  char *v72; // rcx
  size_t v73; // r8
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rdi
  ULONG v77; // eax
  unsigned int v78; // ebx
  ULONG v79; // eax
  __int64 v80; // rax
  __int64 v81; // rdi
  ULONG v82; // eax
  unsigned int v83; // ebx
  ULONG v84; // eax
  size_t v85; // r8
  ULONG v86; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v91; // [rsp+50h] [rbp-B0h]
  int v92; // [rsp+54h] [rbp-ACh]
  char v93; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+5Ch] [rbp-A4h]
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v96; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  size_t v98; // [rsp+78h] [rbp-88h]
  unsigned int v99; // [rsp+80h] [rbp-80h] BYREF
  PVOID Src; // [rsp+88h] [rbp-78h]
  int v101; // [rsp+90h] [rbp-70h]
  unsigned int Size; // [rsp+94h] [rbp-6Ch]
  int Size_4; // [rsp+98h] [rbp-68h]
  _WORD *v104; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v105; // [rsp+A8h] [rbp-58h]
  GUID *p_Guid; // [rsp+B0h] [rbp-50h]
  int v107; // [rsp+B8h] [rbp-48h] BYREF
  void *v108; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *v109; // [rsp+C8h] [rbp-38h] BYREF
  void *v110; // [rsp+D0h] [rbp-30h] BYREF
  int v111[2]; // [rsp+D8h] [rbp-28h]
  wchar_t **v112; // [rsp+E0h] [rbp-20h]
  wchar_t *EndPtr; // [rsp+E8h] [rbp-18h] BYREF
  PVOID Ace; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-8h]
  int v116; // [rsp+100h] [rbp+0h]
  unsigned __int16 v117; // [rsp+104h] [rbp+4h]
  GUID Guid; // [rsp+108h] [rbp+8h] BYREF
  GUID v119; // [rsp+118h] [rbp+18h] BYREF
  wchar_t Dst[40]; // [rsp+130h] [rbp+30h] BYREF

  v8 = Str;
  *(_QWORD *)v111 = a5;
  v115 = a6;
  v112 = a4;
  AceCount = 0;
  v99 = 0;
  v12 = 0LL;
  v93 = 0;
  v13 = 0;
  Sid = 0LL;
  P = 0LL;
  v110 = 0LL;
  v98 = 0LL;
  Src = 0LL;
  v108 = 0LL;
  Ace = 0LL;
  v116 = 0;
  v117 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v8 + 17;
    return AceCount;
  }
  v101 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v8);
  if ( (_DWORD)result )
    return result;
  v16 = *a4;
  if ( *a4 == v8 )
    return 87LL;
  if ( v16 )
  {
    v18 = v16 - 1;
  }
  else
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v8[v17] );
    v18 = &v8[v17];
  }
  *a4 = v18;
  AceCount = LocalGetAceCount(v8, v18, &v99);
  if ( AceCount )
    return AceCount;
  v19 = v99;
  if ( !v99 )
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
  v20 = 84 * v99 + 8;
  if ( v20 > 0xFFFF )
    v20 = 0xFFFF;
  Size = v20;
  v21 = (_BYTE *)SddlpAlloc(v20);
  *a3 = v21;
  if ( !v21 )
    return 8;
  *v21 = 2;
  v22 = 8;
  v92 = 8;
  *((_BYTE *)*a3 + 1) = 0;
  *((_WORD *)*a3 + 1) = v20;
  *((_WORD *)*a3 + 2) = 0;
  *((_WORD *)*a3 + 3) = 0;
  Size_4 = 0;
  if ( !v19 )
    goto LABEL_80;
  while ( 2 )
  {
    v91 = 0;
    AccessMask = 0;
    p_Guid = 0LL;
    v105 = 0LL;
    while ( *v8 == 32 )
      ++v8;
    v23 = v8 + 1;
    v24 = *v8;
    if ( *v8 == 40 )
      v24 = *v23;
    else
      v23 = v8;
    if ( v24 == 32 )
    {
      do
        ++v23;
      while ( *v23 == 32 );
    }
    v25 = LookupAceTypeInTable(v23);
    if ( !v25 )
    {
      AceCount = 1804;
      goto LABEL_79;
    }
    v26 = *(_BYTE *)(v25 + 12);
    v27 = *(unsigned int *)(v25 + 8);
    v96 = v26;
    v28 = &v23[v27];
    if ( *v28 != 59 && *v28 != 32 )
      goto LABEL_103;
    v29 = v28 + 1;
    if ( (unsigned __int8)(v26 - 5) <= 3u || v26 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v29 == 32 )
      ++v29;
    v30 = v112;
    while ( 1 )
    {
      if ( v29 == *v30 )
        goto LABEL_111;
      if ( *v29 == 59 )
        break;
      for ( ; *v29 == 32; ++v29 )
        ;
      v54 = LookupAceFlagsInTable(v29);
      if ( !v54 )
      {
        AceCount = 1004;
LABEL_111:
        if ( AceCount )
          goto LABEL_79;
        goto LABEL_32;
      }
      v91 |= *(_BYTE *)(v54 + 12);
      v29 += *(unsigned int *)(v54 + 8);
    }
    do
    {
      ++v29;
LABEL_32:
      v31 = *v29;
    }
    while ( *v29 == 32 );
    while ( v31 != 59 )
    {
      if ( v31 == 32 )
      {
        do
          ++v29;
        while ( *v29 == 32 );
      }
      v32 = LookupAccessMaskInTable(v29);
      if ( v32 )
      {
        v33 = *(_DWORD *)(v32 + 12) | AccessMask;
        v34 = *(unsigned int *)(v32 + 8);
        AccessMask = v33;
        v29 += v34;
      }
      else
      {
        v53 = wcstoul(v29, &EndPtr, 0);
        AccessMask |= v53;
        if ( EndPtr == v29 )
          goto LABEL_103;
        v29 = EndPtr;
      }
      v31 = *v29;
    }
    v35 = v29 + 1;
    v36 = 0;
    while ( 1 )
    {
      while ( *v35 == 32 )
        ++v35;
      if ( *v35 == 59 )
        goto LABEL_41;
      if ( (unsigned __int8)(v26 - 5) > 3u && v26 != 11 )
        goto LABEL_103;
      wcsncpy_s(Dst, 0x25uLL, v35, 0x24uLL);
      Dst[36] = 0;
      if ( !v36 )
      {
        if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
          goto LABEL_125;
        p_Guid = &Guid;
        goto LABEL_123;
      }
      if ( !(unsigned int)SddlpUuidFromString(Dst, &v119) )
        break;
      v105 = &v119;
LABEL_123:
      v35 += 36;
      if ( *v35 != 59 && *v35 != 32 )
      {
LABEL_125:
        AceCount = 1705;
        goto LABEL_79;
      }
LABEL_41:
      ++v35;
      if ( (unsigned int)++v36 >= 2 )
        goto LABEL_42;
    }
    AceCount = 1705;
LABEL_42:
    if ( AceCount )
      goto LABEL_79;
    while ( *v35 == 32 )
      ++v35;
    SidForString = LocalGetSidForString(
                     (_DWORD)v35,
                     (unsigned int)&Sid,
                     (unsigned int)&v104,
                     (unsigned int)&v93,
                     *(__int64 *)v111,
                     InheritedObjectTypeGuid,
                     pSid,
                     a8);
    v12 = (char *)Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_79;
    v38 = v104;
    if ( !v104 || !Sid )
      goto LABEL_103;
    for ( i = v104; *i == 32; ++i )
      ;
    if ( v26 <= 0x15u )
    {
      v40 = 2371072;
      if ( _bittest(&v40, v26) )
      {
        if ( *i != 59 )
          goto LABEL_103;
        do
          ++i;
        while ( *i == 32 );
        if ( *i == 40 )
        {
          if ( P )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
            v110 = 0LL;
          }
          v13 = 0;
          LODWORD(v98) = 0;
          LODWORD(v109) = 0;
          if ( Src )
          {
            ExFreePoolWithTag(Src, 0);
            Src = 0LL;
            v108 = 0LL;
          }
          v55 = 0;
          HIDWORD(v98) = 0;
          v107 = 0;
          if ( v26 == 18 )
          {
            AceCount = LocalGetRelativeAttributeForString(
                         (_DWORD)i,
                         (unsigned int)&v104,
                         (unsigned int)&v108,
                         (unsigned int)&v107,
                         *(__int64 *)v111,
                         InheritedObjectTypeGuid,
                         pSid,
                         a8);
            Src = v108;
            if ( AceCount )
              goto LABEL_79;
            v55 = v107;
            v38 = v104;
            HIDWORD(v98) = v107;
LABEL_143:
            if ( !v55 )
              goto LABEL_103;
LABEL_144:
            if ( !AceCount )
              goto LABEL_50;
            goto LABEL_79;
          }
          AceCount = LocalGetConditionForString(
                       (_DWORD)i,
                       (unsigned int)&v104,
                       (unsigned int)&v110,
                       (unsigned int)&v109,
                       *(__int64 *)v111,
                       v115,
                       0LL,
                       a8);
          v13 = (unsigned int)v109;
          P = v110;
          v38 = v104;
          LODWORD(v98) = (_DWORD)v109;
        }
        else
        {
          v55 = HIDWORD(v98);
          v38 = i;
          v104 = i;
        }
        if ( v13 )
          goto LABEL_144;
        goto LABEL_143;
      }
    }
LABEL_50:
    if ( *v38 == 32 )
    {
      do
        ++v38;
      while ( *v38 == 32 );
      v104 = v38;
    }
    if ( *v38 != 41 )
      goto LABEL_103;
    v109 = v38 + 1;
    if ( v26 > 0x11u )
    {
      if ( v26 == 18 )
      {
        v41 = HIDWORD(v98) + 12;
        v58 = (unsigned int)(HIDWORD(v98) + 12) < HIDWORD(v98);
        goto LABEL_173;
      }
      if ( v26 == 19 || v26 == 20 )
      {
LABEL_55:
        v41 = 12;
        goto LABEL_56;
      }
      v56 = v26 == 21;
LABEL_153:
      if ( v56 )
        goto LABEL_154;
LABEL_103:
      AceCount = 1336;
      goto LABEL_79;
    }
    if ( v26 == 17 || v26 <= 3u )
      goto LABEL_55;
    if ( v26 <= 4u )
      goto LABEL_103;
    if ( v26 <= 8u )
    {
      v41 = 16;
      if ( p_Guid )
        v41 = 32;
      if ( v105 )
        v41 = p_Guid != 0LL ? 48 : 32;
      goto LABEL_56;
    }
    if ( v26 <= 0xAu )
    {
LABEL_154:
      if ( v13 <= 0xFFFFFFFC )
      {
        v41 = -1;
        v57 = (v13 + 3) & 0xFFFFFFFC;
        v58 = v57 + 12 < v57;
        if ( v57 + 12 >= v57 )
          v41 = v57 + 12;
        goto LABEL_173;
      }
LABEL_237:
      AceCount = 534;
      goto LABEL_83;
    }
    if ( v26 != 11 )
    {
      v56 = v26 == 13;
      goto LABEL_153;
    }
    if ( v13 > 0xFFFFFFFC )
      goto LABEL_237;
    v59 = p_Guid != 0LL ? 48 : 32;
    v41 = -1;
    v60 = (v13 + 3) & 0xFFFFFFFC;
    if ( !v105 )
      v59 = p_Guid != 0LL ? 32 : 16;
    v58 = v59 + v60 < v60;
    if ( v59 + v60 >= v60 )
      v41 = v59 + v60;
LABEL_173:
    if ( v58 )
    {
LABEL_174:
      AceCount = 534;
      goto LABEL_79;
    }
LABEL_56:
    v42 = -1;
    v43 = v41 + RtlLengthSid(v12) - 4;
    v44 = v43 < v41;
    if ( v43 >= v41 )
      v42 = v43;
    v22 = v92;
    if ( v44 || v42 + v92 < v42 )
    {
      AceCount = 534;
    }
    else
    {
      if ( v42 + v92 <= Size )
        goto LABEL_61;
      v61 = v42 * (unsigned __int64)(v99 - Size_4);
      if ( v61 > 0xFFFFFFFF || (unsigned int)v61 + Size < (unsigned int)v61 )
        goto LABEL_174;
      v62 = v61 + Size;
      v63 = (_WORD *)SddlpAlloc((unsigned int)v61 + Size);
      v64 = (void *)*a3;
      v65 = v63;
      if ( v63 )
      {
        memmove(v63, *a3, Size);
        v65[1] = v62;
        if ( *a3 )
          ExFreePoolWithTag((PVOID)*a3, 0);
        *a3 = v65;
        v12 = (char *)Sid;
        Size = v62;
LABEL_61:
        v92 += v42;
        if ( v26 > 0xBu )
        {
          switch ( v26 )
          {
            case 0xDu:
              goto LABEL_230;
            case 0x11u:
              v46 = SddlAddMandatoryAce((PACL)*a3, ObjectTypeGuid, AccessMask);
              goto LABEL_66;
            case 0x12u:
              if ( v42 < 0xFFFF && (v91 & 0xE0) == 0 && !AccessMask )
              {
                v74 = *(_DWORD *)(v12 + 2) - v116;
                if ( !v74 )
                  v74 = *((unsigned __int16 *)v12 + 3) - v117;
                if ( !v74 && v12[1] == 1 && !*((_DWORD *)v12 + 2) )
                {
                  v75 = SddlpAlloc(v42);
                  v76 = v75;
                  if ( v75 )
                  {
                    *(_BYTE *)v75 = v96;
                    *(_DWORD *)(v75 + 4) = 0;
                    *(_BYTE *)(v75 + 1) = v91;
                    *(_WORD *)(v75 + 2) = v42;
                    v77 = RtlLengthSid(v12);
                    RtlCopySid(v77, (PSID)(v76 + 8), v12);
                    if ( HIDWORD(v98) )
                    {
                      v78 = HIDWORD(v98);
                      v79 = RtlLengthSid(v12);
                      memmove((void *)(v79 + v76 + 8), Src, v78);
                    }
                    v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, (PVOID)v76, v42);
                    ExFreePoolWithTag((PVOID)v76, 0);
                  }
                  else
                  {
LABEL_236:
                    v47 = -1073741801;
                  }
                  goto LABEL_67;
                }
              }
              break;
            case 0x13u:
              v46 = SddlAddScopedPolicyIDAce((PACL)*a3, v12);
              goto LABEL_66;
            case 0x14u:
              v46 = SddlAddProcessTrustLabelAce((PACL)*a3, ObjectTypeGuid, AccessMask);
              goto LABEL_66;
            case 0x15u:
              if ( (unsigned int)v98 < 0xFFFF )
              {
                v48 = P;
                v47 = SddlAddAccessFilterAce((PACL)*a3, ObjectTypeGuid, AccessMask, P, v98);
                goto LABEL_68;
              }
              break;
            default:
LABEL_187:
              v47 = -1073741811;
              goto LABEL_247;
          }
        }
        else
        {
          if ( v26 != 11 )
          {
            switch ( v26 )
            {
              case 0u:
                v45 = v91;
                InheritedObjectTypeGuida = 0;
                goto LABEL_65;
              case 1u:
                v46 = RtlpAddKnownAce((PACL)*a3, 2u, v91, AccessMask, (unsigned __int8 *)v12, 1u);
                break;
              case 2u:
                InheritedObjectTypeGuida = 2;
                v66 = v91 & 0x3F | 0x40;
                if ( (v91 & 0x40) == 0 )
                  v66 = v91 & 0x3F;
                v45 = v66 | 0x80;
                if ( (v91 & 0x80u) == 0 )
                  v45 = v66;
LABEL_65:
                v46 = RtlpAddKnownAce((PACL)*a3, 2u, v45, AccessMask, (unsigned __int8 *)v12, InheritedObjectTypeGuida);
                break;
              case 5u:
                v46 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v105, v12);
                break;
              case 6u:
                v46 = RtlAddAccessDeniedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v105, v12);
                break;
              case 7u:
                v46 = RtlAddAuditAccessObjectAce(
                        (PACL)*a3,
                        4u,
                        v91,
                        AccessMask,
                        p_Guid,
                        v105,
                        v12,
                        v91 & 0x40,
                        v91 & 0x80);
                break;
              default:
                if ( v26 <= 8u )
                  goto LABEL_187;
LABEL_230:
                if ( v42 >= 0xFFFF )
                  goto LABEL_246;
                v80 = SddlpAlloc(v42);
                v81 = v80;
                if ( !v80 )
                  goto LABEL_236;
                *(_BYTE *)v80 = v96;
                *(_DWORD *)(v80 + 4) = AccessMask;
                *(_BYTE *)(v80 + 1) = v91;
                *(_WORD *)(v80 + 2) = v42;
                v82 = RtlLengthSid(v12);
                RtlCopySid(v82, (PSID)(v81 + 8), v12);
                if ( (_DWORD)v98 )
                {
                  v83 = v98;
                  v84 = RtlLengthSid(v12);
                  v85 = v83;
                  v48 = P;
                  memmove((void *)(v84 + v81 + 8), P, v85);
                }
                else
                {
                  v48 = P;
                }
                v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, (PVOID)v81, v42);
                ExFreePoolWithTag((PVOID)v81, 0);
LABEL_68:
                v49 = Sid;
LABEL_69:
                if ( v47 >= 0 )
                {
                  if ( v93 == 1 )
                    ExFreePoolWithTag(v49, 0);
                  v13 = 0;
                  Sid = 0LL;
                  v12 = 0LL;
                  if ( v48 )
                  {
                    ExFreePoolWithTag(v48, 0);
                    P = 0LL;
                    v110 = 0LL;
                  }
                  LODWORD(v98) = 0;
                  if ( Src )
                  {
                    ExFreePoolWithTag(Src, 0);
                    Src = 0LL;
                    v108 = 0LL;
                  }
                  v50 = Size_4 + 1;
                  HIDWORD(v98) = 0;
                  ++Size_4;
                  v8 = v109 + 1;
                  if ( *v109 != 40 )
                    v8 = v109;
                  if ( v50 >= v99 )
                    goto LABEL_79;
                  continue;
                }
LABEL_247:
                v86 = RtlNtStatusToDosError(v47);
                v12 = (char *)Sid;
                AceCount = v86;
                goto LABEL_79;
            }
LABEL_66:
            v47 = v46;
LABEL_67:
            v48 = P;
            goto LABEL_68;
          }
          if ( v42 < 0xFFFF )
          {
            v47 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v91, AccessMask, p_Guid, v105, v12);
            if ( v47 < 0 )
              goto LABEL_247;
            v47 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
            if ( v47 < 0 )
              goto LABEL_247;
            v67 = Ace;
            v68 = 9;
            if ( *(_BYTE *)Ace == 5 )
              v68 = 11;
            *(_BYTE *)Ace = v68;
            v69 = v98;
            v67[1] = v42;
            if ( v69 )
            {
              v70 = v69;
              v49 = Sid;
              if ( *(_BYTE *)v67 == 11 )
              {
                v71 = *((_DWORD *)v67 + 2);
                v72 = (char *)&v67[8 * (v71 & 1) + 6 + 4 * (v71 & 2)] + RtlLengthSid(Sid);
              }
              else
              {
                v72 = (char *)v67 + RtlLengthSid(Sid) + 8;
              }
              v73 = v70;
              v48 = P;
              memmove(v72, P, v73);
              goto LABEL_69;
            }
            goto LABEL_67;
          }
        }
LABEL_246:
        v47 = -1073741705;
        goto LABEL_247;
      }
      if ( v64 )
        ExFreePoolWithTag(v64, 0);
      v56 = v93 == 1;
      *a3 = 0LL;
      if ( v56 )
      {
        if ( Sid )
          ExFreePoolWithTag(Sid, 0);
        v12 = 0LL;
        v93 = 0;
      }
      else
      {
        v12 = (char *)Sid;
      }
      AceCount = 8;
LABEL_79:
      v22 = v92;
    }
    break;
  }
LABEL_80:
  v51 = *a3;
  if ( AceCount )
  {
    if ( v51 )
      ExFreePoolWithTag((PVOID)*a3, 0);
    *a3 = 0LL;
  }
  else
  {
    v51[1] = v22;
  }
  if ( v93 && v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_83:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return AceCount;
}
