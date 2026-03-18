/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x140732C08
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140260300 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x140163370 (swprintf_s.c)
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140504D60 (RtlGetSaclSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x14056B830 (RtlNtStatusToDosError.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140576E70 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140577080 (RtlGetOwnerSecurityDescriptor.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405949E0 (RtlGetControlSecurityDescriptor.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 *     LocalGetStringForControl @ 0x14073340C (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x140733D00 (SddlFilterSacl.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForSid; // r13d
  int OwnerSecurityDescriptor; // eax
  unsigned int v10; // esi
  PSID v11; // r15
  PSID v12; // r12
  void *v13; // rdi
  __int16 v14; // bx
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  PVOID v18; // rax
  ULONG v19; // ebx
  PVOID v20; // rbx
  int v21; // eax
  WORD v22; // bx
  char v23; // r14
  BOOLEAN v24; // cl
  PVOID v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  PVOID v28; // rdi
  __int64 v29; // rax
  PVOID v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  size_t v33; // r14
  wchar_t *v34; // rax
  wchar_t **v35; // r10
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbx
  wchar_t *v39; // rcx
  size_t v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  size_t v43; // r14
  size_t v44; // rdx
  __int64 v45; // rbx
  wchar_t *v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // [rsp+20h] [rbp-91h]
  int v49; // [rsp+38h] [rbp-79h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v51; // [rsp+58h] [rbp-59h]
  PVOID v52; // [rsp+60h] [rbp-51h] BYREF
  PVOID v53; // [rsp+68h] [rbp-49h] BYREF
  PVOID v54; // [rsp+70h] [rbp-41h] BYREF
  PVOID P; // [rsp+78h] [rbp-39h]
  PACL Sacl; // [rsp+80h] [rbp-31h] BYREF
  PVOID v57; // [rsp+88h] [rbp-29h]
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG OwnerDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Owner = 0LL;
  OwnerSecurityDescriptor = 0;
  Group = 0LL;
  v10 = 0;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v57 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  Src = 0LL;
  Control = 0;
  v53 = 0LL;
  v54 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
    {
LABEL_19:
      v19 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v19;
    }
    v11 = Owner;
  }
  if ( (v14 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&OwnerDefaulted);
    v12 = Group;
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  if ( (v14 & 4) != 0 )
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  v15 = v14 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&OwnerDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v13 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v18 = SddlpAlloc((unsigned int)Size);
        P = v18;
        if ( !v18 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_19;
        }
        SddlFilterSacl(v13, v18, &Size, v15);
        v13 = P;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_19;
  if ( v11 )
  {
    StringForSid = LocalGetStringForSid(v11, v48, 1);
    if ( StringForSid )
      goto LABEL_26;
  }
  if ( v12 )
  {
    v21 = LocalGetStringForSid(v12, v48, 1);
    v12 = 0LL;
    StringForSid = v21;
    if ( v21 )
      goto LABEL_26;
  }
  v22 = Control;
  if ( Control )
  {
    StringForSid = LocalGetStringForControl(Control, 1LL, &v53);
    if ( StringForSid )
      goto LABEL_26;
    StringForSid = LocalGetStringForControl(v22, 2LL, &v54);
    if ( StringForSid )
      goto LABEL_26;
  }
  v23 = SaclPresent;
  if ( (_BYTE)SaclPresent )
  {
    StringForSid = LocalConvertAclToString(
                     (__int64)v13,
                     SaclPresent,
                     0,
                     (wchar_t **)&v52,
                     (unsigned int *)&Size,
                     (__int64)v12,
                     (__int64)v12,
                     v49,
                     1);
    if ( StringForSid )
      goto LABEL_26;
    v10 = Size;
  }
  v24 = DaclPresent;
  if ( !DaclPresent )
    goto LABEL_38;
  StringForSid = LocalConvertAclToString(
                   (__int64)Dacl,
                   DaclPresent,
                   1,
                   &Src,
                   (unsigned int *)&Size,
                   (__int64)v12,
                   (__int64)v12,
                   v49,
                   1);
  if ( StringForSid )
  {
LABEL_26:
    v20 = v52;
LABEL_85:
    v28 = v51;
    goto LABEL_86;
  }
  v10 += Size;
  v24 = DaclPresent;
LABEL_38:
  v25 = v57;
  v26 = -1LL;
  if ( v57 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_WORD *)v57 + v27) != (_WORD)v12 );
    v10 += 2 * v27 + 4;
  }
  v28 = v51;
  if ( v51 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *((_WORD *)v51 + v29) != (_WORD)v12 );
    v10 += 2 * v29 + 4;
  }
  v30 = v53;
  if ( v24 )
  {
    v10 += 4;
    if ( v53 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( *((_WORD *)v53 + v31) );
      v10 += 2 * v31;
    }
  }
  if ( v23 )
  {
    v10 += 4;
    if ( v54 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *((_WORD *)v54 + v32) );
      v10 += 2 * v32;
    }
  }
  v33 = v10 + 2LL;
  v34 = (wchar_t *)SddlpAlloc(v33);
  v35 = a6;
  *a6 = v34;
  if ( v34 )
  {
    LODWORD(v36) = 0;
    if ( v25 )
    {
      LODWORD(v48) = 58;
      swprintf_s(v34, v33 >> 1, L"%ws%wc%ws", L"O", v48, v25);
      v35 = a6;
      v36 = -1LL;
      do
        ++v36;
      while ( (*a6)[v36] );
    }
    if ( v51 )
    {
      LODWORD(v48) = 58;
      swprintf_s(&(*v35)[(unsigned int)v36], (v33 >> 1) - (unsigned int)v36, L"%ws%wc%ws", L"G", v48, v51);
      v35 = a6;
      v37 = -1LL;
      do
        ++v37;
      while ( (*a6)[(unsigned int)v36 + v37] );
      LODWORD(v36) = v37 + v36;
    }
    if ( DaclPresent )
    {
      v38 = (unsigned int)v36;
      v39 = &(*v35)[v38];
      if ( v30 )
      {
        v40 = v33 >> 1;
        LODWORD(v48) = 58;
        swprintf_s(v39, (v33 >> 1) - (unsigned int)v36, L"%ws%wc%ws", L"D", v48, v53);
      }
      else
      {
        v40 = v33 >> 1;
        LODWORD(v48) = 58;
        swprintf_s(v39, (v33 >> 1) - (unsigned int)v36, L"%ws%wc", L"D", v48);
      }
      v35 = a6;
      v41 = -1LL;
      do
        ++v41;
      while ( (*a6)[v38 + v41] );
      v36 = (unsigned int)(v41 + v36);
      if ( Src )
      {
        wcscpy_s(&(*a6)[v36], v40 - (unsigned int)v36, Src);
        v35 = a6;
        v42 = -1LL;
        do
          ++v42;
        while ( (*a6)[v36 + v42] );
        LODWORD(v36) = v42 + v36;
      }
    }
    if ( (_BYTE)SaclPresent )
    {
      v43 = v33 >> 1;
      v44 = v43 - (unsigned int)v36;
      v45 = (unsigned int)v36;
      v46 = &(*v35)[v45];
      LODWORD(v48) = 58;
      if ( v54 )
        swprintf_s(v46, v44, L"%ws%wc%ws", L"S", v48, v54);
      else
        swprintf_s(v46, v44, L"%ws%wc", L"S", v48);
      do
        ++v26;
      while ( (*a6)[v45 + v26] );
      v20 = v52;
      v47 = (unsigned int)(v26 + v36);
      if ( v52 )
        wcscpy_s(&(*a6)[v47], v43 - (unsigned int)v47, (const wchar_t *)v52);
    }
    else
    {
      v20 = v52;
    }
    if ( a7 )
      *a7 = v10 >> 1;
    goto LABEL_85;
  }
  v20 = v52;
  StringForSid = 8;
LABEL_86:
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  if ( v53 )
    ExFreePoolWithTag(v53, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return StringForSid;
}
