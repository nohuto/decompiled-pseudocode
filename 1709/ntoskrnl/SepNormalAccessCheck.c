/*
 * XREFs of SepNormalAccessCheck @ 0x14007DC40
 * Callers:
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400180F0 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x140110230 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14011ACB8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14011B8D0 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x14011D480 (SepMatchCapability.c)
 *     SepMatchPackage @ 0x14011E91C (SepMatchPackage.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x14028DD54 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        void *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 result; // rax
  int v17; // r12d
  int v18; // ebp
  _DWORD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rsi
  void *v22; // r10
  char v23; // al
  int v24; // ebx
  unsigned __int8 *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned __int8 v29; // r8
  __int16 v30; // r9
  unsigned __int8 v31; // cl
  unsigned int v32; // r10d
  unsigned __int64 i; // rbp
  int v34; // r12d
  __int64 v35; // rcx
  int v36; // edx
  int v37; // r13d
  __int64 v38; // rbx
  unsigned int v39; // ebp
  __int64 v40; // rdi
  _BYTE *v41; // rdi
  __int64 v42; // rbx
  int v43; // eax
  int v44; // eax
  int v45; // edi
  int v46; // eax
  bool CanTokenMatchAllPackageSid; // al
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  void *v52; // r10
  void *v53; // r11
  void *v54; // r8
  void *v55; // r9
  __int64 v56; // rax
  BOOLEAN v57; // al
  __int64 v58; // rcx
  BOOLEAN v59; // al
  int v60; // eax
  unsigned int v61; // r12d
  __int64 v62; // r13
  int v63; // eax
  char *v64; // rbx
  char *v65; // r8
  __int64 v66; // rcx
  void *v67; // rdx
  _SID_AND_ATTRIBUTES_HASH *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  char *v73; // rcx
  char v74; // [rsp+20h] [rbp-B8h]
  char v75; // [rsp+28h] [rbp-B0h]
  unsigned int v76; // [rsp+60h] [rbp-78h]
  int v77; // [rsp+64h] [rbp-74h]
  int v78; // [rsp+68h] [rbp-70h]
  __int16 v79; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v80; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v81; // [rsp+74h] [rbp-64h]
  int v82; // [rsp+78h] [rbp-60h]
  int v83; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v84; // [rsp+80h] [rbp-58h]
  int v85; // [rsp+84h] [rbp-54h]
  int v86; // [rsp+88h] [rbp-50h]
  __int64 v87; // [rsp+90h] [rbp-48h]
  unsigned __int8 v90; // [rsp+F8h] [rbp+20h]

  v13 = a8;
  v14 = a2;
  result = *(unsigned __int16 *)(a4 + 4);
  v17 = 0;
  v78 = 0;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v83 = -1;
  v86 = v18;
  v84 = result;
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
    result = v84;
  }
  if ( !v18 && !a11 )
  {
    v17 = a1 | *(_DWORD *)a13;
    v78 = v17;
  }
  v76 = v17;
  v21 = (char *)(a4 + 8);
  v77 = 0;
  if ( (_DWORD)result )
  {
    v22 = a7;
    while ( 1 )
    {
      result = *(unsigned int *)(a9 + 24);
      if ( !(_DWORD)result && !v17 )
        return result;
      if ( (v21[1] & 8) != 0 )
        goto LABEL_32;
      if ( !(_DWORD)result )
      {
        if ( !*v21 )
        {
LABEL_12:
          if ( v18 )
            goto LABEL_13;
          if ( !a11 )
          {
            if ( v17 )
            {
              v40 = SePackagePrefixSid;
              if ( (unsigned __int8)v21[9] >= 2u
                && v21[8] == *(_BYTE *)SePackagePrefixSid
                && RtlCompareMemory(v21 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6 )
              {
                v44 = *((_DWORD *)v21 + 4);
                if ( v44 == *(_DWORD *)(v40 + 8) )
                {
                  v45 = *((_DWORD *)v21 + 1);
                  if ( v44 == 2 && v21[9] == 2 )
                  {
                    v46 = *((_DWORD *)v21 + 5);
                    if ( v46 == 1 )
                    {
                      CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(v14);
                      v48 = a13;
                      if ( CanTokenMatchAllPackageSid )
                      {
                        *(_DWORD *)(a13 + 4) |= v45 & v76;
                        *(_BYTE *)(a13 + 21) = 1;
                      }
                      else
                      {
                        *(_DWORD *)(a13 + 16) |= v45 & v76;
                        *(_BYTE *)(a13 + 24) = 1;
                      }
                    }
                    else
                    {
                      v48 = a13;
                      if ( v46 == 2 )
                      {
                        *(_DWORD *)(a13 + 4) |= v45 & v76;
                        *(_BYTE *)(a13 + 21) = 1;
                      }
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a13 + 20) = 1;
                    if ( (*(_DWORD *)(v14 + 200) & 0x4000) != 0 )
                    {
                      v57 = RtlEqualSid(*(PSID *)(v14 + 784), v21 + 8);
                      v48 = a13;
                      if ( v57 )
                      {
                        *(_DWORD *)(a13 + 4) |= v45 & v76;
                        *(_BYTE *)(a13 + 21) = 1;
                      }
                    }
                    else
                    {
                      v48 = a13;
                    }
                  }
                  v49 = ~*(_DWORD *)(v48 + 4);
                  v78 = v49 & v17;
                  *(_DWORD *)a13 &= v49;
                  goto LABEL_31;
                }
              }
            }
          }
          if ( a11
            || !v17
            || (v41 = v21 + 8, v42 = SeCapabilityPrefixSid, (unsigned __int8)v21[9] < 2u)
            || *v41 != *(_BYTE *)SeCapabilityPrefixSid
            || RtlCompareMemory(v21 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) != 6
            || *((_DWORD *)v21 + 4) != *(_DWORD *)(v42 + 8) )
          {
LABEL_13:
            v24 = *(_DWORD *)(a9 + 24);
            v22 = a7;
            v82 = v24;
            if ( !v24 )
              goto LABEL_32;
            v25 = (unsigned __int8 *)(v21 + 8);
            v26 = 504LL;
            if ( !a11 )
              v26 = 232LL;
            v27 = v14 + v26;
            if ( a7 )
            {
              v59 = RtlEqualSid(SePrincipalSelfSid, v21 + 8);
              v22 = a7;
              if ( v59 )
                v25 = (unsigned __int8 *)a7;
            }
            if ( a12 && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v25 )
            {
              if ( !memcmp(SeOwnerRightsSid, v25, 4 * (unsigned int)*((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
              {
LABEL_29:
                v13 = a8;
                if ( a8 == 1 )
                {
                  *(_DWORD *)(a9 + 24) = v24 & ~*((_DWORD *)v21 + 1);
                  goto LABEL_31;
                }
                goto LABEL_100;
              }
              v22 = a7;
            }
            if ( !v27 || !v25 )
            {
              v13 = a8;
              goto LABEL_32;
            }
            v28 = v25[1];
            v29 = 0;
            v30 = *(_WORD *)v25;
            v79 = *(_WORD *)v25;
            v90 = 0;
            v31 = v25[4 * v28 + 4];
            v32 = 4 * v28 + 8;
            v81 = v32;
            for ( i = *(_QWORD *)(v27 + 8LL * (v31 & 0xF) + 16) & *(_QWORD *)(v27 + 8LL * ((v31 >> 4) + 16) + 16);
                  i;
                  v90 = v29 )
            {
              LOBYTE(v34) = i;
              if ( (_BYTE)i )
              {
                v35 = *(_QWORD *)(v27 + 8);
                v36 = v29;
                v87 = v35;
                v85 = v29;
                while ( 1 )
                {
                  v37 = SidHashByteToIndexLookupTable[(unsigned __int8)v34];
                  v38 = v35 + 16LL * (unsigned int)(v36 + v37);
                  if ( **(_WORD **)v38 == v30 )
                  {
                    if ( !memcmp(v25, *(const void **)v38, v32) )
                    {
LABEL_25:
                      if ( !a11 && v38 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0
                        || (*(_DWORD *)(v38 + 8) & 4) != 0 )
                      {
                        v24 = v82;
                        goto LABEL_29;
                      }
LABEL_37:
                      v13 = a8;
LABEL_31:
                      v22 = a7;
                      goto LABEL_32;
                    }
                    v35 = v87;
                    v30 = v79;
                    v32 = v81;
                  }
                  v36 = v85;
                  v34 = (unsigned __int8)v34 ^ (1 << v37);
                  if ( !(_BYTE)v34 )
                  {
                    v29 = v90;
                    break;
                  }
                }
              }
              v29 += 8;
              i >>= 8;
            }
            v39 = *(_DWORD *)v27;
            if ( *(_DWORD *)v27 > 0x40u )
            {
              v61 = 64;
              v62 = *(_QWORD *)(v27 + 8);
              do
              {
                v38 = v62 + 16LL * v61;
                if ( **(_WORD **)v38 == v30 )
                {
                  if ( !memcmp(v25, *(const void **)v38, v32) )
                    goto LABEL_25;
                  v30 = v79;
                  v32 = v81;
                }
                ++v61;
              }
              while ( v61 < v39 );
            }
            goto LABEL_37;
          }
          goto LABEL_49;
        }
        if ( *v21 != 9 )
          goto LABEL_32;
      }
      v23 = *v21;
      if ( !*v21 )
        goto LABEL_12;
      if ( v23 != 5 )
        break;
      v63 = *((_DWORD *)v21 + 2);
      v64 = v21 + 12;
      if ( (v63 & 1) == 0 )
        v64 = 0LL;
      if ( !v64 )
      {
        v65 = &v21[16 * (v63 & 1) + ((8LL * (v63 & 2)) | 0xC)];
        v75 = a12;
        v66 = 504LL;
        v74 = a11;
        v67 = v22;
        if ( !a11 )
          v66 = 232LL;
        v68 = (_SID_AND_ATTRIBUTES_HASH *)(v14 + v66);
LABEL_132:
        if ( !SepSidInTokenSidHash(v68, v67, v65, 0, v74, v75) )
          goto LABEL_31;
        if ( v13 == 1 )
        {
          *(_DWORD *)(a9 + 24) &= ~*((_DWORD *)v21 + 1);
          goto LABEL_31;
        }
        goto LABEL_100;
      }
      if ( a10 )
      {
        v70 = 504LL;
        if ( !a11 )
          v70 = 232LL;
        if ( SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v14 + v70),
               v22,
               &v21[16 * (v63 & 1) + ((8LL * (v63 & 2)) | 0xC)],
               0,
               a11,
               a12)
          && (unsigned __int8)AuthzBasepObjectInTypeList(v64, a9, v13, &v80) )
        {
          AuthzBasepAddAccessTypeList(a9, v13, v80, v77, *((_DWORD *)v21 + 1), 0);
        }
        goto LABEL_31;
      }
LABEL_32:
      result = *((unsigned __int16 *)v21 + 1);
      v18 = v86;
      v21 += result;
      v17 = v78;
      v14 = a2;
      if ( ++v77 >= v84 )
        return result;
    }
    switch ( v23 )
    {
      case 4:
        v71 = 504LL;
        if ( !a11 )
          v71 = 232LL;
        if ( !SepSidInTokenSidHash(
                (PSID_AND_ATTRIBUTES_HASH)(v14 + v71),
                v22,
                &v21[4 * (unsigned __int8)v21[13] + 20],
                0,
                a11,
                a12) )
          goto LABEL_31;
        v75 = a12;
        v74 = a11;
        v69 = 504LL;
        v65 = v21 + 12;
        if ( !a11 )
          v69 = 232LL;
        v68 = (_SID_AND_ATTRIBUTES_HASH *)(a3 + v69);
        v67 = 0LL;
        goto LABEL_132;
      case 1:
        v58 = 504LL;
        if ( !a11 )
          v58 = 232LL;
        if ( !SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v14 + v58), v22, v21 + 8, 1, a11, a12) )
          goto LABEL_31;
        result = *((unsigned int *)v21 + 1);
        if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
          goto LABEL_31;
        break;
      case 6:
        v72 = 504LL;
        if ( !a11 )
          v72 = 232LL;
        if ( !SepSidInTokenSidHash(
                (PSID_AND_ATTRIBUTES_HASH)(v14 + v72),
                v22,
                &v21[16 * (*((_DWORD *)v21 + 2) & 1) + ((8LL * (*((_DWORD *)v21 + 2) & 2)) | 0xC)],
                1,
                a11,
                a12) )
          goto LABEL_31;
        v73 = v21 + 12;
        if ( (*((_DWORD *)v21 + 2) & 1) == 0 )
          v73 = 0LL;
        if ( v73 && a10 )
        {
          if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v73, a9, v13, &v80) )
            goto LABEL_31;
          result = *(unsigned int *)(a9 + 48LL * v80 + 24);
          if ( ((unsigned int)result & *((_DWORD *)v21 + 1)) == 0 )
            goto LABEL_31;
        }
        else
        {
          result = *((unsigned int *)v21 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_31;
        }
        break;
      case 9:
        v50 = 4 * (unsigned __int8)v21[9] + 8;
        if ( *((unsigned __int16 *)v21 + 1) - v50 == 8 )
          goto LABEL_32;
        if ( a5 && !*a6 )
          AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v51 = *(_QWORD **)(v14 + 1096);
        if ( v51 )
        {
          v52 = (void *)v51[75];
          v53 = (void *)v51[73];
        }
        else
        {
          v52 = 0LL;
          v53 = 0LL;
        }
        if ( v51 )
          v54 = (void *)v51[74];
        else
          v54 = 0LL;
        if ( v51 )
          v55 = (void *)v51[72];
        else
          v55 = 0LL;
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)v14,
          *(void **)(v14 + 776),
          (void *)*a6,
          v55,
          v54,
          v53,
          v52,
          &v21[v50 + 8],
          *((unsigned __int16 *)v21 + 1) - v50 - 8,
          0,
          a11,
          &v83);
        if ( v83 != 1 )
          goto LABEL_31;
        if ( v18 )
          goto LABEL_164;
        if ( !a11 && v17 && (unsigned __int8)SepIsPackageSid(v21 + 8) )
        {
          SepMatchPackage(
            v14,
            v76,
            v21 + 8,
            *((unsigned int *)v21 + 1),
            a13 + 21,
            a13 + 4,
            a13 + 20,
            a13 + 16,
            a13 + 24);
          v60 = ~*(_DWORD *)(a13 + 4);
          *(_DWORD *)a13 &= v60;
          v78 = v60 & v17;
          goto LABEL_31;
        }
        if ( a11 || !v17 || (LODWORD(v41) = (_DWORD)v21 + 8, !(unsigned __int8)SepIsCapabilitySid(v21 + 8)) )
        {
LABEL_164:
          if ( !*(_DWORD *)(a9 + 24) )
            goto LABEL_31;
          v56 = a11 ? 504LL : 232LL;
          if ( !SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v56 + v14), a7, v21 + 8, 0, a11, a12) )
            goto LABEL_31;
LABEL_100:
          AuthzBasepAddAccessTypeList(a9, v13, 0, v77, *((_DWORD *)v21 + 1), 0);
          goto LABEL_31;
        }
LABEL_49:
        SepMatchCapability(v14, v76, (_DWORD)v41, *((_DWORD *)v21 + 1), a13 + 22, a13 + 8);
        v43 = ~*(_DWORD *)(a13 + 8);
        *(_DWORD *)a13 &= v43;
        v78 = v43 & v17;
        goto LABEL_31;
      default:
        goto LABEL_32;
    }
  }
  return result;
}
