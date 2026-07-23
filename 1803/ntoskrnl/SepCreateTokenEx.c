/*
 * XREFs of SepCreateTokenEx @ 0x14009FEE4
 * Callers:
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x140642988 (SepCreateToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14005C860 (RtlSidHashInitialize.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14006310C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObInsertObject @ 0x1404BF190 (ObInsertObject.c)
 *     SepSetTokenTrust @ 0x1404C0758 (SepSetTokenTrust.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     RtlIdentifierAuthoritySid @ 0x140544034 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140544040 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x1405442F0 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x140544808 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x14054491C (SepReferenceLogonSession.c)
 *     ObCreateObject @ 0x140544A50 (ObCreateObject.c)
 *     SeDeleteAccessState @ 0x140544AA0 (SeDeleteAccessState.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405841E4 (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenUserAndGroups @ 0x140792AD8 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140793000 (SepAddTokenLogonSession.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        PSID a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  PSID_AND_ATTRIBUTES v24; // rdi
  __int64 v25; // r12
  ULONG v26; // r13d
  __int64 result; // rax
  PSID Sid; // rsi
  ULONG v29; // ebx
  ULONG v30; // r14d
  __int64 v31; // rax
  BOOLEAN v32; // al
  void *v33; // r11
  bool v34; // r14
  BOOLEAN v35; // al
  int v36; // r10d
  bool v37; // si
  ULONG Attributes; // eax
  int v39; // r9d
  int v40; // r15d
  int v41; // ebx
  _BYTE *v42; // rdi
  PSID_IDENTIFIER_AUTHORITY v43; // rax
  __int64 v44; // rdx
  int v45; // r9d
  int v46; // ecx
  BOOLEAN v47; // al
  void *v48; // rbx
  unsigned __int64 v49; // r10
  void *v50; // rdi
  unsigned int v51; // r9d
  int *v52; // rdx
  unsigned __int64 v53; // r8
  int v54; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v56; // rsi
  _QWORD *v57; // rax
  PVOID v58; // rbx
  struct _ERESOURCE *v59; // r15
  int v60; // ebx
  unsigned __int8 *v61; // rax
  ULONG v62; // r14d
  ULONG v63; // r12d
  ULONG v64; // ecx
  int v65; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v67; // rbx
  char *v68; // rdi
  _QWORD *v69; // rax
  char **v70; // rax
  void *v71; // rax
  PVOID v72; // rax
  char *v73; // r15
  __int64 v74; // rcx
  int v75; // esi
  _SID_AND_ATTRIBUTES *v76; // rdx
  ULONG v77; // r14d
  __int64 v78; // rcx
  char *v79; // rsi
  unsigned __int8 *v80; // r14
  ULONG v81; // ebx
  unsigned __int16 *v82; // rcx
  char *v83; // rsi
  void *v84; // rdx
  void *v85; // rcx
  unsigned __int8 v86; // dl
  int v87; // r8d
  BOOLEAN v88; // al
  unsigned int v89; // ecx
  PVOID v90; // rdi
  void *v91; // rcx
  __int64 v92; // rdx
  _KPROCESS *Process; // rcx
  ULONG v94; // eax
  int v95; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v97; // [rsp+50h] [rbp-B0h]
  char v98; // [rsp+51h] [rbp-AFh] BYREF
  char v99; // [rsp+52h] [rbp-AEh]
  char v100; // [rsp+53h] [rbp-ADh]
  int v101; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  int v103; // [rsp+5Ch] [rbp-A4h]
  int v104; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char **v107; // [rsp+78h] [rbp-88h]
  PSID v108; // [rsp+80h] [rbp-80h]
  unsigned int v109; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID_AND_ATTRIBUTES Src; // [rsp+98h] [rbp-68h]
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  int v113; // [rsp+A8h] [rbp-58h]
  int v114; // [rsp+ACh] [rbp-54h]
  unsigned int v115; // [rsp+B0h] [rbp-50h]
  PSID SidArea; // [rsp+B8h] [rbp-48h] BYREF
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  void *v118; // [rsp+C8h] [rbp-38h]
  void *v119; // [rsp+D0h] [rbp-30h]
  __int64 v120; // [rsp+D8h] [rbp-28h]
  PSID_AND_ATTRIBUTES v121; // [rsp+E0h] [rbp-20h]
  void *v122; // [rsp+E8h] [rbp-18h]
  __int64 v123; // [rsp+F0h] [rbp-10h]
  __int64 v124; // [rsp+F8h] [rbp-8h]
  __int64 v125; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  char v127[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v24 = a9;
  v25 = (__int64)a11;
  v26 = Count;
  v104 = -1;
  v120 = a7;
  v107 = a14;
  Sid1 = a16;
  v122 = a17;
  v125 = a19;
  v124 = a20;
  v115 = a3;
  Handle = a1;
  v123 = a22;
  v105 = a4;
  v100 = a2;
  Src = a9;
  v121 = a11;
  v108 = a15;
  v101 = 0;
  v97 = 0;
  v99 = 0;
  v98 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v98);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v29 = 0;
    if ( Count )
    {
      do
      {
        v30 = v29;
        while ( v30 < v26 )
        {
          if ( !RtlEqualSid(Sid, a11[v30].Sid) || (a11[v30].Attributes & 0x20) != 0 )
            ++v30;
          else
            a11[v30] = a11[--v26];
        }
        v31 = v29++;
        Sid = a11[v31].Sid;
      }
      while ( v29 < v26 );
      v24 = Src;
      Sid = Src->Sid;
    }
    v32 = RtlEqualSid(Sid1, Sid);
    v33 = 0LL;
    v34 = v32 != 0;
    if ( a15 )
    {
      v35 = RtlEqualSid(a15, Sid);
      v33 = 0LL;
      LOBYTE(v36) = 1;
      v37 = v35 != 0;
    }
    else
    {
      LOBYTE(v36) = 1;
      v37 = 1;
    }
    Attributes = v24->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v39 = 2048;
      v101 = 2048;
    }
    else
    {
      v39 = v101;
    }
    v103 = 0;
    if ( v26 )
    {
      v103 = 0;
      v40 = 1;
      while ( 1 )
      {
        v41 = *(_DWORD *)(v25 + 8);
        if ( ((unsigned __int8)v41 & (unsigned __int8)v36) != 0 )
        {
          v41 |= 6u;
          *(_DWORD *)(v25 + 8) = v41;
        }
        if ( (v41 & 0x10) != 0 )
        {
          if ( (v41 & 6) != 0 )
            return 3221225485LL;
          v101 = v39 | 0x800;
        }
        v42 = *(_BYTE **)v25;
        RtlIdentifierAuthoritySid(*(PSID *)v25);
        v43 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v46 = *(_DWORD *)v43->Value - *(_DWORD *)v44;
        if ( *(_DWORD *)v43->Value == *(_DWORD *)v44 )
          v46 = *(unsigned __int16 *)&v43->Value[4] - *(unsigned __int16 *)(v44 + 4);
        if ( !v46 )
        {
          v86 = v42[1];
          if ( v86 )
          {
            v87 = v86;
            if ( *(_DWORD *)&v42[4 * v86 + 4] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v87 = (int)v33;
          }
          if ( (v41 & 0x40) != 0 )
            break;
        }
LABEL_21:
        if ( !v34 )
        {
          v88 = RtlEqualSid(Sid1, v42);
          v33 = 0LL;
          v36 = 1;
          v34 = v88 != 0;
        }
        if ( !v37 )
        {
          v47 = RtlEqualSid(v108, v42);
          v33 = 0LL;
          if ( v47 )
          {
            if ( (v41 & 8) == 0 )
              return 3221225562LL;
            v36 = 1;
            v103 = v40;
            v37 = 1;
          }
          else
          {
            v36 = 1;
          }
        }
        v40 += v36;
        v25 += 16LL;
        if ( v40 - 1 >= v26 )
          goto LABEL_28;
        v39 = v101;
      }
      if ( v104 != -1 )
        return 3221225485LL;
      v104 = v40;
      if ( v86 && *(_DWORD *)&v42[4 * (v87 - 1) + 8] >= 0x3000u )
      {
        v97 = v36;
        v45 |= 0x2000u;
LABEL_84:
        v101 = v45;
        goto LABEL_21;
      }
      v97 = (char)v33;
      if ( v86 )
      {
        v89 = *(_DWORD *)&v42[4 * (v87 - 1) + 8];
        if ( v89 >= 0x2000 )
          goto LABEL_92;
      }
      else
      {
        v89 = (unsigned int)v33;
      }
      v99 = v36;
LABEL_92:
      if ( v89 >= 0x2000 )
        v45 |= 0x2000u;
      goto LABEL_84;
    }
LABEL_28:
    if ( !v34 )
      return 3221225563LL;
    if ( !v37 )
      return 3221225562LL;
    v48 = v33;
    v118 = v33;
    v49 = (unsigned __int64)v33;
    v119 = v33;
    v50 = v33;
    v108 = v33;
    v51 = (unsigned int)v33;
    if ( a13 )
    {
      v52 = (int *)(v107 + 1);
      while ( (*v52 & 0x7FFFFFF8) == 0 )
      {
        v53 = (unsigned int)*(v52 - 2);
        v54 = *v52 & 3;
        *v52 = v54;
        if ( (unsigned int)v53 > 0x24 )
          return 3221225568LL;
        if ( _bittest64((const __int64 *)&v49, v53) )
          return 3221225894LL;
        v49 |= 1LL << v53;
        v118 = (void *)v49;
        if ( (v54 & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v50, (unsigned int)v53);
          v119 = v50;
        }
        if ( (v54 & 1) != 0 )
        {
          _bittestandset64((__int64 *)&v48, (unsigned int)v53);
          v108 = v48;
        }
        ++v51;
        v52 += 3;
        if ( v51 >= a13 )
          goto LABEL_40;
      }
      return 3221225485LL;
    }
LABEL_40:
    if ( !a23 || (*a23 & 0xFFFFFFFC) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
      v56 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        v57 = PoolWithTag + 2;
        v57[1] = v57;
        *v57 = v57;
        v56[6] = 0;
        *((_QWORD *)v56 + 5) = v56 + 8;
        *((_QWORD *)v56 + 4) = v56 + 8;
        if ( SeTokenLeakTracking )
        {
          P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
          v58 = P;
          if ( !P )
          {
            v91 = v56;
LABEL_118:
            ExFreePoolWithTag(v91, 0);
            return 3221225626LL;
          }
        }
        else
        {
          v58 = 0LL;
        }
        v107 = (char **)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        v59 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
        if ( v59 )
        {
          v60 = 16 * v26;
          v114 = 16 * v26;
          if ( SepTokenSidSharingEnabled )
          {
            v62 = (v60 + 23) & 0xFFFFFFF8;
            v109 = a12;
          }
          else
          {
            v61 = (unsigned __int8 *)Src->Sid;
            v109 = (a12 + 7) & 0xFFFFFFF8;
            v62 = v60 + ((RtlLengthRequiredSid(v61[1]) + 3) & 0xFFFFFFFC) + v109 + 16;
          }
          SidAreaSize = v62;
          v63 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
          if ( v122 )
            v63 += (*((unsigned __int16 *)v122 + 1) + 3) & 0xFFFFFFFC;
          v64 = v62 + 1168;
          v65 = v63;
          if ( v63 < 0x1000 )
            v65 = 4096;
          v113 = v65;
          RemainingSidAreaSize = v64 + v65;
          LOBYTE(v64) = v100;
          inserted = ObCreateObject(
                       v64,
                       (_DWORD)SeTokenObjectType,
                       v105,
                       1,
                       0,
                       v62 + 1168,
                       RemainingSidAreaSize,
                       0,
                       (__int64)&Object);
          if ( inserted < 0 )
          {
            ExFreePoolWithTag(v56, 0);
            if ( SeTokenLeakTracking )
              ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(v59, 0);
            return (unsigned int)inserted;
          }
          v67 = Object;
          *((_QWORD *)Object + 6) = v59;
          ExInitializeResourceLite(v59);
          v68 = (char *)Object;
          v67[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_QWORD *)v68 + 4) = 0LL;
          v69 = (_QWORD *)v120;
          *((_QWORD *)v68 + 28) = 0LL;
          v105 = 0LL;
          *((_QWORD *)v68 + 3) = *v69;
          v70 = v107;
          v68[204] = 0;
          *((_QWORD *)v68 + 7) = v70;
          *((_QWORD *)v68 + 5) = *a8;
          *((_DWORD *)v68 + 48) = a5;
          *((_DWORD *)v68 + 49) = a6;
          LODWORD(v70) = v101;
          *(_OWORD *)v68 = *a18;
          *((_DWORD *)v68 + 50) = (_DWORD)v70;
          LODWORD(v70) = v113;
          *((_DWORD *)v68 + 30) = 0;
          *((_QWORD *)v68 + 145) = 0LL;
          *((_DWORD *)v68 + 34) = (_DWORD)v70;
          LODWORD(v70) = v103;
          *((_DWORD *)v68 + 35) = 0;
          *((_DWORD *)v68 + 36) = (_DWORD)v70;
          *((_QWORD *)v68 + 23) = 0LL;
          *((_QWORD *)v68 + 140) = 0LL;
          *((_QWORD *)v68 + 141) = 0LL;
          *((_DWORD *)v68 + 33) = v62;
          v107 = (char **)(v68 + 184);
          *((_DWORD *)v68 + 52) = v104;
          v71 = v118;
          *((_DWORD *)v68 + 53) = 0;
          *((_QWORD *)v68 + 8) = v71;
          *((_QWORD *)v68 + 9) = v119;
          *((_QWORD *)v68 + 10) = v108;
          *((_DWORD *)v68 + 200) = 0;
          *((_QWORD *)v68 + 99) = 0LL;
          *((_QWORD *)v68 + 98) = 0LL;
          *((_QWORD *)v68 + 135) = 0LL;
          *((_QWORD *)v68 + 136) = 0LL;
          *((_QWORD *)v68 + 144) = 0LL;
          memset(v68 + 808, 0, 0x110uLL);
          v72 = P;
          v73 = v68 + 1144;
          *((_QWORD *)v68 + 138) = 0LL;
          *((_QWORD *)v68 + 139) = 0LL;
          *((_QWORD *)v68 + 142) = 0LL;
          *((_QWORD *)v68 + 143) = v72;
          if ( a23 )
            *((_DWORD *)v68 + 53) = *a23;
          if ( !v97 )
          {
            *((_QWORD *)v68 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v68 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v99 == 1 )
          {
            *((_QWORD *)v68 + 9) &= 0x202800000uLL;
            *((_QWORD *)v68 + 10) &= 0x202800000uLL;
          }
          v74 = v120;
          *((_QWORD *)v68 + 11) = 0LL;
          *((_QWORD *)v68 + 12) = 0LL;
          *((_QWORD *)v68 + 13) = 0LL;
          *((_DWORD *)v68 + 28) = 0;
          *((_WORD *)v68 + 58) = 0;
          v68[118] = 0;
          *((_QWORD *)v68 + 97) = v56;
          *((_QWORD *)v68 + 137) = 0LL;
          *((_QWORD *)v68 + 22) = 0LL;
          v108 = v68 + 176;
          v75 = SepReferenceLogonSession(v74, v68 + 216);
          if ( v75 < 0 )
          {
            *((_DWORD *)v68 + 50) |= 0x20u;
            *((_QWORD *)v68 + 27) = 0LL;
            ObfDereferenceObjectWithTag(v68, 0x746C6644u);
            return (unsigned int)v75;
          }
          if ( SeTokenLeakTracking )
          {
            **(_QWORD **)v73 = KeGetCurrentThread()[1].CycleTime;
            *(_QWORD *)(*(_QWORD *)v73 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_DWORD *)(*(_QWORD *)v73 + 32LL) = 12;
            *(_DWORD *)(*(_QWORD *)v73 + 280LL) = 0;
            *(_DWORD *)(*(_QWORD *)v73 + 284LL) = 0;
            v92 = *(_QWORD *)v73;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v92 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v92 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v92 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v92 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            v94 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL), 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL + 8LL * v94), 30 - v94, 1u);
            v68 = (char *)Object;
            SepAddTokenLogonSession(Object);
          }
          v76 = Src;
          if ( SepTokenSidSharingEnabled )
          {
            inserted = SepSetTokenUserAndGroups((_DWORD)v68, (_DWORD)Src, v26, (_DWORD)v121, v109);
            if ( inserted < 0 )
              goto LABEL_73;
          }
          else
          {
            v77 = v62 - v114;
            *((_QWORD *)v68 + 19) = v68 + 1168;
            v78 = v26 + 1;
            *((_DWORD *)v68 + 31) = v78;
            SidArea = &v68[16 * v78 + 1168];
            SidAreaSize = v77 - 16;
            RtlCopySidAndAttributesArray(
              1u,
              v76,
              v77 - 16,
              (PSID_AND_ATTRIBUTES)v68 + 73,
              SidArea,
              &SidArea,
              &SidAreaSize);
            RtlCopySidAndAttributesArray(
              v26,
              v121,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v68 + 74,
              SidArea,
              &SidArea,
              &SidAreaSize);
          }
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v68 + 19),
            *((_DWORD *)v68 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v68 + 232));
          *((_QWORD *)v68 + 20) = 0LL;
          *((_DWORD *)v68 + 32) = 0;
          v79 = (char *)ExAllocatePoolWithTag(PagedPool, v63, 0x64546553u);
          *(_QWORD *)v108 = v79;
          if ( v79 )
          {
            v80 = (unsigned __int8 *)Sid1;
            *((_QWORD *)v68 + 21) = v79;
            v81 = RtlLengthRequiredSid(v80[1]);
            RtlCopySid(v81, v79, v80);
            v82 = (unsigned __int16 *)v122;
            v83 = &v79[(v81 + 3) & 0xFFFFFFFC];
            if ( v122 )
            {
              v84 = v122;
              *v107 = v83;
              memmove(v83, v84, v82[1]);
            }
            inserted = SepSetTokenClaims((_DWORD)v68, v125, v124, a21, v123);
            if ( inserted >= 0 )
            {
              if ( !a24 || (inserted = SepSetTokenTrust(v68, SeProcTrustWinTcbSid), inserted >= 0) )
              {
                if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    *(_DWORD *)(*(_QWORD *)v73 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v95 = *(_DWORD *)(*(_QWORD *)v73 + 280LL);
                    if ( v95 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v95, Object);
                      __debugbreak();
                    }
                  }
                  v68 = (char *)Object;
                }
                if ( a24 )
                {
                  v90 = Object;
                  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted < 0 )
                  {
                    *Handle = 0LL;
                  }
                  else
                  {
                    if ( !v98 )
                      SepAppendAdminAceToTokenAcl(v90);
                    *Handle = v90;
                  }
                  return (unsigned int)inserted;
                }
                inserted = SeCreateAccessState(&PassedAccessState, v127, v115, (char *)SeTokenObjectType + 76);
                v85 = v68;
                if ( inserted < 0 )
                  goto LABEL_74;
                inserted = ObInsertObject(v68, &PassedAccessState, 0, 1u, 0LL, Handle);
                SeDeleteAccessState(&PassedAccessState);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                if ( !v98 )
                  SepAppendAdminAceToTokenAcl(v68);
              }
            }
          }
          else
          {
            inserted = -1073741801;
          }
LABEL_73:
          v85 = v68;
LABEL_74:
          ObfDereferenceObjectWithTag(v85, 0x746C6644u);
          return (unsigned int)inserted;
        }
        ExFreePoolWithTag(v56, 0);
        if ( SeTokenLeakTracking )
        {
          v91 = v58;
          goto LABEL_118;
        }
      }
      return 3221225626LL;
    }
    return 3221225485LL;
  }
  return result;
}
