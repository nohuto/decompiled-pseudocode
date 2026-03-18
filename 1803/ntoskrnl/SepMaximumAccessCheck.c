/*
 * XREFs of SepMaximumAccessCheck @ 0x14005EAA0
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
 *     AuthzBasepObjectInTypeList @ 0x1402C39D0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13,
        char a14)
{
  unsigned int v14; // r10d
  __int64 v15; // rbp
  int v16; // esi
  char v17; // di
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r15
  char v22; // al
  unsigned __int8 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 v26; // r13
  __int16 v27; // dx
  unsigned int v28; // r9d
  unsigned int v29; // eax
  unsigned __int64 v30; // rbp
  int v31; // r12d
  __int64 v32; // rcx
  int v33; // r8d
  __int64 v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // rdx
  unsigned int *v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  char v40; // al
  int v41; // ecx
  unsigned __int16 v42; // cx
  unsigned int v43; // edi
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r10
  __int64 v48; // r11
  unsigned int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // r13
  unsigned int v52; // r12d
  int v53; // eax
  char *v54; // rdi
  int v55; // ecx
  char v56; // al
  unsigned int v57; // edx
  unsigned int v58; // r8d
  char *v59; // rcx
  int v60; // [rsp+28h] [rbp-A0h]
  int v61; // [rsp+60h] [rbp-68h]
  int v62; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-60h]
  int v64; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v65; // [rsp+70h] [rbp-58h]
  unsigned int v66; // [rsp+74h] [rbp-54h]
  __int64 v67; // [rsp+78h] [rbp-50h]
  __int16 v70; // [rsp+E0h] [rbp+18h]
  __int64 v71; // [rsp+E8h] [rbp+20h]

  v71 = a4;
  v14 = a7;
  v15 = a1;
  v16 = *(_DWORD *)(a1 + 200) & 0x2000;
  v17 = a11;
  v61 = v16;
  v64 = -1;
  if ( a11 && a7 )
  {
    v36 = a7;
    v37 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v37 - 1) = *v37;
      v37 += 12;
      --v36;
    }
    while ( v36 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v66 = result;
  v20 = 0;
  if ( !(_DWORD)result )
    goto LABEL_33;
  v21 = a6;
  do
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_32;
    v22 = *v19;
    if ( *v19 )
    {
      switch ( v22 )
      {
        case 5:
          v53 = *((_DWORD *)v19 + 2);
          v54 = v19 + 12;
          v55 = v53 & 1;
          if ( (v53 & 1) == 0 )
            v54 = 0LL;
          if ( v54 )
          {
            if ( !a9 )
              goto LABEL_114;
            if ( !(unsigned __int8)SepSidInToken(
                                     v15,
                                     v21,
                                     (unsigned int)v19 + ((8 * (v53 & 2)) | 0xC) + 16 * v55,
                                     0,
                                     a11,
                                     a12,
                                     a14) )
              goto LABEL_29;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v54, a8, a7, &v62) )
            {
              AuthzBasepAddAccessTypeList(a8, a7, v62, v20, *((_DWORD *)v19 + 1), 1);
              goto LABEL_29;
            }
            v17 = a11;
            goto LABEL_116;
          }
          v17 = a11;
          v56 = SepSidInToken(v15, v21, (unsigned int)v19 + ((8 * (v53 & 2)) | 0xC) + 16 * v55, 0, a11, a12, a14);
          break;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(
                                   v15,
                                   v21,
                                   (unsigned int)v19 + 4 * (unsigned __int8)v19[13] + 20,
                                   0,
                                   v17,
                                   a12,
                                   a14) )
            goto LABEL_30;
          v56 = SepSidInToken(a2, 0, (int)v19 + 12, 0, 0, a12, a14);
          break;
        case 1:
          LOBYTE(a4) = 1;
          v40 = SepSidInToken(v15, v21, (int)v19 + 8, a4, v17, a12, 0);
          v14 = a7;
          if ( !v40 )
            goto LABEL_31;
          goto LABEL_58;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v15,
                                   v21,
                                   (_DWORD)v19
                                 + ((8 * (*((_DWORD *)v19 + 2) & 2)) | 0xC)
                                 + 16 * (*((_DWORD *)v19 + 2) & 1u),
                                   a4,
                                   v17,
                                   a12,
                                   0) )
            goto LABEL_30;
          v59 = v19 + 12;
          if ( (*((_DWORD *)v19 + 2) & 1) == 0 )
            v59 = 0LL;
          if ( !v59 )
          {
            v14 = a7;
LABEL_58:
            v41 = a8;
            if ( v14 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_31;
            }
            v60 = 2;
LABEL_89:
            v57 = v14;
            goto LABEL_90;
          }
          if ( !a9 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_30;
          }
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v59, a8, a7, &v62) )
          {
            AuthzBasepAddAccessTypeList(a8, a7, v62, v20, *((_DWORD *)v19 + 1), 2);
            goto LABEL_30;
          }
LABEL_116:
          v14 = v58;
          goto LABEL_31;
        case 9:
          v42 = *((_WORD *)v19 + 1);
          v43 = 4 * (unsigned __int8)v19[9] + 8;
          if ( (int)(v42 - v43 - 8) > 0 )
          {
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v42 = *((_WORD *)v19 + 1);
            }
            v44 = *(_QWORD **)(v15 + 1096);
            if ( v44 )
            {
              v45 = v44[75];
              v46 = v44[73];
              v47 = v44[74];
              v48 = v44[72];
            }
            else
            {
              v45 = 0LL;
              v46 = 0LL;
              v47 = 0LL;
              v48 = 0LL;
            }
            v49 = v42 - v43 - 8;
            v50 = v43;
            v17 = a11;
            AuthzBasepEvaluateAceCondition(
              v15,
              *(_QWORD *)(v15 + 776),
              *a5,
              v48,
              v47,
              v46,
              v45,
              &v19[v50 + 8],
              v49,
              0,
              a11,
              &v64);
            if ( v64 != 1 )
              goto LABEL_30;
            if ( !v16 && !a11 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
              {
LABEL_43:
                SepMatchPackage(
                  v15,
                  0xFFFFFFFFLL,
                  v19 + 8,
                  *((unsigned int *)v19 + 1),
                  (char *)a13 + 21,
                  a13 + 1,
                  a13 + 5,
                  a13 + 4,
                  a13 + 6);
                *a13 &= ~a13[1];
                goto LABEL_28;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
              {
LABEL_38:
                SepMatchCapability(
                  v15,
                  -1,
                  (_DWORD)v19 + 8,
                  *((_DWORD *)v19 + 1),
                  (__int64)a13 + 22,
                  (__int64)(a13 + 2));
                *a13 &= ~a13[2];
                goto LABEL_28;
              }
              v16 = v61;
            }
            if ( !(unsigned __int8)SepSidInToken(v15, v21, (int)v19 + 8, 0, a11, a12, a14) )
              goto LABEL_30;
            v57 = a7;
            v41 = a8;
            v60 = 1;
LABEL_90:
            AuthzBasepAddAccessTypeList(v41, v57, 0, v20, *((_DWORD *)v19 + 1), v60);
            goto LABEL_30;
          }
LABEL_114:
          v17 = a11;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
      v14 = a7;
      if ( !v56 )
        goto LABEL_31;
      v41 = a8;
      if ( a7 == 1 )
      {
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_31;
      }
      v60 = 1;
      goto LABEL_89;
    }
    if ( !v16 && !v17 )
    {
      if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
        goto LABEL_43;
      if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
        goto LABEL_38;
    }
    v23 = (unsigned __int8 *)(v19 + 8);
    v24 = 504LL;
    if ( !v17 )
      v24 = 232LL;
    v25 = v24 + v15;
    if ( a14 && v19 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v19 + 8) )
      goto LABEL_28;
    if ( v21 && RtlEqualSid(SePrincipalSelfSid, v19 + 8) )
      v23 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v23) )
    {
LABEL_22:
      v14 = a7;
      if ( a7 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
        goto LABEL_28;
      }
      v17 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
      v16 = v61;
      goto LABEL_31;
    }
    if ( !v25 || !v23 )
      goto LABEL_28;
    v26 = 0;
    v27 = *(_WORD *)v23;
    v70 = v27;
    v28 = 4 * v23[1] + 8;
    v63 = v28;
    v29 = v23[4 * HIBYTE(v27) + 4];
    v30 = *(_QWORD *)(v25 + 8LL * (v29 & 0xF) + 16) & *(_QWORD *)(v25 + 8LL * ((v29 >> 4) + 16) + 16);
    if ( !v30 )
    {
LABEL_27:
      v35 = *(_DWORD *)v25;
      if ( *(_DWORD *)v25 > 0x40u )
      {
        v51 = *(_QWORD *)(v25 + 8);
        v52 = 64;
        do
        {
          v34 = v51 + 16LL * v52;
          if ( **(_WORD **)v34 == v27 )
          {
            if ( !memcmp(v23, *(const void **)v34, v28) )
              goto LABEL_19;
            v27 = v70;
            v28 = v63;
          }
          ++v52;
        }
        while ( v52 < v35 );
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      LOBYTE(v31) = v30;
      if ( (_BYTE)v30 )
        break;
LABEL_26:
      v26 += 8;
      v30 >>= 8;
      if ( !v30 )
        goto LABEL_27;
    }
    v32 = *(_QWORD *)(v25 + 8);
    v67 = v32;
    v33 = v26;
    while ( 1 )
    {
      v65 = SidHashByteToIndexLookupTable[(unsigned __int8)v31];
      v34 = v32 + 16LL * (unsigned int)(v33 + v65);
      if ( **(_WORD **)v34 == v27 )
        break;
LABEL_25:
      v31 = (unsigned __int8)v31 ^ (1 << v65);
      if ( !(_BYTE)v31 )
        goto LABEL_26;
    }
    if ( memcmp(v23, *(const void **)v34, v28) )
    {
      v27 = v70;
      v32 = v67;
      v28 = v63;
      v33 = v26;
      goto LABEL_25;
    }
LABEL_19:
    if ( !a11 && v34 == *(_QWORD *)(v25 + 8) && (*(_DWORD *)(v34 + 8) & 0x10) == 0 || (*(_DWORD *)(v34 + 8) & 4) != 0 )
      goto LABEL_22;
LABEL_28:
    v16 = v61;
LABEL_29:
    v17 = a11;
LABEL_30:
    v14 = a7;
LABEL_31:
    a4 = v71;
LABEL_32:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v15 = a1;
    v19 += result;
    v21 = a6;
  }
  while ( v20 < v66 );
LABEL_33:
  if ( v17 && v14 )
  {
    v38 = (_DWORD *)(a8 + 28);
    v39 = v14;
    do
    {
      result = *(v38 - 1) & (*v38 | (unsigned int)~a10);
      *v38 = result;
      v38 += 12;
      --v39;
    }
    while ( v39 );
  }
  return result;
}
