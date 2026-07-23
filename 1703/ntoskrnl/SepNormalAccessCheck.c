/*
 * XREFs of SepNormalAccessCheck @ 0x140090270
 * Callers:
 *     SepAccessCheck @ 0x14008E970 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x14001198C (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x140021F88 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140022854 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140027230 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchPackage @ 0x1400895A0 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x140263A24 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r15d
  __int64 v14; // rbp
  __int64 result; // rax
  int v17; // r14d
  int v18; // r12d
  _DWORD *v19; // rax
  __int64 v20; // rcx
  char v21; // r13
  char *v22; // rdi
  char v23; // al
  int v24; // ebp
  __int64 v25; // rax
  unsigned __int8 *v26; // r15
  __int64 v27; // rbx
  int v28; // eax
  unsigned __int8 v29; // r8
  __int16 v30; // r9
  unsigned int v31; // r10d
  unsigned int v32; // edx
  unsigned __int64 v33; // rbp
  unsigned int v34; // ebp
  int v35; // r13d
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // r14
  unsigned int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rbx
  _DWORD *v42; // rbx
  int v43; // eax
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  void *v46; // r11
  void *v47; // r10
  void *v48; // r8
  void *v49; // r9
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // r13d
  __int64 v54; // rax
  char *v55; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  char *v62; // rcx
  unsigned int v63; // [rsp+60h] [rbp-78h]
  int v64; // [rsp+64h] [rbp-74h]
  __int16 v65; // [rsp+68h] [rbp-70h]
  int v66; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v67; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+74h] [rbp-64h]
  int v69; // [rsp+78h] [rbp-60h]
  int v70; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v71; // [rsp+80h] [rbp-58h]
  int v72; // [rsp+84h] [rbp-54h]
  int v73; // [rsp+88h] [rbp-50h]
  __int64 v74; // [rsp+90h] [rbp-48h]
  unsigned __int8 v77; // [rsp+F8h] [rbp+20h]
  __int64 v78; // [rsp+F8h] [rbp+20h]

  v13 = a8;
  v14 = a2;
  result = *(unsigned __int16 *)(a4 + 4);
  v17 = 0;
  v64 = 0;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v70 = -1;
  v71 = result;
  if ( a8 )
  {
    v19 = (_DWORD *)(a9 + 24);
    v20 = a8;
    do
    {
      *v19 = a1;
      v19 += 12;
      --v20;
    }
    while ( v20 );
    result = v71;
  }
  v21 = a11;
  if ( !v18 && !a11 )
  {
    v17 = a1 | *(_DWORD *)a13;
    v64 = v17;
  }
  v66 = v17;
  v22 = (char *)(a4 + 8);
  v63 = 0;
  if ( !(_DWORD)result )
    return result;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v17 )
      return result;
    if ( (v22[1] & 8) != 0 )
      goto LABEL_23;
    if ( !(_DWORD)result )
    {
      if ( !*v22 )
        goto LABEL_11;
      if ( *v22 != 9 )
        goto LABEL_23;
    }
    v23 = *v22;
    if ( *v22 )
    {
      switch ( v23 )
      {
        case 5:
          v55 = v22 + 12;
          if ( !(*((_DWORD *)v22 + 2) & 1) )
            v55 = 0LL;
          if ( v55 )
          {
            if ( a10 )
            {
              v58 = 232LL;
              if ( v21 )
                v58 = 504LL;
              if ( (unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v58 + v14), v21, a12)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v55, a9, v13, &v67) )
              {
                AuthzBasepAddAccessTypeList(a9, v13, v67, v63, *((_DWORD *)v22 + 1), 0);
              }
            }
            goto LABEL_23;
          }
          v57 = 232LL;
          if ( v21 )
            v57 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v57 + v14), v21, a12) )
            goto LABEL_23;
          v51 = *((_DWORD *)v22 + 1);
          if ( v13 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v51;
            goto LABEL_23;
          }
          goto LABEL_97;
        case 4:
          v59 = 232LL;
          if ( v21 )
            v59 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v59 + v14), v21, a12) )
            goto LABEL_23;
          v60 = 232LL;
          if ( v21 )
            v60 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v60 + a3), v21, a12) )
            goto LABEL_23;
          v51 = *((_DWORD *)v22 + 1);
          if ( v13 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v51;
            goto LABEL_23;
          }
          goto LABEL_97;
        case 1:
          if ( v21 )
            v52 = 504LL;
          else
            v52 = 232LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v52 + v14), v21, a12) )
            goto LABEL_23;
          result = *((unsigned int *)v22 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_23;
          return result;
        case 6:
          v61 = 232LL;
          if ( v21 )
            v61 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v61 + v14), v21, a12) )
            goto LABEL_23;
          v62 = v22 + 12;
          if ( (*((_DWORD *)v22 + 2) & 1) == 0 )
            v62 = 0LL;
          if ( v62 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v62, a9, v13, &v67) )
              goto LABEL_23;
            result = *(unsigned int *)(a9 + 48LL * v67 + 24);
            if ( ((unsigned int)result & *((_DWORD *)v22 + 1)) == 0 )
              goto LABEL_23;
          }
          else
          {
            result = *((unsigned int *)v22 + 1);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
              goto LABEL_23;
          }
          return result;
      }
      if ( v23 != 9 )
        goto LABEL_23;
      v44 = 4 * (unsigned __int8)v22[9] + 8;
      if ( *((unsigned __int16 *)v22 + 1) - v44 == 8 )
        goto LABEL_23;
      if ( a5 && !*a6 )
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
      v45 = *(_QWORD **)(v14 + 1096);
      v46 = v45 ? (void *)v45[75] : 0LL;
      v47 = v45 ? (void *)v45[73] : 0LL;
      v48 = v45 ? (void *)v45[74] : 0LL;
      v49 = v45 ? (void *)v45[72] : 0LL;
      AuthzBasepEvaluateAceCondition(
        (_DWORD *)v14,
        *(void **)(v14 + 776),
        *a6,
        v49,
        v48,
        v47,
        v46,
        &v22[v44 + 8],
        *((unsigned __int16 *)v22 + 1) - v44 - 8,
        0,
        v21,
        &v70);
      if ( v70 != 1 )
        goto LABEL_23;
      if ( !v18 )
      {
        if ( !v21 && v17 && SepIsPackageSid((__int64)(v22 + 8)) )
        {
LABEL_63:
          v14 = a2;
          v42 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v66,
            (__int64)(v22 + 8),
            *((_DWORD *)v22 + 1),
            (_BYTE *)(a13 + 17),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 16),
            (_DWORD *)(a13 + 24),
            (_BYTE *)(a13 + 20));
        }
        else
        {
          if ( v21 || !v17 || !SepIsCapabilitySid((__int64)(v22 + 8)) )
            goto LABEL_92;
LABEL_53:
          v14 = a2;
          v42 = (_DWORD *)(a13 + 8);
          SepMatchCapability(
            a2,
            v66,
            (__int64)(v22 + 8),
            *((_DWORD *)v22 + 1),
            (_BYTE *)(a13 + 18),
            (_DWORD *)(a13 + 8));
        }
        v43 = ~*v42;
        v64 = v43 & v17;
        *(_DWORD *)a13 &= v43;
        goto LABEL_23;
      }
LABEL_92:
      if ( !*(_DWORD *)(a9 + 24) )
        goto LABEL_22;
      if ( v21 )
        v50 = 504LL;
      else
        v50 = 232LL;
      v14 = a2;
      if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v50 + a2), v21, a12) )
        goto LABEL_23;
      v51 = *((_DWORD *)v22 + 1);
LABEL_97:
      AuthzBasepAddAccessTypeList(a9, v13, 0, v63, v51, 0);
      goto LABEL_23;
    }
LABEL_11:
    if ( !v18 )
    {
      if ( !v21 )
      {
        if ( v17 )
        {
          v40 = SePackagePrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SePackagePrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v40 + 8) )
          {
            goto LABEL_63;
          }
        }
      }
      if ( !v21 )
      {
        if ( v17 )
        {
          v41 = SeCapabilityPrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SeCapabilityPrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v41 + 8) )
          {
            goto LABEL_53;
          }
        }
      }
    }
    v24 = *(_DWORD *)(a9 + 24);
    v69 = v24;
    if ( !v24 )
      goto LABEL_22;
    if ( v21 )
      v25 = 504LL;
    else
      v25 = 232LL;
    v26 = (unsigned __int8 *)(v22 + 8);
    v27 = v25 + a2;
    if ( a7 && RtlEqualSid(SePrincipalSelfSid, v22 + 8) )
      v26 = a7;
    if ( a12
      && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v26
      && !memcmp(SeOwnerRightsSid, v26, 4LL * *((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
    {
LABEL_35:
      v13 = a8;
      v39 = *((_DWORD *)v22 + 1);
      if ( a8 == 1 )
        *(_DWORD *)(a9 + 24) = v24 & ~v39;
      else
        AuthzBasepAddAccessTypeList(a9, a8, 0, v63, v39, 0);
      goto LABEL_22;
    }
    if ( !v27 || !v26 )
    {
      v13 = a8;
      v14 = a2;
      goto LABEL_23;
    }
    v28 = v26[1];
    v29 = 0;
    v30 = *(_WORD *)v26;
    v65 = *(_WORD *)v26;
    v77 = 0;
    v31 = 4 * v28 + 8;
    v68 = v31;
    v32 = v26[4 * v28 + 4];
    v33 = *(_QWORD *)(v27 + 8LL * (v32 & 0xF) + 16) & *(_QWORD *)(v27 + 8LL * ((v32 >> 4) + 16) + 16);
    if ( !v33 )
    {
LABEL_20:
      v34 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 > 0x40u )
      {
        v53 = 64;
        v54 = *(_QWORD *)(v27 + 8);
        v78 = v54;
        do
        {
          v38 = v54 + 16LL * v53;
          if ( **(_WORD **)v38 == v30 )
          {
            if ( !memcmp(v26, *(const void **)v38, v31) )
              goto LABEL_31;
            v54 = v78;
            v30 = v65;
            v31 = v68;
          }
          ++v53;
        }
        while ( v53 < v34 );
        v21 = a11;
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
      LOBYTE(v35) = v33;
      if ( (_BYTE)v33 )
        break;
LABEL_57:
      v29 += 8;
      v33 >>= 8;
      v77 = v29;
      if ( !v33 )
      {
        v21 = a11;
        goto LABEL_20;
      }
    }
    v36 = *(_QWORD *)(v27 + 8);
    v37 = v29;
    v74 = v36;
    v73 = v29;
    while ( 1 )
    {
      v72 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v35];
      v38 = v36 + 16LL * (unsigned int)(v37 + v72);
      if ( **(_WORD **)v38 == v30 )
        break;
LABEL_55:
      v37 = v73;
      v35 = (unsigned __int8)v35 ^ (1 << v72);
      if ( !(_BYTE)v35 )
      {
        v29 = v77;
        goto LABEL_57;
      }
    }
    if ( memcmp(v26, *(const void **)v38, v31) )
    {
      v36 = v74;
      v30 = v65;
      v31 = v68;
      goto LABEL_55;
    }
LABEL_31:
    v21 = a11;
    if ( !a11 && v38 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
    {
      v24 = v69;
      goto LABEL_35;
    }
LABEL_21:
    v13 = a8;
LABEL_22:
    v14 = a2;
LABEL_23:
    result = *((unsigned __int16 *)v22 + 1);
    v17 = v64;
    v22 += result;
    ++v63;
  }
  while ( v63 < v71 );
  return result;
}
