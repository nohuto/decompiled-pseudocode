/*
 * XREFs of SepExamineSaclEx @ 0x14072D59C
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14025EDE8 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140017110 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14001A89C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepSidInToken @ 0x1400D5100 (SepSidInToken.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14028DD54 (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x14072DD0C (SepSetAuditInfoForObjectType.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        void *a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _BYTE *v13; // r15
  _DWORD *v14; // r12
  __int64 v15; // r10
  __int64 v17; // r9
  _BYTE *v18; // r8
  char v20; // r13
  _WORD *v21; // rcx
  int v22; // eax
  unsigned int v23; // edx
  char *v24; // r14
  char v25; // bp
  char v26; // al
  int v27; // ecx
  int v28; // edi
  unsigned int i; // ebx
  int v30; // r15d
  __int64 v31; // rbx
  __int64 v32; // rdi
  char *v33; // rbx
  _DWORD *v34; // rdi
  int v35; // ecx
  unsigned int v36; // ebx
  char v37; // al
  _BYTE *v38; // rdi
  int v39; // eax
  _WORD *v40; // rbx
  unsigned int v41; // edi
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  void *v44; // r10
  void *v45; // r8
  void *v46; // rdx
  void *v47; // r9
  int v48; // ecx
  unsigned int j; // ebx
  int v50; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v53; // [rsp+68h] [rbp-70h] BYREF
  int v54; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v55; // [rsp+70h] [rbp-68h]
  _DWORD *v56; // [rsp+78h] [rbp-60h] BYREF
  char *v57; // [rsp+80h] [rbp-58h]
  unsigned int v58; // [rsp+E0h] [rbp+8h]

  v13 = a12;
  v14 = 0LL;
  v54 = -1;
  v15 = a3;
  v56 = 0LL;
  Size = 0;
  *a12 = 0;
  v17 = a2;
  v18 = a13;
  *a13 = 0;
  if ( a1 )
  {
    v55 = *(unsigned __int16 *)(a1 + 4);
    if ( v55 )
    {
      v20 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v20 = 0x80;
        if ( *a8 >= 0 )
          v20 = 64;
        Size_4 = v20;
      }
      v21 = **(_WORD ***)(v15 + 152);
      if ( *v21 == *(_WORD *)SeAnonymousLogonSid )
      {
        v22 = memcmp(v21, SeAnonymousLogonSid, 4 * (unsigned int)*((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v18 = a13;
        v15 = a3;
        v17 = a2;
        if ( !v22 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v23 = 0;
      v24 = (char *)(a1 + 8);
      v58 = 0;
      v57 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v13 || *v18) && a6 <= 1 )
        {
LABEL_90:
          if ( v14 )
          {
            AuthzBasepFreeSecurityAttributesList(v14);
            ExFreePoolWithTag(v14, 0);
          }
          return;
        }
        v25 = v24[1];
        if ( (v25 & 8) == 0 )
        {
          v53 = -1;
          v26 = *v24;
          if ( *v24 == 2 )
          {
            if ( !SepSidInToken(v15, a10, v24 + 8, 1, 0, a11)
              && (!Size || *(_WORD *)SeWorldSid != *((_WORD *)v24 + 4) || memcmp(SeWorldSid, v24 + 8, Size)) )
            {
              goto LABEL_87;
            }
            v28 = *((_DWORD *)v24 + 1);
            if ( a6 )
            {
              for ( i = 0; i < a6; ++i )
              {
                LOBYTE(v27) = v25;
                SepSetAuditInfoForObjectType(
                  v27,
                  v28,
                  a4,
                  a5,
                  a6,
                  a7,
                  i,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)v13,
                  (__int64)a13);
              }
              v24 = v57;
              v14 = v56;
              v20 = Size_4;
              goto LABEL_87;
            }
            if ( *a8 >= 0 )
            {
              if ( (v25 & 0x40) != 0 && ((*a9 & v28) != 0 || v20 == 64) )
LABEL_25:
                *v13 = 1;
              goto LABEL_87;
            }
            if ( v25 >= 0 || (v28 & a4) == 0 && v20 != (char)0x80 )
              goto LABEL_87;
            v18 = a13;
            *a13 = 1;
            goto LABEL_88;
          }
          if ( v26 == 7 )
          {
            v30 = *((_DWORD *)v24 + 1);
            v31 = *((_DWORD *)v24 + 2) & 1;
            v32 = -(__int64)((_DWORD)v31 != 0);
            v33 = &v24[16 * v31 + ((8LL * (*((_DWORD *)v24 + 2) & 2)) | 0xC)];
            v34 = (_DWORD *)((unsigned __int64)(v24 + 12) & v32);
            if ( !v34 )
            {
              if ( !SepSidInToken(v15, a10, v33, 1, 0, a11)
                && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v33 || memcmp(SeWorldSid, v33, Size)) )
              {
                goto LABEL_86;
              }
              v36 = 0;
              if ( !a6 )
                goto LABEL_86;
              do
              {
                LOBYTE(v35) = v25;
                SepSetAuditInfoForObjectType(
                  v35,
                  v30,
                  a4,
                  a5,
                  a6,
                  a7,
                  v36++,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
              while ( v36 < a6 );
              v24 = v57;
              v13 = a12;
              v14 = v56;
              v20 = Size_4;
              goto LABEL_87;
            }
            if ( !SepSidInToken(v15, a10, v33, 1, 0, a11)
              && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)v33 || memcmp(SeWorldSid, v33, Size)) )
            {
              goto LABEL_86;
            }
            v37 = AuthzBasepObjectInTypeList(v34, a5, a6, &v53);
            v38 = a12;
            if ( v37 )
            {
              v39 = v53;
              goto LABEL_84;
            }
LABEL_83:
            v39 = -1;
LABEL_84:
            if ( v39 != -1 )
            {
              v50 = (int)a8;
              LOBYTE(v50) = v25;
              SepSetAuditInfoForObjectType(
                v50,
                v30,
                a4,
                a5,
                a6,
                a7,
                v39,
                (__int64)a8,
                (__int64)a9,
                (__int64)v38,
                (__int64)a13);
            }
            goto LABEL_86;
          }
          if ( v26 == 13 )
          {
            v30 = *((_DWORD *)v24 + 1);
            v40 = v24 + 8;
            v41 = 4 * (unsigned __int8)v24[9] + 8;
            if ( v17 && !v14 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64 *)&v56);
              v23 = v58;
              v14 = v56;
            }
            v42 = *((unsigned __int16 *)v24 + 1) - v41;
            if ( (int)(v42 - 8) <= 0 )
            {
              v13 = a12;
              v18 = a13;
              goto LABEL_89;
            }
            v43 = *(_QWORD **)(a3 + 1096);
            if ( v43 )
              v44 = (void *)v43[75];
            else
              v44 = 0LL;
            if ( v43 )
              v45 = (void *)v43[73];
            else
              v45 = 0LL;
            if ( v43 )
              v46 = (void *)v43[74];
            else
              v46 = 0LL;
            if ( v43 )
              v47 = (void *)v43[72];
            else
              v47 = 0LL;
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)a3,
              *(void **)(a3 + 776),
              v14,
              v47,
              v46,
              v45,
              v44,
              (_WORD *)((char *)v40 + v41),
              v42 - 8,
              1u,
              0,
              &v54);
            if ( v54 != 1
              || !SepSidInToken(a3, a10, v24 + 8, 1, 0, a11)
              && (!Size || *(_WORD *)SeWorldSid != *v40 || memcmp(SeWorldSid, v24 + 8, Size)) )
            {
              goto LABEL_86;
            }
            if ( !a6 )
            {
              if ( *a8 < 0 )
              {
                if ( v25 >= 0 || (v30 & a4) == 0 && v20 != (char)0x80 )
                  goto LABEL_86;
                v18 = a13;
                v13 = a12;
                *a13 = 1;
              }
              else
              {
                if ( (v25 & 0x40) != 0 && ((*a9 & v30) != 0 || v20 == 64) )
                {
                  v13 = a12;
                  goto LABEL_25;
                }
LABEL_86:
                v13 = a12;
LABEL_87:
                v18 = a13;
              }
LABEL_88:
              v23 = v58;
              goto LABEL_89;
            }
            v38 = a12;
            for ( j = 0; j < a6; ++j )
            {
              LOBYTE(v48) = v25;
              SepSetAuditInfoForObjectType(
                v48,
                v30,
                a4,
                a5,
                a6,
                a7,
                j,
                (__int64)a8,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
            v24 = v57;
            v14 = v56;
            v20 = Size_4;
            goto LABEL_83;
          }
        }
LABEL_89:
        ++v23;
        v15 = a3;
        v24 += *((unsigned __int16 *)v24 + 1);
        v17 = a2;
        v58 = v23;
        v57 = v24;
        if ( v23 >= v55 )
          goto LABEL_90;
      }
    }
  }
}
