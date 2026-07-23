/*
 * XREFs of SepCreateTokenEx @ 0x14001386C
 * Callers:
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x1405D88A8 (SepCreateToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1400894EC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlSidHashInitialize @ 0x140089560 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepAppendAdminAceToTokenAcl @ 0x14045B100 (SepAppendAdminAceToTokenAcl.c)
 *     RtlIdentifierAuthoritySid @ 0x14045C4F0 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x14045C500 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x14045C7B0 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x14045CDB4 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x14045CEC8 (SepReferenceLogonSession.c)
 *     ObCreateObject @ 0x14045D000 (ObCreateObject.c)
 *     SeDeleteAccessState @ 0x14045D050 (SeDeleteAccessState.c)
 *     SepSetTokenTrust @ 0x1404884A4 (SepSetTokenTrust.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x1404FA190 (ObInsertObject.c)
 *     SepSetTokenUserAndGroups @ 0x14072EA34 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14072EF40 (SepAddTokenLogonSession.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        __int64 a2,
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
  PSID_AND_ATTRIBUTES v24; // rsi
  ULONG v25; // r13d
  __int64 result; // rax
  PSID Sid; // r14
  ULONG v28; // ebx
  ULONG v29; // esi
  __int64 v30; // rax
  PSID v31; // rbx
  bool v32; // di
  int v33; // r10d
  bool v34; // r14
  ULONG Attributes; // eax
  int v36; // r9d
  ULONG *p_Attributes; // rsi
  int v38; // r15d
  ULONG v39; // r12d
  _BYTE *v40; // rbx
  PSID_IDENTIFIER_AUTHORITY v41; // rax
  __int64 v42; // rdx
  int v43; // r9d
  unsigned int v44; // r11d
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // r14
  void *v48; // r10
  unsigned int v49; // r9d
  int *v50; // rdx
  unsigned __int64 v51; // r8
  int v52; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v54; // rsi
  _QWORD *v55; // rax
  PVOID v56; // rbx
  struct _ERESOURCE *v57; // rdi
  int v58; // r12d
  unsigned __int8 *v59; // rax
  ULONG v60; // ebx
  ULONG v61; // r15d
  ULONG v62; // ecx
  int v63; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v65; // rbx
  char *v66; // rdi
  _QWORD *v67; // rax
  char **v68; // rax
  __int64 v69; // rax
  PVOID v70; // rax
  char *v71; // r14
  __int64 v72; // rcx
  int v73; // esi
  ULONG v74; // edx
  char *v75; // rsi
  unsigned __int8 *v76; // r15
  ULONG v77; // ebx
  unsigned __int16 *v78; // rcx
  char *v79; // rsi
  void *v80; // rdx
  void *v81; // rcx
  unsigned __int8 v82; // dl
  BOOLEAN v83; // al
  BOOLEAN v84; // al
  PVOID v85; // rdi
  void *v86; // rcx
  __int64 v87; // rdx
  _KPROCESS *Process; // rcx
  ULONG v89; // eax
  int v90; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v92; // [rsp+50h] [rbp-B0h]
  char v93; // [rsp+51h] [rbp-AFh] BYREF
  char v94; // [rsp+52h] [rbp-AEh]
  char v95; // [rsp+53h] [rbp-ADh]
  int v96; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  int v98; // [rsp+5Ch] [rbp-A4h]
  int v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char **v102; // [rsp+78h] [rbp-88h]
  PSID v103; // [rsp+80h] [rbp-80h]
  unsigned int v104; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID_AND_ATTRIBUTES Src; // [rsp+98h] [rbp-68h]
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  int v108; // [rsp+A8h] [rbp-58h]
  unsigned int v109; // [rsp+ACh] [rbp-54h]
  PSID SidArea; // [rsp+B0h] [rbp-50h] BYREF
  PHANDLE Handle; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h]
  __int64 v113; // [rsp+C8h] [rbp-38h]
  PSID_AND_ATTRIBUTES v114; // [rsp+D0h] [rbp-30h]
  void *v115; // [rsp+D8h] [rbp-28h]
  __int64 v116; // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  __int64 v118; // [rsp+F0h] [rbp-10h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+100h] [rbp+0h] BYREF
  char v120[224]; // [rsp+1A0h] [rbp+A0h] BYREF

  v24 = a9;
  v25 = Count;
  v99 = -1;
  v113 = a7;
  v102 = a14;
  Sid1 = a16;
  v115 = a17;
  v118 = a19;
  v117 = a20;
  v109 = a3;
  Handle = a1;
  v116 = a22;
  v100 = a4;
  v95 = a2;
  Src = a9;
  v114 = a11;
  v103 = a15;
  v96 = 0;
  v92 = 0;
  v94 = 0;
  v93 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v93);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v28 = 0;
    if ( Count )
    {
      do
      {
        v29 = v28;
        while ( v29 < v25 )
        {
          if ( !RtlEqualSid(Sid, a11[v29].Sid) || (a11[v29].Attributes & 0x20) != 0 )
            ++v29;
          else
            a11[v29] = a11[--v25];
        }
        v30 = v28++;
        Sid = a11[v30].Sid;
      }
      while ( v28 < v25 );
      v24 = Src;
    }
    v31 = v24->Sid;
    v32 = RtlEqualSid(Sid1, v24->Sid) != 0;
    if ( a15 )
    {
      v84 = RtlEqualSid(a15, v31);
      LOBYTE(v33) = 1;
      v34 = v84 != 0;
    }
    else
    {
      LOBYTE(v33) = 1;
      v34 = 1;
    }
    Attributes = v24->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v36 = 2048;
      v96 = 2048;
    }
    else
    {
      v36 = v96;
    }
    v98 = 0;
    if ( v25 )
    {
      v98 = 0;
      p_Attributes = &a11->Attributes;
      v38 = 1;
      while ( 1 )
      {
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v33) != 0 )
          *p_Attributes |= 6u;
        v39 = *p_Attributes;
        if ( (*p_Attributes & 0x10) != 0 )
        {
          if ( (v39 & 6) != 0 )
            return 3221225485LL;
          v96 = v36 | 0x800;
        }
        v40 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v40);
        v41 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v45 = *(_DWORD *)v41->Value - *(_DWORD *)v42;
        if ( *(_DWORD *)v41->Value == *(_DWORD *)v42 )
          v45 = *(unsigned __int16 *)&v41->Value[4] - *(unsigned __int16 *)(v42 + 4);
        if ( !v45 )
        {
          v82 = v40[1];
          if ( v82 && *(_DWORD *)&v40[4 * (v82 - v33) + 8] > 0x4000u )
            return 3221226566LL;
          if ( (v39 & 0x40) != 0 )
          {
            if ( v99 != -1 )
              return 3221225485LL;
            v99 = v38;
            if ( v82 && *(_DWORD *)&v40[4 * (v82 - v33) + 8] >= 0x3000u )
            {
              v92 = v33;
LABEL_86:
              v96 = v44 | v43;
              goto LABEL_21;
            }
            v92 = 0;
            if ( v82 && *(_DWORD *)&v40[4 * (v82 - v33) + 8] >= v44 )
              goto LABEL_86;
            v94 = v33;
          }
        }
LABEL_21:
        if ( !v32 )
        {
          v83 = RtlEqualSid(Sid1, v40);
          v33 = 1;
          v32 = v83 != 0;
        }
        if ( !v34 )
        {
          if ( RtlEqualSid(v103, v40) )
          {
            if ( (v39 & 8) == 0 )
              return 3221225562LL;
            v33 = 1;
            v98 = v38;
            v34 = 1;
          }
          else
          {
            v33 = 1;
          }
        }
        v38 += v33;
        p_Attributes += 4;
        if ( v38 - 1 >= v25 )
          break;
        v36 = v96;
      }
    }
    if ( !v32 )
      return 3221225563LL;
    if ( !v34 )
      return 3221225562LL;
    v46 = 0LL;
    v112 = 0LL;
    v47 = 0LL;
    v103 = 0LL;
    v48 = 0LL;
    v49 = 0;
    if ( a13 )
    {
      v50 = (int *)(v102 + 1);
      while ( (*v50 & 0x7FFFFFF8) == 0 )
      {
        v51 = (unsigned int)*(v50 - 2);
        v52 = *v50 & 3;
        *v50 = v52;
        if ( (unsigned int)v51 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v47, v51) )
          return 3221225894LL;
        v47 |= 1LL << v51;
        if ( (v52 & 2) != 0 )
        {
          _bittestandset64(&v46, (unsigned int)v51);
          v112 = v46;
        }
        if ( (v52 & 1) != 0 )
        {
          _bittestandset64((__int64 *)&v48, (unsigned int)v51);
          v103 = v48;
        }
        ++v49;
        v50 += 3;
        if ( v49 >= a13 )
          goto LABEL_42;
      }
      return 3221225485LL;
    }
LABEL_42:
    if ( !a23 || (*a23 & 0xFFFFFFFC) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
      v54 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        v55 = PoolWithTag + 2;
        v55[1] = v55;
        *v55 = v55;
        v54[6] = 0;
        *((_QWORD *)v54 + 5) = v54 + 8;
        *((_QWORD *)v54 + 4) = v54 + 8;
        if ( SeTokenLeakTracking )
        {
          P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
          v56 = P;
          if ( !P )
          {
            v86 = v54;
LABEL_113:
            ExFreePoolWithTag(v86, 0);
            return 3221225626LL;
          }
        }
        else
        {
          v56 = P;
        }
        v102 = (char **)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        v57 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
        if ( v57 )
        {
          v58 = 16 * v25;
          if ( SepTokenSidSharingEnabled )
          {
            v60 = (v58 + 23) & 0xFFFFFFF8;
            v104 = a12;
          }
          else
          {
            v59 = (unsigned __int8 *)Src->Sid;
            v104 = (a12 + 7) & 0xFFFFFFF8;
            v60 = v58 + ((RtlLengthRequiredSid(v59[1]) + 3) & 0xFFFFFFFC) + v104 + 16;
          }
          SidAreaSize = v60;
          v61 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
          if ( v115 )
            v61 += (*((unsigned __int16 *)v115 + 1) + 3) & 0xFFFFFFFC;
          v62 = v60 + 1168;
          v63 = v61;
          if ( v61 < 0x1000 )
            v63 = 4096;
          v108 = v63;
          RemainingSidAreaSize = v62 + v63;
          LOBYTE(v62) = v95;
          inserted = ObCreateObject(
                       v62,
                       (_DWORD)SeTokenObjectType,
                       v100,
                       1,
                       0,
                       v60 + 1168,
                       RemainingSidAreaSize,
                       0,
                       (__int64)&Object);
          if ( inserted < 0 )
          {
            ExFreePoolWithTag(v54, 0);
            if ( SeTokenLeakTracking )
              ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(v57, 0);
            return (unsigned int)inserted;
          }
          v65 = Object;
          *((_QWORD *)Object + 6) = v57;
          ExInitializeResourceLite(v57);
          v66 = (char *)Object;
          v65[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_QWORD *)v66 + 4) = 0LL;
          v67 = (_QWORD *)v113;
          *((_QWORD *)v66 + 28) = 0LL;
          v100 = 0LL;
          *((_QWORD *)v66 + 3) = *v67;
          v68 = v102;
          v66[204] = 0;
          *((_QWORD *)v66 + 7) = v68;
          *((_QWORD *)v66 + 5) = *a8;
          *((_DWORD *)v66 + 48) = a5;
          *((_DWORD *)v66 + 49) = a6;
          LODWORD(v68) = v96;
          *(_OWORD *)v66 = *a18;
          *((_DWORD *)v66 + 50) = (_DWORD)v68;
          LODWORD(v68) = v108;
          *((_DWORD *)v66 + 30) = 0;
          *((_QWORD *)v66 + 145) = 0LL;
          *((_DWORD *)v66 + 34) = (_DWORD)v68;
          LODWORD(v68) = v98;
          *((_DWORD *)v66 + 35) = 0;
          *((_DWORD *)v66 + 36) = (_DWORD)v68;
          *((_QWORD *)v66 + 23) = 0LL;
          *((_QWORD *)v66 + 140) = 0LL;
          *((_QWORD *)v66 + 141) = 0LL;
          v102 = (char **)(v66 + 184);
          *((_DWORD *)v66 + 33) = SidAreaSize;
          *((_DWORD *)v66 + 52) = v99;
          v69 = v112;
          *((_DWORD *)v66 + 53) = 0;
          *((_QWORD *)v66 + 8) = v47;
          *((_QWORD *)v66 + 9) = v69;
          *((_QWORD *)v66 + 10) = v103;
          *((_DWORD *)v66 + 200) = 0;
          *((_QWORD *)v66 + 99) = 0LL;
          *((_QWORD *)v66 + 98) = 0LL;
          *((_QWORD *)v66 + 135) = 0LL;
          *((_QWORD *)v66 + 136) = 0LL;
          *((_QWORD *)v66 + 144) = 0LL;
          memset(v66 + 808, 0, 0x110uLL);
          v70 = P;
          v71 = v66 + 1144;
          *((_QWORD *)v66 + 138) = 0LL;
          *((_QWORD *)v66 + 139) = 0LL;
          *((_QWORD *)v66 + 142) = 0LL;
          *((_QWORD *)v66 + 143) = v70;
          if ( a23 )
            *((_DWORD *)v66 + 53) = *a23;
          if ( !v92 )
          {
            *((_QWORD *)v66 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v66 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v94 == 1 )
          {
            *((_QWORD *)v66 + 9) &= 0x202800000uLL;
            *((_QWORD *)v66 + 10) &= 0x202800000uLL;
          }
          v72 = v113;
          *((_QWORD *)v66 + 11) = 0LL;
          *((_QWORD *)v66 + 12) = 0LL;
          *((_QWORD *)v66 + 13) = 0LL;
          *((_DWORD *)v66 + 28) = 0;
          *((_WORD *)v66 + 58) = 0;
          v66[118] = 0;
          *((_QWORD *)v66 + 97) = v54;
          *((_QWORD *)v66 + 137) = 0LL;
          *((_QWORD *)v66 + 22) = 0LL;
          v103 = v66 + 176;
          v73 = SepReferenceLogonSession(v72, v66 + 216);
          if ( v73 < 0 )
          {
            *((_DWORD *)v66 + 50) |= 0x20u;
            *((_QWORD *)v66 + 27) = 0LL;
            ObfDereferenceObjectWithTag(v66, 0x746C6644u);
            return (unsigned int)v73;
          }
          if ( SeTokenLeakTracking )
          {
            **(_QWORD **)v71 = KeGetCurrentThread()[1].CycleTime;
            *(_QWORD *)(*(_QWORD *)v71 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_DWORD *)(*(_QWORD *)v71 + 32LL) = 12;
            *(_DWORD *)(*(_QWORD *)v71 + 280LL) = 0;
            *(_DWORD *)(*(_QWORD *)v71 + 284LL) = 0;
            v87 = *(_QWORD *)v71;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v87 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v87 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v87 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v87 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            v89 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL), 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*(_QWORD *)v71 + 40LL + 8LL * v89), 30 - v89, 1u);
            v66 = (char *)Object;
            SepAddTokenLogonSession(Object);
          }
          if ( SepTokenSidSharingEnabled )
          {
            inserted = SepSetTokenUserAndGroups((_DWORD)v66, (_DWORD)Src, v25, (_DWORD)v114, v104);
            if ( inserted < 0 )
              goto LABEL_75;
          }
          else
          {
            v74 = SidAreaSize;
            *((_QWORD *)v66 + 19) = v66 + 1168;
            *((_DWORD *)v66 + 31) = v25 + 1;
            SidArea = &v66[16 * v25 + 1184];
            SidAreaSize = -16 - v58 + v74;
            RtlCopySidAndAttributesArray(
              1u,
              Src,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v66 + 73,
              SidArea,
              &SidArea,
              &SidAreaSize);
            RtlCopySidAndAttributesArray(
              v25,
              v114,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v66 + 74,
              SidArea,
              &SidArea,
              &SidAreaSize);
          }
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v66 + 19),
            *((_DWORD *)v66 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v66 + 232));
          *((_QWORD *)v66 + 20) = 0LL;
          *((_DWORD *)v66 + 32) = 0;
          v75 = (char *)ExAllocatePoolWithTag(PagedPool, v61, 0x64546553u);
          *(_QWORD *)v103 = v75;
          if ( v75 )
          {
            v76 = (unsigned __int8 *)Sid1;
            *((_QWORD *)v66 + 21) = v75;
            v77 = RtlLengthRequiredSid(v76[1]);
            RtlCopySid(v77, v75, v76);
            v78 = (unsigned __int16 *)v115;
            v79 = &v75[(v77 + 3) & 0xFFFFFFFC];
            if ( v115 )
            {
              v80 = v115;
              *v102 = v79;
              memmove(v79, v80, v78[1]);
            }
            inserted = SepSetTokenClaims((_DWORD)v66, v118, v117, a21, v116);
            if ( inserted >= 0 )
            {
              if ( !a24 || (inserted = SepSetTokenTrust(v66, SeProcTrustWinTcbSid), inserted >= 0) )
              {
                if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    *(_DWORD *)(*(_QWORD *)v71 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v90 = *(_DWORD *)(*(_QWORD *)v71 + 280LL);
                    if ( v90 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v90, Object);
                      __debugbreak();
                    }
                  }
                  v66 = (char *)Object;
                }
                if ( a24 )
                {
                  v85 = Object;
                  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted < 0 )
                  {
                    *Handle = 0LL;
                  }
                  else
                  {
                    if ( !v93 )
                      SepAppendAdminAceToTokenAcl(v85);
                    *Handle = v85;
                  }
                  return (unsigned int)inserted;
                }
                inserted = SeCreateAccessState(&PassedAccessState, v120, v109, (char *)SeTokenObjectType + 76);
                v81 = v66;
                if ( inserted < 0 )
                  goto LABEL_76;
                inserted = ObInsertObject(v66, &PassedAccessState, 0, 1u, 0LL, Handle);
                SeDeleteAccessState(&PassedAccessState);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                if ( !v93 )
                  SepAppendAdminAceToTokenAcl(v66);
              }
            }
          }
          else
          {
            inserted = -1073741801;
          }
LABEL_75:
          v81 = v66;
LABEL_76:
          ObfDereferenceObjectWithTag(v81, 0x746C6644u);
          return (unsigned int)inserted;
        }
        ExFreePoolWithTag(v54, 0);
        if ( SeTokenLeakTracking )
        {
          v86 = v56;
          goto LABEL_113;
        }
      }
      return 3221225626LL;
    }
    return 3221225485LL;
  }
  return result;
}
