/*
 * XREFs of SepExamineSaclEx @ 0x1406F5B50
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1402476BC (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x14012B964 (SepSidInToken.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x140263A24 (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x1406F62CC (SepSetAuditInfoForObjectType.c)
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
  _DWORD *v13; // r13
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  char v20; // r12
  const void **v21; // rax
  unsigned __int8 *v22; // rsi
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r15
  char v26; // r14
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  bool v31; // zf
  unsigned int i; // ebx
  int v33; // r12d
  _DWORD *v34; // rdi
  char *v35; // rbx
  int v36; // ecx
  unsigned int v37; // ebx
  int v38; // eax
  _WORD *v39; // rbx
  unsigned int v40; // edi
  unsigned int v41; // ecx
  _QWORD *v42; // rax
  void *v43; // r10
  void *v44; // r8
  void *v45; // rdx
  void *v46; // r9
  bool v47; // al
  int v48; // ecx
  unsigned int j; // ebx
  int v50; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v53; // [rsp+68h] [rbp-70h] BYREF
  int v54; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v55; // [rsp+70h] [rbp-68h]
  unsigned __int8 *v56; // [rsp+78h] [rbp-60h]
  _DWORD *v57; // [rsp+80h] [rbp-58h] BYREF
  char *v58; // [rsp+88h] [rbp-50h]
  unsigned int v59; // [rsp+E0h] [rbp+8h]

  v54 = -1;
  v13 = 0LL;
  v14 = a3;
  v57 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
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
      v21 = *(const void ***)(v14 + 152);
      v22 = (unsigned __int8 *)SeWorldSid;
      v56 = (unsigned __int8 *)SeWorldSid;
      if ( *(_WORD *)*v21 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(*v21, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v23 )
          Size = 4 * v22[1] + 8;
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v59 = 0;
      v58 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_91:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
        {
          v53 = -1;
          v27 = *v25;
          if ( *v25 == 2 )
          {
            if ( !SepSidInToken(v14, a10, v25 + 8, 1, 0, a11)
              && (!Size || *(_WORD *)v22 != *((_WORD *)v25 + 4) || memcmp(v22, v25 + 8, Size)) )
            {
              goto LABEL_87;
            }
            v29 = *((_DWORD *)v25 + 1);
            if ( a6 )
            {
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
              goto LABEL_34;
            }
            if ( *a8 >= 0 )
            {
              if ( (v26 & 0x40) == 0 )
                goto LABEL_87;
              if ( (*a9 & v29) == 0 )
              {
                v30 = v20 == 64;
LABEL_25:
                if ( !v30 )
                  goto LABEL_87;
              }
              goto LABEL_26;
            }
            if ( v26 >= 0 )
              goto LABEL_87;
            if ( (v29 & a4) == 0 )
            {
              v31 = v20 == (char)0x80;
LABEL_30:
              if ( !v31 )
                goto LABEL_87;
            }
            goto LABEL_31;
          }
          if ( v27 == 7 )
          {
            v33 = *((_DWORD *)v25 + 1);
            v34 = (_DWORD *)((unsigned __int64)(v25 + 12) & -(__int64)((*((_DWORD *)v25 + 2) & 1) != 0));
            v35 = &v25[8 * (*((_DWORD *)v25 + 2) & 2) + ((*((_DWORD *)v25 + 2) & 1) != 0 ? 28LL : 12LL)];
            if ( v34 )
            {
              if ( SepSidInToken(v14, a10, v35, 1, 0, a11)
                || Size && *(_WORD *)v22 == *(_WORD *)v35 && !memcmp(v22, v35, Size) )
              {
                if ( !AuthzBasepObjectInTypeList(v34, a5, a6, &v53) )
                  goto LABEL_83;
                v38 = v53;
                goto LABEL_84;
              }
              goto LABEL_87;
            }
            if ( !SepSidInToken(v14, a10, v35, 1, 0, a11)
              && (!Size || *(_WORD *)v22 != *(_WORD *)v35 || memcmp(v22, v35, Size)) )
            {
              goto LABEL_87;
            }
            v37 = 0;
            if ( !a6 )
              goto LABEL_87;
            do
            {
              LOBYTE(v36) = v26;
              SepSetAuditInfoForObjectType(
                v36,
                v33,
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
LABEL_34:
            v22 = v56;
            v25 = v58;
            v13 = v57;
            goto LABEL_87;
          }
          if ( v27 == 13 )
          {
            v33 = *((_DWORD *)v25 + 1);
            v39 = v25 + 8;
            v40 = 4 * (unsigned __int8)v25[9] + 8;
            if ( v17 && !v13 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(v17, &v57);
              v22 = (unsigned __int8 *)SeWorldSid;
              v13 = v57;
              v19 = a12;
              v24 = v59;
              v56 = (unsigned __int8 *)SeWorldSid;
            }
            v41 = *((unsigned __int16 *)v25 + 1) - v40;
            if ( (int)(v41 - 8) <= 0 )
              goto LABEL_89;
            v42 = *(_QWORD **)(a3 + 1096);
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
              (_DWORD *)a3,
              *(void **)(a3 + 776),
              v13,
              v46,
              v45,
              v44,
              v43,
              (_WORD *)((char *)v39 + v40),
              v41 - 8,
              1u,
              0,
              &v54);
            if ( v54 != 1 )
            {
              v22 = (unsigned __int8 *)SeWorldSid;
              v56 = (unsigned __int8 *)SeWorldSid;
              goto LABEL_87;
            }
            v47 = SepSidInToken(a3, a10, v25 + 8, 1, 0, a11);
            v22 = (unsigned __int8 *)SeWorldSid;
            v56 = (unsigned __int8 *)SeWorldSid;
            if ( !v47 && (!Size || *(_WORD *)SeWorldSid != *v39 || memcmp(SeWorldSid, v25 + 8, Size)) )
              goto LABEL_87;
            if ( a6 )
            {
              for ( j = 0; j < a6; ++j )
              {
                LOBYTE(v48) = v26;
                SepSetAuditInfoForObjectType(
                  v48,
                  v33,
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
              v22 = v56;
              v25 = v58;
              v13 = v57;
LABEL_83:
              v38 = -1;
LABEL_84:
              if ( v38 != -1 )
              {
                v50 = (int)a8;
                LOBYTE(v50) = v26;
                SepSetAuditInfoForObjectType(
                  v50,
                  v33,
                  a4,
                  a5,
                  a6,
                  a7,
                  v38,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
LABEL_87:
              v19 = a12;
LABEL_88:
              v24 = v59;
LABEL_89:
              v16 = a13;
              goto LABEL_90;
            }
            if ( *a8 >= 0 )
            {
              if ( (v26 & 0x40) == 0 )
                goto LABEL_87;
              if ( (*a9 & v33) == 0 )
              {
                v30 = Size_4 == 64;
                goto LABEL_25;
              }
LABEL_26:
              v19 = a12;
              *a12 = 1;
              goto LABEL_88;
            }
            if ( v26 >= 0 )
              goto LABEL_87;
            if ( (v33 & a4) == 0 )
            {
              v31 = Size_4 == (char)0x80;
              goto LABEL_30;
            }
LABEL_31:
            v16 = a13;
            v19 = a12;
            v24 = v59;
            *a13 = 1;
          }
        }
LABEL_90:
        ++v24;
        v20 = Size_4;
        v25 += *((unsigned __int16 *)v25 + 1);
        v14 = a3;
        v17 = a2;
        v59 = v24;
        v58 = v25;
        if ( v24 >= v55 )
          goto LABEL_91;
      }
    }
  }
}
