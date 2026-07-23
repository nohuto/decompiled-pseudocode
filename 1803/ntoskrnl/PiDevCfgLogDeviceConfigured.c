/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1405D60B0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     PnpGetLogString @ 0x140147190 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzqzztqz @ 0x140147358 (McTemplateK0zzjzzztzqzztqz.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401477A8 (RtlUnicodeStringPrintfEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14023A8C4 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405D60B0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PnpTraceDeviceConfig @ 0x1405E7454 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  wchar_t *Buffer; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // r8
  int v14; // r11d
  const wchar_t *v15; // rax
  wchar_t *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  int *v20; // rax
  __int64 v21; // r10
  const wchar_t *v22; // rdx
  const wchar_t *v23; // r8
  const wchar_t *v24; // r9
  char v25; // r11
  _QWORD *v26; // rcx
  wchar_t *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // r9d
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v36; // xmm0
  __int64 **v37; // rax
  __int64 *v38; // rcx
  __int64 *v39; // rsi
  unsigned __int16 Length; // dx
  unsigned int v41; // r9d
  __int64 v42; // r8
  BOOLEAN v43; // al
  unsigned int v44; // ecx
  __int64 v45; // rcx
  wchar_t *v46; // r8
  size_t v47; // r9
  size_t v48; // r10
  size_t v49; // rax
  __int16 v50; // cx
  int v51; // edx
  unsigned __int64 v52; // r9
  const WCHAR *v53; // rcx
  __int64 v54; // r11
  size_t v55; // rax
  const wchar_t *v56; // rax
  wchar_t *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // r8
  int *v61; // rax
  const wchar_t *v62; // rdx
  const wchar_t *v63; // r8
  const wchar_t *v64; // r9
  char v65; // r11
  size_t v66; // rax
  const wchar_t *v67; // rax
  wchar_t *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // r8
  int *LogString; // rax
  const wchar_t *v73; // rdx
  const wchar_t *v74; // r8
  const wchar_t *v75; // r9
  char v76; // r11
  int v77; // edx
  wchar_t *v78; // rax
  size_t v79; // rcx
  _QWORD *v80; // rsi
  int v81; // eax
  int v82; // edx
  int v83; // r9d
  __int64 v84; // r9
  __int64 v85; // rdx
  int v86; // ecx
  wchar_t *v87; // r8
  unsigned __int16 v88; // cx
  unsigned int v89; // edx
  UNICODE_STRING *v90; // rdx
  const wchar_t *v91; // rcx
  NTSTATUS v92; // edi
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+20h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+28h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-E0h]
  int v98; // [rsp+48h] [rbp-C8h]
  int v99; // [rsp+58h] [rbp-B8h]
  int v100; // [rsp+60h] [rbp-B0h]
  char v101; // [rsp+90h] [rbp-80h]
  char v102; // [rsp+90h] [rbp-80h]
  int v103; // [rsp+90h] [rbp-80h]
  size_t cchDest; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v105; // [rsp+A0h] [rbp-70h]
  const wchar_t *v106; // [rsp+A8h] [rbp-68h]
  __int64 *v107; // [rsp+B0h] [rbp-60h]
  _TIME_FIELDS TimeFields; // [rsp+C0h] [rbp-50h] BYREF
  size_t pcchNewDestLength; // [rsp+D0h] [rbp-40h] BYREF
  size_t Size; // [rsp+D8h] [rbp-38h]
  WCHAR v111; // [rsp+E0h] [rbp-30h]
  int v112; // [rsp+E4h] [rbp-2Ch]
  int v113; // [rsp+E8h] [rbp-28h]
  __int64 v114; // [rsp+F0h] [rbp-20h]
  UNICODE_STRING UnicodeString; // [rsp+F8h] [rbp-18h] BYREF
  int v116; // [rsp+108h] [rbp-8h]
  UNICODE_STRING v117; // [rsp+110h] [rbp+0h] BYREF
  UNICODE_STRING v118; // [rsp+120h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+20h] BYREF
  UNICODE_STRING v120; // [rsp+140h] [rbp+30h] BYREF
  __int64 v121; // [rsp+150h] [rbp+40h]
  UNICODE_STRING GuidString; // [rsp+158h] [rbp+48h] BYREF
  size_t v123; // [rsp+168h] [rbp+58h] BYREF
  __int64 v124; // [rsp+170h] [rbp+60h]
  UNICODE_STRING v125; // [rsp+178h] [rbp+68h] BYREF
  GUID Guid; // [rsp+188h] [rbp+78h] BYREF
  _QWORD v127[16]; // [rsp+1A0h] [rbp+90h] BYREF
  wchar_t pszDest[12]; // [rsp+220h] [rbp+110h] BYREF
  wchar_t v129[24]; // [rsp+238h] [rbp+128h] BYREF

  v5 = 0LL;
  v114 = a1;
  v121 = a2;
  v112 = a4;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  v7 = 0LL;
  UnicodeString.Buffer = 0LL;
  v116 = 1;
  v105 = 1;
  v124 = 0LL;
  *(_DWORD *)&v118.Length = 0;
  v118.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v113 = 0;
  *(_DWORD *)&v120.Length = 0;
  v120.Buffer = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x180000) != 0x180000 )
    goto LABEL_37;
  if ( a3 )
  {
    memset(v127, 0, 0x78uLL);
    v8 = *(_QWORD *)(a3 + 16);
    v9 = *(_QWORD *)(a3 + 64);
    v127[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v127[2] = &DestinationString;
    v127[5] = &DEVPKEY_DriverPackage_DriverFlightIds;
    v127[7] = &UnicodeString;
    LODWORD(v127[1]) = 18;
    HIDWORD(v127[3]) = 6;
    LODWORD(v127[6]) = 8210;
    HIDWORD(v127[8]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(v10, v9, 8, v8, (__int64)v127, 2) < 0 )
      goto LABEL_37;
    if ( SLODWORD(v127[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v127[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v41 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v42 = 0LL;
        do
        {
          if ( !Buffer[v42] )
          {
            Buffer[v42] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v42 = ++v41;
        }
        while ( v41 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( DestinationString.Buffer )
    {
      v43 = RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u);
      v44 = v105;
      if ( !v43 )
        v44 = 0;
      v105 = v44;
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    LODWORD(pcchRemaining) = TimeFields.Year;
    LODWORD(ppszDestEnd) = TimeFields.Day;
    if ( RtlStringCchPrintfW(
           pszDest,
           0xBuLL,
           L"%02d/%02d/%04d",
           (unsigned int)TimeFields.Month,
           ppszDestEnd,
           pcchRemaining) < 0 )
      pszDest[0] = 0;
    LODWORD(pcchRemaininga) = *(unsigned __int16 *)(a3 + 122);
    LODWORD(ppszDestEnda) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v129,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           ppszDestEnda,
           pcchRemaininga,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v129[0] = 0;
    v12 = (__int64 *)(a3 + 208);
    v13 = *(__int64 **)(a3 + 208);
    v14 = 0;
    if ( *(_DWORD *)(a3 + 108) != -1 )
      v14 = *(_DWORD *)(a3 + 108);
    LODWORD(v107) = v14;
    if ( v13 != v12 )
    {
      v32 = 0;
      do
      {
        v33 = v13[20];
        v32 += *((unsigned __int16 *)v13 + 36) + *((unsigned __int16 *)v13 + 20) + 22;
        if ( v33 )
        {
          v45 = -1LL;
          do
            v30 = *(_WORD *)(v33 + 2 * v45++ + 2) == 0;
          while ( !v30 );
          v32 += 2 * v45 + 2;
        }
        v13 = (__int64 *)*v13;
      }
      while ( v13 != v12 );
      v34 = v32 + 2;
      if ( v34 > 0xFFFE )
      {
        LOWORD(v34) = -2;
        v118.MaximumLength = -2;
      }
      else
      {
        v118.MaximumLength = v34;
      }
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)v34);
      v118.Buffer = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_37;
      v36 = v118;
      *StringRoutine = 0;
      v37 = (__int64 **)(a3 + 208);
      v38 = *(__int64 **)(a3 + 208);
      TimeFields = (_TIME_FIELDS)v36;
      if ( v38 != (__int64 *)(a3 + 208) )
      {
        Size = (size_t)L" ";
        v39 = v38;
        do
        {
          if ( v39 != *v37 )
          {
            if ( (TimeFields.Year & 1) != 0 )
              break;
            if ( (TimeFields.Month & 1) != 0 )
              break;
            if ( TimeFields.Year > (unsigned int)TimeFields.Month )
              break;
            if ( TimeFields.Month == -1 )
              break;
            v46 = *(wchar_t **)&TimeFields.Minute;
            if ( !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
              break;
            v47 = *(_QWORD *)&TimeFields.Minute;
            v48 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            v49 = 0LL;
            cchDest = v48;
            v50 = (unsigned __int16)TimeFields.Month >> 1;
            if ( v48 )
            {
              v52 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
              v53 = L" ";
              v51 = 0;
              v54 = 0x7FFFLL;
              pcchNewDestLength = *(_QWORD *)&TimeFields.Minute - Size;
              LODWORD(v106) = 0;
              while ( v54 )
              {
                v111 = *v53;
                v46 = *(wchar_t **)&TimeFields.Minute;
                if ( !v111 )
                  break;
                --v54;
                ++v49;
                *(const WCHAR *)((char *)v53++ + pcchNewDestLength) = v111;
                v46 = *(wchar_t **)&TimeFields.Minute;
                v48 = cchDest;
                if ( !--v52 )
                  goto LABEL_90;
              }
              if ( v52 )
                goto LABEL_94;
LABEL_90:
              if ( v54 )
              {
                if ( *v53 )
                  v51 = -2147483643;
                LODWORD(v106) = v51;
              }
LABEL_94:
              pcchNewDestLength = v49;
              v50 = v48 - v49;
              v47 = (size_t)&v46[v49];
              cchDest = v47;
              v123 = v48 - v49;
              if ( v51 < 0 )
              {
                RtlUnicodeStringExHandleOtherFlags(
                  v46,
                  v48,
                  (size_t)v46,
                  &pcchNewDestLength,
                  (wchar_t **)&cchDest,
                  &v123,
                  0x800u);
                v47 = cchDest;
                v50 = v123;
                LOWORD(v49) = pcchNewDestLength;
                v51 = (int)v106;
              }
            }
            else
            {
              if ( !*(_QWORD *)&TimeFields.Minute )
                break;
              v51 = -2147483643;
            }
            TimeFields.Year = 2 * v49;
            if ( (int)(v51 + 0x80000000) < 0 || v51 == -2147483643 )
            {
              TimeFields.Year = 0;
              TimeFields.Month = 2 * v50;
              *(_QWORD *)&TimeFields.Minute = v47;
            }
            if ( v51 < 0 )
              break;
          }
          dwFlags[0] = *((_DWORD *)v39 + 27);
          if ( RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%wZ:%wZ:%08X",
                 v39 + 5,
                 v39 + 9,
                 *(_QWORD *)dwFlags) < 0
            || v39[20]
            && RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L":%ws",
                 v39[20]) < 0 )
          {
            break;
          }
          v39 = (__int64 *)*v39;
          v37 = (__int64 **)(a3 + 208);
        }
        while ( v39 != (__int64 *)(a3 + 208) );
        v7 = 0LL;
      }
    }
    LOBYTE(a4) = v112;
  }
  else
  {
    pszDest[0] = 0;
    v129[0] = 0;
    v105 = 0;
  }
  if ( a5 < 0 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) != 0 )
    {
      v102 = a4 & 1;
      v66 = a3 + 256;
      if ( !a3 )
        v66 = 0LL;
      Size = v66;
      if ( a3 )
      {
        v107 = (__int64 *)(a3 + 224);
        v67 = *(const wchar_t **)(a3 + 48);
      }
      else
      {
        v107 = PiDevCfgNullGuid;
        v67 = L"null";
      }
      v106 = v67;
      v68 = (wchar_t *)&dword_1407FF664;
      v69 = *(_QWORD *)(v114 + 16) + 40LL;
      if ( v118.Buffer )
        v68 = v118.Buffer;
      cchDest = (size_t)v68;
      PnpGetLogString(v69);
      PnpGetLogString(v70);
      PnpGetLogString(v71);
      LogString = PnpGetLogString(Size);
      McTemplateK0zzjzzztzqzztqz(
        v105,
        (__int64)&KMPnPEvt_DeviceConfig_Failure,
        (__int64)v74,
        *(const wchar_t **)(v21 + 8),
        v106,
        (__int64)v107,
        pszDest,
        v129,
        (const wchar_t *)LogString,
        v105,
        v74,
        v76,
        v75,
        (const wchar_t *)cchDest,
        v102,
        a5,
        v73);
    }
  }
  else if ( (a4 & 2) != 0 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) != 0 )
    {
      v101 = a4 & 1;
      v55 = a3 + 256;
      if ( !a3 )
        v55 = 0LL;
      Size = v55;
      if ( a3 )
      {
        v107 = (__int64 *)(a3 + 224);
        v56 = *(const wchar_t **)(a3 + 48);
      }
      else
      {
        v107 = PiDevCfgNullGuid;
        v56 = L"null";
      }
      v106 = v56;
      v57 = (wchar_t *)&dword_1407FF664;
      v58 = *(_QWORD *)(v114 + 16) + 40LL;
      if ( v118.Buffer )
        v57 = v118.Buffer;
      cchDest = (size_t)v57;
      PnpGetLogString(v58);
      PnpGetLogString(v59);
      PnpGetLogString(v60);
      v61 = PnpGetLogString(Size);
      McTemplateK0zzjzzztzqzztqz(
        v105,
        (__int64)&KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v63,
        *(const wchar_t **)(v21 + 8),
        v106,
        (__int64)v107,
        pszDest,
        v129,
        (const wchar_t *)v61,
        v105,
        v63,
        v65,
        v64,
        (const wchar_t *)cchDest,
        v101,
        a5,
        v62);
    }
  }
  else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
  {
    if ( (a4 & 1) == 0 )
      v116 = 0;
    if ( a3 )
    {
      pcchNewDestLength = a3 + 256;
      v107 = (__int64 *)(a3 + 224);
      v15 = *(const wchar_t **)(a3 + 48);
    }
    else
    {
      pcchNewDestLength = 0LL;
      v107 = PiDevCfgNullGuid;
      v15 = L"null";
    }
    v106 = v15;
    v16 = (wchar_t *)&dword_1407FF664;
    v17 = *(_QWORD *)(v114 + 16) + 40LL;
    if ( v118.Buffer )
      v16 = v118.Buffer;
    cchDest = (size_t)v16;
    PnpGetLogString(v17);
    PnpGetLogString(v18);
    PnpGetLogString(v19);
    v20 = PnpGetLogString(pcchNewDestLength);
    McTemplateK0zzjzzztzqzztqz(
      v105,
      (__int64)&KMPnPEvt_DeviceConfig_Success,
      (__int64)v23,
      *(const wchar_t **)(v21 + 8),
      v106,
      (__int64)v107,
      pszDest,
      v129,
      (const wchar_t *)v20,
      v105,
      v23,
      v25,
      v24,
      (const wchar_t *)cchDest,
      v116,
      a5,
      v22);
  }
  if ( a3 )
  {
    v26 = *(_QWORD **)(a3 + 192);
    if ( v26 == (_QWORD *)(a3 + 192) )
      goto LABEL_31;
    v77 = v113;
    do
    {
      v26 = (_QWORD *)*v26;
      ++v77;
    }
    while ( v26 != (_QWORD *)(a3 + 192) );
    if ( !v77 )
      goto LABEL_31;
    v120.Length = 0;
    Size = (unsigned __int16)(823 * v77);
    v120.MaximumLength = 823 * v77;
    v78 = (wchar_t *)ExpAllocateStringRoutine(Size);
    v120.Buffer = v78;
    if ( v78 )
    {
      memset(v78, 0, Size);
      v79 = *(_QWORD *)(a3 + 192);
      TimeFields = (_TIME_FIELDS)v120;
      cchDest = v79;
      if ( v79 == a3 + 192 )
        goto LABEL_31;
      v80 = (_QWORD *)(a3 + 192);
      v81 = v112 & 1;
      v113 = v81;
      v82 = v81 | 2;
      v103 = v81 | 2;
      while ( 1 )
      {
        v83 = v82;
        if ( !*(_DWORD *)(v79 + 372) )
          v83 = v81;
        PiDevCfgLogDeviceConfigured(v114, v121, v79, v83, a5);
        memset(v127, 0, 0x78uLL);
        v127[0] = &DEVPKEY_DriverPackage_OriginalInfName;
        LODWORD(v127[1]) = 18;
        v127[2] = &v125;
        v127[5] = &DEVPKEY_DriverPackage_ExtensionId;
        v127[7] = &Guid;
        v127[10] = &DEVPKEY_DriverPackage_DriverFlightIds;
        v127[12] = &v117;
        HIDWORD(v127[3]) = 6;
        LODWORD(v127[6]) = 13;
        LODWORD(v127[8]) = 16;
        v84 = *(_QWORD *)(cchDest + 16);
        v85 = *(_QWORD *)(cchDest + 64);
        LODWORD(v127[11]) = 8210;
        HIDWORD(v127[13]) = 6;
        if ( (int)PiDevCfgQueryObjectProperties(v86, v85, 8, v84, (__int64)v127, 3) >= 0 )
        {
          if ( SLODWORD(v127[4]) < 0 && !RtlCreateUnicodeString(&v125, *(PCWSTR *)(cchDest + 48)) )
            RtlInitUnicodeString(&v125, 0LL);
          if ( SLODWORD(v127[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
            RtlInitUnicodeString(&GuidString, 0LL);
          if ( SLODWORD(v127[14]) < 0 )
            RtlInitUnicodeString(&v117, 0LL);
          v87 = v117.Buffer;
          if ( v117.Buffer && (v88 = v117.Length, v117.Length > 4u) )
          {
            v89 = 0;
            if ( (unsigned __int64)v117.Length >> 1 != 2 )
            {
              do
              {
                if ( !v87[v5] )
                {
                  v87[v5] = 59;
                  v87 = v117.Buffer;
                  v88 = v117.Length;
                }
                v5 = ++v89;
              }
              while ( v89 < ((unsigned __int64)v88 >> 1) - 2 );
              v80 = (_QWORD *)(a3 + 192);
            }
            v117.Length = v88 - 2;
          }
          else
          {
            RtlFreeAnsiString(&v117);
            RtlInitUnicodeString(&v117, 0LL);
            v87 = v117.Buffer;
          }
          v90 = &v117;
          if ( !v87 )
            v90 = (UNICODE_STRING *)PiDevCfgEmptyString;
          v91 = L",";
          if ( cchDest == *v80 )
            v91 = &word_140657F20;
          v92 = RtlUnicodeStringPrintfEx(
                  (PUNICODE_STRING)&TimeFields,
                  (PUNICODE_STRING)&TimeFields,
                  0x800u,
                  L"%ws%wZ:%wZ:%wZ",
                  v91,
                  &v125,
                  &GuidString,
                  v90);
          RtlFreeAnsiString(&GuidString);
          RtlFreeAnsiString(&v117);
          RtlFreeAnsiString(&v125);
          if ( v92 < 0 )
          {
            v5 = 0LL;
LABEL_160:
            v7 = v124;
LABEL_31:
            if ( *(_QWORD *)(v121 + 32) )
              v5 = *(_QWORD *)(v121 + 32);
            if ( *(_QWORD *)(v121 + 48) )
            {
              if ( *(_WORD *)(v121 + 40) > 2u )
              {
                v7 = *(_QWORD *)(v121 + 48);
                v28 = -1LL;
                do
                  ++v28;
                while ( *(_WORD *)(v7 + 2 * v28) );
                if ( *(_WORD *)(v7 + 2 * v28 + 2) )
                {
                  do
                  {
                    v29 = -1LL;
                    do
                      v30 = *(_WORD *)(v7 + 2 * v29++ + 2) == 0;
                    while ( !v30 );
                    v7 += 2 * v29 + 2;
                    v31 = -1LL;
                    do
                      ++v31;
                    while ( *(_WORD *)(v7 + 2 * v31) );
                  }
                  while ( *(_WORD *)(v7 + 2 * v31 + 2) );
                }
              }
            }
            v27 = DestinationString.Buffer;
            if ( !DestinationString.Buffer )
              v27 = *(wchar_t **)(a3 + 48);
            LOBYTE(v100) = (v112 & 2) != 0;
            LOBYTE(v99) = PnpSetupInProgress != 0;
            LOBYTE(v98) = v105 != 0;
            PnpTraceDeviceConfig(
              v114 + 40,
              v5,
              v7,
              *(_QWORD *)(a3 + 248),
              v27,
              *(_QWORD *)(a3 + 264),
              pszDest,
              v129,
              v120.Buffer,
              v98,
              &UnicodeString,
              v99,
              v100,
              a5);
            break;
          }
          v5 = 0LL;
        }
        v81 = v113;
        v82 = v103;
        v79 = *(_QWORD *)cchDest;
        cchDest = v79;
        if ( (_QWORD *)v79 == v80 )
          goto LABEL_160;
      }
    }
  }
LABEL_37:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v118);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v120);
}
