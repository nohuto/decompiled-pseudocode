/*
 * XREFs of SepNormalAccessCheckEx @ 0x1401332E0
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

void __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v14; // r15d
  int v15; // ebx
  __int64 v16; // rbp
  __int64 v18; // rcx
  _DWORD *v19; // rax
  unsigned int v20; // r12d
  char *v21; // rdi
  bool v22; // zf
  int v23; // ecx
  char v24; // al
  void *v25; // r8
  _SID_AND_ATTRIBUTES_HASH *v26; // rcx
  __int64 v27; // r11
  __int64 v28; // rbx
  __int64 v29; // r11
  _DWORD *v30; // rbx
  int v31; // eax
  int v32; // r9d
  int v33; // r8d
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rcx
  bool v37; // zf
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
  unsigned int v50; // [rsp+60h] [rbp-48h] BYREF
  int v51; // [rsp+64h] [rbp-44h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp+20h]
  int v56; // [rsp+E0h] [rbp+38h]

  v14 = 0;
  v15 = *(_DWORD *)(a2 + 200) & 0x2000;
  v16 = a2;
  v55 = v15;
  v52 = *(unsigned __int16 *)(a4 + 4);
  if ( a8 )
  {
    v18 = a8;
    v19 = (_DWORD *)(a9 + 24);
    do
    {
      *v19 = a1;
      v19 += 12;
      --v18;
    }
    while ( v18 );
  }
  if ( !v15 && !a11 )
    v14 = a1 | *(_DWORD *)a14;
  v20 = 0;
  v56 = v14;
  v21 = (char *)(a4 + 8);
  v22 = v52 == 0;
  if ( v52 )
  {
    while ( 1 )
    {
      v23 = *(_DWORD *)(a9 + 24);
      if ( !v23 && !v14 )
      {
LABEL_18:
        v22 = v20 == v52;
        break;
      }
      if ( (v21[1] & 8) != 0 )
        goto LABEL_15;
      if ( !v23 )
      {
        if ( !*v21 )
          goto LABEL_10;
        if ( *v21 != 9 )
          goto LABEL_15;
      }
      v24 = *v21;
      if ( !*v21 )
        goto LABEL_10;
      switch ( v24 )
      {
        case 5:
          v32 = *((_DWORD *)v21 + 2);
          v33 = v32 & 1;
          v34 = (unsigned __int64)(v21 + 12) & -(__int64)(v33 != 0);
          if ( v34 )
          {
            if ( a10
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
                   0LL,
                   &v21[8 * (v32 & 2) + (v33 != 0 ? 28LL : 12LL)],
                   0,
                   a11,
                   a12)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v34, a9, a8, &v50) )
            {
              AuthzBasepAddAccessTypeList(a9, a8, v50, v20, *((_DWORD *)v21 + 1), 0);
            }
          }
          else if ( SepSidInTokenSidHash(
                      (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
                      0LL,
                      &v21[8 * (v32 & 2) + (v33 != 0 ? 28LL : 12LL)],
                      0,
                      a11,
                      a12) )
          {
            AuthzBasepAddAccessTypeList(a9, a8, 0, v20, *((_DWORD *)v21 + 1), 0);
          }
          goto LABEL_105;
        case 4:
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
                 0LL,
                 &v21[4 * (unsigned __int8)v21[13] + 20],
                 0,
                 a11,
                 a12) )
          {
            v25 = v21 + 12;
            v26 = (_SID_AND_ATTRIBUTES_HASH *)(a3 + (a11 != 0 ? 504LL : 232LL));
LABEL_13:
            if ( SepSidInTokenSidHash(v26, 0LL, v25, 0, a11, a12) )
              AuthzBasepAddAccessTypeList(a9, a8, 0, v20, *((_DWORD *)v21 + 1), 0);
            goto LABEL_15;
          }
          goto LABEL_15;
        case 1:
          if ( SepSidInTokenSidHash(
                 (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
                 0LL,
                 v21 + 8,
                 1,
                 a11,
                 a12) )
          {
            v35 = *((_DWORD *)v21 + 1);
            if ( (v35 & *(_DWORD *)(a9 + 24)) != 0 )
              goto LABEL_54;
          }
          goto LABEL_15;
      }
      if ( v24 != 6 )
      {
        if ( v24 != 9 )
        {
          if ( !a13 || v24 != 10 || KeGetCurrentIrql() >= 2u )
            goto LABEL_15;
          v44 = 4 * (unsigned __int8)v21[9] + 8;
          if ( *((unsigned __int16 *)v21 + 1) - v44 != 8 )
          {
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v45 = *(_QWORD **)(v16 + 1096);
            v46 = v45 ? (void *)v45[75] : 0LL;
            v47 = v45 ? (void *)v45[73] : 0LL;
            v48 = v45 ? (void *)v45[74] : 0LL;
            v49 = v45 ? (void *)v45[72] : 0LL;
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)v16,
              *(void **)(v16 + 776),
              *a6,
              v49,
              v48,
              v47,
              v46,
              &v21[v44 + 8],
              *((unsigned __int16 *)v21 + 1) - v44 - 8,
              1u,
              a11,
              &v51);
            if ( ((v51 + 1) & 0xFFFFFFFD) == 0
              && SepSidInTokenSidHash(
                   (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
                   0LL,
                   v21 + 8,
                   1,
                   a11,
                   a12) )
            {
              v35 = *((_DWORD *)v21 + 1);
              if ( (v35 & *(_DWORD *)(a9 + 24)) != 0 )
              {
LABEL_54:
                AuthzBasepSetAccessReasons(*(_DWORD *)(a9 + 24) & v35, 0x20000, v20, *(_QWORD *)(a9 + 40), 0);
                goto LABEL_18;
              }
            }
          }
          goto LABEL_105;
        }
        v38 = 4 * (unsigned __int8)v21[9] + 8;
        if ( *((unsigned __int16 *)v21 + 1) - v38 == 8 )
          goto LABEL_105;
        if ( a5 && !*a6 )
          AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v39 = *(_QWORD **)(v16 + 1096);
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
          (_DWORD *)v16,
          *(void **)(v16 + 776),
          *a6,
          v43,
          v42,
          v41,
          v40,
          &v21[v38 + 8],
          *((unsigned __int16 *)v21 + 1) - v38 - 8,
          0,
          a11,
          &v51);
        v15 = v55;
        if ( v51 != 1 )
          goto LABEL_15;
LABEL_10:
        if ( !v15 )
        {
          if ( !a11 && v14 && SepIsPackageSid((__int64)(v21 + 8)) )
          {
            v16 = a2;
            v30 = (_DWORD *)(a14 + 4);
            SepMatchPackage(
              a2,
              v56,
              (__int64)(v21 + 8),
              *((_DWORD *)v21 + 1),
              (_BYTE *)(a14 + 17),
              (_DWORD *)(a14 + 4),
              (_BYTE *)(a14 + 16),
              (_DWORD *)(a14 + 24),
              (_BYTE *)(a14 + 20));
            goto LABEL_35;
          }
          if ( !a11 && v14 && SepIsCapabilitySid((__int64)(v21 + 8)) )
          {
            v16 = a2;
            v30 = (_DWORD *)(a14 + 8);
            SepMatchCapability(
              a2,
              v56,
              (__int64)(v21 + 8),
              *((_DWORD *)v21 + 1),
              (_BYTE *)(a14 + 18),
              (_DWORD *)(a14 + 8));
LABEL_35:
            v31 = ~*v30;
            v14 &= v31;
            *(_DWORD *)a14 &= v31;
LABEL_105:
            v15 = v55;
            goto LABEL_15;
          }
        }
        v16 = a2;
        if ( *(_DWORD *)(a9 + 24) )
        {
          v25 = v21 + 8;
          v26 = (_SID_AND_ATTRIBUTES_HASH *)(a2 + (a11 != 0 ? 504LL : 232LL));
          goto LABEL_13;
        }
        goto LABEL_15;
      }
      if ( SepSidInTokenSidHash(
             (PSID_AND_ATTRIBUTES_HASH)(v16 + (a11 != 0 ? 504LL : 232LL)),
             0LL,
             &v21[8 * (*((_DWORD *)v21 + 2) & 2) + ((*((_DWORD *)v21 + 2) & 1) != 0 ? 28LL : 12LL)],
             1,
             a11,
             a12) )
      {
        v36 = (unsigned __int64)(v21 + 12) & -(__int64)((*((_DWORD *)v21 + 2) & 1) != 0);
        if ( v36 && a10 )
        {
          if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v36, a9, a8, &v50) )
            goto LABEL_15;
          v37 = (*(_DWORD *)(a9 + 48LL * v50 + 24) & *((_DWORD *)v21 + 1)) == 0;
        }
        else
        {
          v37 = (*((_DWORD *)v21 + 1) & *(_DWORD *)(a9 + 24)) == 0;
        }
        if ( !v37 )
          goto LABEL_18;
      }
LABEL_15:
      ++v20;
      v21 += *((unsigned __int16 *)v21 + 1);
      if ( v20 >= v52 )
        goto LABEL_18;
    }
  }
  if ( v22 )
  {
    v27 = a9 + 24;
    if ( *(_DWORD *)(a9 + 24) )
    {
      if ( a8 )
      {
        v28 = a8;
        do
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)v27, 0x800000, 0, *(_QWORD *)(v27 + 16), 0);
          v27 = v29 + 48;
          --v28;
        }
        while ( v28 );
      }
    }
  }
}
