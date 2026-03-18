/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1402646C0 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     StringCchPrintfW @ 0x140034264 (StringCchPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14006F530 (RtlGetDaclSecurityDescriptor.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlGetAce @ 0x1400880C0 (RtlGetAce.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140248BE0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     AdtpFormatPrefix @ 0x1402659EC (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x140265AD4 (StringCchPrintfExW.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlIntegerToUnicodeString @ 0x1404C02F0 (RtlIntegerToUnicodeString.c)
 *     RtlAddAce @ 0x1404F5B60 (RtlAddAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1407330B0 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x140733FA4 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        __int64 a1,
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
  wchar_t *Buffer; // r15
  ACL *v15; // r13
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
  ULONG v29; // edx
  PACL v30; // r14
  unsigned __int16 *v31; // r12
  ULONG v32; // ebx
  ACL *v33; // rax
  int v34; // eax
  PACL v35; // r12
  UNICODE_STRING *v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rcx
  unsigned int v39; // ecx
  __int16 v40; // r14
  UNICODE_STRING *v41; // rdx
  UNICODE_STRING *v42; // rdx
  ULONG v43; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 Length; // r12
  unsigned int v46; // edi
  char *PoolWithTag; // r14
  _WORD *v48; // rax
  __int16 v49; // di
  __int64 v51; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-98h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+70h] [rbp-90h] BYREF
  PCWSTR v56[2]; // [rsp+78h] [rbp-88h] BYREF
  size_t pcchRemaining; // [rsp+88h] [rbp-78h] BYREF
  int v58[2]; // [rsp+90h] [rbp-70h]
  PVOID Ace; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v61; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v62; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v63; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v65; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v66; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v67; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v68; // [rsp+120h] [rbp+20h] BYREF
  _BYTE *v69; // [rsp+130h] [rbp+30h]
  _WORD *v70; // [rsp+138h] [rbp+38h]
  wchar_t pszFormat[8]; // [rsp+140h] [rbp+40h] BYREF
  UNICODE_STRING v72; // [rsp+150h] [rbp+50h] BYREF
  int v73; // [rsp+160h] [rbp+60h]
  wchar_t pszDest[20]; // [rsp+170h] [rbp+70h] BYREF
  char v75; // [rsp+198h] [rbp+98h] BYREF
  char v76; // [rsp+1B0h] [rbp+B0h] BYREF
  char v77; // [rsp+1D0h] [rbp+D0h] BYREF
  char v78; // [rsp+1F0h] [rbp+F0h] BYREF
  char v79; // [rsp+210h] [rbp+110h] BYREF
  char v80; // [rsp+230h] [rbp+130h] BYREF
  char v81; // [rsp+250h] [rbp+150h] BYREF
  char v82; // [rsp+270h] [rbp+170h] BYREF

  v12 = 0LL;
  *(_QWORD *)pszFormat = a7;
  *(_QWORD *)v58 = a1;
  v69 = a12;
  v70 = a8;
  Buffer = 0LL;
  Ace = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v15 = 0LL;
  DestinationString.Buffer = 0LL;
  v16 = 0;
  pcchRemaining = a4;
  v17 = 1;
  Dacl = 0LL;
  v56[0] = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&v61.Length = 0LL;
  v61.Buffer = 0LL;
  while ( (v17 & a5) == 0 )
  {
    ++v16;
    v17 *= 2;
    if ( v16 >= 0x20 )
    {
      v16 = v58[0];
      break;
    }
  }
  *(_DWORD *)&v72.Length = 1310720;
  v72.Buffer = (wchar_t *)&v75;
  *(_DWORD *)&v62.Length = 1966080;
  v62.Buffer = (wchar_t *)&v76;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v62, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v77;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v66.Length = 1966080;
  v66.Buffer = (wchar_t *)&v78;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v66, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v79;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&v63.Length = 1966080;
  v63.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v63, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_129;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             v58[0],
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
  v58[0] = DestinationString.Length >> 1;
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
    v56[0] = (PCWSTR)(unsigned __int16)v19;
    v72.Buffer = (wchar_t *)(unsigned __int16)v19;
    wcscpy(&v72.Length, L"\x01");
    *(_DWORD *)(&v72.MaximumLength + 1) = 1;
    v73 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v72, &v61, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_27:
      Buffer = v61.Buffer;
      goto LABEL_129;
    }
    v21 = (v61.Length >> 1) + 27;
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
      v42 = &v62;
    else
      v42 = &v68;
    RtlAppendUnicodeStringToString(&Destination, v42);
    RtlAppendUnicodeStringToString(&Destination, &v61);
    Buffer = v61.Buffer;
    if ( v61.Buffer )
    {
      ExFreePoolWithTag(v61.Buffer, 0);
      Buffer = 0LL;
    }
    goto LABEL_116;
  }
  if ( !v20 )
  {
LABEL_92:
    v43 = (unsigned int)Dacl;
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
        v46 = v58[0] + 1 + (Destination.Length >> 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * v46, 0x6B416553u);
        if ( PoolWithTag )
        {
          *v69 = 1;
          if ( DestinationString.Length )
            memmove(PoolWithTag, DestinationString.Buffer, DestinationString.Length);
          v12 = Destination.Buffer;
          if ( Length )
            memmove(&PoolWithTag[DestinationString.Length], Destination.Buffer, Length);
          *(_WORD *)&PoolWithTag[2 * v46 - 2] = 0;
          v48 = v70;
          v49 = 2 * (v46 - 1);
          *v70 = v49;
          v48[1] = v49 + 2;
          *((_QWORD *)v48 + 1) = PoolWithTag;
        }
        else
        {
          v12 = Destination.Buffer;
          DaclSecurityDescriptor = -1073741801;
        }
        v35 = Dacl;
        goto LABEL_124;
      }
      v43 = 1830;
LABEL_94:
      if ( v20 == 3145728 )
        v43 = 1803;
      if ( v20 == 0x400000 )
        v43 = 1804;
      if ( v20 == 5242880 )
        v43 = 1806;
      if ( v20 == 6291456 )
        v43 = 1807;
      if ( v20 == 7340032 )
        v43 = 1808;
      if ( !v20 )
        v43 = 1809;
      if ( v20 == 0x800000 )
        v43 = 1805;
      if ( v20 == 9437184 )
        v43 = 1841;
      if ( v20 == 10485760 )
        v43 = 1856;
      Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x6B416553u);
      v12 = Destination.Buffer;
      if ( Destination.Buffer )
      {
        *(_DWORD *)&Destination.Length = 5111808;
        RtlAppendUnicodeToString(&Destination, L"%%");
        DaclSecurityDescriptor = RtlIntegerToUnicodeString(v43, 0xAu, &v72);
        if ( DaclSecurityDescriptor < 0 )
        {
          v12 = Destination.Buffer;
          goto LABEL_129;
        }
        v28 = &v72;
        goto LABEL_115;
      }
      goto LABEL_40;
    }
    v22 = 2;
    LODWORD(v56[0]) = 131074;
    wcscpy(pszFormat, L"# %d");
    v56[1] = L"-";
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
        *(_OWORD *)v56 = *(_OWORD *)(v24 + 16LL * (unsigned __int16)v19);
        v22 = (unsigned __int16)v56[0];
        if ( LOWORD(v56[0]) > 2u )
          goto LABEL_39;
      }
    }
    LODWORD(v51) = (unsigned __int16)v19;
    pcchRemaining = 0LL;
    if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v51) >= 0 )
    {
      v22 = 2 * (20 - pcchRemaining);
      WORD1(v56[0]) = 40;
      LOWORD(v56[0]) = v22;
      v56[1] = pszDest;
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
        p_Source = &v63;
      else
        p_Source = &Source;
      RtlAppendUnicodeStringToString(&Destination, p_Source);
      v28 = (const UNICODE_STRING *)v56;
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
      v29 = (unsigned __int16)v19;
      v30 = Dacl;
      DaclSecurityDescriptor = RtlGetAce(Dacl, v29, &Ace);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v31 = (unsigned __int16 *)Ace;
        v32 = *((unsigned __int16 *)Ace + 1) + 8;
        v33 = (ACL *)ExAllocatePoolWithTag(PagedPool, v32, 0x6B416553u);
        v15 = v33;
        if ( !v33 )
          goto LABEL_40;
        DaclSecurityDescriptor = RtlCreateAcl(v33, v32, v30->AclRevision);
        if ( DaclSecurityDescriptor < 0
          || (DaclSecurityDescriptor = RtlAddAce(v15, v30->AclRevision, 0, v31, v31[1]), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
          || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v15, 0), DaclSecurityDescriptor < 0) )
        {
LABEL_126:
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
          goto LABEL_129;
        }
        v34 = SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)pszDest, 1LL, 4LL, v56, &Dacl);
        v35 = (PACL)v56[0];
        DaclSecurityDescriptor = v34;
        Dacl = (PACL)v56[0];
        if ( v34 < 0 )
        {
          if ( v34 == -1073741801 )
            goto LABEL_124;
          v36 = &v72;
          if ( StringCchPrintfW(&v72.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v34) < 0 )
            v36 = (UNICODE_STRING *)L"-";
        }
        else
        {
          v36 = (UNICODE_STRING *)v56[0];
        }
        v37 = -1LL;
        v38 = -1LL;
        do
          ++v38;
        while ( *(&v36->Length + v38) );
        v39 = v38 + 1;
        if ( 2 * (unsigned __int64)v39 > 0xFFFF )
        {
          DaclSecurityDescriptor = RtlStringCbPrintfW(&v72.Length, 0x10uLL, L"%%%%%u", 1828LL);
          if ( DaclSecurityDescriptor < 0 )
            goto LABEL_124;
          v36 = &v72;
          do
            ++v37;
          while ( *(&v72.Length + v37) );
          v39 = v37 + 1;
        }
        v40 = v39 + 27;
        Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v39 + 27), 0x6B416553u);
        v12 = Destination.Buffer;
        if ( Destination.Buffer )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 2 * v40;
          switch ( v20 )
          {
            case 65536:
              v41 = &v62;
              break;
            case 131072:
              v41 = &v65;
              break;
            case 196608:
              v41 = &v66;
              break;
            default:
              v41 = &v67;
              break;
          }
          RtlAppendUnicodeStringToString(&Destination, v41);
          RtlAppendUnicodeToString(&Destination, &v36->Length);
          if ( v35 )
          {
            ExFreePoolWithTag(v35, 0);
            Dacl = 0LL;
          }
          ExFreePoolWithTag(v15, 0);
          v15 = 0LL;
          goto LABEL_116;
        }
        DaclSecurityDescriptor = -1073741801;
LABEL_124:
        if ( v35 )
          ExFreePoolWithTag(v35, 0);
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
