/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1405A3E50
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x140133230 (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x1401333E8 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzqzztqz @ 0x1401335B0 (McTemplateK0zzjzzztzqzztqz.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1401FF864 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x1405A4408 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  wchar_t *v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  void *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  wchar_t *Buffer; // rcx
  __int64 *v14; // r8
  __int64 *v15; // rdx
  int v16; // ecx
  int v17; // r10d
  const wchar_t *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  int *v22; // rax
  const wchar_t *v23; // rdx
  const wchar_t *v24; // r8
  const wchar_t *v25; // r9
  __int64 v26; // r10
  const wchar_t *v27; // r11
  _QWORD *v28; // rcx
  wchar_t *v29; // rdx
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  unsigned int v33; // r9d
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v35; // xmm0
  _QWORD *v36; // rax
  size_t v37; // r8
  size_t *v38; // r8
  unsigned __int16 Length; // dx
  unsigned int v40; // r9d
  __int64 v41; // r8
  __int64 v42; // rcx
  bool v43; // zf
  wchar_t *v44; // r10
  __int64 v45; // r9
  size_t v46; // rcx
  int v47; // edx
  const WCHAR *v48; // r11
  __int64 v49; // r10
  size_t v50; // rax
  size_t v51; // rax
  const wchar_t *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r8
  int *v56; // rax
  const wchar_t *v57; // rdx
  const wchar_t *v58; // r8
  const wchar_t *v59; // r9
  __int64 v60; // r10
  const wchar_t *v61; // r11
  size_t v62; // rax
  const wchar_t *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // r8
  int *LogString; // rax
  const wchar_t *v68; // rdx
  const wchar_t *v69; // r8
  const wchar_t *v70; // r9
  __int64 v71; // r10
  const wchar_t *v72; // r11
  size_t v73; // rax
  const wchar_t *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r9
  __int64 v77; // r8
  int *v78; // rax
  const wchar_t *v79; // rdx
  const wchar_t *v80; // r8
  const wchar_t *v81; // r9
  __int64 v82; // r10
  const wchar_t *v83; // r11
  int v84; // edx
  wchar_t *v85; // rax
  size_t *v86; // rcx
  size_t *v87; // rdi
  int v88; // eax
  size_t *v89; // rbx
  int v90; // ecx
  int v91; // r9d
  void *v92; // r9
  __int64 v93; // rdx
  __int64 v94; // rcx
  wchar_t *v95; // r8
  unsigned __int16 v96; // cx
  unsigned int v97; // r9d
  __int64 v98; // rdx
  UNICODE_STRING *v99; // rdx
  const wchar_t *v100; // rcx
  NTSTATUS v101; // ebx
  __int64 v102; // rax
  __int64 v103; // rax
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+20h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+28h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-E0h]
  int v109; // [rsp+48h] [rbp-C8h]
  int v110; // [rsp+58h] [rbp-B8h]
  int v111; // [rsp+60h] [rbp-B0h]
  char v112; // [rsp+90h] [rbp-80h]
  char v113; // [rsp+90h] [rbp-80h]
  char v114; // [rsp+90h] [rbp-80h]
  char v115; // [rsp+90h] [rbp-80h]
  int v116; // [rsp+90h] [rbp-80h]
  BOOL v117; // [rsp+94h] [rbp-7Ch]
  char v118; // [rsp+98h] [rbp-78h]
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-70h] BYREF
  const wchar_t *v120; // [rsp+B0h] [rbp-60h]
  size_t pcchNewDestLength; // [rsp+B8h] [rbp-58h] BYREF
  int v122; // [rsp+C0h] [rbp-50h]
  size_t Size; // [rsp+C8h] [rbp-48h]
  size_t *v124; // [rsp+D0h] [rbp-40h]
  UNICODE_STRING v125; // [rsp+E0h] [rbp-30h] BYREF
  int v126; // [rsp+F0h] [rbp-20h]
  __int64 v127; // [rsp+F8h] [rbp-18h]
  __int64 v128; // [rsp+100h] [rbp-10h]
  UNICODE_STRING UnicodeString; // [rsp+108h] [rbp-8h] BYREF
  int v130; // [rsp+118h] [rbp+8h]
  UNICODE_STRING v131; // [rsp+120h] [rbp+10h] BYREF
  size_t cchDest; // [rsp+130h] [rbp+20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+28h] BYREF
  UNICODE_STRING v134; // [rsp+150h] [rbp+40h] BYREF
  UNICODE_STRING GuidString; // [rsp+160h] [rbp+50h] BYREF
  wchar_t *v136; // [rsp+170h] [rbp+60h] BYREF
  UNICODE_STRING v137; // [rsp+180h] [rbp+70h] BYREF
  __int64 v138; // [rsp+190h] [rbp+80h]
  GUID Guid; // [rsp+198h] [rbp+88h] BYREF
  _QWORD v140[16]; // [rsp+1B0h] [rbp+A0h] BYREF
  wchar_t pszDest[12]; // [rsp+230h] [rbp+120h] BYREF
  wchar_t v142[24]; // [rsp+248h] [rbp+138h] BYREF

  v5 = 0LL;
  v127 = a2;
  v128 = a1;
  v112 = 1;
  v6 = a3;
  v117 = 1;
  v7 = 0LL;
  v125.Buffer = 0LL;
  v8 = 0;
  v122 = a4;
  v9 = 0LL;
  v138 = a3;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v125.Length = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v126 = 0;
  *(_DWORD *)&v134.Length = 0;
  v134.Buffer = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x180000) != 0x180000 )
    goto LABEL_40;
  if ( a3 )
  {
    memset(v140, 0, 0x78uLL);
    v10 = *(void **)(v6 + 16);
    v11 = *(_QWORD *)(v6 + 64);
    v140[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v140[2] = &DestinationString;
    v140[5] = &DEVPKEY_DriverPackage_DriverFlightIds;
    v140[7] = &UnicodeString;
    LODWORD(v140[1]) = 18;
    HIDWORD(v140[3]) = 6;
    LODWORD(v140[6]) = 8210;
    HIDWORD(v140[8]) = 6;
    LODWORD(v120) = PiDevCfgQueryObjectProperties(v12, v11, 7u, v10, (__int64)v140, 2u);
    if ( (int)v120 < 0 )
      goto LABEL_40;
    if ( SLODWORD(v140[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v140[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v40 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v41 = 0LL;
        do
        {
          if ( !Buffer[v41] )
          {
            Buffer[v41] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v41 = ++v40;
        }
        while ( v40 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( DestinationString.Buffer )
      v117 = RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(v6 + 112), &TimeFields);
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
    LODWORD(pcchRemaininga) = *(unsigned __int16 *)(v6 + 122);
    LODWORD(ppszDestEnda) = *(unsigned __int16 *)(v6 + 124);
    if ( RtlStringCchPrintfW(
           v142,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(v6 + 124)),
           ppszDestEnda,
           pcchRemaininga,
           *(unsigned __int16 *)(v6 + 120)) < 0 )
      v142[0] = 0;
    v14 = (__int64 *)(v6 + 208);
    v15 = *(__int64 **)(v6 + 208);
    LOBYTE(v16) = 0;
    if ( *(_DWORD *)(v6 + 108) != -1 )
      v16 = *(_DWORD *)(v6 + 108);
    v118 = v16;
    if ( v15 == v14 )
    {
      v7 = 0LL;
    }
    else
    {
      v31 = 0;
      do
      {
        v32 = v15[20];
        v31 += *((unsigned __int16 *)v15 + 36) + *((unsigned __int16 *)v15 + 20) + 22;
        if ( v32 )
        {
          v42 = -1LL;
          do
            v43 = *(_WORD *)(v32 + 2 * v42++ + 2) == 0;
          while ( !v43 );
          v31 += 2 * v42 + 2;
        }
        v15 = (__int64 *)*v15;
      }
      while ( v15 != v14 );
      v33 = v31 + 2;
      if ( v33 > 0xFFFE )
        LOWORD(v33) = -2;
      v125.MaximumLength = v33;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)v33);
      v125.Buffer = StringRoutine;
      v7 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_40;
      v35 = v125;
      *StringRoutine = 0;
      v36 = (_QWORD *)(v6 + 208);
      v37 = *(_QWORD *)(v6 + 208);
      TimeFields = (_TIME_FIELDS)v35;
      v124 = (size_t *)v37;
      if ( v37 != v6 + 208 )
      {
        Size = (size_t)L" ";
        while ( 1 )
        {
          if ( v37 != *v36 )
          {
            if ( (TimeFields.Year & 1) != 0
              || (TimeFields.Month & 1) != 0
              || TimeFields.Year > (unsigned int)TimeFields.Month
              || TimeFields.Month == -1
              || !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
            {
              break;
            }
            v44 = *(wchar_t **)&TimeFields.Minute;
            v45 = 0LL;
            cchDest = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            v46 = cchDest;
            if ( cchDest )
            {
              v48 = L" ";
              v47 = 0;
              pcchNewDestLength = *(_QWORD *)&TimeFields.Minute - Size;
              v49 = 0x7FFFLL;
              v130 = 0;
              while ( v49 && *v48 )
              {
                --v49;
                ++v45;
                *(const WCHAR *)((char *)v48 + pcchNewDestLength) = *v48;
                ++v48;
                v9 = 0LL;
                if ( !--v46 )
                  goto LABEL_85;
              }
              if ( v46 )
                goto LABEL_89;
LABEL_85:
              if ( v49 )
              {
                if ( *v48 )
                  v47 = -2147483643;
                v130 = v47;
              }
LABEL_89:
              v50 = cchDest;
              LOWORD(v46) = cchDest - v45;
              pcchNewDestLength = v45;
              cchDest -= v45;
              v44 = (wchar_t *)(*(_QWORD *)&TimeFields.Minute + 2 * v45);
              v136 = v44;
              if ( v47 < 0 )
              {
                RtlUnicodeStringExHandleOtherFlags(
                  *(wchar_t **)&TimeFields.Minute,
                  v50,
                  v37,
                  &pcchNewDestLength,
                  &v136,
                  &cchDest,
                  0x800u);
                v44 = v136;
                LOWORD(v46) = cchDest;
                LOWORD(v45) = pcchNewDestLength;
                v37 = (size_t)v124;
                v47 = v130;
              }
            }
            else
            {
              if ( !*(_QWORD *)&TimeFields.Minute )
                break;
              v47 = -2147483643;
            }
            TimeFields.Year = 2 * v45;
            if ( (int)(v47 + 0x80000000) < 0 || v47 == -2147483643 )
            {
              TimeFields.Year = 0;
              TimeFields.Month = 2 * v46;
              *(_QWORD *)&TimeFields.Minute = v44;
            }
            if ( v47 < 0 )
              break;
          }
          dwFlags[0] = *(_DWORD *)(v37 + 108);
          if ( RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%wZ:%wZ:%08X",
                 v37 + 40,
                 v37 + 72,
                 *(_QWORD *)dwFlags) < 0 )
            break;
          v38 = v124;
          if ( v124[20] )
          {
            if ( RtlUnicodeStringPrintfEx(
                   (PUNICODE_STRING)&TimeFields,
                   (PUNICODE_STRING)&TimeFields,
                   0x800u,
                   L":%ws",
                   v124[20]) < 0 )
              break;
            v38 = v124;
          }
          v37 = *v38;
          v36 = (_QWORD *)(v6 + 208);
          v124 = (size_t *)v37;
          if ( v37 == v6 + 208 )
          {
            LOBYTE(a4) = v122;
            v8 = (int)v120;
            v7 = v125.Buffer;
            goto LABEL_21;
          }
        }
        v7 = v125.Buffer;
      }
    }
    LOBYTE(a4) = v122;
    v8 = (int)v120;
  }
  else
  {
    pszDest[0] = 0;
    v142[0] = 0;
    v117 = 0;
    v118 = 0;
  }
LABEL_21:
  v17 = a5;
  if ( a5 < 0 )
  {
    if ( v8 == -1073740959 )
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) == 0 )
        goto LABEL_32;
      v114 = a4 & 1;
      v62 = v6 + 256;
      if ( !v6 )
        v62 = 0LL;
      Size = v62;
      v63 = (const wchar_t *)&dword_140792EA4;
      v64 = *(_QWORD *)(v128 + 16) + 40LL;
      if ( v7 )
        v63 = v7;
      v120 = v63;
      PnpGetLogString(v64);
      PnpGetLogString(v65);
      PnpGetLogString(v66);
      LogString = PnpGetLogString(Size);
      McTemplateK0zzjzzztzqzztqz(
        v117,
        (__int64)&KMPnPEvt_DeviceConfig_Blocked,
        (__int64)v69,
        *(const wchar_t **)(v127 + 8),
        v72,
        v71,
        pszDest,
        v142,
        (const wchar_t *)LogString,
        v117,
        v69,
        v118,
        v70,
        v120,
        v114,
        a5,
        v68);
    }
    else
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) == 0 )
        goto LABEL_32;
      v115 = a4 & 1;
      v73 = v6 + 256;
      if ( !v6 )
        v73 = 0LL;
      Size = v73;
      v74 = (const wchar_t *)&dword_140792EA4;
      v75 = *(_QWORD *)(v128 + 16) + 40LL;
      if ( v7 )
        v74 = v7;
      v120 = v74;
      PnpGetLogString(v75);
      PnpGetLogString(v76);
      PnpGetLogString(v77);
      v78 = PnpGetLogString(Size);
      McTemplateK0zzjzzztzqzztqz(
        v117,
        (__int64)&KMPnPEvt_DeviceConfig_Failure,
        (__int64)v80,
        *(const wchar_t **)(v127 + 8),
        v83,
        v82,
        pszDest,
        v142,
        (const wchar_t *)v78,
        v117,
        v80,
        v118,
        v81,
        v120,
        v115,
        a5,
        v79);
    }
    goto LABEL_31;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) == 0 )
      goto LABEL_32;
    v113 = a4 & 1;
    v51 = v6 + 256;
    if ( !v6 )
      v51 = 0LL;
    Size = v51;
    v52 = (const wchar_t *)&dword_140792EA4;
    v53 = *(_QWORD *)(v128 + 16) + 40LL;
    if ( v7 )
      v52 = v7;
    v120 = v52;
    PnpGetLogString(v53);
    PnpGetLogString(v54);
    PnpGetLogString(v55);
    v56 = PnpGetLogString(Size);
    McTemplateK0zzjzzztzqzztqz(
      v117,
      (__int64)&KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v58,
      *(const wchar_t **)(v127 + 8),
      v61,
      v60,
      pszDest,
      v142,
      (const wchar_t *)v56,
      v117,
      v58,
      v118,
      v59,
      v120,
      v113,
      a5,
      v57);
    goto LABEL_31;
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
  {
    if ( (a4 & 1) == 0 )
      v112 = 0;
    if ( v6 )
      pcchNewDestLength = v6 + 256;
    else
      pcchNewDestLength = 0LL;
    v18 = (const wchar_t *)&dword_140792EA4;
    v19 = *(_QWORD *)(v128 + 16) + 40LL;
    if ( v7 )
      v18 = v7;
    v120 = v18;
    PnpGetLogString(v19);
    PnpGetLogString(v20);
    PnpGetLogString(v21);
    v22 = PnpGetLogString(pcchNewDestLength);
    McTemplateK0zzjzzztzqzztqz(
      v117,
      (__int64)&KMPnPEvt_DeviceConfig_Success,
      (__int64)v24,
      *(const wchar_t **)(v127 + 8),
      v27,
      v26,
      pszDest,
      v142,
      (const wchar_t *)v22,
      v117,
      v24,
      v118,
      v25,
      v120,
      v112,
      a5,
      v23);
LABEL_31:
    v17 = a5;
  }
LABEL_32:
  if ( v6 )
  {
    v28 = *(_QWORD **)(v6 + 192);
    pcchNewDestLength = v6 + 192;
    if ( v28 == (_QWORD *)(v6 + 192) )
      goto LABEL_34;
    v84 = v126;
    do
    {
      v28 = (_QWORD *)*v28;
      ++v84;
    }
    while ( v28 != (_QWORD *)(v6 + 192) );
    if ( !v84 )
      goto LABEL_34;
    v134.Length = 0;
    v134.MaximumLength = 823 * v84;
    Size = (unsigned __int16)(823 * v84);
    v85 = (wchar_t *)ExpAllocateStringRoutine(Size);
    v134.Buffer = v85;
    if ( v85 )
    {
      memset(v85, 0, Size);
      v86 = *(size_t **)(v6 + 192);
      TimeFields = (_TIME_FIELDS)v134;
      v124 = v86;
      if ( v86 == (size_t *)(v6 + 192) )
        goto LABEL_154;
      v87 = (size_t *)pcchNewDestLength;
      v88 = v122 & 1;
      v89 = v124;
      v90 = v88 | 2;
      v126 = v88;
      v116 = v88 | 2;
      while ( 1 )
      {
        v91 = v90;
        if ( !*((_DWORD *)v89 + 93) )
          v91 = v88;
        PiDevCfgLogDeviceConfigured(v128, v127, (_DWORD)v89, v91, a5);
        memset(v140, 0, 0x78uLL);
        v92 = (void *)v89[2];
        v93 = v89[8];
        v140[0] = &DEVPKEY_DriverPackage_OriginalInfName;
        v140[2] = &v137;
        v140[5] = &DEVPKEY_DriverPackage_ExtensionId;
        v140[7] = &Guid;
        v140[10] = &DEVPKEY_DriverPackage_DriverFlightIds;
        v140[12] = &v131;
        LODWORD(v140[1]) = 18;
        HIDWORD(v140[3]) = 6;
        LODWORD(v140[6]) = 13;
        LODWORD(v140[8]) = 16;
        LODWORD(v140[11]) = 8210;
        HIDWORD(v140[13]) = 6;
        if ( (int)PiDevCfgQueryObjectProperties(v94, v93, 7u, v92, (__int64)v140, 3u) >= 0 )
        {
          if ( SLODWORD(v140[4]) < 0 && !RtlCreateUnicodeString(&v137, (PCWSTR)v89[6]) )
            RtlInitUnicodeString(&v137, 0LL);
          if ( SLODWORD(v140[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
            RtlInitUnicodeString(&GuidString, 0LL);
          if ( SLODWORD(v140[14]) < 0 )
            RtlInitUnicodeString(&v131, 0LL);
          v95 = v131.Buffer;
          if ( v131.Buffer && (v96 = v131.Length, v131.Length > 4u) )
          {
            v97 = 0;
            if ( (unsigned __int64)v131.Length >> 1 != 2 )
            {
              v98 = 0LL;
              do
              {
                if ( !v95[v98] )
                {
                  v95[v98] = 59;
                  v95 = v131.Buffer;
                  v96 = v131.Length;
                }
                v98 = ++v97;
              }
              while ( v97 < ((unsigned __int64)v96 >> 1) - 2 );
              v87 = (size_t *)pcchNewDestLength;
            }
            v131.Length = v96 - 2;
          }
          else
          {
            RtlFreeUnicodeString(&v131);
            RtlInitUnicodeString(&v131, 0LL);
            v95 = v131.Buffer;
          }
          v99 = &v131;
          if ( !v95 )
            v99 = (UNICODE_STRING *)&PiDevCfgEmptyString;
          v100 = L",";
          if ( v89 == (size_t *)*v87 )
            v100 = &word_1405F52C0;
          v101 = RtlUnicodeStringPrintfEx(
                   (PUNICODE_STRING)&TimeFields,
                   (PUNICODE_STRING)&TimeFields,
                   0x800u,
                   L"%ws%wZ:%wZ:%wZ",
                   v100,
                   &v137,
                   &GuidString,
                   v99);
          RtlFreeUnicodeString(&GuidString);
          RtlFreeUnicodeString(&v131);
          RtlFreeUnicodeString(&v137);
          if ( v101 < 0 )
          {
LABEL_153:
            v6 = v138;
            v9 = 0LL;
LABEL_154:
            v17 = a5;
LABEL_34:
            if ( *(_QWORD *)(v127 + 32) )
              v5 = *(_QWORD *)(v127 + 32);
            if ( *(_QWORD *)(v127 + 48) )
            {
              if ( *(_WORD *)(v127 + 40) > 2u )
              {
                v9 = *(_QWORD *)(v127 + 48);
                v30 = -1LL;
                do
                  ++v30;
                while ( *(_WORD *)(v9 + 2 * v30) );
                if ( *(_WORD *)(v9 + 2 * v30 + 2) )
                {
                  do
                  {
                    v102 = -1LL;
                    do
                      v43 = *(_WORD *)(v9 + 2 * v102++ + 2) == 0;
                    while ( !v43 );
                    v9 += 2 * v102 + 2;
                    v103 = -1LL;
                    do
                      ++v103;
                    while ( *(_WORD *)(v9 + 2 * v103) );
                  }
                  while ( *(_WORD *)(v9 + 2 * v103 + 2) );
                }
              }
            }
            v29 = DestinationString.Buffer;
            if ( !DestinationString.Buffer )
              v29 = *(wchar_t **)(v6 + 48);
            LOBYTE(v111) = (v122 & 2) != 0;
            LOBYTE(v110) = PnpSetupInProgress != 0;
            LOBYTE(v109) = v117;
            PnpTraceDeviceConfig(
              v128 + 40,
              v5,
              v9,
              *(_QWORD *)(v6 + 248),
              v29,
              *(_QWORD *)(v6 + 264),
              pszDest,
              v142,
              v134.Buffer,
              v109,
              &UnicodeString,
              v110,
              v111,
              v17);
            break;
          }
          v89 = v124;
        }
        v89 = (size_t *)*v89;
        v88 = v126;
        v90 = v116;
        v124 = v89;
        if ( v89 == v87 )
          goto LABEL_153;
      }
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v125);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v134);
}
