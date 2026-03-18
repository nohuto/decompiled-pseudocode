/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0
 * Callers:
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x14025DFC0 (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14072B6E0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x14072BE68 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140730D94 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x140731F24 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x140731FA4 (SepIsSidEqual.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        UNICODE_STRING *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  char v18; // r15
  __int64 v19; // r12
  unsigned int v20; // r14d
  __int64 v21; // r15
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rcx
  __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int16 v31; // ax
  __int64 v32; // rax
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rax
  __int16 v38; // ax
  __int64 v39; // rax
  _WORD *v40; // r12
  __int16 v41; // ax
  _WORD *v42; // r13
  __int16 v43; // r11
  unsigned __int16 v44; // ax
  _WORD *v45; // r10
  __int16 v46; // ax
  __int16 v47; // r8
  _WORD *v48; // r15
  _WORD *v49; // r14
  unsigned __int16 v50; // ax
  __int64 v51; // rsi
  SIZE_T v52; // rax
  unsigned __int16 v53; // ax
  __int64 v54; // rsi
  SIZE_T v55; // rax
  unsigned __int16 v56; // ax
  __int64 v57; // rsi
  SIZE_T v58; // rax
  __int16 v59; // dx
  bool v60; // cf
  unsigned __int16 v61; // ax
  __int64 v62; // rsi
  SIZE_T v63; // rax
  unsigned int v64; // eax
  int v65; // edi
  ACCESS_MASK v66; // edi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int16 v75; // ax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int16 v78; // ax
  __int64 v79; // rax
  __int64 v80; // rcx
  int v81; // r13d
  __int64 v82; // rdi
  int v83; // r12d
  unsigned int v84; // ebx
  __int64 v85; // [rsp+38h] [rbp-B9h]
  _WORD *v86; // [rsp+58h] [rbp-99h]
  __int64 v87; // [rsp+60h] [rbp-91h]
  int v88; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+6Ch] [rbp-85h] BYREF
  int TypeString; // [rsp+70h] [rbp-81h]
  UNICODE_STRING *v91; // [rsp+78h] [rbp-79h]
  unsigned int v92; // [rsp+80h] [rbp-71h]
  PACCESS_TOKEN Token; // [rsp+88h] [rbp-69h]
  PVOID P; // [rsp+90h] [rbp-61h] BYREF
  PVOID v95[2]; // [rsp+98h] [rbp-59h] BYREF
  void *v96; // [rsp+A8h] [rbp-49h]
  void *Source2; // [rsp+B0h] [rbp-41h]
  __int64 v98; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v100; // [rsp+138h] [rbp+47h]
  __int16 v102; // [rsp+150h] [rbp+5Fh]
  __int16 v103; // [rsp+160h] [rbp+6Fh]

  v13 = 0;
  AuditMask = 0;
  P = 0LL;
  v14 = 0;
  v95[0] = 0LL;
  v15 = 0LL;
  v98 = 0LL;
  v91 = 0LL;
  TypeString = 0;
  v92 = 0;
  v88 = 0;
  v96 = 0LL;
  v100 = 0;
  v86 = 0LL;
  v102 = 0;
  Source2 = 0LL;
  v103 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(3221225596LL);
    return;
  }
  v18 = SepAdtAuditThisEventWithContext(141LL, 1u, 0, &SubjectContext);
  if ( v18 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(139LL, 1u, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v18 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( !a3 || !a3->Length )
  {
    if ( !a2 )
    {
      a3 = 0LL;
      goto LABEL_9;
    }
    TypeString = SepQueryTypeString(a2, v95);
    if ( TypeString < 0 )
      goto LABEL_210;
    a3 = 0LL;
    if ( v95[0] )
      a3 = (UNICODE_STRING *)v95[0];
  }
  v91 = a3;
LABEL_9:
  v19 = a10;
  v20 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) == 0 )
    goto LABEL_10;
  v33 = *(_WORD *)(a10 + 2);
  if ( (v33 & 0x10) == 0 )
    goto LABEL_65;
  if ( v33 >= 0 )
  {
    v35 = *(_QWORD *)(a10 + 24);
    goto LABEL_67;
  }
  v34 = *(unsigned int *)(a10 + 12);
  if ( (_DWORD)v34 )
    v35 = a10 + v34;
  else
LABEL_65:
    v35 = 0LL;
LABEL_67:
  SeMaximumAuditMask(v35, v20, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v20, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v18 )
    v14 |= a8 & 0x10;
LABEL_10:
  v21 = a13;
  v22 = *(_WORD *)(a13 + 2);
  if ( (v22 & 0x10) == 0 )
  {
LABEL_70:
    v24 = 0LL;
    goto LABEL_14;
  }
  if ( v22 < 0 )
  {
    v23 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v23 )
    {
      v24 = a13 + v23;
      goto LABEL_14;
    }
    goto LABEL_70;
  }
  v24 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v87 = v24;
  if ( !a10 )
    goto LABEL_15;
  v31 = *(_WORD *)(a10 + 2);
  if ( (v31 & 0x10) == 0 )
  {
LABEL_47:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( v31 < 0 )
  {
    v32 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v32 )
    {
      v15 = a10 + v32;
      goto LABEL_15;
    }
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v25 = a9;
  if ( !a9 )
  {
    v26 = 0LL;
    goto LABEL_17;
  }
  v36 = *(_WORD *)(a9 + 2);
  if ( (v36 & 0x10) == 0 )
  {
LABEL_77:
    v26 = 0LL;
    goto LABEL_17;
  }
  if ( v36 < 0 )
  {
    v37 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v37 )
    {
      v26 = a9 + v37;
      goto LABEL_17;
    }
    goto LABEL_77;
  }
  v26 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    v27 = *(_WORD *)(a11 + 2);
    if ( (v27 & 0x10) == 0 )
    {
LABEL_19:
      v28 = 0LL;
      goto LABEL_20;
    }
    if ( v27 >= 0 )
    {
      v28 = *(_QWORD *)(a11 + 24);
    }
    else
    {
      v30 = *(unsigned int *)(a11 + 12);
      if ( !(_DWORD)v30 )
        goto LABEL_19;
      v28 = a11 + v30;
    }
  }
  else
  {
    v28 = 0LL;
  }
LABEL_20:
  if ( !a12 )
  {
    v29 = 0LL;
    goto LABEL_22;
  }
  v38 = *(_WORD *)(a12 + 2);
  if ( (v38 & 0x10) == 0 )
  {
LABEL_84:
    v29 = 0LL;
    goto LABEL_22;
  }
  if ( v38 < 0 )
  {
    v39 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v39 )
    {
      v29 = a12 + v39;
      goto LABEL_22;
    }
    goto LABEL_84;
  }
  v29 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v24 || !*(_WORD *)(v24 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v26 && *(_WORD *)(v26 + 4) )
      v13 |= v14 & 0x10;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x20;
    if ( v29 && *(_WORD *)(v29 + 4) )
    {
      v65 = v14 & 0x40;
LABEL_152:
      v13 |= v65;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v40 = (_WORD *)(v24 + 8);
  if ( v15 && (v41 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v42 = (_WORD *)(v15 + 8);
    v100 = v41;
    v43 = v41;
  }
  else
  {
    v43 = 0;
    v42 = 0LL;
  }
  if ( v26 )
  {
    v44 = *(_WORD *)(v26 + 4);
    if ( v44 )
    {
      v96 = (void *)(v26 + 8);
      v88 = v44;
    }
  }
  if ( v28 && *(_WORD *)(v28 + 4) )
  {
    v45 = (_WORD *)(v28 + 8);
    v102 = *(_WORD *)(v28 + 4);
    v86 = (_WORD *)(v28 + 8);
  }
  else
  {
    v45 = 0LL;
  }
  if ( v29 && (v46 = *(_WORD *)(v29 + 4)) != 0 )
  {
    v103 = *(_WORD *)(v29 + 4);
    Source2 = (void *)(v29 + 8);
    v47 = v46;
  }
  else
  {
    v47 = 0;
  }
  v48 = v96;
  v49 = Source2;
  do
  {
    if ( *(_BYTE *)v40 == 17 )
    {
      if ( (v14 & 0x10) == 0 )
        goto LABEL_135;
      if ( !v48
        || (v61 = v48[1], v40[1] != v61)
        || (v62 = v61, v63 = RtlCompareMemory(v40, v48, v61), v24 = v87, v63 != v62) )
      {
        v43 = v100;
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_133;
      }
      v48 = (_WORD *)(((unsigned __int64)v48 + v62) & -(__int64)(--v88 != 0));
LABEL_113:
      v45 = v86;
      goto LABEL_116;
    }
    if ( *(_BYTE *)v40 != 18 )
    {
      if ( *(_BYTE *)v40 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_135;
        if ( v49 )
        {
          v53 = v49[1];
          if ( v40[1] == v53 )
          {
            v54 = v53;
            v55 = RtlCompareMemory(v40, v49, v53);
            v24 = v87;
            if ( v55 == v54 )
            {
              v45 = v86;
              v43 = v100;
              v47 = --v103;
              v49 = (_WORD *)(((unsigned __int64)v49 + v54) & -(__int64)(v103 != 0));
              goto LABEL_135;
            }
          }
        }
        v13 |= 0x40u;
        v14 &= ~0x40u;
      }
      else
      {
        if ( (v14 & 8) == 0 )
          goto LABEL_135;
        if ( v42 )
        {
          if ( *(_BYTE *)v42 == *(_BYTE *)v40 )
          {
            v50 = v42[1];
            if ( v40[1] == v50 )
            {
              v51 = v50;
              v52 = RtlCompareMemory(v40, v42, v50);
              v24 = v87;
              if ( v52 == v51 )
              {
                v43 = --v100;
                v42 = (_WORD *)(((unsigned __int64)v42 + v51) & -(__int64)(v100 != 0));
LABEL_133:
                v45 = v86;
                goto LABEL_134;
              }
            }
          }
        }
        v13 |= 8u;
        v14 &= ~8u;
      }
      goto LABEL_113;
    }
    if ( (v14 & 0x20) == 0 )
      goto LABEL_135;
    if ( !v45 )
      goto LABEL_115;
    v56 = v45[1];
    if ( v40[1] != v56 )
      goto LABEL_115;
    v57 = v56;
    v58 = RtlCompareMemory(v40, v45, v56);
    v24 = v87;
    if ( v58 != v57 )
    {
      v45 = v86;
LABEL_115:
      v13 |= 0x20u;
      v14 &= ~0x20u;
LABEL_116:
      v43 = v100;
LABEL_134:
      v47 = v103;
LABEL_135:
      v59 = v102;
      goto LABEL_136;
    }
    v59 = v102 - 1;
    v43 = v100;
    v47 = v103;
    v60 = v102-- != 1;
    v45 = (_WORD *)(((unsigned __int64)v86 + v57) & -(__int64)v60);
    v86 = v45;
LABEL_136:
    v40 = (_WORD *)((char *)v40 + (unsigned __int16)v40[1]);
    v64 = *(unsigned __int16 *)(v24 + 4);
    ++v92;
  }
  while ( v92 < v64 && v14 );
  v25 = a9;
  v21 = a13;
  if ( v43 )
    v13 |= v14 & 8;
  if ( v59 )
    v13 |= v14 & 0x20;
  if ( v47 )
    v13 |= v14 & 0x40;
  v19 = a10;
  if ( v88 )
  {
    v65 = v14 & 0x10;
    goto LABEL_152;
  }
LABEL_28:
  if ( v25 )
  {
    v66 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v68 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v67 = *(unsigned int *)(v21 + 4);
          v68 = (_DWORD)v67 ? v21 + v67 : 0LL;
        }
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v70 = *(_QWORD *)(v25 + 8);
        }
        else
        {
          v69 = *(unsigned int *)(v25 + 4);
          v70 = (_DWORD)v69 ? v25 + v69 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v70, v68) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v72 = *(_QWORD *)(v21 + 16);
        }
        else
        {
          v71 = *(unsigned int *)(v21 + 8);
          v72 = (_DWORD)v71 ? v21 + v71 : 0LL;
        }
        if ( *(__int16 *)(v25 + 2) >= 0 )
        {
          v74 = *(_QWORD *)(v25 + 16);
        }
        else
        {
          v73 = *(unsigned int *)(v25 + 8);
          v74 = (_DWORD)v73 ? v25 + v73 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v74, v72) )
          v13 |= 2u;
      }
    }
    if ( (v66 & 0x40000) != 0 )
    {
      v75 = *(_WORD *)(v21 + 2);
      if ( (v75 & 4) == 0 )
        goto LABEL_185;
      if ( v75 >= 0 )
      {
        v77 = *(_QWORD *)(v21 + 32);
      }
      else
      {
        v76 = *(unsigned int *)(v21 + 16);
        if ( (_DWORD)v76 )
        {
          v77 = v21 + v76;
          goto LABEL_187;
        }
LABEL_185:
        v77 = 0LL;
      }
LABEL_187:
      v78 = *(_WORD *)(v25 + 2);
      if ( (v78 & 4) == 0 )
        goto LABEL_191;
      if ( v78 >= 0 )
      {
        v80 = *(_QWORD *)(v25 + 32);
        goto LABEL_193;
      }
      v79 = *(unsigned int *)(v25 + 16);
      if ( (_DWORD)v79 )
        v80 = v25 + v79;
      else
LABEL_191:
        v80 = 0LL;
LABEL_193:
      if ( !(unsigned __int8)SepIsAclEqual(v80, v77) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v81 = v98;
LABEL_201:
      v82 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
      {
        v85 = v19;
        v83 = (int)v91;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v91,
          v81,
          a5,
          v82,
          v85,
          8,
          v21);
      }
      else
      {
        v83 = (int)v91;
      }
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v81,
          a5,
          v82,
          a11,
          32,
          v21);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v81,
          a5,
          v82,
          a12,
          64,
          v21);
      v84 = v13 & 0xFFFFFF97;
      if ( v84 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v83,
          v81,
          a5,
          v82,
          v25,
          v84,
          v21);
      goto LABEL_210;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v81 = v98;
      if ( P )
        v81 = (int)P;
      goto LABEL_201;
    }
LABEL_210:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v95[0] )
      ExFreePoolWithTag(v95[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
