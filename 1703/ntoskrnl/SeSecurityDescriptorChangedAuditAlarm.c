/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8
 * Callers:
 *     NtSetSecurityObject @ 0x14046AB40 (NtSetSecurityObject.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     SeMaximumAuditMask @ 0x14024687C (SeMaximumAuditMask.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406F3C50 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1406F43D8 (SepQueryTypeString.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406F9340 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1406FA4E8 (SepIsAclEqual.c)
 *     SepIsSidEqual @ 0x1406FA568 (SepIsSidEqual.c)
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
  __int64 v17; // rdx
  PACCESS_TOKEN PrimaryToken; // rcx
  __int64 v19; // rdx
  char v20; // r15
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _WORD *v36; // r12
  __int16 v37; // ax
  char *v38; // r13
  __int16 v39; // r11
  unsigned __int16 v40; // ax
  _WORD *v41; // r10
  __int16 v42; // ax
  __int16 v43; // r8
  _WORD *v44; // r15
  unsigned int v45; // esi
  _WORD *v46; // r14
  unsigned __int16 v47; // ax
  __int64 v48; // rsi
  SIZE_T v49; // rax
  bool v50; // zf
  __int16 v51; // cx
  int v52; // edx
  unsigned __int16 v53; // ax
  __int64 v54; // rsi
  SIZE_T v55; // rax
  unsigned __int16 v56; // ax
  __int64 v57; // rsi
  SIZE_T v58; // rax
  unsigned __int16 v59; // ax
  __int64 v60; // rsi
  SIZE_T v61; // rax
  int v62; // edi
  ACCESS_MASK v63; // edi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  int v76; // r13d
  __int64 v77; // rdi
  int v78; // r12d
  unsigned int v79; // ebx
  __int64 v80; // [rsp+38h] [rbp-B9h]
  __int64 v81; // [rsp+58h] [rbp-99h]
  _WORD *v82; // [rsp+60h] [rbp-91h]
  __int64 v83; // [rsp+68h] [rbp-89h]
  ACCESS_MASK AuditMask; // [rsp+70h] [rbp-81h] BYREF
  int TypeString; // [rsp+74h] [rbp-7Dh]
  UNICODE_STRING *v86; // [rsp+78h] [rbp-79h]
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-71h]
  PVOID P; // [rsp+88h] [rbp-69h] BYREF
  PVOID v89[2]; // [rsp+90h] [rbp-61h] BYREF
  void *Source2; // [rsp+A0h] [rbp-51h]
  void *v91; // [rsp+A8h] [rbp-49h]
  __int64 v92; // [rsp+B0h] [rbp-41h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-39h] BYREF
  __int16 v94; // [rsp+138h] [rbp+47h]
  __int16 v96; // [rsp+150h] [rbp+5Fh]
  __int16 v97; // [rsp+160h] [rbp+6Fh]

  v13 = 0;
  AuditMask = 0;
  P = 0LL;
  v14 = 0;
  v89[0] = 0LL;
  v15 = 0LL;
  v92 = 0LL;
  v86 = 0LL;
  TypeString = 0;
  v81 = 0LL;
  v82 = 0LL;
  v94 = 0;
  v91 = 0LL;
  v97 = 0;
  Source2 = 0LL;
  v96 = 0;
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
  LOBYTE(v17) = 1;
  v20 = SepAdtAuditThisEventWithContext(141LL, v17, 0LL, &SubjectContext);
  if ( v20 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    LOBYTE(v19) = 1;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(139LL, v19, 0LL, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v20 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( !a3 || !a3->Length )
  {
    if ( !a2 )
    {
      a3 = 0LL;
      goto LABEL_9;
    }
    TypeString = SepQueryTypeString(a2, v89);
    if ( TypeString < 0 )
      goto LABEL_218;
    a3 = 0LL;
    if ( v89[0] )
      a3 = (UNICODE_STRING *)v89[0];
  }
  v86 = a3;
LABEL_9:
  v21 = a10;
  v22 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) == 0 )
    goto LABEL_10;
  if ( (~(unsigned __int8)*(_WORD *)(a10 + 2) & 0x10) != 0 )
    goto LABEL_66;
  if ( *(__int16 *)(a10 + 2) >= 0 )
  {
    v33 = *(_QWORD *)(a10 + 24);
    goto LABEL_68;
  }
  v32 = *(unsigned int *)(a10 + 12);
  if ( !(_DWORD)v32 )
LABEL_66:
    v33 = 0LL;
  else
    v33 = a10 + v32;
LABEL_68:
  SeMaximumAuditMask(v33, v22, (__int64)Token, &AuditMask);
  SeMaximumAuditMaskFromGlobalSacl(a3, v22, Token, &AuditMask);
  if ( (AuditMask & 0x80000) != 0 && v20 )
    v14 |= a8 & 0x10;
LABEL_10:
  v23 = a13;
  if ( (~(unsigned __int8)*(_WORD *)(a13 + 2) & 0x10) != 0 )
  {
LABEL_50:
    v25 = 0LL;
    goto LABEL_14;
  }
  if ( *(__int16 *)(a13 + 2) < 0 )
  {
    v24 = *(unsigned int *)(a13 + 12);
    if ( (_DWORD)v24 )
    {
      v25 = a13 + v24;
      goto LABEL_14;
    }
    goto LABEL_50;
  }
  v25 = *(_QWORD *)(a13 + 24);
LABEL_14:
  v83 = v25;
  if ( !a10 )
    goto LABEL_15;
  if ( (~(unsigned __int8)*(_WORD *)(a10 + 2) & 0x10) != 0 )
  {
LABEL_47:
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( *(__int16 *)(a10 + 2) < 0 )
  {
    v31 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v31 )
    {
      v15 = a10 + v31;
      goto LABEL_15;
    }
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(a10 + 24);
LABEL_15:
  v26 = a9;
  if ( !a9 )
  {
    v27 = 0LL;
    goto LABEL_17;
  }
  if ( (~(unsigned __int8)*(_WORD *)(a9 + 2) & 0x10) != 0 )
  {
LABEL_77:
    v27 = 0LL;
    goto LABEL_17;
  }
  if ( *(__int16 *)(a9 + 2) < 0 )
  {
    v34 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v34 )
    {
      v27 = a9 + v34;
      goto LABEL_17;
    }
    goto LABEL_77;
  }
  v27 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( a11 )
  {
    if ( (~(unsigned __int8)*(_WORD *)(a11 + 2) & 0x10) != 0 )
    {
LABEL_19:
      v28 = 0LL;
      goto LABEL_20;
    }
    if ( *(__int16 *)(a11 + 2) >= 0 )
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
  if ( (~(unsigned __int8)*(_WORD *)(a12 + 2) & 0x10) != 0 )
  {
LABEL_84:
    v29 = 0LL;
    goto LABEL_22;
  }
  if ( *(__int16 *)(a12 + 2) < 0 )
  {
    v35 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v35 )
    {
      v29 = a12 + v35;
      goto LABEL_22;
    }
    goto LABEL_84;
  }
  v29 = *(_QWORD *)(a12 + 24);
LABEL_22:
  if ( !v25 || !*(_WORD *)(v25 + 4) )
  {
    if ( v15 && *(_WORD *)(v15 + 4) )
      v13 = v14 & 8;
    if ( v27 && *(_WORD *)(v27 + 4) )
      v13 |= v14 & 0x10;
    if ( v28 && *(_WORD *)(v28 + 4) )
      v13 |= v14 & 0x20;
    if ( v29 && *(_WORD *)(v29 + 4) )
    {
      v62 = v14 & 0x40;
LABEL_160:
      v13 |= v62;
    }
    goto LABEL_28;
  }
  if ( !v14 )
    goto LABEL_28;
  v36 = (_WORD *)(v25 + 8);
  if ( v15 && (v37 = *(_WORD *)(v15 + 4)) != 0 )
  {
    v38 = (char *)(v15 + 8);
    v94 = v37;
    v39 = v37;
  }
  else
  {
    v39 = 0;
    v38 = 0LL;
  }
  if ( v27 && (v40 = *(_WORD *)(v27 + 4)) != 0 )
  {
    v41 = (_WORD *)(v27 + 8);
    v82 = (_WORD *)(v27 + 8);
    LODWORD(v81) = v40;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v28 && (v42 = *(_WORD *)(v28 + 4)) != 0 )
  {
    v97 = *(_WORD *)(v28 + 4);
    v91 = (void *)(v28 + 8);
    v43 = v42;
  }
  else
  {
    v43 = 0;
  }
  if ( v29 && *(_WORD *)(v29 + 4) )
  {
    v96 = *(_WORD *)(v29 + 4);
    Source2 = (void *)(v29 + 8);
  }
  v44 = Source2;
  v45 = 0;
  v46 = v91;
  do
  {
    switch ( *(_BYTE *)v36 )
    {
      case 0x11:
        if ( (v14 & 0x10) == 0 )
          goto LABEL_143;
        if ( !v41 )
          goto LABEL_141;
        v59 = v41[1];
        if ( v36[1] != v59 )
          goto LABEL_141;
        v60 = v59;
        v61 = RtlCompareMemory(v36, v41, v59);
        v25 = v83;
        if ( v61 != v60 )
        {
          v41 = v82;
LABEL_141:
          v13 |= 0x10u;
          v14 &= ~0x10u;
LABEL_142:
          v45 = HIDWORD(v81);
          v43 = v97;
          v39 = v94;
LABEL_143:
          v52 = v81;
          v51 = v96;
          goto LABEL_144;
        }
        v39 = v94;
        v50 = (_DWORD)v81 == 1;
        v52 = v81 - 1;
        v43 = v97;
        v51 = v96;
        LODWORD(v81) = v81 - 1;
        if ( v50 )
          v41 = 0LL;
        else
          v41 = (_WORD *)((char *)v82 + v60);
        v82 = v41;
        break;
      case 0x12:
        if ( (v14 & 0x20) == 0 )
          goto LABEL_143;
        if ( !v46
          || (v56 = v46[1], v36[1] != v56)
          || (v57 = v56, v58 = RtlCompareMemory(v36, v46, v56), v25 = v83, v58 != v57) )
        {
          v13 |= 0x20u;
          v14 &= ~0x20u;
          goto LABEL_117;
        }
        v41 = v82;
        v50 = v97 == 1;
        v43 = v97 - 1;
        v39 = v94;
        v51 = v96;
        v52 = v81;
        --v97;
        if ( v50 )
          v46 = 0LL;
        else
          v46 = (_WORD *)((char *)v46 + v57);
        break;
      case 0x13:
        if ( (v14 & 0x40) == 0 )
          goto LABEL_143;
        if ( !v44
          || (v53 = v44[1], v36[1] != v53)
          || (v54 = v53, v55 = RtlCompareMemory(v36, v44, v53), v25 = v83, v55 != v54) )
        {
          v13 |= 0x40u;
          v14 &= ~0x40u;
          goto LABEL_117;
        }
        v41 = v82;
        v50 = v96 == 1;
        v51 = v96 - 1;
        v39 = v94;
        v43 = v97;
        v52 = v81;
        --v96;
        if ( v50 )
          v44 = 0LL;
        else
          v44 = (_WORD *)((char *)v44 + v54);
        break;
      default:
        if ( (v14 & 8) == 0 )
          goto LABEL_143;
        if ( !v38
          || *v38 != *(_BYTE *)v36
          || (v47 = *((_WORD *)v38 + 1), v36[1] != v47)
          || (v48 = v47, v49 = RtlCompareMemory(v36, v38, v47), v25 = v83, v49 != v48) )
        {
          v13 |= 8u;
          v14 &= ~8u;
LABEL_117:
          v41 = v82;
          goto LABEL_142;
        }
        v41 = v82;
        v50 = v94 == 1;
        v39 = v94 - 1;
        v43 = v97;
        v51 = v96;
        v52 = v81;
        --v94;
        if ( v50 )
          v38 = 0LL;
        else
          v38 += v48;
        break;
    }
    v45 = HIDWORD(v81);
LABEL_144:
    ++v45;
    v36 = (_WORD *)((char *)v36 + (unsigned __int16)v36[1]);
    HIDWORD(v81) = v45;
  }
  while ( v45 < *(unsigned __int16 *)(v25 + 4) && v14 );
  v26 = a9;
  v23 = a13;
  if ( v39 )
    v13 |= v14 & 8;
  if ( v43 )
    v13 |= v14 & 0x20;
  if ( v51 )
    v13 |= v14 & 0x40;
  v21 = a10;
  if ( v52 )
  {
    v62 = v14 & 0x10;
    goto LABEL_160;
  }
LABEL_28:
  if ( v26 )
  {
    v63 = AuditMask;
    if ( (AuditMask & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v65 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v64 = *(unsigned int *)(v23 + 4);
          v65 = (_DWORD)v64 ? v23 + v64 : 0LL;
        }
        if ( *(__int16 *)(v26 + 2) >= 0 )
        {
          v67 = *(_QWORD *)(v26 + 8);
        }
        else
        {
          v66 = *(unsigned int *)(v26 + 4);
          v67 = (_DWORD)v66 ? v26 + v66 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v67, v65) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v23 + 2) >= 0 )
        {
          v69 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v68 = *(unsigned int *)(v23 + 8);
          v69 = (_DWORD)v68 ? v23 + v68 : 0LL;
        }
        if ( *(__int16 *)(v26 + 2) >= 0 )
        {
          v71 = *(_QWORD *)(v26 + 16);
        }
        else
        {
          v70 = *(unsigned int *)(v26 + 8);
          v71 = (_DWORD)v70 ? v26 + v70 : 0LL;
        }
        if ( !(unsigned __int8)SepIsSidEqual(v71, v69) )
          v13 |= 2u;
      }
    }
    if ( (v63 & 0x40000) != 0 )
    {
      if ( (~(unsigned __int8)*(_WORD *)(v23 + 2) & 4) != 0 )
        goto LABEL_193;
      if ( *(__int16 *)(v23 + 2) >= 0 )
      {
        v73 = *(_QWORD *)(v23 + 32);
      }
      else
      {
        v72 = *(unsigned int *)(v23 + 16);
        if ( (_DWORD)v72 )
        {
          v73 = v23 + v72;
          goto LABEL_195;
        }
LABEL_193:
        v73 = 0LL;
      }
LABEL_195:
      if ( (~(unsigned __int8)*(_WORD *)(v26 + 2) & 4) != 0 )
        goto LABEL_199;
      if ( *(__int16 *)(v26 + 2) >= 0 )
      {
        v75 = *(_QWORD *)(v26 + 32);
        goto LABEL_201;
      }
      v74 = *(unsigned int *)(v26 + 16);
      if ( !(_DWORD)v74 )
LABEL_199:
        v75 = 0LL;
      else
        v75 = v26 + v74;
LABEL_201:
      if ( !(unsigned __int8)SepIsAclEqual(v75, v73) )
        v13 |= 4u;
    }
  }
  if ( v13 )
  {
    if ( !a2 )
    {
      v76 = v92;
LABEL_209:
      v77 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
      {
        v80 = v21;
        v78 = (int)v86;
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          (_DWORD)v86,
          v76,
          a5,
          v77,
          v80,
          8,
          v23);
      }
      else
      {
        v78 = (int)v86;
      }
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          a11,
          32,
          v23);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          a12,
          64,
          v23);
      v79 = v13 & 0xFFFFFF97;
      if ( v79 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          v78,
          v76,
          a5,
          v77,
          v26,
          v79,
          v23);
      goto LABEL_218;
    }
    TypeString = SepQueryNameString(a2, &P);
    if ( TypeString >= 0 )
    {
      v76 = v92;
      if ( P )
        v76 = (int)P;
      goto LABEL_209;
    }
LABEL_218:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v89[0] )
      ExFreePoolWithTag(v89[0], 0);
  }
  if ( TypeString < 0 )
    SepAuditFailed((unsigned int)TypeString);
  SeReleaseSubjectContext(&SubjectContext);
}
