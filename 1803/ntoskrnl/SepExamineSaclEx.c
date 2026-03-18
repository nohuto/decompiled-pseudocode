/*
 * XREFs of SepExamineSaclEx @ 0x140791850
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1402A0898 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140044F30 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400BBECC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400E2B70 (AuthzBasepFreeSecurityAttributesList.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x1402C39D0 (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x140792004 (SepSetAuditInfoForObjectType.c)
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
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v18; // r9
  __int64 v19; // r10
  char v21; // r15
  _WORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r14
  char v26; // bp
  char v27; // al
  int v28; // ecx
  int v29; // edi
  unsigned int i; // ebx
  int v31; // r15d
  unsigned int v32; // eax
  _DWORD *v33; // rdi
  char *v34; // rbx
  char v35; // al
  int v36; // ecx
  unsigned int v37; // ebx
  char v38; // al
  int v39; // eax
  _WORD *v40; // rbx
  unsigned int v41; // edi
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r9
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // ecx
  unsigned int j; // ebx
  int v52; // ecx
  unsigned int v53; // [rsp+60h] [rbp-78h]
  char v54; // [rsp+64h] [rbp-74h]
  int v55; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v57; // [rsp+70h] [rbp-68h]
  _DWORD *v58; // [rsp+78h] [rbp-60h] BYREF
  char *v59; // [rsp+80h] [rbp-58h]
  unsigned int v60; // [rsp+E0h] [rbp+8h]

  v56 = -1;
  v13 = 0LL;
  v14 = 0;
  v58 = 0LL;
  v53 = 0;
  v15 = a3;
  v16 = a12;
  v18 = a13;
  v19 = a2;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v57 = *(unsigned __int16 *)(a1 + 4);
    if ( v57 )
    {
      v21 = 0;
      v54 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        v54 = v21;
      }
      v22 = **(_WORD ***)(v15 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(v22, SeAnonymousLogonSid, 4 * (unsigned int)*((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v16 = a12;
        v18 = a13;
        v19 = a2;
        if ( !v23 )
        {
          v14 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
          v53 = v14;
        }
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v60 = 0;
      v59 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v16 || *v18) && a6 <= 1 )
        {
LABEL_30:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
          break;
LABEL_29:
        ++v24;
        v21 = v54;
        v25 += *((unsigned __int16 *)v25 + 1);
        v19 = a2;
        v60 = v24;
        v59 = v25;
        if ( v24 >= v57 )
          goto LABEL_30;
      }
      v55 = -1;
      v27 = *v25;
      if ( *v25 == 2 )
      {
        if ( !SepSidInToken(v15, a10, v25 + 8, 1, 0, a11, 0)
          && (!v14 || *(_WORD *)SeWorldSid != *((_WORD *)v25 + 4) || memcmp(SeWorldSid, v25 + 8, v14)) )
        {
          goto LABEL_96;
        }
        v29 = *((_DWORD *)v25 + 1);
        if ( !a6 )
        {
          if ( *a8 < 0 )
          {
            if ( v26 < 0 && ((v29 & a4) != 0 || v21 == (char)0x80) )
            {
              v18 = a13;
              v16 = a12;
              v24 = v60;
              *a13 = 1;
              goto LABEL_28;
            }
          }
          else if ( (v26 & 0x40) != 0 && ((*a9 & v29) != 0 || v21 == 64) )
          {
            v16 = a12;
            *a12 = 1;
LABEL_26:
            v24 = v60;
LABEL_27:
            v18 = a13;
LABEL_28:
            v15 = a3;
            goto LABEL_29;
          }
          goto LABEL_40;
        }
        for ( i = 0; i < a6; ++i )
        {
          LOBYTE(v28) = v26;
          SepSetAuditInfoForObjectType(
            v28,
            v29,
            a4,
            a5,
            a6,
            a7,
            i,
            (__int64)a8,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
      }
      else
      {
        if ( v27 != 7 )
        {
          if ( v27 != 13 )
            goto LABEL_29;
          v31 = *((_DWORD *)v25 + 1);
          v40 = v25 + 8;
          v41 = 4 * (unsigned __int8)v25[9] + 8;
          if ( v19 && !v13 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl(v19, (__int64 *)&v58);
            v16 = a12;
            v24 = v60;
            v13 = v58;
          }
          v42 = *((unsigned __int16 *)v25 + 1) - v41;
          if ( (int)(v42 - 8) > 0 )
          {
            v43 = *(_QWORD **)(a3 + 1096);
            if ( v43 )
              v44 = v43[75];
            else
              v44 = 0LL;
            if ( v43 )
              v45 = v43[73];
            else
              v45 = 0LL;
            if ( v43 )
              v46 = v43[74];
            else
              v46 = 0LL;
            if ( v43 )
              v47 = v43[72];
            else
              v47 = 0LL;
            v48 = v42 - 8;
            v49 = v41;
            v15 = a3;
            AuthzBasepEvaluateAceCondition(
              a3,
              *(_QWORD *)(a3 + 776),
              (__int64)v13,
              v47,
              v46,
              v45,
              v44,
              (_WORD *)((char *)v40 + v49),
              v48,
              1u,
              0,
              &v56);
            if ( v56 != 1
              || !SepSidInToken(a3, a10, v25 + 8, 1, 0, a11, 0)
              && (!v14 || *(_WORD *)SeWorldSid != *v40 || memcmp(SeWorldSid, v25 + 8, v14)) )
            {
              goto LABEL_96;
            }
            if ( !a6 )
            {
              if ( *a8 < 0 )
              {
                if ( v26 >= 0 || (v31 & a4) == 0 && v54 != (char)0x80 )
                  goto LABEL_96;
                v18 = a13;
                v16 = a12;
                *a13 = 1;
              }
              else
              {
                if ( (v26 & 0x40) != 0 && ((*a9 & v31) != 0 || v54 == 64) )
                {
                  v16 = a12;
                  *a12 = 1;
                  goto LABEL_84;
                }
LABEL_96:
                v16 = a12;
LABEL_84:
                v18 = a13;
              }
              v24 = v60;
              goto LABEL_29;
            }
            for ( j = 0; j < a6; ++j )
            {
              LOBYTE(v50) = v26;
              SepSetAuditInfoForObjectType(
                v50,
                v31,
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
            v25 = v59;
            v13 = v58;
            v14 = v53;
            v15 = a3;
LABEL_93:
            v39 = -1;
LABEL_94:
            if ( v39 != -1 )
            {
              v52 = (int)a8;
              LOBYTE(v52) = v26;
              SepSetAuditInfoForObjectType(
                v52,
                v31,
                a4,
                a5,
                a6,
                a7,
                v39,
                (__int64)a8,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
            goto LABEL_96;
          }
          goto LABEL_27;
        }
        v31 = *((_DWORD *)v25 + 1);
        v32 = *((_DWORD *)v25 + 2) & 1;
        v33 = (_DWORD *)((unsigned __int64)(v25 + 12) & -(__int64)(v32 != 0));
        v34 = &v25[16 * v32 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
        v35 = SepSidInToken(a3, a10, v34, 1, 0, a11, 0);
        if ( v33 )
        {
          if ( v35 || v14 && *(_WORD *)SeWorldSid == *(_WORD *)v34 && !memcmp(SeWorldSid, v34, v14) )
          {
            v38 = AuthzBasepObjectInTypeList(v33, a5, a6, &v55);
            v15 = a3;
            if ( !v38 )
              goto LABEL_93;
            v39 = v55;
            goto LABEL_94;
          }
          goto LABEL_40;
        }
        if ( !v35 && (!v14 || *(_WORD *)SeWorldSid != *(_WORD *)v34 || memcmp(SeWorldSid, v34, v14)) || (v37 = 0, !a6) )
        {
LABEL_40:
          v16 = a12;
          goto LABEL_26;
        }
        do
        {
          LOBYTE(v36) = v26;
          SepSetAuditInfoForObjectType(
            v36,
            v31,
            a4,
            a5,
            a6,
            a7,
            v37++,
            (__int64)a8,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
        while ( v37 < a6 );
      }
      v25 = v59;
      v13 = v58;
      v14 = v53;
      goto LABEL_40;
    }
  }
}
