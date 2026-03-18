/*
 * XREFs of SepNormalAccessCheck @ 0x14005F060
 * Callers:
 *     SepAccessCheck @ 0x140101F00 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x14005F76C (SepMatchPackage.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x1400B1408 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x1400B94D8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400BA5A4 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x1400BBCC0 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x1402C39D0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13,
        char a14)
{
  __int64 v14; // r11
  unsigned int v15; // r14d
  int v16; // r15d
  __int64 result; // rax
  __int64 v18; // rbp
  int v20; // r12d
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // r13
  char *v24; // rdi
  int v25; // edx
  char v26; // al
  int v27; // ebx
  unsigned __int8 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // r13d
  unsigned __int8 v32; // r8
  unsigned int v33; // r10d
  unsigned int v34; // eax
  unsigned __int64 v35; // r13
  unsigned int v36; // ebp
  int v37; // ebp
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rbx
  int v44; // eax
  unsigned __int16 v45; // cx
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // r13d
  int v54; // eax
  char *v55; // rbx
  int v56; // ecx
  int v57; // eax
  char *v58; // rcx
  char v59; // [rsp+20h] [rbp-B8h]
  int v60; // [rsp+60h] [rbp-78h]
  unsigned int v61; // [rsp+64h] [rbp-74h]
  unsigned __int16 v62; // [rsp+68h] [rbp-70h]
  unsigned int v63; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v64; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+74h] [rbp-64h]
  int v66; // [rsp+78h] [rbp-60h]
  int v67; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v68; // [rsp+80h] [rbp-58h]
  int v69; // [rsp+84h] [rbp-54h]
  int v70; // [rsp+88h] [rbp-50h]
  __int64 v71; // [rsp+90h] [rbp-48h]
  unsigned __int8 v74; // [rsp+F8h] [rbp+20h]
  __int64 v75; // [rsp+F8h] [rbp+20h]

  v14 = 0LL;
  v15 = a8;
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v18 = a2;
  v60 = 0;
  v20 = 0;
  v67 = -1;
  v68 = result;
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v68;
  }
  v23 = a11;
  if ( !v16 && !a11 )
  {
    v20 = a1 | *a13;
    v60 = v20;
  }
  v63 = v20;
  v24 = (char *)(a4 + 8);
  v61 = 0;
  if ( !(_DWORD)result )
    return result;
  v25 = (int)a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v20 )
      return result;
    if ( (v24[1] & 8) != 0 )
      goto LABEL_26;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *v24 )
    {
      if ( *v24 != 9 )
        goto LABEL_26;
LABEL_11:
      v26 = *v24;
      if ( *v24 )
      {
        switch ( v26 )
        {
          case 5:
            v54 = *((_DWORD *)v24 + 2);
            v55 = v24 + 12;
            v56 = v54 & 1;
            if ( (v54 & 1) == 0 )
              v55 = 0LL;
            if ( v55 )
            {
              if ( a10 )
              {
                if ( (unsigned __int8)SepSidInToken(
                                        v18,
                                        v25,
                                        (unsigned int)v24 + ((8 * (v54 & 2)) | 0xC) + 16 * v56,
                                        0,
                                        v23,
                                        a12,
                                        a14)
                  && (unsigned __int8)AuthzBasepObjectInTypeList(v55, a9, v15, &v64) )
                {
                  AuthzBasepAddAccessTypeList(a9, v15, v64, v61, *((_DWORD *)v24 + 1), 0);
                }
                goto LABEL_24;
              }
              goto LABEL_26;
            }
            if ( !(unsigned __int8)SepSidInToken(
                                     v18,
                                     v25,
                                     (unsigned int)v24 + ((8 * (v54 & 2)) | 0xC) + 16 * v56,
                                     0,
                                     v23,
                                     a12,
                                     a14) )
              goto LABEL_24;
            v57 = *((_DWORD *)v24 + 1);
            if ( v15 == 1 )
            {
              *(_DWORD *)(a9 + 24) &= ~v57;
              goto LABEL_24;
            }
            break;
          case 4:
            if ( !(unsigned __int8)SepSidInToken(
                                     v18,
                                     v25,
                                     (unsigned int)v24 + 4 * (unsigned __int8)v24[13] + 20,
                                     0,
                                     v23,
                                     a12,
                                     a14)
              || !(unsigned __int8)SepSidInToken(a3, 0, (int)v24 + 12, 0, v23, a12, a14) )
            {
              goto LABEL_24;
            }
            v57 = *((_DWORD *)v24 + 1);
            if ( v15 == 1 )
            {
              *(_DWORD *)(a9 + 24) &= ~v57;
              goto LABEL_24;
            }
            break;
          case 1:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(v18, v25, (int)v24 + 8, a4, v23, a12, 0) )
              goto LABEL_24;
            result = *((unsigned int *)v24 + 1);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
              goto LABEL_24;
            return result;
          case 6:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     v18,
                                     v25,
                                     (_DWORD)v24
                                   + ((8 * (*((_DWORD *)v24 + 2) & 2)) | 0xC)
                                   + 16 * (*((_DWORD *)v24 + 2) & 1u),
                                     a4,
                                     v23,
                                     a12,
                                     0) )
              goto LABEL_24;
            v58 = v24 + 12;
            v14 = 0LL;
            if ( (*((_DWORD *)v24 + 2) & 1) == 0 )
              v58 = 0LL;
            if ( v58 && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v58, a9, v15, &v64) )
                goto LABEL_24;
              result = *(unsigned int *)(a9 + 48LL * v64 + 24);
              if ( ((unsigned int)result & *((_DWORD *)v24 + 1)) == 0 )
                goto LABEL_24;
            }
            else
            {
              result = *((unsigned int *)v24 + 1);
              if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
                goto LABEL_25;
            }
            return result;
          case 9:
            v45 = *((_WORD *)v24 + 1);
            v46 = 4 * (unsigned __int8)v24[9] + 8;
            if ( v45 - v46 == 8 )
              goto LABEL_26;
            if ( a5 && !*a6 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v45 = *((_WORD *)v24 + 1);
              v14 = 0LL;
            }
            v47 = *(_QWORD **)(v18 + 1096);
            if ( v47 )
            {
              v48 = v47[75];
              v49 = v47[73];
              v50 = v47[74];
              v14 = v47[72];
            }
            else
            {
              v48 = 0LL;
              v49 = 0LL;
              v50 = 0LL;
            }
            AuthzBasepEvaluateAceCondition(
              v18,
              *(_QWORD *)(v18 + 776),
              *a6,
              v14,
              v50,
              v49,
              v48,
              &v24[v46 + 8],
              v45 - v46 - 8,
              0,
              v23,
              &v67);
            if ( v67 != 1 )
              goto LABEL_24;
            if ( !v16 && !v23 && v20 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v24 + 8) )
              {
LABEL_63:
                SepMatchPackage(
                  a2,
                  v63,
                  v24 + 8,
                  *((unsigned int *)v24 + 1),
                  (char *)a13 + 21,
                  a13 + 1,
                  a13 + 5,
                  a13 + 4,
                  a13 + 6);
                v44 = ~a13[1];
                v20 &= v44;
                *a13 &= v44;
                v60 = v20;
                goto LABEL_24;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v24 + 8) )
              {
LABEL_88:
                SepMatchCapability(
                  a2,
                  v63,
                  (_DWORD)v24 + 8,
                  *((_DWORD *)v24 + 1),
                  (__int64)a13 + 22,
                  (__int64)(a13 + 2));
                v51 = ~a13[2];
                v20 &= v51;
                *a13 &= v51;
                v60 = v20;
                goto LABEL_24;
              }
              LODWORD(v18) = a2;
            }
            if ( !*(_DWORD *)(a9 + 24) )
              goto LABEL_24;
            v59 = v23;
            v31 = (int)a7;
            if ( (unsigned __int8)SepSidInToken(v18, (_DWORD)a7, (int)v24 + 8, 0, v59, a12, a14) )
            {
              AuthzBasepAddAccessTypeList(a9, v15, 0, v61, *((_DWORD *)v24 + 1), 0);
              v25 = (int)a7;
              v14 = 0LL;
              goto LABEL_26;
            }
LABEL_133:
            v14 = 0LL;
            v25 = v31;
            goto LABEL_26;
          default:
            goto LABEL_26;
        }
        AuthzBasepAddAccessTypeList(a9, v15, 0, v61, v57, 0);
        goto LABEL_24;
      }
    }
    if ( !v16 && !v23 && v20 )
    {
      v42 = SePackagePrefixSid;
      if ( (unsigned __int8)v24[9] >= 2u
        && v24[8] == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v24 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v24 + 4) == *(_DWORD *)(v42 + 8) )
      {
        goto LABEL_63;
      }
      v43 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v24[9] >= 2u
        && v24[8] == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory(v24 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v24 + 4) == *(_DWORD *)(v43 + 8) )
      {
        goto LABEL_88;
      }
      v18 = a2;
    }
    v27 = *(_DWORD *)(a9 + 24);
    v66 = v27;
    if ( !v27 )
      goto LABEL_24;
    v28 = (unsigned __int8 *)(v24 + 8);
    v29 = 504LL;
    if ( !v23 )
      v29 = 232LL;
    v30 = v29 + v18;
    if ( a14 && v24 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v24 + 8) )
      goto LABEL_23;
    v31 = (int)a7;
    if ( a7 && RtlEqualSid(SePrincipalSelfSid, v24 + 8) )
      v28 = a7;
    if ( a12
      && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v28
      && !memcmp(SeOwnerRightsSid, v28, 4 * (unsigned int)(unsigned __int8)HIBYTE(*(_WORD *)SeOwnerRightsSid) + 8) )
    {
LABEL_38:
      v15 = a8;
      v41 = *((_DWORD *)v24 + 1);
      if ( a8 == 1 )
      {
        v20 = v60;
        *(_DWORD *)(a9 + 24) = v27 & ~v41;
      }
      else
      {
        AuthzBasepAddAccessTypeList(a9, a8, 0, v61, v41, 0);
        v20 = v60;
      }
      goto LABEL_24;
    }
    if ( !v30 )
    {
      v15 = a8;
      v20 = v60;
      goto LABEL_133;
    }
    if ( !v28 )
    {
      v15 = a8;
      v25 = (int)a7;
      v20 = v60;
      v14 = 0LL;
      goto LABEL_26;
    }
    v32 = 0;
    LODWORD(a4) = *(unsigned __int16 *)v28;
    v62 = a4;
    v74 = 0;
    v33 = 4 * v28[1] + 8;
    v65 = v33;
    v34 = v28[4 * BYTE1(a4) + 4];
    v35 = *(_QWORD *)(v30 + 8LL * (v34 & 0xF) + 16) & *(_QWORD *)(v30 + 8LL * ((v34 >> 4) + 16) + 16);
    if ( !v35 )
    {
LABEL_22:
      v36 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 > 0x40u )
      {
        v52 = *(_QWORD *)(v30 + 8);
        v53 = 64;
        v75 = v52;
        do
        {
          v40 = v52 + 16LL * v53;
          if ( **(_WORD **)v40 == (_WORD)a4 )
          {
            if ( !memcmp(v28, *(const void **)v40, v33) )
              goto LABEL_34;
            v52 = v75;
            LODWORD(a4) = v62;
            v33 = v65;
          }
          ++v53;
        }
        while ( v53 < v36 );
      }
      goto LABEL_23;
    }
    while ( 1 )
    {
      LOBYTE(v37) = v35;
      if ( (_BYTE)v35 )
        break;
LABEL_52:
      v32 += 8;
      v35 >>= 8;
      v74 = v32;
      if ( !v35 )
        goto LABEL_22;
    }
    v38 = *(_QWORD *)(v30 + 8);
    v39 = v32;
    v71 = v38;
    v70 = v32;
    while ( 1 )
    {
      v69 = SidHashByteToIndexLookupTable[(unsigned __int8)v37];
      v40 = v38 + 16LL * (unsigned int)(v39 + v69);
      if ( **(_WORD **)v40 == (_WORD)a4 )
        break;
LABEL_50:
      v39 = v70;
      v37 = (unsigned __int8)v37 ^ (1 << v69);
      if ( !(_BYTE)v37 )
      {
        v32 = v74;
        goto LABEL_52;
      }
    }
    if ( memcmp(v28, *(const void **)v40, v33) )
    {
      v38 = v71;
      LODWORD(a4) = v62;
      v33 = v65;
      goto LABEL_50;
    }
LABEL_34:
    if ( !a11 && v40 == *(_QWORD *)(v30 + 8) && (*(_DWORD *)(v40 + 8) & 0x10) == 0 || (*(_DWORD *)(v40 + 8) & 4) != 0 )
    {
      v27 = v66;
      goto LABEL_38;
    }
LABEL_23:
    v15 = a8;
    v20 = v60;
LABEL_24:
    v14 = 0LL;
LABEL_25:
    v25 = (int)a7;
LABEL_26:
    result = *((unsigned __int16 *)v24 + 1);
    v23 = a11;
    v24 += result;
    v18 = a2;
    ++v61;
  }
  while ( v61 < v68 );
  return result;
}
