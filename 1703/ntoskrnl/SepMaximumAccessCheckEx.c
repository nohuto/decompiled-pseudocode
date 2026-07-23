/*
 * XREFs of SepMaximumAccessCheckEx @ 0x1401331B0
 * Callers:
 *     SepAccessCheckEx @ 0x140132DE0 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepAddAccessTypeList @ 0x14001198C (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140011A70 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x140021F88 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140022854 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140027230 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchPackage @ 0x1400895A0 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 *     AuthzBasepObjectInTypeList @ 0x140263A24 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  char v15; // si
  int v16; // ebx
  __int64 v17; // r15
  __int64 v19; // r14
  __int64 result; // rax
  unsigned int v21; // ebp
  char *v22; // rdi
  __int64 v23; // r12
  char v24; // al
  __int64 v25; // rax
  bool v26; // al
  _DWORD *v27; // r11
  __int64 v28; // rbx
  int *v29; // r11
  int v30; // ecx
  int v31; // r8d
  _DWORD *v32; // rbx
  int v33; // r9d
  int v34; // r8d
  __int64 v35; // rbx
  __int64 v36; // r9
  int v37; // ecx
  unsigned int v38; // ebx
  _QWORD *v39; // rax
  void *v40; // r11
  void *v41; // r10
  void *v42; // r8
  void *v43; // r9
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  void *v46; // r11
  void *v47; // r10
  void *v48; // r8
  void *v49; // r9
  _DWORD *v50; // rcx
  int v51; // edx
  __int64 v52; // r8
  unsigned int v53; // [rsp+60h] [rbp-58h]
  int v54; // [rsp+C0h] [rbp+8h]
  unsigned int v56; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v57; // [rsp+D8h] [rbp+20h]

  v57 = a4;
  v15 = a11;
  v16 = *(_DWORD *)(a1 + 200) & 0x2000;
  v17 = a8;
  v19 = a7;
  v54 = v16;
  if ( (_BYTE)a11 && a7 )
  {
    v27 = (_DWORD *)(a8 + 28);
    v28 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v27, 0x800000, 0, *(_QWORD *)(v27 + 3), 1);
      v30 = *v29;
      *v29 &= v31;
      *(v29 - 1) = v30;
      v27 = v29 + 12;
      --v28;
    }
    while ( v28 );
    v16 = v54;
    a4 = v57;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = 0;
  v22 = (char *)(a3 + 8);
  v53 = result;
  a11 = 0;
  if ( (_DWORD)result )
  {
    v23 = a14;
    do
    {
      if ( (v22[1] & 8) == 0 )
      {
        v24 = *v22;
        if ( !*v22 )
          goto LABEL_6;
        if ( v24 == 5 )
        {
          v33 = *((_DWORD *)v22 + 2);
          v34 = v33 & 1;
          v35 = (unsigned __int64)(v22 + 12) & -(__int64)(v34 != 0);
          if ( v35 )
          {
            if ( a9
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)((v15 != 0 ? 0x110 : 0) + a1 + 232),
                   0LL,
                   &v22[8 * (v33 & 2) + (v34 != 0 ? 28LL : 12LL)],
                   0,
                   v15,
                   a12)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v35, v17, (unsigned int)v19, &v56) )
            {
              AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, v56, v21, *((_DWORD *)v22 + 1), 1);
            }
          }
          else if ( SepSidInTokenSidHash(
                      (PSID_AND_ATTRIBUTES_HASH)(a1 + (v15 != 0 ? 504LL : 232LL)),
                      0LL,
                      &v22[8 * (v33 & 2) + (v34 != 0 ? 28LL : 12LL)],
                      0,
                      v15,
                      a12) )
          {
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 1);
          }
          goto LABEL_90;
        }
        if ( v24 == 4 )
        {
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v15 != 0 ? 504LL : 232LL)),
                 0LL,
                 &v22[4 * (unsigned __int8)v22[13] + 20],
                 0,
                 v15,
                 a12) )
          {
            v26 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a2 + 232), 0LL, v22 + 12, 0, 0, a12);
            goto LABEL_10;
          }
        }
        else if ( v24 == 1 )
        {
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v15 != 0 ? 504LL : 232LL)),
                 0LL,
                 v22 + 8,
                 1,
                 v15,
                 a12) )
          {
            goto LABEL_37;
          }
        }
        else
        {
          if ( v24 != 6 )
          {
            if ( v24 == 9 )
            {
              v38 = 4 * (unsigned __int8)v22[9] + 8;
              if ( *((unsigned __int16 *)v22 + 1) - v38 != 8 )
              {
                if ( a4 && !*a5 )
                  AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
                v39 = *(_QWORD **)(a1 + 1096);
                if ( v39 )
                  v40 = (void *)v39[75];
                else
                  v40 = 0LL;
                if ( v39 )
                  v41 = (void *)v39[73];
                else
                  v41 = 0LL;
                if ( v39 )
                  v42 = (void *)v39[74];
                else
                  v42 = 0LL;
                if ( v39 )
                  v43 = (void *)v39[72];
                else
                  v43 = 0LL;
                AuthzBasepEvaluateAceCondition(
                  (_DWORD *)a1,
                  *(void **)(a1 + 776),
                  *a5,
                  v43,
                  v42,
                  v41,
                  v40,
                  &v22[v38 + 8],
                  *((unsigned __int16 *)v22 + 1) - v38 - 8,
                  0,
                  v15,
                  &a6);
                v16 = v54;
                if ( a6 != 1 )
                  goto LABEL_12;
LABEL_6:
                if ( v16 )
                {
                  if ( v15 )
LABEL_67:
                    v25 = 504LL;
                  else
LABEL_8:
                    v25 = 232LL;
                  v26 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v25 + a1), 0LL, v22 + 8, 0, v15, a12);
                  v21 = a11;
LABEL_10:
                  if ( v26 )
                    AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 1);
                  goto LABEL_12;
                }
                if ( !v15 && SepIsPackageSid((__int64)(v22 + 8)) )
                {
                  v32 = (_DWORD *)(v23 + 4);
                  SepMatchPackage(
                    a1,
                    -1,
                    (__int64)(v22 + 8),
                    *((_DWORD *)v22 + 1),
                    (_BYTE *)(v23 + 17),
                    (_DWORD *)(v23 + 4),
                    (_BYTE *)(v23 + 16),
                    (_DWORD *)(v23 + 24),
                    (_BYTE *)(v23 + 20));
                }
                else
                {
                  if ( v15 )
                    goto LABEL_67;
                  if ( !SepIsCapabilitySid((__int64)(v22 + 8)) )
                    goto LABEL_8;
                  v32 = (_DWORD *)(v23 + 8);
                  SepMatchCapability(
                    a1,
                    -1,
                    (__int64)(v22 + 8),
                    *((_DWORD *)v22 + 1),
                    (_BYTE *)(v23 + 18),
                    (_DWORD *)(v23 + 8));
                }
                v21 = a11;
                *(_DWORD *)v23 &= ~*v32;
              }
            }
            else
            {
              if ( !a13 || v24 != 10 || KeGetCurrentIrql() >= 2u )
                goto LABEL_12;
              v44 = 4 * (unsigned __int8)v22[9] + 8;
              if ( *((unsigned __int16 *)v22 + 1) - v44 != 8 )
              {
                if ( a4 && !*a5 )
                  AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
                v45 = *(_QWORD **)(a1 + 1096);
                if ( v45 )
                  v46 = (void *)v45[75];
                else
                  v46 = 0LL;
                if ( v45 )
                  v47 = (void *)v45[73];
                else
                  v47 = 0LL;
                if ( v45 )
                  v48 = (void *)v45[74];
                else
                  v48 = 0LL;
                if ( v45 )
                  v49 = (void *)v45[72];
                else
                  v49 = 0LL;
                AuthzBasepEvaluateAceCondition(
                  (_DWORD *)a1,
                  *(void **)(a1 + 776),
                  *a5,
                  v49,
                  v48,
                  v47,
                  v46,
                  &v22[v44 + 8],
                  *((unsigned __int16 *)v22 + 1) - v44 - 8,
                  1u,
                  v15,
                  &a6);
                if ( ((a6 + 1) & 0xFFFFFFFD) == 0
                  && SepSidInTokenSidHash(
                       (PSID_AND_ATTRIBUTES_HASH)(a1 + (v15 != 0 ? 504LL : 232LL)),
                       0LL,
                       v22 + 8,
                       1,
                       v15,
                       a12) )
                {
                  AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 2);
                }
              }
            }
LABEL_90:
            v16 = v54;
            goto LABEL_12;
          }
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(a1 + (v15 != 0 ? 504LL : 232LL)),
                 0LL,
                 &v22[8 * (*((_DWORD *)v22 + 2) & 2) + ((*((_DWORD *)v22 + 2) & 1) != 0 ? 28LL : 12LL)],
                 1,
                 v15,
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
                                        &v56) )
                  AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, v56, v21, *((_DWORD *)v22 + 1), 2);
              }
              else
              {
                v36 = *(_QWORD *)(v17 + 40);
                v37 = *((_DWORD *)v22 + 1) & ~*(_DWORD *)(v17 + 28);
                *(_DWORD *)(v17 + 32) |= v37;
                AuthzBasepSetAccessReasons(v37, 0x20000, v21, v36, 0);
              }
              goto LABEL_12;
            }
LABEL_37:
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v19, 0, v21, *((_DWORD *)v22 + 1), 2);
          }
        }
      }
LABEL_12:
      result = *((unsigned __int16 *)v22 + 1);
      ++v21;
      a4 = v57;
      v22 += result;
      a11 = v21;
    }
    while ( v21 < v53 );
  }
  if ( v15 && (_DWORD)v19 )
  {
    v50 = (_DWORD *)(v17 + 28);
    v51 = ~a10;
    v52 = v19;
    do
    {
      result = *(v50 - 1) & ((unsigned int)v51 | *v50);
      *v50 = result;
      v50 += 12;
      --v52;
    }
    while ( v52 );
  }
  return result;
}
