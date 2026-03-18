/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x14028EEE0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14028EA0C (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlGetAce @ 0x140019210 (RtlGetAce.c)
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     StringCchPrintfW @ 0x14012B374 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140260300 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     AdtpFormatPrefix @ 0x14028FD28 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x14028FE10 (StringCchPrintfExW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlAddAce @ 0x140486100 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlIntegerToUnicodeString @ 0x1404E0C50 (RtlIntegerToUnicodeString.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140777224 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        ACL *a1,
        void *a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        _WORD *a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  wchar_t *v12; // rsi
  wchar_t *Buffer; // r12
  WCHAR *v15; // r13
  unsigned int v16; // edi
  int v17; // eax
  NTSTATUS DaclSecurityDescriptor; // ebx
  int v19; // r14d
  int v20; // edi
  unsigned int v21; // ebx
  unsigned __int16 v22; // bx
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v28; // rdx
  PACL v29; // r15
  unsigned __int16 *v30; // r13
  ULONG v31; // ebx
  ACL *v32; // rax
  ACL *v33; // r14
  int v34; // eax
  UNICODE_STRING *v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rcx
  unsigned int v38; // ecx
  __int16 v39; // r15
  UNICODE_STRING *v40; // rdx
  UNICODE_STRING *v41; // rdx
  ULONG v42; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 Length; // r15
  unsigned int v45; // edi
  char *PoolWithTag; // r14
  _WORD *v47; // rax
  __int16 v48; // di
  __int64 v50; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v55[2]; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+88h] [rbp-78h]
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  PVOID Ace; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v60; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v61; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v62; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v64; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v65; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v66; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v67; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v68; // [rsp+130h] [rbp+30h]
  _WORD *v69; // [rsp+138h] [rbp+38h]
  wchar_t pszFormat[8]; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v71; // [rsp+150h] [rbp+50h] BYREF
  int v72; // [rsp+160h] [rbp+60h]
  wchar_t pszDest[20]; // [rsp+170h] [rbp+70h] BYREF
  char v74; // [rsp+198h] [rbp+98h] BYREF
  char v75; // [rsp+1B0h] [rbp+B0h] BYREF
  char v76; // [rsp+1D0h] [rbp+D0h] BYREF
  char v77; // [rsp+1F0h] [rbp+F0h] BYREF
  char v78; // [rsp+210h] [rbp+110h] BYREF
  char v79; // [rsp+230h] [rbp+130h] BYREF
  char v80; // [rsp+250h] [rbp+150h] BYREF
  char v81; // [rsp+270h] [rbp+170h] BYREF

  v12 = 0LL;
  *(_QWORD *)pszFormat = a7;
  Dacl = a1;
  v68 = a12;
  v69 = a8;
  Buffer = 0LL;
  Ace = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v15 = 0LL;
  DestinationString.Buffer = 0LL;
  v16 = 0;
  pcchRemaining = a4;
  v17 = 1;
  v55[0] = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&v60.Length = 0LL;
  v60.Buffer = 0LL;
  while ( (v17 & a5) == 0 )
  {
    ++v16;
    v17 *= 2;
    if ( v16 >= 0x20 )
    {
      v16 = v56;
      break;
    }
  }
  *(_DWORD *)&v71.Length = 1310720;
  v71.Buffer = (wchar_t *)&v74;
  *(_DWORD *)&v61.Length = 1966080;
  v61.Buffer = (wchar_t *)&v75;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v61, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v64.Length = 1966080;
  v64.Buffer = (wchar_t *)&v76;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v64, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v77;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v66.Length = 1966080;
  v66.Buffer = (wchar_t *)&v78;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v62.Length = 1966080;
  v62.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v62, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             (int)Dacl,
                             (int)Ace,
                             a5,
                             2,
                             &DestinationString,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  v56 = DestinationString.Length >> 1;
  v19 = *(_DWORD *)(*(_QWORD *)pszFormat + 4LL * v16);
  v20 = v19 & 0xFF0000;
  if ( (v19 & 0xFF0000u) > 0x200000 )
  {
    if ( v20 != 3145728
      && v20 != 0x400000
      && v20 != 5242880
      && v20 != 6291456
      && v20 != 7340032
      && v20 != 0x800000
      && v20 != 9437184
      && v20 != 10485760 )
    {
      goto LABEL_116;
    }
    goto LABEL_92;
  }
  if ( v20 == 0x200000 )
  {
LABEL_24:
    v55[0] = (PCWSTR)(unsigned __int16)v19;
    v71.Buffer = (wchar_t *)(unsigned __int16)v19;
    wcscpy(&v71.Length, L"\x01");
    *(_DWORD *)(&v71.MaximumLength + 1) = 1;
    v72 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v71, &v60, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_27:
      Buffer = v60.Buffer;
      goto LABEL_129;
    }
    v21 = (v60.Length >> 1) + 27;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x6B416553u);
    v12 = Destination.Buffer;
    if ( !Destination.Buffer )
    {
      DaclSecurityDescriptor = -1073741801;
      goto LABEL_27;
    }
    Destination.Length = 0;
    Destination.MaximumLength = 2 * v21;
    if ( v20 == 0x200000 )
      v41 = &v61;
    else
      v41 = &v67;
    RtlAppendUnicodeStringToString(&Destination, v41);
    RtlAppendUnicodeStringToString(&Destination, &v60);
    Buffer = v60.Buffer;
    if ( v60.Buffer )
    {
      ExFreePoolWithTag(v60.Buffer, 0);
      Buffer = 0LL;
    }
    goto LABEL_116;
  }
  if ( !v20 )
  {
LABEL_92:
    v42 = pcchRemaining;
    goto LABEL_94;
  }
  if ( v20 != 0x10000 && v20 != 0x20000 && v20 != 196608 && v20 != 0x40000 )
  {
    if ( v20 != 327680 && v20 != 393216 )
    {
      if ( v20 != 458752 )
      {
        if ( v20 == 0x100000 )
          goto LABEL_24;
LABEL_116:
        appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
        Length = Destination.Length;
        DaclSecurityDescriptor = appended;
        v45 = v56 + 1 + (Destination.Length >> 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v45, 0x6B416553u);
        if ( PoolWithTag )
        {
          *v68 = 1;
          if ( DestinationString.Length )
            memmove(PoolWithTag, DestinationString.Buffer, DestinationString.Length);
          v12 = Destination.Buffer;
          if ( Length )
            memmove(&PoolWithTag[DestinationString.Length], Destination.Buffer, Length);
          *(_WORD *)&PoolWithTag[2 * v45 - 2] = 0;
          v47 = v69;
          v48 = 2 * (v45 - 1);
          *v69 = v48;
          v47[1] = v48 + 2;
          *((_QWORD *)v47 + 1) = PoolWithTag;
        }
        else
        {
          v12 = Destination.Buffer;
          DaclSecurityDescriptor = -1073741801;
        }
        v33 = 0LL;
        goto LABEL_124;
      }
      v42 = 1830;
LABEL_94:
      if ( v20 == 3145728 )
        v42 = 1803;
      if ( v20 == 0x400000 )
        v42 = 1804;
      if ( v20 == 5242880 )
        v42 = 1806;
      if ( v20 == 6291456 )
        v42 = 1807;
      if ( v20 == 7340032 )
        v42 = 1808;
      if ( !v20 )
        v42 = 1809;
      if ( v20 == 0x800000 )
        v42 = 1805;
      if ( v20 == 9437184 )
        v42 = 1841;
      if ( v20 == 10485760 )
        v42 = 1856;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
      v12 = Destination.Buffer;
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 5111808;
        RtlAppendUnicodeToString(&Destination, L"%%");
        DaclSecurityDescriptor = RtlIntegerToUnicodeString(v42, 0xAu, &v71);
        if ( DaclSecurityDescriptor < 0 )
        {
          v12 = Destination.Buffer;
          goto LABEL_129;
        }
        v28 = &v71;
        goto LABEL_115;
      }
      goto LABEL_40;
    }
    v22 = 2;
    LODWORD(v55[0]) = 131074;
    wcscpy(pszFormat, L"# %d");
    v55[1] = L"-";
    if ( v20 == 393216 )
    {
      v25 = *(_DWORD *)(pcchRemaining + 8);
      if ( v25 )
      {
        if ( (unsigned __int16)v19 >= v25 )
          goto LABEL_31;
        v24 = *(_QWORD *)(pcchRemaining + 16);
        goto LABEL_36;
      }
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 8);
      if ( v23 )
      {
        if ( (unsigned __int16)v19 >= v23 )
        {
LABEL_31:
          DaclSecurityDescriptor = -1073741811;
          goto LABEL_129;
        }
        v24 = *(_QWORD *)(a3 + 16);
LABEL_36:
        *(_OWORD *)v55 = *(_OWORD *)(v24 + 16LL * (unsigned __int16)v19);
        v22 = (unsigned __int16)v55[0];
        if ( LOWORD(v55[0]) > 2u )
          goto LABEL_39;
      }
    }
    LODWORD(v50) = (unsigned __int16)v19;
    pcchRemaining = 0LL;
    if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v50) >= 0 )
    {
      v22 = 2 * (20 - pcchRemaining);
      WORD1(v55[0]) = 40;
      LOWORD(v55[0]) = v22;
      v55[1] = pszDest;
    }
LABEL_39:
    v26 = v22 + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v26, 0x6B416553u);
    v12 = Destination.Buffer;
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v26;
      if ( v20 == 327680 )
        p_Source = &v62;
      else
        p_Source = &Source;
      RtlAppendUnicodeStringToString(&Destination, p_Source);
      v28 = (const UNICODE_STRING *)v55;
LABEL_115:
      RtlAppendUnicodeStringToString(&Destination, v28);
      goto LABEL_116;
    }
LABEL_40:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_129;
  }
  Dacl = 0LL;
  Ace = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( ((v20 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = pcchRemaining;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)a3, DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor >= 0 )
  {
    if ( DaclPresent[0] )
    {
      v29 = Dacl;
      DaclSecurityDescriptor = RtlGetAce(Dacl, (unsigned __int16)v19, &Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v30 = (unsigned __int16 *)Ace;
        v31 = *((unsigned __int16 *)Ace + 1) + 8;
        v32 = (ACL *)ExAllocatePoolWithTag(PagedPool, v31, 0x6B416553u);
        v33 = v32;
        if ( !v32 )
          goto LABEL_40;
        DaclSecurityDescriptor = RtlCreateAcl(v32, v31, v29->AclRevision);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v33, v29->AclRevision, 0, v30, v30[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v33, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_126:
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          goto LABEL_129;
        }
        v34 = SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)pszDest, 1LL, 4LL, v55, &pcchRemaining);
        v15 = (WCHAR *)v55[0];
        DaclSecurityDescriptor = v34;
        if ( v34 < 0 )
        {
          if ( v34 == -1073741801 )
            goto LABEL_124;
          v35 = &v71;
          if ( StringCchPrintfW(&v71.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v34) < 0 )
            v35 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v35 = (UNICODE_STRING *)v55[0];
        }
        v36 = -1LL;
        v37 = -1LL;
        do
          ++v37;
        while ( *(&v35->Length + v37) );
        v38 = v37 + 1;
        if ( 2 * (unsigned __int64)v38 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v71.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_124;
          v35 = &v71;
          do
            ++v36;
          while ( *(&v71.Length + v36) );
          v38 = v36 + 1;
        }
        v39 = v38 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v38 + 27), 0x6B416553u);
        v12 = Destination.Buffer;
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v39;
          switch ( v20 )
          {
            case 65536:
              v40 = &v61;
              break;
            case 131072:
              v40 = &v64;
              break;
            case 196608:
              v40 = &v65;
              break;
            default:
              v40 = &v66;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v40);
          RtlAppendUnicodeToString(&Destination, &v35->Length);
          if ( v15 )
          {
            ExFreePoolWithTag(v15, 0);
            v15 = 0LL;
          }
          ExFreePoolWithTag(v33, 0);
          goto LABEL_116;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_124:
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        goto LABEL_126;
      }
    }
  }
LABEL_129:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
