/*
 * XREFs of SepMaximumAccessCheck @ 0x140090C10
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
 *     AuthzBasepObjectInTypeList @ 0x140263A24 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // edi
  void *v14; // r10
  int v15; // ebp
  char v16; // si
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 result; // rax
  char *v20; // rbx
  unsigned int v21; // r13d
  __int64 v22; // r15
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 *v26; // rsi
  int v27; // eax
  unsigned __int8 v28; // r12
  __int16 v29; // r8
  unsigned int v30; // r9d
  unsigned int v31; // edx
  unsigned __int64 v32; // rbp
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // r14
  unsigned int v37; // ebp
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int *v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // edi
  _QWORD *v47; // rax
  void *v48; // r11
  void *v49; // r8
  void *v50; // r9
  unsigned int v51; // r15d
  __int64 v52; // r12
  char *v53; // rdi
  __int64 v55; // rax
  char v56; // al
  __int64 v57; // rax
  unsigned int v58; // r8d
  __int64 v59; // rax
  __int64 v60; // rax
  char *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-64h]
  int v65; // [rsp+68h] [rbp-60h] BYREF
  int v66; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v67; // [rsp+70h] [rbp-58h]
  int v68; // [rsp+74h] [rbp-54h]
  __int64 v69; // [rsp+78h] [rbp-50h]
  __int16 v72; // [rsp+E0h] [rbp+18h]
  __int64 v73; // [rsp+E8h] [rbp+20h]

  v73 = a4;
  v13 = a7;
  v14 = 0LL;
  v15 = *(_DWORD *)(a1 + 200) & 0x2000;
  v16 = a11;
  v17 = a2;
  v18 = a1;
  v68 = v15;
  v65 = -1;
  if ( a11 && a7 )
  {
    v40 = a7;
    v41 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v41 - 1) = *v41;
      v41 += 12;
      --v40;
    }
    while ( v40 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v20 = (char *)(a3 + 8);
  v67 = result;
  v21 = 0;
  if ( !(_DWORD)result )
    goto LABEL_30;
  v22 = a6;
  do
  {
    if ( (v20[1] & 8) != 0 )
      goto LABEL_29;
    v23 = *v20;
    if ( *v20 )
    {
      switch ( v23 )
      {
        case 5:
          v53 = v20 + 12;
          if ( !(*((_DWORD *)v20 + 2) & 1) )
            v53 = 0LL;
          if ( v53 )
          {
            if ( a9 )
            {
              v57 = 232LL;
              if ( v16 )
                v57 = 504LL;
              if ( (unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v57 + v18), v16, a12) )
              {
                if ( (unsigned __int8)AuthzBasepObjectInTypeList(v53, a8, a7, &v63) )
                {
                  v13 = a7;
                  AuthzBasepAddAccessTypeList(a8, a7, v63, v21, *((_DWORD *)v20 + 1), 1);
                }
                else
                {
                  v13 = v58;
                }
                goto LABEL_27;
              }
              goto LABEL_26;
            }
            goto LABEL_134;
          }
          v55 = 232LL;
          if ( v16 )
            v55 = 504LL;
          v56 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v55 + v18), v16, a12);
          break;
        case 4:
          v59 = 232LL;
          if ( v16 )
            v59 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v59 + v18), v16, a12) )
            goto LABEL_26;
          v56 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v17 + 232), 0, a12);
          break;
        case 1:
          if ( v16 )
            v44 = 504LL;
          else
            v44 = 232LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v44 + v18), v16, a12) )
            goto LABEL_27;
          v45 = a8;
          if ( v13 == 1 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_27;
          }
          goto LABEL_106;
        case 6:
          v60 = 232LL;
          if ( v16 )
            v60 = 504LL;
          if ( !(unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v60 + v18), v16, a12) )
            goto LABEL_27;
          v61 = v20 + 12;
          v14 = 0LL;
          if ( (*((_DWORD *)v20 + 2) & 1) == 0 )
            v61 = 0LL;
          if ( v61 )
          {
            if ( !a9 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_28;
            }
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v61, a8, v13, &v63) )
              AuthzBasepAddAccessTypeList(a8, a7, v63, v21, *((_DWORD *)v20 + 1), 2);
            goto LABEL_26;
          }
          v45 = a8;
          if ( v13 == 1 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_28;
          }
LABEL_106:
          AuthzBasepAddAccessTypeList(v45, v13, 0, v21, *((_DWORD *)v20 + 1), 2);
          goto LABEL_27;
        case 9:
          v46 = 4 * (unsigned __int8)v20[9] + 8;
          if ( (int)(*((unsigned __int16 *)v20 + 1) - v46 - 8) > 0 )
          {
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v14 = 0LL;
            }
            v47 = *(_QWORD **)(v18 + 1096);
            if ( v47 )
              v48 = (void *)v47[75];
            else
              v48 = 0LL;
            if ( v47 )
            {
              v14 = (void *)v47[73];
              v49 = (void *)v47[74];
            }
            else
            {
              v49 = 0LL;
            }
            if ( v47 )
              v50 = (void *)v47[72];
            else
              v50 = 0LL;
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)v18,
              *(void **)(v18 + 776),
              *a5,
              v50,
              v49,
              v14,
              v48,
              &v20[v46 + 8],
              *((unsigned __int16 *)v20 + 1) - v46 - 8,
              0,
              v16,
              &v65);
            if ( v65 != 1 )
              goto LABEL_26;
            if ( v15 )
            {
              if ( !v16 )
              {
LABEL_129:
                v62 = 232LL;
                goto LABEL_130;
              }
            }
            else
            {
              if ( !v16 )
              {
                v38 = (__int64)(v20 + 8);
                if ( SepIsPackageSid((__int64)(v20 + 8)) )
                {
LABEL_47:
                  SepMatchPackage(
                    v18,
                    -1,
                    v38,
                    *((_DWORD *)v20 + 1),
                    (_BYTE *)(a13 + 17),
                    (_DWORD *)(a13 + 4),
                    (_BYTE *)(a13 + 16),
                    (_DWORD *)(a13 + 24),
                    (_BYTE *)(a13 + 20));
                  *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                  goto LABEL_25;
                }
                v16 = a11;
              }
              if ( !v16 )
              {
                v39 = (__int64)(v20 + 8);
                if ( SepIsCapabilitySid((__int64)(v20 + 8)) )
                {
LABEL_43:
                  SepMatchCapability(v18, -1, v39, *((_DWORD *)v20 + 1), (_BYTE *)(a13 + 18), (_DWORD *)(a13 + 8));
                  *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
                  goto LABEL_25;
                }
                v16 = a11;
                goto LABEL_129;
              }
            }
            v62 = 504LL;
LABEL_130:
            v13 = a7;
            if ( (unsigned __int8)SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v62 + v18), v16, a12) )
              AuthzBasepAddAccessTypeList(a8, a7, 0, v21, *((_DWORD *)v20 + 1), 1);
            goto LABEL_27;
          }
LABEL_134:
          v13 = a7;
          goto LABEL_29;
        default:
          goto LABEL_29;
      }
      v13 = a7;
      if ( v56 )
        goto LABEL_22;
      goto LABEL_27;
    }
    if ( v15 )
    {
      if ( !v16 )
        goto LABEL_8;
    }
    else
    {
      if ( !v16 )
      {
        v38 = (__int64)(v20 + 8);
        if ( SepIsPackageSid((__int64)(v20 + 8)) )
          goto LABEL_47;
        v16 = a11;
      }
      if ( !v16 )
      {
        v39 = (__int64)(v20 + 8);
        if ( SepIsCapabilitySid((__int64)(v20 + 8)) )
          goto LABEL_43;
LABEL_8:
        v24 = 232LL;
        goto LABEL_9;
      }
    }
    v24 = 504LL;
LABEL_9:
    v25 = v24 + v18;
    v26 = (unsigned __int8 *)(v20 + 8);
    if ( v22 && RtlEqualSid(SePrincipalSelfSid, v20 + 8) )
      v26 = (unsigned __int8 *)v22;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v26) )
    {
      v16 = a11;
      goto LABEL_21;
    }
    if ( !v25 || !v26 )
      goto LABEL_25;
    v27 = v26[1];
    v28 = 0;
    v29 = *(_WORD *)v26;
    v72 = *(_WORD *)v26;
    v30 = 4 * v27 + 8;
    v64 = v30;
    v31 = v26[4 * v27 + 4];
    v32 = *(_QWORD *)(v25 + 8LL * (v31 & 0xF) + 16) & *(_QWORD *)(v25 + 8LL * ((v31 >> 4) + 16) + 16);
    if ( !v32 )
    {
LABEL_24:
      v37 = *(_DWORD *)v25;
      if ( *(_DWORD *)v25 > 0x40u )
      {
        v51 = 64;
        v52 = *(_QWORD *)(v25 + 8);
        do
        {
          v36 = v52 + 16LL * v51;
          if ( **(_WORD **)v36 == v29 )
          {
            if ( !memcmp(v26, *(const void **)v36, v30) )
              goto LABEL_18;
            v29 = v72;
            v30 = v64;
          }
          ++v51;
        }
        while ( v51 < v37 );
      }
LABEL_25:
      v16 = a11;
LABEL_26:
      v13 = a7;
      goto LABEL_27;
    }
    while ( 1 )
    {
      LOBYTE(v33) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_34:
      v28 += 8;
      v32 >>= 8;
      if ( !v32 )
        goto LABEL_24;
    }
    v34 = *(_QWORD *)(v25 + 8);
    v69 = v34;
    v35 = v28;
    while ( 1 )
    {
      v66 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v33];
      v36 = v34 + 16LL * (unsigned int)(v35 + v66);
      if ( **(_WORD **)v36 == v29 )
        break;
LABEL_33:
      v33 = (unsigned __int8)v33 ^ (1 << v66);
      v35 = v28;
      if ( !(_BYTE)v33 )
        goto LABEL_34;
    }
    if ( memcmp(v26, *(const void **)v36, v30) )
    {
      v34 = v69;
      v29 = v72;
      v30 = v64;
      goto LABEL_33;
    }
LABEL_18:
    v16 = a11;
    if ( (a11 || v36 != *(_QWORD *)(v25 + 8) || (*(_DWORD *)(v36 + 8) & 0x10) != 0) && (*(_DWORD *)(v36 + 8) & 4) == 0 )
      goto LABEL_26;
LABEL_21:
    v13 = a7;
LABEL_22:
    if ( v13 == 1 )
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
    else
      AuthzBasepAddAccessTypeList(a8, v13, 0, v21, *((_DWORD *)v20 + 1), 1);
LABEL_27:
    v14 = 0LL;
LABEL_28:
    a4 = v73;
LABEL_29:
    result = *((unsigned __int16 *)v20 + 1);
    ++v21;
    v15 = v68;
    v20 += result;
    v18 = a1;
    v22 = a6;
    v17 = a2;
  }
  while ( v21 < v67 );
LABEL_30:
  if ( v16 && v13 )
  {
    v42 = (_DWORD *)(a8 + 28);
    v43 = v13;
    do
    {
      result = *(v42 - 1) & (*v42 | (unsigned int)~a10);
      *v42 = result;
      v42 += 12;
      --v43;
    }
    while ( v43 );
  }
  return result;
}
