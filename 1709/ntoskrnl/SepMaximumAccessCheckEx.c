/*
 * XREFs of SepMaximumAccessCheckEx @ 0x140142AD0
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

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        char a12,
        char a13,
        __int64 a14)
{
  char v14; // bp
  __int64 v17; // r15
  int v18; // ebx
  __int64 v19; // r14
  __int64 result; // rax
  unsigned int v21; // r12d
  char *v22; // rdi
  char v23; // al
  __int64 v24; // rax
  bool v25; // al
  _DWORD *v26; // r11
  __int64 v27; // rbx
  int *v28; // r11
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rsi
  _DWORD *v32; // rbx
  void *v33; // rsi
  int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rbx
  char v37; // si
  __int64 v38; // r9
  int v39; // ecx
  unsigned int v40; // ebx
  void **v41; // rsi
  _QWORD *v42; // rax
  void *v43; // r11
  void *v44; // r10
  void *v45; // r8
  void *v46; // r9
  unsigned int v47; // ebx
  void **v48; // rsi
  _QWORD *v49; // rax
  void *v50; // r11
  void *v51; // r10
  void *v52; // r8
  void *v53; // r9
  _DWORD *v54; // rcx
  int v55; // edx
  __int64 v56; // r8
  unsigned int v57; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v58; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+20h]

  v60 = a4;
  v58 = a2;
  v14 = a11;
  v17 = a8;
  v18 = *(_DWORD *)(a1 + 200) & 0x2000;
  v19 = a7;
  a11 = v18;
  if ( v14 && a7 )
  {
    v26 = (_DWORD *)(a8 + 28);
    v27 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v26, 0x800000, 0, *(_QWORD *)(v26 + 3), 1);
      v29 = *v28;
      *v28 &= v30;
      *(v28 - 1) = v29;
      v26 = v28 + 12;
      --v27;
    }
    while ( v27 );
    v18 = a11;
    a4 = v60;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = 0;
  v22 = (char *)(a3 + 8);
  a6 = result;
  while ( v21 < a6 )
  {
    if ( (v22[1] & 8) == 0 )
    {
      v23 = *v22;
      if ( !*v22 )
      {
        if ( v18 )
        {
          if ( v14 )
LABEL_26:
            v24 = 504LL;
          else
LABEL_7:
            v24 = 232LL;
          goto LABEL_8;
        }
        if ( v14 || (v31 = (__int64)(v22 + 8), !SepIsPackageSid((__int64)(v22 + 8))) )
        {
          if ( v14 )
            goto LABEL_26;
          v33 = v22 + 8;
          if ( !SepIsCapabilitySid((__int64)(v22 + 8)) )
            goto LABEL_7;
          goto LABEL_21;
        }
        goto LABEL_20;
      }
      switch ( v23 )
      {
        case 5:
          v34 = *((_DWORD *)v22 + 2);
          v35 = v34 & 1;
          v36 = (unsigned __int64)(v22 + 12) & -(__int64)((v34 & 1) != 0);
          if ( v36 )
          {
            if ( a9
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                   0LL,
                   &v22[16 * v35 + ((8LL * (v34 & 2)) | 0xC)],
                   0,
                   v14,
                   a12)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v36, v17, (unsigned int)v19, &v57) )
            {
              AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, v57, v21, *((_DWORD *)v22 + 1), 1);
            }
          }
          else if ( SepSidInTokenSidHash(
                      (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                      0LL,
                      &v22[16 * v35 + ((8LL * (v34 & 2)) | 0xC)],
                      0,
                      v14,
                      a12) )
          {
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 1);
          }
          goto LABEL_96;
        case 4:
          v37 = a12;
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                 0LL,
                 &v22[4 * (unsigned __int8)v22[13] + 20],
                 0,
                 v14,
                 a12) )
          {
            v25 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v58 + 232), 0LL, v22 + 12, 0, 0, v37);
            goto LABEL_9;
          }
          break;
        case 1:
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                 0LL,
                 v22 + 8,
                 1,
                 v14,
                 a12) )
          {
            goto LABEL_40;
          }
          break;
        case 6:
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                 0LL,
                 &v22[16 * (*((_DWORD *)v22 + 2) & 1) + ((8LL * (*((_DWORD *)v22 + 2) & 2)) | 0xC)],
                 1,
                 v14,
                 a12) )
          {
            if ( ((unsigned __int64)(v22 + 12) & -(__int64)((*((_DWORD *)v22 + 2) & 1) != 0)) != 0 )
            {
              if ( a9 )
              {
                if ( (unsigned __int8)AuthzBasepObjectInTypeList(
                                        (unsigned __int64)(v22 + 12) & -(__int64)((*((_DWORD *)v22 + 2) & 1) != 0),
                                        v17,
                                        (unsigned int)v19,
                                        &v57) )
                  AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, v57, v21, *((_DWORD *)v22 + 1), 2);
              }
              else
              {
                v38 = *(_QWORD *)(v17 + 40);
                v39 = *((_DWORD *)v22 + 1) & ~*(_DWORD *)(v17 + 28);
                *(_DWORD *)(v17 + 32) |= v39;
                AuthzBasepSetAccessReasons(v39, 0x20000, v21, v38, 0);
              }
              break;
            }
LABEL_40:
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 2);
          }
          break;
        case 9:
          v40 = 4 * (unsigned __int8)v22[9] + 8;
          if ( *((unsigned __int16 *)v22 + 1) - v40 == 8 )
          {
LABEL_96:
            v18 = a11;
            break;
          }
          v41 = (void **)a5;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v42 = *(_QWORD **)(a1 + 1096);
          if ( v42 )
            v43 = (void *)v42[75];
          else
            v43 = 0LL;
          if ( v42 )
            v44 = (void *)v42[73];
          else
            v44 = 0LL;
          if ( v42 )
            v45 = (void *)v42[74];
          else
            v45 = 0LL;
          if ( v42 )
            v46 = (void *)v42[72];
          else
            v46 = 0LL;
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)a1,
            *(void **)(a1 + 776),
            *v41,
            v46,
            v45,
            v44,
            v43,
            &v22[v40 + 8],
            *((unsigned __int16 *)v22 + 1) - v40 - 8,
            0,
            v14,
            &v59);
          v18 = a11;
          if ( v59 != 1 )
            break;
          if ( a11 )
          {
            if ( v14 )
LABEL_73:
              v24 = 504LL;
            else
LABEL_71:
              v24 = 232LL;
LABEL_8:
            v25 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v24 + a1), 0LL, v22 + 8, 0, v14, a12);
LABEL_9:
            if ( v25 )
              AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 1);
            break;
          }
          if ( v14 || (v31 = (__int64)(v22 + 8), !SepIsPackageSid((__int64)(v22 + 8))) )
          {
            if ( v14 )
              goto LABEL_73;
            v33 = v22 + 8;
            if ( !SepIsCapabilitySid((__int64)(v22 + 8)) )
              goto LABEL_71;
LABEL_21:
            v32 = (_DWORD *)(a14 + 8);
            SepMatchCapability(a1, -1, v33, *((_DWORD *)v22 + 1), (_BYTE *)(a14 + 22), (_DWORD *)(a14 + 8));
LABEL_22:
            *(_DWORD *)a14 &= ~*v32;
            goto LABEL_96;
          }
LABEL_20:
          v32 = (_DWORD *)(a14 + 4);
          SepMatchPackage(
            a1,
            -1,
            v31,
            *((_DWORD *)v22 + 1),
            (_BYTE *)(a14 + 21),
            (_DWORD *)(a14 + 4),
            (_BYTE *)(a14 + 20),
            (_DWORD *)(a14 + 16),
            (_BYTE *)(a14 + 24));
          goto LABEL_22;
        default:
          if ( !a13 || v23 != 10 || KeGetCurrentIrql() >= 2u )
            break;
          v47 = 4 * (unsigned __int8)v22[9] + 8;
          if ( *((unsigned __int16 *)v22 + 1) - v47 != 8 )
          {
            v48 = (void **)a5;
            if ( a4 && !*a5 )
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v49 = *(_QWORD **)(a1 + 1096);
            if ( v49 )
              v50 = (void *)v49[75];
            else
              v50 = 0LL;
            if ( v49 )
              v51 = (void *)v49[73];
            else
              v51 = 0LL;
            if ( v49 )
              v52 = (void *)v49[74];
            else
              v52 = 0LL;
            if ( v49 )
              v53 = (void *)v49[72];
            else
              v53 = 0LL;
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)a1,
              *(void **)(a1 + 776),
              *v48,
              v53,
              v52,
              v51,
              v50,
              &v22[v47 + 8],
              *((unsigned __int16 *)v22 + 1) - v47 - 8,
              1u,
              v14,
              &v59);
            if ( ((v59 + 1) & 0xFFFFFFFD) == 0
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(a1 + (v14 != 0 ? 504LL : 232LL)),
                   0LL,
                   v22 + 8,
                   1,
                   v14,
                   a12) )
            {
              AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 2);
            }
          }
          goto LABEL_96;
      }
    }
    result = *((unsigned __int16 *)v22 + 1);
    ++v21;
    a4 = v60;
    v22 += result;
  }
  if ( v14 && (_DWORD)v19 )
  {
    v54 = (_DWORD *)(v17 + 28);
    v55 = ~a10;
    v56 = v19;
    do
    {
      result = *(v54 - 1) & ((unsigned int)v55 | *v54);
      *v54 = result;
      v54 += 12;
      --v56;
    }
    while ( v56 );
  }
  return result;
}
