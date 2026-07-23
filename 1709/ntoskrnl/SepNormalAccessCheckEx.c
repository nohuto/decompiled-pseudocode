/*
 * XREFs of SepNormalAccessCheckEx @ 0x140142BF0
 * Callers:
 *     SepAccessCheckEx @ 0x14014272C (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     AuthzBasepAddAccessTypeList @ 0x140110230 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140110310 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x14011ACB8 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14011B8D0 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x14011D480 (SepMatchCapability.c)
 *     SepMatchPackage @ 0x14011E91C (SepMatchPackage.c)
 *     AuthzBasepObjectInTypeList @ 0x14028DD54 (AuthzBasepObjectInTypeList.c)
 */

void __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  __int64 v14; // r13
  __int64 v15; // rsi
  int v16; // r15d
  int v17; // edx
  char v18; // r14
  __int64 v20; // rbp
  _DWORD *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  unsigned int v24; // r12d
  char *v25; // rdi
  bool v26; // zf
  int v27; // ecx
  char v28; // al
  void *v29; // r8
  _SID_AND_ATTRIBUTES_HASH *v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rbx
  __int64 v33; // r11
  _DWORD *v34; // r8
  int *v35; // rbx
  _BYTE *v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  __int64 v40; // r8
  __int64 v41; // rbx
  char *v42; // r8
  int v43; // ecx
  __int64 v44; // rcx
  bool v45; // zf
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  void *v48; // r11
  void *v49; // r10
  void *v50; // r8
  void *v51; // r9
  unsigned int v52; // ebx
  _QWORD *v53; // rax
  void *v54; // r11
  void *v55; // r10
  void *v56; // r8
  void *v57; // r9
  int v58; // [rsp+60h] [rbp-48h]
  unsigned int v59; // [rsp+64h] [rbp-44h]
  unsigned int v62; // [rsp+C8h] [rbp+20h] BYREF

  v14 = a8;
  v15 = a2;
  v16 = 0;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  v18 = a11;
  v20 = a9;
  v58 = v17;
  v59 = *(unsigned __int16 *)(a4 + 4);
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
  }
  v23 = a14;
  if ( !v17 && !v18 )
    v16 = a1 | *a14;
  v24 = 0;
  a8 = v16;
  v25 = (char *)(a4 + 8);
  v26 = v59 == 0;
  if ( v59 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v20 + 24);
      if ( !v27 && !v16 )
      {
LABEL_18:
        v26 = v24 == v59;
        break;
      }
      if ( (v25[1] & 8) == 0 )
      {
        if ( !v27 )
        {
          if ( !*v25 )
          {
LABEL_10:
            if ( !v17 )
            {
              if ( !v18 && v16 )
              {
                if ( SepIsPackageSid((__int64)(v25 + 8)) )
                {
                  v34 = a14;
                  v35 = v23 + 1;
                  goto LABEL_35;
                }
                v17 = v58;
              }
              if ( !v17 && !v18 && v16 && SepIsCapabilitySid((__int64)(v25 + 8)) )
              {
                v35 = v23 + 2;
                v36 = (char *)a14 + 22;
                goto LABEL_43;
              }
            }
            v15 = a2;
            if ( !*(_DWORD *)(v20 + 24) )
              goto LABEL_15;
            v29 = v25 + 8;
            v30 = (_SID_AND_ATTRIBUTES_HASH *)(a2 + (v18 != 0 ? 504LL : 232LL));
LABEL_13:
            if ( SepSidInTokenSidHash(v30, 0LL, v29, 0, v18, a12) )
              AuthzBasepAddAccessTypeList(v20, (unsigned int)v14, 0, v24, *((_DWORD *)v25 + 1), 0);
            goto LABEL_15;
          }
          if ( *v25 != 9 )
            goto LABEL_15;
        }
        v28 = *v25;
        if ( !*v25 )
          goto LABEL_10;
        switch ( v28 )
        {
          case 5:
            v39 = *((_DWORD *)v25 + 2);
            v40 = v39 & 1;
            v41 = (unsigned __int64)(v25 + 12) & -(__int64)((v39 & 1) != 0);
            if ( !v41 )
            {
              v42 = &v25[16 * v40 + ((8LL * (v39 & 2)) | 0xC)];
              goto LABEL_95;
            }
            if ( a10
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                   0LL,
                   &v25[16 * v40 + ((8LL * (v39 & 2)) | 0xC)],
                   0,
                   v18,
                   a12)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v41, v20, (unsigned int)v14, &v62) )
            {
              AuthzBasepAddAccessTypeList(v20, (unsigned int)v14, v62, v24, *((_DWORD *)v25 + 1), 0);
            }
LABEL_119:
            v23 = a14;
            break;
          case 4:
            if ( !SepSidInTokenSidHash(
                    (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                    0LL,
                    &v25[4 * (unsigned __int8)v25[13] + 20],
                    0,
                    v18,
                    a12) )
              break;
            v29 = v25 + 12;
            v30 = (_SID_AND_ATTRIBUTES_HASH *)(a3 + (v18 != 0 ? 504LL : 232LL));
            goto LABEL_13;
          case 1:
            if ( SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                   0LL,
                   v25 + 8,
                   1,
                   v18,
                   a12) )
            {
              v43 = *(_DWORD *)(v20 + 24) & *((_DWORD *)v25 + 1);
              if ( v43 )
                goto LABEL_58;
            }
            break;
          case 6:
            if ( !SepSidInTokenSidHash(
                    (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                    0LL,
                    &v25[16 * (*((_DWORD *)v25 + 2) & 1) + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)],
                    1,
                    v18,
                    a12) )
              break;
            v44 = (unsigned __int64)(v25 + 12) & -(__int64)((*((_DWORD *)v25 + 2) & 1) != 0);
            if ( v44 && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v44, v20, (unsigned int)v14, &v62) )
                break;
              v45 = (*(_DWORD *)(v20 + 48LL * v62 + 24) & *((_DWORD *)v25 + 1)) == 0;
            }
            else
            {
              v45 = (*((_DWORD *)v25 + 1) & *(_DWORD *)(v20 + 24)) == 0;
            }
            if ( !v45 )
              goto LABEL_18;
            break;
          case 9:
            v46 = 4 * (unsigned __int8)v25[9] + 8;
            if ( *((unsigned __int16 *)v25 + 1) - v46 == 8 )
              goto LABEL_119;
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v47 = *(_QWORD **)(v15 + 1096);
            v48 = v47 ? (void *)v47[75] : 0LL;
            v49 = v47 ? (void *)v47[73] : 0LL;
            v50 = v47 ? (void *)v47[74] : 0LL;
            v51 = v47 ? (void *)v47[72] : 0LL;
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)v15,
              *(void **)(v15 + 776),
              (void *)*a6,
              v51,
              v50,
              v49,
              v48,
              &v25[v46 + 8],
              *((unsigned __int16 *)v25 + 1) - v46 - 8,
              0,
              v18,
              &a7);
            if ( a7 != 1 )
              goto LABEL_119;
            if ( !v58 )
            {
              if ( !v18 && v16 && SepIsPackageSid((__int64)(v25 + 8)) )
              {
                v34 = a14;
                v35 = a14 + 1;
LABEL_35:
                v15 = a2;
                SepMatchPackage(
                  a2,
                  a8,
                  (__int64)(v25 + 8),
                  *((_DWORD *)v25 + 1),
                  (_BYTE *)v34 + 21,
                  v35,
                  (_BYTE *)v34 + 20,
                  v34 + 4,
                  (_BYTE *)v34 + 24);
                goto LABEL_44;
              }
              if ( !v18 && v16 && SepIsCapabilitySid((__int64)(v25 + 8)) )
              {
                v35 = a14 + 2;
                v36 = (char *)a14 + 22;
LABEL_43:
                v15 = a2;
                SepMatchCapability(a2, a8, v25 + 8, *((_DWORD *)v25 + 1), v36, v35);
LABEL_44:
                v37 = *v35;
                v23 = a14;
                v38 = ~v37;
                v16 &= v38;
                *a14 &= v38;
                break;
              }
            }
            v15 = a2;
            if ( !*(_DWORD *)(v20 + 24) )
              goto LABEL_119;
            v42 = v25 + 8;
LABEL_95:
            if ( SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                   0LL,
                   v42,
                   0,
                   v18,
                   a12) )
            {
              AuthzBasepAddAccessTypeList(v20, (unsigned int)v14, 0, v24, *((_DWORD *)v25 + 1), 0);
            }
            goto LABEL_119;
          default:
            if ( a13 && v28 == 10 && KeGetCurrentIrql() < 2u )
            {
              v52 = 4 * (unsigned __int8)v25[9] + 8;
              if ( *((unsigned __int16 *)v25 + 1) - v52 != 8 )
              {
                if ( a5 && !*a6 )
                  AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                v53 = *(_QWORD **)(v15 + 1096);
                v54 = v53 ? (void *)v53[75] : 0LL;
                v55 = v53 ? (void *)v53[73] : 0LL;
                v56 = v53 ? (void *)v53[74] : 0LL;
                v57 = v53 ? (void *)v53[72] : 0LL;
                AuthzBasepEvaluateAceCondition(
                  (_DWORD *)v15,
                  *(void **)(v15 + 776),
                  (void *)*a6,
                  v57,
                  v56,
                  v55,
                  v54,
                  &v25[v52 + 8],
                  *((unsigned __int16 *)v25 + 1) - v52 - 8,
                  1u,
                  v18,
                  &a7);
                if ( ((a7 + 1) & 0xFFFFFFFD) == 0
                  && SepSidInTokenSidHash(
                       (PSID_AND_ATTRIBUTES_HASH)(v15 + (v18 != 0 ? 504LL : 232LL)),
                       0LL,
                       v25 + 8,
                       1,
                       v18,
                       a12) )
                {
                  v43 = *(_DWORD *)(v20 + 24) & *((_DWORD *)v25 + 1);
                  if ( v43 )
                  {
LABEL_58:
                    AuthzBasepSetAccessReasons(v43, 0x20000, v24, *(_QWORD *)(v20 + 40), 0);
                    goto LABEL_18;
                  }
                }
              }
              goto LABEL_119;
            }
            break;
        }
      }
LABEL_15:
      ++v24;
      v25 += *((unsigned __int16 *)v25 + 1);
      v26 = v24 == v59;
      if ( v24 >= v59 )
        break;
      v17 = v58;
    }
  }
  if ( v26 )
  {
    v31 = v20 + 24;
    if ( *(_DWORD *)(v20 + 24) )
    {
      if ( (_DWORD)v14 )
      {
        v32 = v14;
        do
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)v31, 0x800000, 0, *(_QWORD *)(v31 + 16), 0);
          v31 = v33 + 48;
          --v32;
        }
        while ( v32 );
      }
    }
  }
}
