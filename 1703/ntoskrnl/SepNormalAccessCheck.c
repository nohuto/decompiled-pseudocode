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
        unsigned __int8 a11,
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
  unsigned __int8 v21; // r13
  char *v22; // rdi
  __int64 v23; // r10
  __int64 v24; // r9
  char v25; // al
  int v26; // ebp
  __int64 v27; // rax
  unsigned __int8 *v28; // r15
  __int64 v29; // rbx
  int v30; // eax
  unsigned __int8 v31; // r8
  __int16 v32; // r9
  unsigned int v33; // r10d
  unsigned int v34; // edx
  unsigned __int64 v35; // rbp
  unsigned int v36; // ebp
  int v37; // r13d
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rbx
  _DWORD *v44; // rbx
  int v45; // eax
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  void *v48; // r11
  void *v49; // r10
  void *v50; // r8
  void *v51; // r9
  __int64 v52; // rax
  unsigned int v53; // eax
  BOOLEAN v54; // al
  __int64 v55; // rax
  unsigned int v56; // r13d
  __int64 v57; // rax
  int v58; // ecx
  char *v59; // rbx
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // r8
  char *v72; // rcx
  int v73; // [rsp+20h] [rbp-B8h]
  int v74; // [rsp+28h] [rbp-B0h]
  unsigned int v75; // [rsp+60h] [rbp-78h]
  int v76; // [rsp+64h] [rbp-74h]
  __int16 v77; // [rsp+68h] [rbp-70h]
  int v78; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v79; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v80; // [rsp+74h] [rbp-64h]
  int v81; // [rsp+78h] [rbp-60h]
  int v82; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v83; // [rsp+80h] [rbp-58h]
  int v84; // [rsp+84h] [rbp-54h]
  int v85; // [rsp+88h] [rbp-50h]
  __int64 v86; // [rsp+90h] [rbp-48h]
  unsigned __int8 v89; // [rsp+F8h] [rbp+20h]
  __int64 v90; // [rsp+F8h] [rbp+20h]

  v13 = a8;
  v14 = a2;
  result = *(unsigned __int16 *)(a4 + 4);
  v17 = 0;
  v76 = 0;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v82 = -1;
  v83 = result;
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
    result = v83;
  }
  v21 = a11;
  if ( !v18 && !a11 )
  {
    v17 = a1 | *(_DWORD *)a13;
    v76 = v17;
  }
  v78 = v17;
  v22 = (char *)(a4 + 8);
  v75 = 0;
  if ( !(_DWORD)result )
    return result;
  v23 = (__int64)a7;
  v24 = 12LL;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v17 )
      return result;
    if ( (v22[1] & 8) != 0 )
      goto LABEL_26;
    if ( !(_DWORD)result )
    {
      if ( !*v22 )
        goto LABEL_12;
      if ( *v22 != 9 )
        goto LABEL_26;
    }
    v25 = *v22;
    if ( *v22 )
    {
      switch ( v25 )
      {
        case 5:
          v58 = *((_DWORD *)v22 + 2);
          v59 = v22 + 12;
          v60 = v58 & 1;
          if ( (v58 & 1) == 0 )
            v59 = 0LL;
          if ( v59 )
          {
            if ( a10 )
            {
              v64 = 232LL;
              v65 = 8LL * (v58 & 2);
              if ( v21 )
                v64 = 504LL;
              v66 = 28LL;
              if ( !v60 )
                v66 = 12LL;
              LOBYTE(v74) = a12;
              LOBYTE(v73) = v21;
              if ( (unsigned __int8)SepSidInTokenSidHash(v64 + v14, v23, &v22[v65 + v66], 0LL, v73, v74)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v59, a9, v13, &v79) )
              {
                AuthzBasepAddAccessTypeList(a9, v13, v79, v75, *((_DWORD *)v22 + 1), 0);
              }
              goto LABEL_24;
            }
            goto LABEL_26;
          }
          v61 = 232LL;
          v62 = 8LL * (v58 & 2);
          if ( v21 )
            v61 = 504LL;
          v63 = 28LL;
          if ( !v60 )
            v63 = 12LL;
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v21;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v61 + v14, v23, &v22[v62 + v63], 0LL, v73, v74) )
            goto LABEL_24;
          v53 = *((_DWORD *)v22 + 1);
          if ( v13 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v53;
            goto LABEL_24;
          }
LABEL_100:
          AuthzBasepAddAccessTypeList(a9, v13, 0, v75, v53, 0);
          goto LABEL_24;
        case 4:
          v67 = 232LL;
          if ( v21 )
            v67 = 504LL;
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v21;
          if ( !(unsigned __int8)SepSidInTokenSidHash(
                                   v67 + v14,
                                   v23,
                                   &v22[4 * (unsigned __int8)v22[13] + 20],
                                   0LL,
                                   v73,
                                   v74) )
            goto LABEL_24;
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v21;
          v68 = 232LL;
          if ( v21 )
            v68 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v68 + a3, 0LL, v22 + 12, 0LL, v73, v74) )
            goto LABEL_24;
          v53 = *((_DWORD *)v22 + 1);
          if ( v13 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v53;
            goto LABEL_24;
          }
          goto LABEL_100;
        case 1:
          if ( v21 )
            v55 = 504LL;
          else
            v55 = 232LL;
          LOBYTE(v24) = 1;
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v21;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v55 + v14, v23, v22 + 8, v24, v73, v74) )
            goto LABEL_24;
          result = *((unsigned int *)v22 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_24;
          return result;
        case 6:
          v69 = 232LL;
          v70 = *((_DWORD *)v22 + 2);
          if ( v21 )
            v69 = 504LL;
          v71 = 28LL;
          if ( (v70 & 1) == 0 )
            v71 = 12LL;
          LOBYTE(v24) = 1;
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v21;
          if ( !(unsigned __int8)SepSidInTokenSidHash(v69 + v14, v23, &v22[8 * (v70 & 2) + v71], v24, v73, v74) )
            goto LABEL_24;
          v72 = v22 + 12;
          if ( (*((_DWORD *)v22 + 2) & 1) == 0 )
            v72 = 0LL;
          if ( v72 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v72, a9, v13, &v79) )
              goto LABEL_24;
            result = *(unsigned int *)(a9 + 48LL * v79 + 24);
            if ( ((unsigned int)result & *((_DWORD *)v22 + 1)) == 0 )
              goto LABEL_24;
          }
          else
          {
            result = *((unsigned int *)v22 + 1);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            {
              v23 = (__int64)a7;
              v24 = 12LL;
              goto LABEL_26;
            }
          }
          return result;
      }
      if ( v25 != 9 )
        goto LABEL_26;
      v46 = 4 * (unsigned __int8)v22[9] + 8;
      if ( *((unsigned __int16 *)v22 + 1) - v46 == 8 )
        goto LABEL_26;
      if ( a5 && !*a6 )
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
      v47 = *(_QWORD **)(v14 + 1096);
      if ( v47 )
        v48 = (void *)v47[75];
      else
        v48 = 0LL;
      if ( v47 )
        v49 = (void *)v47[73];
      else
        v49 = 0LL;
      if ( v47 )
        v50 = (void *)v47[74];
      else
        v50 = 0LL;
      if ( v47 )
        v51 = (void *)v47[72];
      else
        v51 = 0LL;
      AuthzBasepEvaluateAceCondition(
        (_DWORD *)v14,
        *(void **)(v14 + 776),
        *a6,
        v51,
        v50,
        v49,
        v48,
        &v22[v46 + 8],
        *((unsigned __int16 *)v22 + 1) - v46 - 8,
        0,
        v21,
        &v82);
      if ( v82 != 1 )
        goto LABEL_24;
      if ( !v18 )
      {
        if ( !v21 && v17 && SepIsPackageSid((__int64)(v22 + 8)) )
        {
LABEL_66:
          v14 = a2;
          v44 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v78,
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
            goto LABEL_95;
LABEL_56:
          v14 = a2;
          v44 = (_DWORD *)(a13 + 8);
          SepMatchCapability(
            a2,
            v78,
            (__int64)(v22 + 8),
            *((_DWORD *)v22 + 1),
            (_BYTE *)(a13 + 18),
            (_DWORD *)(a13 + 8));
        }
        v45 = ~*v44;
        v76 = v45 & v17;
        *(_DWORD *)a13 &= v45;
        goto LABEL_24;
      }
LABEL_95:
      if ( !*(_DWORD *)(a9 + 24) )
        goto LABEL_23;
      if ( v21 )
        v52 = 504LL;
      else
        v52 = 232LL;
      v14 = a2;
      LOBYTE(v74) = a12;
      LOBYTE(v73) = v21;
      if ( !(unsigned __int8)SepSidInTokenSidHash(v52 + a2, a7, v22 + 8, 0LL, v73, v74) )
        goto LABEL_24;
      v53 = *((_DWORD *)v22 + 1);
      goto LABEL_100;
    }
LABEL_12:
    if ( !v18 )
    {
      if ( !v21 )
      {
        if ( v17 )
        {
          v42 = SePackagePrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SePackagePrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v42 + 8) )
          {
            goto LABEL_66;
          }
        }
      }
      if ( !v21 )
      {
        if ( v17 )
        {
          v43 = SeCapabilityPrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SeCapabilityPrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v43 + 8) )
          {
            goto LABEL_56;
          }
        }
      }
    }
    v26 = *(_DWORD *)(a9 + 24);
    v81 = v26;
    if ( !v26 )
      goto LABEL_23;
    if ( v21 )
      v27 = 504LL;
    else
      v27 = 232LL;
    v28 = (unsigned __int8 *)(v22 + 8);
    v23 = (__int64)a7;
    v29 = v27 + a2;
    if ( a7 )
    {
      v54 = RtlEqualSid(SePrincipalSelfSid, v22 + 8);
      v23 = (__int64)a7;
      if ( v54 )
        v28 = a7;
    }
    if ( a12 && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v28 )
    {
      if ( !memcmp(SeOwnerRightsSid, v28, 4LL * *((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
      {
LABEL_38:
        v13 = a8;
        v41 = *((_DWORD *)v22 + 1);
        if ( a8 == 1 )
          *(_DWORD *)(a9 + 24) = v26 & ~v41;
        else
          AuthzBasepAddAccessTypeList(a9, a8, 0, v75, v41, 0);
        goto LABEL_23;
      }
      v23 = (__int64)a7;
    }
    if ( !v29 || !v28 )
    {
      v13 = a8;
      v14 = a2;
      goto LABEL_25;
    }
    v30 = v28[1];
    v31 = 0;
    v32 = *(_WORD *)v28;
    v77 = *(_WORD *)v28;
    v89 = 0;
    v33 = 4 * v30 + 8;
    v80 = v33;
    v34 = v28[4 * v30 + 4];
    v35 = *(_QWORD *)(v29 + 8LL * (v34 & 0xF) + 16) & *(_QWORD *)(v29 + 8LL * ((v34 >> 4) + 16) + 16);
    if ( !v35 )
    {
LABEL_21:
      v36 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 > 0x40u )
      {
        v56 = 64;
        v57 = *(_QWORD *)(v29 + 8);
        v90 = v57;
        do
        {
          v40 = v57 + 16LL * v56;
          if ( **(_WORD **)v40 == v32 )
          {
            if ( !memcmp(v28, *(const void **)v40, v33) )
              goto LABEL_34;
            v57 = v90;
            v32 = v77;
            v33 = v80;
          }
          ++v56;
        }
        while ( v56 < v36 );
        v21 = a11;
      }
      goto LABEL_22;
    }
    while ( 1 )
    {
      LOBYTE(v37) = v35;
      if ( (_BYTE)v35 )
        break;
LABEL_60:
      v31 += 8;
      v35 >>= 8;
      v89 = v31;
      if ( !v35 )
      {
        v21 = a11;
        goto LABEL_21;
      }
    }
    v38 = *(_QWORD *)(v29 + 8);
    v39 = v31;
    v86 = v38;
    v85 = v31;
    while ( 1 )
    {
      v84 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v37];
      v40 = v38 + 16LL * (unsigned int)(v39 + v84);
      if ( **(_WORD **)v40 == v32 )
        break;
LABEL_58:
      v39 = v85;
      v37 = (unsigned __int8)v37 ^ (1 << v84);
      if ( !(_BYTE)v37 )
      {
        v31 = v89;
        goto LABEL_60;
      }
    }
    if ( memcmp(v28, *(const void **)v40, v33) )
    {
      v38 = v86;
      v32 = v77;
      v33 = v80;
      goto LABEL_58;
    }
LABEL_34:
    v21 = a11;
    if ( !a11 && v40 == *(_QWORD *)(v29 + 8) && (*(_DWORD *)(v40 + 8) & 0x10) == 0 || (*(_DWORD *)(v40 + 8) & 4) != 0 )
    {
      v26 = v81;
      goto LABEL_38;
    }
LABEL_22:
    v13 = a8;
LABEL_23:
    v14 = a2;
LABEL_24:
    v23 = (__int64)a7;
LABEL_25:
    v24 = 12LL;
LABEL_26:
    result = *((unsigned __int16 *)v22 + 1);
    v17 = v76;
    v22 += result;
    ++v75;
  }
  while ( v75 < v83 );
  return result;
}
