/*
 * XREFs of RtlpSetSecurityObject @ 0x140485700
 * Callers:
 *     SeSetSecurityDescriptorInfo @ 0x1404855E0 (SeSetSecurityDescriptorInfo.c)
 *     SeSetSecurityDescriptorInfoEx @ 0x140730100 (SeSetSecurityDescriptorInfoEx.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140019110 (RtlFindAceBySid.c)
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140087894 (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x140155864 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x1404BE910 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x1404BEE60 (RtlpCombineAcls.c)
 *     SepValidLabelSubjectContext @ 0x1405395EC (SepValidLabelSubjectContext.c)
 *     RtlInitializeSid @ 0x1405491E0 (RtlInitializeSid.c)
 *     SepValidOwnerSubjectContext @ 0x14057ED30 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140721F4C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140722370 (RtlpCreateServerAcl.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140722C44 (RtlpValidFilterAclSubjectContext.c)
 *     SepGetDefaultsSubjectContext @ 0x14072C780 (SepGetDefaultsSubjectContext.c)
 */

__int64 __fastcall RtlpSetSecurityObject(__int64 a1, int a2, __int64 a3, _QWORD *a4, char a5, int a6, __int64 a7)
{
  BOOL v7; // r13d
  char v8; // r10
  _QWORD *v9; // rsi
  __int16 v11; // r8
  __int16 v12; // r14
  unsigned __int16 *v14; // rdi
  void *v15; // r11
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rdx
  ACL *v19; // r15
  bool v20; // dl
  unsigned int v21; // eax
  unsigned __int8 *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int8 *v25; // r12
  void *v26; // r15
  __int16 v27; // cx
  unsigned __int16 *v28; // r15
  __int16 v29; // ax
  unsigned int v30; // r13d
  int v31; // ecx
  unsigned int v32; // esi
  unsigned int v33; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v35; // rbx
  char *v36; // rdi
  bool v37; // zf
  __int16 v38; // ax
  __int16 v39; // cx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // r14
  char *v43; // rdi
  int ServerAcl; // esi
  void *v45; // r12
  void *v46; // r14
  void *v47; // rbx
  __int64 v49; // rax
  char *v50; // rax
  void *TokenTrustLevel; // rcx
  char v52; // dl
  int v53; // r11d
  void *v54; // r10
  __int64 v55; // r8
  __int16 v56; // r14
  __int64 v57; // r9
  void *v58; // rdx
  __int16 v59; // ax
  __int16 v60; // cx
  __int16 v61; // ax
  __int64 v62; // rax
  __int64 v63; // rax
  __int16 v64; // cx
  __int64 v65; // rcx
  unsigned int v66; // ecx
  __int16 v67; // ax
  __int64 v68; // rax
  unsigned int v69; // eax
  __int16 v70; // cx
  __int16 v71; // ax
  __int16 v72; // cx
  __int16 v73; // bx
  __int16 v74; // ax
  _DWORD *AceByType; // rax
  __int64 v76; // r8
  unsigned int v77; // ecx
  __int16 v78; // ax
  unsigned int v79; // ecx
  __int16 v80; // ax
  unsigned int v81; // ecx
  __int16 v82; // ax
  __int16 v83; // r9
  __int64 v84; // r8
  int v85; // eax
  __int64 v86; // rax
  __int16 v87; // dx
  __int64 v88; // rcx
  int v89; // ecx
  NTSTATUS v90; // eax
  __int16 v91; // ax
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int8 *AceBySid; // rax
  unsigned __int8 v95; // cl
  __int16 v96; // [rsp+50h] [rbp-B0h]
  ULONG Index; // [rsp+54h] [rbp-ACh] BYREF
  bool v98; // [rsp+58h] [rbp-A8h]
  bool v99; // [rsp+59h] [rbp-A7h]
  unsigned __int8 v100; // [rsp+5Ah] [rbp-A6h]
  bool v101; // [rsp+5Bh] [rbp-A5h]
  char v102; // [rsp+5Ch] [rbp-A4h]
  char v103; // [rsp+5Dh] [rbp-A3h]
  char v104; // [rsp+5Eh] [rbp-A2h]
  char v105; // [rsp+5Fh] [rbp-A1h]
  char v106; // [rsp+60h] [rbp-A0h]
  char v107; // [rsp+61h] [rbp-9Fh]
  char v108; // [rsp+62h] [rbp-9Eh]
  char v109; // [rsp+63h] [rbp-9Dh]
  char v110; // [rsp+64h] [rbp-9Ch]
  char v111[3]; // [rsp+65h] [rbp-9Bh] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  PVOID v113; // [rsp+70h] [rbp-90h]
  __int64 v114; // [rsp+78h] [rbp-88h]
  PVOID v115; // [rsp+80h] [rbp-80h]
  PVOID v116; // [rsp+88h] [rbp-78h]
  _SID_IDENTIFIER_AUTHORITY PoolType; // [rsp+90h] [rbp-70h] BYREF
  PVOID v118; // [rsp+98h] [rbp-68h]
  PVOID v119; // [rsp+A0h] [rbp-60h]
  _QWORD *v120; // [rsp+A8h] [rbp-58h]
  char *v121; // [rsp+B0h] [rbp-50h] BYREF
  BOOL v122; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  size_t Size; // [rsp+C8h] [rbp-38h] BYREF
  void *v125; // [rsp+D0h] [rbp-30h]
  __int64 v126; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v128; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v130; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v131; // [rsp+100h] [rbp+0h]
  int v132; // [rsp+108h] [rbp+8h]
  PVOID v133; // [rsp+110h] [rbp+10h] BYREF
  PVOID v134; // [rsp+118h] [rbp+18h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp+20h] BYREF

  v8 = 0;
  v9 = a4;
  v120 = a4;
  LOBYTE(v7) = 0;
  v114 = a3;
  *(_DWORD *)PoolType.Value = a6;
  v11 = *(_WORD *)(a3 + 2);
  v103 = 0;
  v102 = 0;
  v12 = 0x8000;
  v111[0] = 0;
  v104 = 0;
  v14 = 0LL;
  v110 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v133 = 0LL;
  P = 0LL;
  v113 = 0LL;
  v126 = 0LL;
  v119 = 0LL;
  v128 = 0LL;
  v116 = 0LL;
  v127 = 0LL;
  v115 = 0LL;
  v129 = 0LL;
  v118 = 0LL;
  v130 = 0LL;
  v121 = 0LL;
  v100 = 0;
  v99 = 0;
  v122 = v7;
  v96 = 0x8000;
  v134 = 0LL;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v15 = *(void **)(a3 + 24);
    }
    else
    {
      v62 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v62 )
        v15 = (void *)(a3 + v62);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *a4;
  Src = v15;
  v17 = *(_WORD *)(v16 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    if ( v17 >= 0 )
    {
      v19 = *(ACL **)(v16 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v16 + 12);
      if ( (_DWORD)v18 )
        v19 = (ACL *)(v16 + v18);
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17 >= 0 )
    return (unsigned int)-1073741593;
  v98 = (v11 & 0x80u) != 0;
  v101 = (v11 & 0x40) != 0;
  if ( (a2 & 0x80u) != 0 )
    v8 = 1;
  v20 = (a2 & 0x100) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v73 = a2 | 0x1FF;
    v74 = v73 & 0xFF7F;
    if ( v8 )
      v74 = v73;
    LOWORD(a2) = v74 & 0xFEFF;
    if ( v20 )
      LOWORD(a2) = v74;
    if ( !v19 && !v15 )
    {
      LOWORD(a2) = a2 & 0xFE07;
      if ( (v11 & 0x10) != 0 )
        LOWORD(a2) = a2 | 8;
      else
        v122 = (v11 & 0x800) != 0;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v99 = (a2 & 4) == 0;
    if ( v11 >= 0 )
    {
      v22 = *(unsigned __int8 **)(a3 + 8);
    }
    else
    {
      v68 = *(unsigned int *)(a3 + 4);
      if ( (_DWORD)v68 )
        v22 = (unsigned __int8 *)(a3 + v68);
      else
        v22 = 0LL;
    }
    v125 = v22;
    v102 = 1;
    if ( (a5 & 8) == 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      if ( !(unsigned __int8)SepValidOwnerSubjectContext(&SubjectContext, v22, v98) )
      {
        SeReleaseSubjectContext(&SubjectContext);
        return (unsigned int)-1073741734;
      }
      SeReleaseSubjectContext(&SubjectContext);
    }
  }
  else
  {
    v21 = *(_DWORD *)(v16 + 4);
    if ( !v21 )
      return (unsigned int)-1073741734;
    v22 = (unsigned __int8 *)(v16 + v21);
    v125 = v22;
    if ( !v22 )
      return (unsigned int)-1073741734;
  }
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v25 = *(unsigned __int8 **)(a3 + 16);
    }
    else
    {
      v69 = *(_DWORD *)(a3 + 8);
      if ( v69 )
        v25 = (unsigned __int8 *)(v114 + v69);
      else
        v25 = 0LL;
    }
    v103 = 1;
  }
  else
  {
    v23 = *v9;
    if ( *(__int16 *)(*v9 + 2LL) >= 0 )
    {
      v25 = *(unsigned __int8 **)(v23 + 16);
    }
    else
    {
      v24 = *(unsigned int *)(v23 + 8);
      if ( !(_DWORD)v24 )
        return (unsigned int)-1073741733;
      v25 = (unsigned __int8 *)(v23 + v24);
    }
  }
  if ( !v25 || !RtlValidSid(v25) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v14 = (unsigned __int16 *)v19;
    Src = v19;
    v26 = v119;
LABEL_23:
    if ( (a2 & 4) == 0 )
    {
      v63 = *v9;
      v64 = *(_WORD *)(*v9 + 2LL);
      if ( (v64 & 4) != 0 )
      {
        if ( v64 >= 0 )
        {
          v28 = *(unsigned __int16 **)(v63 + 32);
        }
        else
        {
          v65 = *(unsigned int *)(v63 + 16);
          if ( (_DWORD)v65 )
            v28 = (unsigned __int16 *)(v63 + v65);
          else
            v28 = 0LL;
        }
      }
      else
      {
        v28 = 0LL;
      }
      goto LABEL_31;
    }
    if ( (a5 & 1) == 0 )
    {
      v27 = *(_WORD *)(v114 + 2);
      if ( (v27 & 4) != 0 )
      {
        if ( v27 < 0 )
        {
          v49 = *(unsigned int *)(v114 + 16);
          if ( (_DWORD)v49 )
            v28 = (unsigned __int16 *)(v114 + v49);
          else
            v28 = 0LL;
        }
        else
        {
          v28 = *(unsigned __int16 **)(v114 + 32);
        }
      }
      else
      {
        v28 = 0LL;
      }
      v29 = v12 | v27 & 0x1000;
      v96 = v29 | 4;
      if ( (v27 & 0x500) == 0x500 )
        v96 = v29 | 0x404;
LABEL_30:
      if ( v98 )
      {
        SeCaptureSubjectContext(&SubjectContext);
        SepGetDefaultsSubjectContext(
          (unsigned int)&SubjectContext,
          (unsigned int)&Size,
          (unsigned int)&v126,
          (unsigned int)&P,
          (__int64)&v127,
          (__int64)&v128,
          (__int64)&v129,
          (__int64)&v130);
        ServerAcl = RtlpCreateServerAcl((_DWORD)v28, v101, (_DWORD)P, (unsigned int)&v134, (__int64)v111);
        SeReleaseSubjectContext(&SubjectContext);
        if ( ServerAcl < 0 )
          goto LABEL_57;
        v28 = (unsigned __int16 *)v134;
      }
LABEL_31:
      v30 = 4 * v22[1] + 8;
      v31 = 4 * v25[1] + 8;
      LODWORD(Size) = v31;
      if ( v14 )
        v32 = (v14[1] + 3) & 0xFFFFFFFC;
      else
        v32 = 0;
      if ( v28 )
        v33 = (v28[1] + 3) & 0xFFFFFFFC;
      else
        v33 = 0;
      PoolWithTag = ExAllocatePoolWithTag(*(POOL_TYPE *)PoolType.Value, v30 + v31 + 20 + v33 + v32, 0x64536553u);
      v35 = PoolWithTag;
      if ( PoolWithTag )
      {
        v36 = (char *)PoolWithTag + 20;
        v37 = !v122;
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        *((_DWORD *)PoolWithTag + 4) = 0;
        v38 = v96;
        *(_BYTE *)v35 = 1;
        if ( !v37 )
          v38 = v96 | 0x800;
        *((_WORD *)v35 + 1) |= v38;
        v39 = *((_WORD *)v35 + 1);
        if ( (*(_WORD *)(v114 + 2) & 0x4000) != 0 )
        {
          *((_BYTE *)v35 + 1) = *(_BYTE *)(v114 + 1);
          *((_WORD *)v35 + 1) = v39 | 0x4000;
        }
        if ( Src )
        {
          memmove((char *)v35 + 20, Src, *((unsigned __int16 *)Src + 1));
          RtlpApplyAclToObject((char *)v35 + 20, a7);
          *((_DWORD *)v35 + 3) = (_DWORD)v36 - (_DWORD)v35;
          v40 = *((unsigned __int16 *)Src + 1);
          if ( v32 > (unsigned int)v40 )
            memset(&v36[v40], 0, v32 - (unsigned int)v40);
          v36 += v32;
        }
        else
        {
          *((_DWORD *)v35 + 3) = 0;
        }
        if ( (v96 & 0x10) == 0 )
          *((_WORD *)v35 + 1) |= *(_WORD *)(*v120 + 2LL) & 0x2830;
        if ( v28 )
        {
          memmove(v36, v28, v28[1]);
          RtlpApplyAclToObject(v36, a7);
          *((_DWORD *)v35 + 4) = (_DWORD)v36 - (_DWORD)v35;
          v41 = v28[1];
          if ( v33 > (unsigned int)v41 )
            memset(&v36[v41], 0, v33 - (unsigned int)v41);
          v36 += v33;
        }
        else
        {
          *((_DWORD *)v35 + 4) = 0;
        }
        v42 = v120;
        if ( (v96 & 4) == 0 )
        {
          *((_WORD *)v35 + 1) |= *(_WORD *)(*v120 + 2LL) & 0x140C;
          if ( v99 )
          {
            *(_DWORD *)PoolType.Value = 0;
            *(_WORD *)&PoolType.Value[4] = 768;
            v90 = RtlInitializeSid(&SubjectContext, &PoolType, 1u);
            ServerAcl = v90;
            if ( v90 < 0 )
            {
LABEL_56:
              v14 = (unsigned __int16 *)Src;
              goto LABEL_57;
            }
            SubjectContext.ImpersonationLevel = 4;
            Index = 0;
            while ( 1 )
            {
              v91 = *((_WORD *)v35 + 1);
              if ( (v91 & 4) != 0 )
              {
                if ( v91 >= 0 )
                {
                  v92 = v35[4];
                }
                else
                {
                  v93 = *((unsigned int *)v35 + 4);
                  v92 = (_DWORD)v93 ? (__int64)v35 + v93 : 0LL;
                }
              }
              else
              {
                v92 = 0LL;
              }
              AceBySid = RtlFindAceBySid(v92, &SubjectContext, &Index);
              if ( !AceBySid )
                break;
              v95 = AceBySid[1] & 0xF4 | 8;
              ++Index;
              AceBySid[1] = v95;
            }
          }
        }
        memmove(v36, v125, v30);
        *((_DWORD *)v35 + 1) = (_DWORD)v36 - (_DWORD)v35;
        v43 = &v36[v30];
        if ( !v102 )
          *((_WORD *)v35 + 1) |= *(_WORD *)(*v42 + 2LL) & 1;
        memmove(v43, v25, (unsigned int)Size);
        v37 = v103 == 0;
        *((_DWORD *)v35 + 2) = (_DWORD)v43 - (_DWORD)v35;
        if ( v37 )
          *((_WORD *)v35 + 1) |= *(_WORD *)(*v42 + 2LL) & 2;
        *v42 = v35;
        ServerAcl = 0;
        goto LABEL_56;
      }
      ServerAcl = -1073741801;
LABEL_57:
      if ( v104 )
        ExFreePoolWithTag(v133, 0);
      goto LABEL_59;
    }
    v83 = *(_WORD *)(v114 + 2);
    if ( (v83 & 4) != 0 )
    {
      if ( v83 >= 0 )
      {
        v84 = *(_QWORD *)(v114 + 32);
      }
      else
      {
        v85 = *(_DWORD *)(v114 + 16);
        if ( v85 )
          LODWORD(v84) = v114 + v85;
        else
          LODWORD(v84) = 0;
      }
    }
    else
    {
      LODWORD(v84) = 0;
    }
    v86 = *v9;
    v87 = *(_WORD *)(*v9 + 2LL);
    if ( (v87 & 4) != 0 )
    {
      if ( v87 >= 0 )
      {
        v88 = *(_QWORD *)(v86 + 32);
      }
      else
      {
        v89 = *(_DWORD *)(v86 + 16);
        if ( v89 )
          LODWORD(v88) = v86 + v89;
        else
          LODWORD(v88) = 0;
      }
    }
    else
    {
      LODWORD(v88) = 0;
    }
    ServerAcl = RtlpComputeMergedAcl(
                  v88,
                  v87 & 0x140C,
                  v84,
                  v83 & 0x140C,
                  (__int64)v22,
                  (__int64)v25,
                  a7,
                  1,
                  (__int64)&v133,
                  (__int64)&Index);
    if ( ServerAcl >= 0 )
    {
      v28 = (unsigned __int16 *)v133;
      v104 = 1;
      v96 = Index & 0x1408 | 4 | v12;
      goto LABEL_30;
    }
LABEL_194:
    v45 = v116;
    goto LABEL_61;
  }
  LODWORD(Size) = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_85:
    SeCaptureSubjectContext(&SubjectContext);
    TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)&SubjectContext);
    v113 = TokenTrustLevel;
    v132 = a2 & 0x80;
    if ( (a2 & 0x80) != 0 )
    {
      if ( TokenTrustLevel )
      {
        Index = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType((PACL)Src, 0x14u, &Index);
          v131 = AceByType;
          if ( AceByType )
          {
            if ( (AceByType[1] & 0xFF000000) != 0 )
            {
              ServerAcl = -1073740730;
              SeReleaseSubjectContext(&SubjectContext);
              return (unsigned int)ServerAcl;
            }
            if ( !RtlpValidTrustSubjectContext(v113, AceByType + 2, v76, (NTSTATUS *)&v121) )
              break;
            AceByType = v131;
          }
          ++Index;
          if ( !AceByType )
            goto LABEL_86;
        }
      }
      ServerAcl = -1073741790;
    }
    else
    {
LABEL_86:
      LODWORD(v121) = a2 & 0x100;
      if ( (a2 & 0x100) == 0 )
        goto LABEL_87;
      ServerAcl = RtlpValidFilterAclSubjectContext((PACL)Src);
      if ( ServerAcl >= 0 )
      {
        if ( (a5 & 2) != 0 || (ServerAcl = RtlpValidFilterAclSubjectContext(v19), ServerAcl >= 0) )
        {
          v9 = v120;
LABEL_87:
          SeReleaseSubjectContext(&SubjectContext);
          v52 = a5;
          LODWORD(v131) = 2560;
          if ( (a2 & 8) != 0 )
          {
            if ( (a5 & 2) == 0 )
            {
              v54 = Src;
              v55 = v114;
              v53 = (int)Src;
              v113 = Src;
              v70 = *(_WORD *)(v114 + 2);
              v71 = v70 & 0xA00;
              v72 = v70 & 0x2000 | 0x8000;
              v12 = v72 | 0x10;
              v96 = v72 | 0x10;
              if ( v71 == 2560 )
              {
                v12 = v72 | 0x810;
                v96 = v72 | 0x810;
              }
LABEL_90:
              if ( (a2 & 0x20) != 0 )
              {
                v66 = *(unsigned __int16 *)(v55 + 2);
                if ( (v52 & 2) == 0 )
                {
                  v116 = v54;
                  v67 = v12 | v66 & 0x2000;
                  v56 = v67 | 0x10;
                  v96 = v67 | 0x10;
                  if ( (v66 & 0xA00) == 0xA00 )
                  {
                    v56 = v67 | 0x810;
                    v96 = v67 | 0x810;
                  }
LABEL_93:
                  if ( (a2 & 0x40) != 0 )
                  {
                    v77 = *(unsigned __int16 *)(v55 + 2);
                    if ( (v52 & 2) != 0 )
                    {
                      ServerAcl = RtlpComputeMergedAcl(
                                    (int)v19,
                                    (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                                    (int)v54,
                                    (v77 & 0x800 | (v77 >> 1) & 0x18) >> 1,
                                    (__int64)v22,
                                    (__int64)v25,
                                    a7,
                                    2,
                                    (__int64)&v128,
                                    (__int64)&Index);
                      if ( ServerAcl < 0 )
                      {
                        v26 = (void *)v128;
                        goto LABEL_194;
                      }
                      v9 = v120;
                      v52 = a5;
                      v55 = v114;
                      v54 = Src;
                      v53 = (int)v113;
                      v56 |= 2 * (Index & 0x1400 | (2 * (Index & 8 | 4)));
                      v107 = 1;
                      v96 = v56;
                      v119 = (PVOID)v128;
                    }
                    else
                    {
                      v119 = v54;
                      v78 = v56 | v77 & 0x2000;
                      v56 = v78 | 0x10;
                      v96 = v78 | 0x10;
                      if ( (v77 & 0xA00) == 0xA00 )
                      {
                        v56 = v78 | 0x810;
                        v96 = v78 | 0x810;
                      }
                    }
                  }
                  else
                  {
                    v119 = v19;
                  }
                  if ( v132 )
                  {
                    v79 = *(unsigned __int16 *)(v55 + 2);
                    if ( (v52 & 2) != 0 )
                    {
                      ServerAcl = RtlpComputeMergedAcl(
                                    (int)v19,
                                    (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                                    (int)v54,
                                    (v79 & 0x800 | (v79 >> 1) & 0x18) >> 1,
                                    (__int64)v22,
                                    (__int64)v25,
                                    a7,
                                    2,
                                    (__int64)&v129,
                                    (__int64)&Index);
                      if ( ServerAcl < 0 )
                      {
                        v46 = (void *)v129;
                        v26 = v119;
                        v45 = v116;
                        goto LABEL_62;
                      }
                      v57 = v129;
                      v9 = v120;
                      v52 = a5;
                      v55 = v114;
                      v54 = Src;
                      v53 = (int)v113;
                      v56 |= 2 * (Index & 0x1400 | (2 * (Index & 8 | 4)));
                      v108 = 1;
                      v96 = v56;
                      v115 = (PVOID)v129;
                    }
                    else
                    {
                      v115 = v54;
                      v80 = v56 | v79 & 0x2000;
                      v57 = (__int64)v54;
                      v56 = v80 | 0x10;
                      v96 = v80 | 0x10;
                      if ( ((unsigned __int16)v131 & (unsigned __int16)v79) == (_WORD)v131 )
                      {
                        v56 = v80 | 0x810;
                        v96 = v80 | 0x810;
                      }
                    }
                  }
                  else
                  {
                    v57 = (__int64)v19;
                    v115 = v19;
                  }
                  if ( (_DWORD)v121 )
                  {
                    v81 = *(unsigned __int16 *)(v55 + 2);
                    if ( (v52 & 2) == 0 )
                    {
                      v82 = v56 | v81 & 0x2000;
                      v58 = v54;
                      v118 = v54;
                      v56 = v82 | 0x10;
                      v96 = v82 | 0x10;
                      if ( (v81 & 0xA00) == 0xA00 )
                      {
                        v56 = v82 | 0x810;
                        v96 = v82 | 0x810;
                      }
                      goto LABEL_100;
                    }
                    ServerAcl = RtlpComputeMergedAcl(
                                  (int)v19,
                                  (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                                  (int)v54,
                                  (v81 & 0x800 | (v81 >> 1) & 0x18) >> 1,
                                  (__int64)v22,
                                  (__int64)v25,
                                  a7,
                                  2,
                                  (__int64)&v130,
                                  (__int64)&Index);
                    if ( ServerAcl < 0 )
                    {
                      v47 = (void *)v130;
                      v46 = v115;
                      v26 = v119;
                      v45 = v116;
LABEL_63:
                      if ( v113 && v105 )
                        ExFreePoolWithTag(v113, 0);
                      if ( v45 && v106 )
                        ExFreePoolWithTag(v45, 0);
                      if ( v26 && v107 )
                        ExFreePoolWithTag(v26, 0);
                      if ( v46 && v108 )
                        ExFreePoolWithTag(v46, 0);
                      if ( v47 && v109 )
                        ExFreePoolWithTag(v47, 0);
                      if ( v14 && v110 )
                        ExFreePoolWithTag(v14, 0);
                      if ( v111[0] )
                        ExFreePoolWithTag(v134, 0);
                      return (unsigned int)ServerAcl;
                    }
                    v58 = (void *)v130;
                    v55 = v114;
                    LODWORD(v54) = (_DWORD)Src;
                    v57 = (__int64)v115;
                    v53 = (int)v113;
                    v109 = 1;
                    v56 |= 2 * (Index & 0x1400 | (2 * (Index & 8 | 4)));
                    v96 = v56;
                  }
                  else
                  {
                    v58 = v19;
                  }
                  v118 = v58;
LABEL_100:
                  if ( (_DWORD)Size )
                  {
                    v59 = *(_WORD *)(v55 + 2);
                    v60 = v59 & 0xA00;
                    v61 = v56 | v59 & 0x2000;
                    v12 = v61 | 0x10;
                    v96 = v61 | 0x10;
                    if ( v60 == 2560 )
                    {
                      v12 = v61 | 0x810;
                      v96 = v61 | 0x810;
                    }
                  }
                  else
                  {
                    v12 = v96;
                    LODWORD(v54) = (_DWORD)v19;
                  }
                  v26 = v119;
                  ServerAcl = RtlpCombineAcls(
                                v53,
                                (_DWORD)v54,
                                (_DWORD)v116,
                                (_DWORD)v119,
                                v57,
                                (__int64)v58,
                                (__int64)&P,
                                0LL);
                  if ( ServerAcl < 0 )
                    goto LABEL_194;
                  v14 = (unsigned __int16 *)P;
                  Src = P;
                  if ( !v113 && P && !*((_WORD *)P + 2) )
                  {
                    ExFreePoolWithTag(P, 0);
                    v14 = 0LL;
                    Src = 0LL;
                  }
                  v9 = v120;
                  v110 = 1;
                  goto LABEL_23;
                }
                ServerAcl = RtlpComputeMergedAcl(
                              (int)v19,
                              (*(_WORD *)(*v9 + 2LL) & 0x800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                              (int)v54,
                              (v66 & 0x800 | (v66 >> 1) & 0x18) >> 1,
                              (__int64)v22,
                              (__int64)v25,
                              a7,
                              2,
                              (__int64)&v127,
                              (__int64)&Index);
                if ( ServerAcl < 0 )
                {
                  v45 = (void *)v127;
                  goto LABEL_60;
                }
                v9 = v120;
                v52 = a5;
                v55 = v114;
                v54 = Src;
                v53 = (int)v113;
                v106 = 1;
                v116 = (PVOID)v127;
                v96 = (2 * (Index & 0x1400 | (2 * (Index & 8 | 4)))) | v12;
              }
              else
              {
                v116 = v19;
              }
              v56 = v96;
              goto LABEL_93;
            }
            ServerAcl = RtlpComputeMergedAcl(
                          (int)v19,
                          (*(_WORD *)(*v9 + 2LL) & 0x2800 | (*(unsigned __int16 *)(*v9 + 2LL) >> 1) & 0x18u) >> 1,
                          (int)Src,
                          (*(_WORD *)(v114 + 2) & 0x2800 | (*(unsigned __int16 *)(v114 + 2) >> 1) & 0x18u) >> 1,
                          (__int64)v22,
                          (__int64)v25,
                          a7,
                          2,
                          (__int64)&v126,
                          (__int64)&Index);
            if ( ServerAcl < 0 )
            {
              v113 = (PVOID)v126;
LABEL_59:
              v45 = v116;
LABEL_60:
              v26 = v119;
LABEL_61:
              v46 = v115;
LABEL_62:
              v47 = v118;
              goto LABEL_63;
            }
            v53 = v126;
            v9 = v120;
            v52 = a5;
            v105 = 1;
            v113 = (PVOID)v126;
            v12 = 2 * (Index & 0x1400 | (2 * (Index & 8 | 0x2004)));
            v96 = v12;
          }
          else
          {
            v53 = (int)v19;
            v113 = v19;
          }
          v54 = Src;
          v55 = v114;
          goto LABEL_90;
        }
      }
    }
    SeReleaseSubjectContext(&SubjectContext);
    return (unsigned int)ServerAcl;
  }
  Index = 0;
  while ( 1 )
  {
    v50 = (char *)RtlFindAceByType((PACL)Src, 0x11u, &Index);
    v113 = v50;
    if ( v50 )
    {
      v37 = (*((_DWORD *)v50 + 1) & 0xFFFFFFF8) == 0;
      v121 = v50 + 8;
      v100 = v50[1];
      if ( !v37 )
        break;
    }
    SeCaptureSubjectContext(&SubjectContext);
    if ( !(unsigned __int8)SepValidLabelSubjectContext(&SubjectContext, v121, v100) )
    {
      SeReleaseSubjectContext(&SubjectContext);
      break;
    }
    SeReleaseSubjectContext(&SubjectContext);
    ++Index;
    if ( !v113 )
      goto LABEL_85;
  }
  return (unsigned int)-1073740730;
}
