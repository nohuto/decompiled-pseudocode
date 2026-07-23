/*
 * XREFs of SepMaximumAccessCheck @ 0x14007D5C0
 * Callers:
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x140110230 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14011ACB8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14011B8D0 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x14011D480 (SepMatchCapability.c)
 *     SepMatchPackage @ 0x14011E91C (SepMatchPackage.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14028DD54 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13)
{
  unsigned int v13; // edi
  void *v14; // r11
  int v15; // ebp
  char v16; // si
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 result; // rax
  char *v20; // rbx
  unsigned int v21; // r13d
  unsigned __int8 *v22; // r15
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 *v26; // rsi
  __int64 v27; // rax
  unsigned __int8 v28; // r12
  __int16 v29; // r8
  unsigned __int8 v30; // cl
  unsigned int v31; // r9d
  unsigned __int64 v32; // rbp
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // edx
  int v36; // r13d
  __int64 v37; // r14
  unsigned int v38; // ebp
  char *v39; // rsi
  int v40; // esi
  __int64 v41; // rdx
  unsigned int *v42; // rcx
  _DWORD *v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // ecx
  unsigned int v47; // edi
  _QWORD *v48; // rax
  void *v49; // r10
  void *v50; // r8
  void *v51; // r9
  unsigned int v52; // r15d
  __int64 v53; // r12
  int v54; // eax
  char *v55; // rdi
  __int64 v56; // rcx
  char *v57; // r8
  unsigned __int8 *v58; // rdx
  _SID_AND_ATTRIBUTES_HASH *v59; // rcx
  __int64 v60; // rcx
  unsigned int v61; // r8d
  __int64 v62; // rcx
  __int64 v63; // rcx
  char *v64; // rcx
  __int64 v65; // rax
  char v66; // [rsp+20h] [rbp-A8h]
  char v67; // [rsp+28h] [rbp-A0h]
  unsigned int v68; // [rsp+60h] [rbp-68h]
  int v69; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v70; // [rsp+68h] [rbp-60h]
  int v71; // [rsp+6Ch] [rbp-5Ch] BYREF
  unsigned int v72; // [rsp+70h] [rbp-58h]
  int v73; // [rsp+74h] [rbp-54h]
  __int64 v74; // [rsp+78h] [rbp-50h]
  __int16 v77; // [rsp+E0h] [rbp+18h]
  __int64 v78; // [rsp+E8h] [rbp+20h]

  v78 = a4;
  v13 = a7;
  v14 = 0LL;
  v15 = *(_DWORD *)(a1 + 200) & 0x2000;
  v16 = a11;
  v17 = a2;
  v18 = a1;
  v73 = v15;
  v71 = -1;
  if ( a11 && a7 )
  {
    v41 = a7;
    v42 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v42 - 1) = *v42;
      v42 += 12;
      --v41;
    }
    while ( v41 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v20 = (char *)(a3 + 8);
  v72 = result;
  v21 = 0;
  v68 = 0;
  if ( (_DWORD)result )
  {
    v22 = a6;
    do
    {
      if ( (v20[1] & 8) == 0 )
      {
        v23 = *v20;
        if ( !*v20 )
        {
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_8;
LABEL_46:
            v24 = 504LL;
          }
          else
          {
            if ( !v16 )
            {
              v39 = v20 + 8;
              if ( (unsigned __int8)SepIsPackageSid(v20 + 8) )
                goto LABEL_49;
              v16 = a11;
            }
            if ( v16 )
              goto LABEL_46;
            v40 = (_DWORD)v20 + 8;
            if ( (unsigned __int8)SepIsCapabilitySid(v20 + 8) )
              goto LABEL_50;
LABEL_8:
            v24 = 232LL;
          }
          v25 = v24 + v18;
          v26 = (unsigned __int8 *)(v20 + 8);
          if ( v22 && RtlEqualSid(SePrincipalSelfSid, v20 + 8) )
            v26 = v22;
          if ( a12 && RtlEqualSid(SeOwnerRightsSid, v26) )
          {
            v16 = a11;
LABEL_21:
            v13 = a7;
            goto LABEL_22;
          }
          if ( v25 && v26 )
          {
            v27 = v26[1];
            v28 = 0;
            v29 = *(_WORD *)v26;
            v77 = *(_WORD *)v26;
            v30 = v26[4 * v27 + 4];
            v31 = 4 * v27 + 8;
            v70 = v31;
            v32 = *(_QWORD *)(v25 + 8LL * (v30 & 0xF) + 16) & *(_QWORD *)(v25 + 8LL * ((v30 >> 4) + 16) + 16);
            if ( v32 )
            {
              do
              {
                LOBYTE(v33) = v32;
                if ( (_BYTE)v32 )
                {
                  v34 = *(_QWORD *)(v25 + 8);
                  v74 = v34;
                  v35 = v28;
                  do
                  {
                    v36 = SidHashByteToIndexLookupTable[(unsigned __int8)v33];
                    v37 = v34 + 16LL * (unsigned int)(v35 + v36);
                    if ( **(_WORD **)v37 == v29 )
                    {
                      if ( !memcmp(v26, *(const void **)v37, v31) )
                      {
LABEL_18:
                        v16 = a11;
                        if ( !a11 && v37 == *(_QWORD *)(v25 + 8) && (*(_DWORD *)(v37 + 8) & 0x10) == 0 )
                        {
                          v21 = v68;
                          goto LABEL_21;
                        }
                        v21 = v68;
                        if ( (*(_DWORD *)(v37 + 8) & 4) != 0 )
                          goto LABEL_21;
LABEL_30:
                        v13 = a7;
                        goto LABEL_31;
                      }
                      v34 = v74;
                      v29 = v77;
                      v31 = v70;
                    }
                    v33 = (unsigned __int8)v33 ^ (1 << v36);
                    v35 = v28;
                  }
                  while ( (_BYTE)v33 );
                }
                v28 += 8;
                v32 >>= 8;
              }
              while ( v32 );
              v21 = v68;
            }
            v38 = *(_DWORD *)v25;
            if ( *(_DWORD *)v25 > 0x40u )
            {
              v52 = 64;
              v53 = *(_QWORD *)(v25 + 8);
              do
              {
                v37 = v53 + 16LL * v52;
                if ( **(_WORD **)v37 == v29 )
                {
                  if ( !memcmp(v26, *(const void **)v37, v31) )
                    goto LABEL_18;
                  v29 = v77;
                  v31 = v70;
                }
                ++v52;
              }
              while ( v52 < v38 );
            }
          }
          goto LABEL_29;
        }
        switch ( v23 )
        {
          case 5:
            v54 = *((_DWORD *)v20 + 2);
            v55 = v20 + 12;
            if ( (v54 & 1) == 0 )
              v55 = 0LL;
            if ( !v55 )
            {
              v56 = 504LL;
              v57 = &v20[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)];
              v67 = a12;
              v66 = v16;
              if ( !v16 )
                v56 = 232LL;
              v58 = v22;
              v59 = (_SID_AND_ATTRIBUTES_HASH *)(v18 + v56);
LABEL_94:
              v13 = a7;
              if ( !SepSidInTokenSidHash(v59, v58, v57, 0, v66, v67) )
                goto LABEL_31;
LABEL_22:
              if ( v13 == 1 )
                *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
              else
                AuthzBasepAddAccessTypeList(a8, v13, 0, v21, *((_DWORD *)v20 + 1), 1);
              goto LABEL_31;
            }
            if ( !a9 )
              goto LABEL_134;
            v60 = 504LL;
            if ( !v16 )
              v60 = 232LL;
            if ( !SepSidInTokenSidHash(
                    (PSID_AND_ATTRIBUTES_HASH)(v18 + v60),
                    v22,
                    &v20[16 * (v54 & 1) + ((8LL * (v54 & 2)) | 0xC)],
                    0,
                    v16,
                    a12) )
              goto LABEL_30;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v55, a8, a7, &v69) )
            {
              v13 = a7;
              AuthzBasepAddAccessTypeList(a8, a7, v69, v21, *((_DWORD *)v20 + 1), 1);
            }
            else
            {
              v13 = v61;
            }
LABEL_31:
            v14 = 0LL;
            goto LABEL_32;
          case 4:
            v62 = 504LL;
            if ( !v16 )
              v62 = 232LL;
            if ( !SepSidInTokenSidHash(
                    (PSID_AND_ATTRIBUTES_HASH)(v18 + v62),
                    v22,
                    &v20[4 * (unsigned __int8)v20[13] + 20],
                    0,
                    v16,
                    a12) )
              goto LABEL_30;
            v67 = a12;
            v58 = 0LL;
            v66 = 0;
            v57 = v20 + 12;
            v59 = (_SID_AND_ATTRIBUTES_HASH *)(v17 + 232);
            goto LABEL_94;
          case 1:
            v45 = 504LL;
            if ( !v16 )
              v45 = 232LL;
            if ( !SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v18 + v45), v22, v20 + 8, 1, v16, a12) )
              goto LABEL_31;
            v46 = a8;
            if ( v13 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_31;
            }
LABEL_106:
            AuthzBasepAddAccessTypeList(v46, v13, 0, v21, *((_DWORD *)v20 + 1), 2);
            goto LABEL_31;
          case 6:
            v63 = 504LL;
            if ( !v16 )
              v63 = 232LL;
            if ( !SepSidInTokenSidHash(
                    (PSID_AND_ATTRIBUTES_HASH)(v18 + v63),
                    v22,
                    &v20[16 * (*((_DWORD *)v20 + 2) & 1) + ((8LL * (*((_DWORD *)v20 + 2) & 2)) | 0xC)],
                    1,
                    v16,
                    a12) )
              goto LABEL_31;
            v64 = v20 + 12;
            v14 = 0LL;
            if ( (*((_DWORD *)v20 + 2) & 1) == 0 )
              v64 = 0LL;
            if ( v64 )
            {
              if ( a9 )
              {
                if ( (unsigned __int8)AuthzBasepObjectInTypeList(v64, a8, v13, &v69) )
                  AuthzBasepAddAccessTypeList(a8, a7, v69, v21, *((_DWORD *)v20 + 1), 2);
                goto LABEL_30;
              }
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
            }
            else
            {
              v46 = a8;
              if ( v13 != 1 )
                goto LABEL_106;
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
            }
LABEL_32:
            a4 = v78;
            break;
          case 9:
            v47 = 4 * (unsigned __int8)v20[9] + 8;
            if ( (int)(*((unsigned __int16 *)v20 + 1) - v47 - 8) > 0 )
            {
              if ( a4 && !*a5 )
              {
                AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
                v14 = 0LL;
              }
              v48 = *(_QWORD **)(v18 + 1096);
              if ( v48 )
              {
                v49 = (void *)v48[75];
                v14 = (void *)v48[73];
              }
              else
              {
                v49 = 0LL;
              }
              if ( v48 )
                v50 = (void *)v48[74];
              else
                v50 = 0LL;
              if ( v48 )
                v51 = (void *)v48[72];
              else
                v51 = 0LL;
              AuthzBasepEvaluateAceCondition(
                (_DWORD *)v18,
                *(void **)(v18 + 776),
                (void *)*a5,
                v51,
                v50,
                v14,
                v49,
                &v20[v47 + 8],
                *((unsigned __int16 *)v20 + 1) - v47 - 8,
                0,
                v16,
                &v71);
              if ( v71 != 1 )
                goto LABEL_30;
              if ( v15 )
              {
                if ( v16 )
                  goto LABEL_133;
LABEL_129:
                v65 = 232LL;
LABEL_130:
                v13 = a7;
                if ( SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v65 + v18), v22, v20 + 8, 0, v16, a12) )
                  AuthzBasepAddAccessTypeList(a8, a7, 0, v21, *((_DWORD *)v20 + 1), 1);
                goto LABEL_31;
              }
              if ( v16 )
                goto LABEL_126;
              v39 = v20 + 8;
              if ( !(unsigned __int8)SepIsPackageSid(v20 + 8) )
              {
                v16 = a11;
LABEL_126:
                if ( !v16 )
                {
                  v40 = (_DWORD)v20 + 8;
                  if ( !(unsigned __int8)SepIsCapabilitySid(v20 + 8) )
                  {
                    v16 = a11;
                    goto LABEL_129;
                  }
LABEL_50:
                  SepMatchCapability(v18, -1, v40, *((_DWORD *)v20 + 1), (__int64)a13 + 22, (__int64)(a13 + 2));
                  *a13 &= ~a13[2];
LABEL_29:
                  v16 = a11;
                  goto LABEL_30;
                }
LABEL_133:
                v65 = 504LL;
                goto LABEL_130;
              }
LABEL_49:
              SepMatchPackage(
                v18,
                0xFFFFFFFFLL,
                v39,
                *((unsigned int *)v20 + 1),
                (char *)a13 + 21,
                a13 + 1,
                a13 + 5,
                a13 + 4,
                a13 + 6);
              *a13 &= ~a13[1];
              goto LABEL_29;
            }
LABEL_134:
            v13 = a7;
            break;
        }
      }
      result = *((unsigned __int16 *)v20 + 1);
      ++v21;
      v15 = v73;
      v20 += result;
      v18 = a1;
      v22 = a6;
      v17 = a2;
      v68 = v21;
    }
    while ( v21 < v72 );
  }
  if ( v16 && v13 )
  {
    v43 = (_DWORD *)(a8 + 28);
    v44 = v13;
    do
    {
      result = *(v43 - 1) & (*v43 | (unsigned int)~a10);
      *v43 = result;
      v43 += 12;
      --v44;
    }
    while ( v44 );
  }
  return result;
}
