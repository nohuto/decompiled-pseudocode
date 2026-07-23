/*
 * XREFs of SepCreateTokenEx @ 0x14003E5B4
 * Callers:
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x1405C54CC (SepCreateToken.c)
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14003F4F4 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     RtlSidHashInitialize @ 0x140093A10 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepAppendAdminAceToTokenAcl @ 0x14045DFFC (SepAppendAdminAceToTokenAcl.c)
 *     RtlIdentifierAuthoritySid @ 0x14046EA6C (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x14046EA80 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x14046F334 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x14046F448 (SepReferenceLogonSession.c)
 *     ObCreateObject @ 0x14046F580 (ObCreateObject.c)
 *     SeDeleteAccessState @ 0x14046F5D0 (SeDeleteAccessState.c)
 *     ObInsertObject @ 0x140493DC0 (ObInsertObject.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     SepSetTokenTrust @ 0x140511010 (SepSetTokenTrust.c)
 *     SepSetTokenUserAndGroups @ 0x1406F6F14 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1406F7430 (SepAddTokenLogonSession.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
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
  ULONG v24; // r13d
  __int64 result; // rax
  PSID Sid; // r14
  ULONG v27; // ebx
  ULONG v28; // esi
  __int64 v29; // rax
  PSID_AND_ATTRIBUTES v30; // r14
  PSID v31; // rbx
  bool v32; // di
  int v33; // r10d
  bool v34; // si
  ULONG Attributes; // eax
  int v36; // r9d
  ULONG *p_Attributes; // r14
  int v38; // r15d
  ULONG v39; // r12d
  _BYTE *v40; // rbx
  PSID v41; // r8
  PSID_IDENTIFIER_AUTHORITY v42; // rax
  __int64 v43; // rdx
  int v44; // r9d
  unsigned int v45; // r11d
  int v46; // ecx
  __int64 v47; // r14
  __int64 v48; // r11
  void *v49; // r10
  unsigned int v50; // r9d
  int *v51; // rdx
  unsigned __int64 v52; // r8
  int v53; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v55; // rsi
  _QWORD *v56; // rax
  PVOID v57; // rbx
  int v58; // r12d
  unsigned __int8 *v59; // rax
  ULONG v60; // ebx
  ULONG v61; // r15d
  ULONG v62; // ecx
  int v63; // eax
  NTSTATUS inserted; // ebx
  struct _ERESOURCE *v65; // rcx
  _QWORD *v66; // rbx
  char *v67; // rdi
  _QWORD *v68; // rax
  char **v69; // rax
  __int64 v70; // rax
  PVOID v71; // rax
  char *v72; // r14
  __int64 v73; // rcx
  int v74; // esi
  ULONG v75; // edx
  char *v76; // rsi
  unsigned __int8 *v77; // r15
  ULONG v78; // ebx
  unsigned __int16 *v79; // rcx
  char *v80; // rsi
  void *v81; // rdx
  void *v82; // rcx
  unsigned __int8 v83; // dl
  BOOLEAN v84; // al
  BOOLEAN v85; // al
  PVOID v86; // rdi
  void *v87; // rcx
  __int64 v88; // rdx
  _KPROCESS *Process; // rcx
  ULONG v90; // eax
  int v91; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v93; // [rsp+50h] [rbp-B0h]
  char v94; // [rsp+51h] [rbp-AFh] BYREF
  char v95; // [rsp+52h] [rbp-AEh]
  char v96; // [rsp+53h] [rbp-ADh]
  int v97; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  PERESOURCE Resource; // [rsp+60h] [rbp-A0h]
  int v100; // [rsp+68h] [rbp-98h]
  int v101; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char **v103; // [rsp+78h] [rbp-88h]
  unsigned int v104; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  PSID_AND_ATTRIBUTES Src; // [rsp+90h] [rbp-70h]
  PSID Sid1; // [rsp+98h] [rbp-68h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  PSID v109; // [rsp+A8h] [rbp-58h]
  ULONG v110; // [rsp+B0h] [rbp-50h]
  ULONG v111; // [rsp+B4h] [rbp-4Ch]
  unsigned int v112; // [rsp+B8h] [rbp-48h]
  PSID SidArea; // [rsp+C0h] [rbp-40h] BYREF
  PHANDLE Handle; // [rsp+C8h] [rbp-38h]
  _QWORD *v115; // [rsp+D0h] [rbp-30h]
  __int64 v116; // [rsp+D8h] [rbp-28h]
  PSID_AND_ATTRIBUTES v117; // [rsp+E0h] [rbp-20h]
  void *v118; // [rsp+E8h] [rbp-18h]
  __int64 v119; // [rsp+F0h] [rbp-10h]
  __int64 v120; // [rsp+F8h] [rbp-8h]
  __int64 v121; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  char v123[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v24 = Count;
  v101 = -1;
  v116 = a7;
  v103 = a14;
  Sid1 = a16;
  v118 = a17;
  v121 = a19;
  v120 = a20;
  v112 = a3;
  Handle = a1;
  v119 = a22;
  v115 = a4;
  v96 = a2;
  Src = a9;
  v117 = a11;
  v109 = a15;
  v97 = 0;
  v93 = 0;
  v95 = 0;
  v94 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v94);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v27 = 0;
    if ( Count )
    {
      do
      {
        v28 = v27;
        while ( v28 < v24 )
        {
          if ( !RtlEqualSid(Sid, a11[v28].Sid) || (a11[v28].Attributes & 0x20) != 0 )
            ++v28;
          else
            a11[v28] = a11[--v24];
        }
        v29 = v27++;
        Sid = a11[v29].Sid;
      }
      while ( v27 < v24 );
    }
    v30 = Src;
    v31 = Src->Sid;
    v32 = RtlEqualSid(Sid1, Src->Sid) != 0;
    if ( a15 )
    {
      v85 = RtlEqualSid(a15, v31);
      LOBYTE(v33) = 1;
      v34 = v85 != 0;
    }
    else
    {
      LOBYTE(v33) = 1;
      v34 = 1;
    }
    Attributes = v30->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v36 = 2048;
      v97 = 2048;
    }
    else
    {
      v36 = v97;
    }
    v100 = 0;
    if ( v24 )
    {
      p_Attributes = &a11->Attributes;
      v100 = 0;
      v38 = 1;
      v108 = SeUntrustedMandatorySid;
      while ( 1 )
      {
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v33) != 0 )
          *p_Attributes |= 6u;
        v39 = *p_Attributes;
        if ( (*p_Attributes & 0x10) != 0 )
        {
          if ( (v39 & 6) != 0 )
            return 3221225485LL;
          v97 = v36 | 0x800;
        }
        v40 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v40);
        v42 = RtlIdentifierAuthoritySid(v41);
        v46 = *(_DWORD *)v42->Value - *(_DWORD *)v43;
        if ( *(_DWORD *)v42->Value == *(_DWORD *)v43 )
          v46 = *(unsigned __int16 *)&v42->Value[4] - *(unsigned __int16 *)(v43 + 4);
        if ( !v46 )
        {
          v83 = v40[1];
          if ( v83 && *(_DWORD *)&v40[4 * (v83 - v33) + 8] > 0x4000u )
            return 3221226566LL;
          if ( (v39 & 0x40) != 0 )
          {
            if ( v101 != -1 )
              return 3221225485LL;
            v101 = v38;
            if ( v83 && *(_DWORD *)&v40[4 * (v83 - v33) + 8] >= 0x3000u )
            {
              v93 = v33;
LABEL_83:
              v97 = v45 | v44;
              goto LABEL_20;
            }
            v93 = 0;
            if ( v83 && *(_DWORD *)&v40[4 * (v83 - v33) + 8] >= v45 )
              goto LABEL_83;
            v95 = v33;
          }
        }
LABEL_20:
        if ( !v32 )
        {
          v84 = RtlEqualSid(Sid1, v40);
          v33 = 1;
          v32 = v84 != 0;
        }
        if ( !v34 )
        {
          if ( RtlEqualSid(v109, v40) )
          {
            if ( (v39 & 8) == 0 )
              return 3221225562LL;
            v33 = 1;
            v100 = v38;
            v34 = 1;
          }
          else
          {
            v33 = 1;
          }
        }
        v38 += v33;
        p_Attributes += 4;
        if ( v38 - 1 >= v24 )
          break;
        v36 = v97;
      }
    }
    if ( !v32 )
      return 3221225563LL;
    if ( !v34 )
      return 3221225562LL;
    v47 = 0LL;
    v108 = 0LL;
    v48 = 0LL;
    v109 = 0LL;
    v49 = 0LL;
    v50 = 0;
    if ( a13 )
    {
      v51 = (int *)(v103 + 1);
      while ( (*v51 & 0x7FFFFFF8) == 0 )
      {
        v52 = (unsigned int)*(v51 - 2);
        v53 = *v51 & 3;
        *v51 = v53;
        if ( (unsigned int)v52 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v47, v52) )
          return 3221225894LL;
        v47 |= 1LL << v52;
        if ( (v53 & 2) != 0 )
        {
          _bittestandset64(&v48, (unsigned int)v52);
          v108 = v48;
        }
        if ( (v53 & 1) != 0 )
        {
          _bittestandset64((__int64 *)&v49, (unsigned int)v52);
          v109 = v49;
        }
        ++v50;
        v51 += 3;
        if ( v50 >= a13 )
          goto LABEL_39;
      }
      return 3221225485LL;
    }
LABEL_39:
    if ( !a23 || (*a23 & 0xFFFFFFFC) == 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
      v55 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0;
        v56 = PoolWithTag + 2;
        v56[1] = v56;
        *v56 = v56;
        v55[6] = 0;
        *((_QWORD *)v55 + 5) = v55 + 8;
        *((_QWORD *)v55 + 4) = v55 + 8;
        if ( SeTokenLeakTracking )
        {
          P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
          v57 = P;
          if ( !P )
          {
            v87 = v55;
LABEL_112:
            ExFreePoolWithTag(v87, 0);
            return 3221225626LL;
          }
        }
        else
        {
          v57 = P;
        }
        v103 = (char **)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
        if ( Resource )
        {
          v58 = 16 * v24;
          if ( SepTokenSidSharingEnabled )
          {
            v60 = (v58 + 23) & 0xFFFFFFF8;
            v104 = a12;
          }
          else
          {
            v59 = (unsigned __int8 *)Src->Sid;
            v104 = (a12 + 7) & 0xFFFFFFF8;
            v60 = ((v58 + 7) & 0xFFFFFFF8) + ((RtlLengthRequiredSid(v59[1]) + 3) & 0xFFFFFFFC) + v104 + 16;
          }
          SidAreaSize = v60;
          v61 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
          if ( v118 )
            v61 += (*((unsigned __int16 *)v118 + 1) + 3) & 0xFFFFFFFC;
          v62 = v60 + 1168;
          v111 = v60 + 1168;
          v63 = v61;
          if ( v61 < 0x1000 )
            v63 = 4096;
          v110 = v62 + v63;
          RemainingSidAreaSize = v62 + v63;
          LOBYTE(v62) = v96;
          inserted = ObCreateObject(
                       v62,
                       (_DWORD)SeTokenObjectType,
                       (_DWORD)v115,
                       1,
                       0,
                       v60 + 1168,
                       RemainingSidAreaSize,
                       0,
                       (__int64)&Object);
          if ( inserted < 0 )
          {
            ExFreePoolWithTag(v55, 0);
            if ( SeTokenLeakTracking )
              ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(Resource, 0);
            return (unsigned int)inserted;
          }
          v65 = Resource;
          v66 = Object;
          *((_QWORD *)Object + 6) = Resource;
          ExInitializeResourceLite(v65);
          v67 = (char *)Object;
          v66[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_QWORD *)v67 + 4) = 0LL;
          v68 = (_QWORD *)v116;
          *((_QWORD *)v67 + 28) = 0LL;
          Resource = 0LL;
          *((_QWORD *)v67 + 3) = *v68;
          v69 = v103;
          v67[204] = 0;
          *((_QWORD *)v67 + 7) = v69;
          *((_QWORD *)v67 + 5) = *a8;
          *((_DWORD *)v67 + 48) = a5;
          *((_DWORD *)v67 + 49) = a6;
          LODWORD(v69) = v97;
          *(_OWORD *)v67 = *a18;
          *((_DWORD *)v67 + 50) = (_DWORD)v69;
          LODWORD(v69) = v110 - v111;
          *((_DWORD *)v67 + 30) = 0;
          *((_QWORD *)v67 + 145) = 0LL;
          *((_DWORD *)v67 + 34) = (_DWORD)v69;
          LODWORD(v69) = v100;
          *((_DWORD *)v67 + 35) = 0;
          *((_DWORD *)v67 + 36) = (_DWORD)v69;
          *((_QWORD *)v67 + 23) = 0LL;
          *((_QWORD *)v67 + 140) = 0LL;
          *((_QWORD *)v67 + 141) = 0LL;
          v103 = (char **)(v67 + 184);
          *((_DWORD *)v67 + 33) = SidAreaSize;
          *((_DWORD *)v67 + 52) = v101;
          v70 = v108;
          *((_DWORD *)v67 + 53) = 0;
          *((_QWORD *)v67 + 8) = v47;
          *((_QWORD *)v67 + 9) = v70;
          *((_QWORD *)v67 + 10) = v109;
          *((_DWORD *)v67 + 200) = 0;
          *((_QWORD *)v67 + 99) = 0LL;
          *((_QWORD *)v67 + 98) = 0LL;
          *((_QWORD *)v67 + 135) = 0LL;
          *((_QWORD *)v67 + 136) = 0LL;
          *((_QWORD *)v67 + 144) = 0LL;
          memset(v67 + 808, 0, 0x110uLL);
          v71 = P;
          v72 = v67 + 1144;
          *((_QWORD *)v67 + 138) = 0LL;
          *((_QWORD *)v67 + 139) = 0LL;
          *((_QWORD *)v67 + 142) = 0LL;
          *((_QWORD *)v67 + 143) = v71;
          if ( a23 )
            *((_DWORD *)v67 + 53) = *a23;
          if ( !v93 )
          {
            *((_QWORD *)v67 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v67 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v95 == 1 )
          {
            *((_QWORD *)v67 + 9) &= 0x202800000uLL;
            *((_QWORD *)v67 + 10) &= 0x202800000uLL;
          }
          v73 = v116;
          *((_QWORD *)v67 + 11) = 0LL;
          *((_QWORD *)v67 + 12) = 0LL;
          *((_QWORD *)v67 + 13) = 0LL;
          *((_DWORD *)v67 + 28) = 0;
          *((_WORD *)v67 + 58) = 0;
          v67[118] = 0;
          *((_QWORD *)v67 + 97) = v55;
          *((_QWORD *)v67 + 137) = 0LL;
          *((_QWORD *)v67 + 22) = 0LL;
          v115 = v67 + 176;
          v74 = SepReferenceLogonSession(v73, v67 + 216);
          if ( v74 < 0 )
          {
            *((_DWORD *)v67 + 50) |= 0x20u;
            *((_QWORD *)v67 + 27) = 0LL;
            ObfDereferenceObjectWithTag(v67, 0x746C6644u);
            return (unsigned int)v74;
          }
          if ( SeTokenLeakTracking )
          {
            **(_QWORD **)v72 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_QWORD *)(*(_QWORD *)v72 + 8LL) = KeGetCurrentThread()[1].KernelStack;
            *(_DWORD *)(*(_QWORD *)v72 + 32LL) = 12;
            *(_DWORD *)(*(_QWORD *)v72 + 280LL) = 0;
            *(_DWORD *)(*(_QWORD *)v72 + 284LL) = 0;
            v88 = *(_QWORD *)v72;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v88 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v88 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v88 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v88 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            v90 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v72 + 40LL), 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*(_QWORD *)v72 + 40LL + 8LL * v90), 30 - v90, 1u);
            v67 = (char *)Object;
            SepAddTokenLogonSession(Object);
          }
          if ( SepTokenSidSharingEnabled )
          {
            inserted = SepSetTokenUserAndGroups((_DWORD)v67, (_DWORD)Src, v24, (_DWORD)v117, v104);
            if ( inserted < 0 )
              goto LABEL_72;
          }
          else
          {
            v75 = SidAreaSize;
            *((_QWORD *)v67 + 19) = v67 + 1168;
            *((_DWORD *)v67 + 31) = v24 + 1;
            SidArea = &v67[16 * v24 + 1184];
            SidAreaSize = -16 - v58 + v75;
            RtlCopySidAndAttributesArray(
              1u,
              Src,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v67 + 73,
              SidArea,
              &SidArea,
              &SidAreaSize);
            RtlCopySidAndAttributesArray(
              v24,
              v117,
              SidAreaSize,
              (PSID_AND_ATTRIBUTES)v67 + 74,
              SidArea,
              &SidArea,
              &SidAreaSize);
          }
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v67 + 19),
            *((_DWORD *)v67 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v67 + 232));
          *((_QWORD *)v67 + 20) = 0LL;
          *((_DWORD *)v67 + 32) = 0;
          v76 = (char *)ExAllocatePoolWithTag(PagedPool, v61, 0x64546553u);
          *v115 = v76;
          if ( v76 )
          {
            v77 = (unsigned __int8 *)Sid1;
            *((_QWORD *)v67 + 21) = v76;
            v78 = RtlLengthRequiredSid(v77[1]);
            RtlCopySid(v78, v76, v77);
            v79 = (unsigned __int16 *)v118;
            v80 = &v76[(v78 + 3) & 0xFFFFFFFC];
            if ( v118 )
            {
              v81 = v118;
              *v103 = v80;
              memmove(v80, v81, v79[1]);
            }
            inserted = SepSetTokenClaims((_DWORD)v67, v121, v120, a21, v119);
            if ( inserted >= 0 )
            {
              if ( !a24 || (inserted = SepSetTokenTrust(v67, SeProcTrustWinTcbSid), inserted >= 0) )
              {
                if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                  {
                    *(_DWORD *)(*(_QWORD *)v72 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                    v91 = *(_DWORD *)(*(_QWORD *)v72 + 280LL);
                    if ( v91 >= SepTokenLeakBreakCount )
                    {
                      DbgPrint("\nToken number 0x%x = 0x%p\n", v91, Object);
                      __debugbreak();
                    }
                  }
                  v67 = (char *)Object;
                }
                if ( a24 )
                {
                  v86 = Object;
                  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted < 0 )
                  {
                    *Handle = 0LL;
                  }
                  else
                  {
                    if ( !v94 )
                      SepAppendAdminAceToTokenAcl(v86);
                    *Handle = v86;
                  }
                  return (unsigned int)inserted;
                }
                inserted = SeCreateAccessState(&PassedAccessState, v123, v112, (char *)SeTokenObjectType + 76);
                v82 = v67;
                if ( inserted < 0 )
                  goto LABEL_73;
                inserted = ObInsertObject(v67, &PassedAccessState, 0, 1u, 0LL, Handle);
                SeDeleteAccessState(&PassedAccessState);
                if ( inserted < 0 )
                  return (unsigned int)inserted;
                if ( !v94 )
                  SepAppendAdminAceToTokenAcl(v67);
              }
            }
          }
          else
          {
            inserted = -1073741801;
          }
LABEL_72:
          v82 = v67;
LABEL_73:
          ObfDereferenceObjectWithTag(v82, 0x746C6644u);
          return (unsigned int)inserted;
        }
        ExFreePoolWithTag(v55, 0);
        if ( SeTokenLeakTracking )
        {
          v87 = v57;
          goto LABEL_112;
        }
      }
      return 3221225626LL;
    }
    return 3221225485LL;
  }
  return result;
}
