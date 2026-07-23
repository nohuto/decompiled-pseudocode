/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x140591DE0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintfEx @ 0x14014FD80 (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x14014FF60 (PnpGetLogString.c)
 *     Template_zzjzzztzqzztqz @ 0x14015013C (Template_zzjzzztzqzztqz.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x140156F2C (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1401F9A28 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x1405924AC (PnpTraceDeviceConfig.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v5; // eax
  int v7; // ebx
  char v8; // r10
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  wchar_t *Buffer; // rcx
  __int64 **v14; // rbx
  __int64 **v15; // rdx
  int v16; // ecx
  int v17; // r9d
  const wchar_t *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int16 *v21; // rax
  const wchar_t *v22; // rdx
  const wchar_t *v23; // r8
  const wchar_t *v24; // r9
  const wchar_t *v25; // r10
  __int64 v26; // r11
  __int64 **v27; // rbx
  __int64 **v28; // rax
  __int64 v29; // r10
  wchar_t *v30; // rdx
  __int64 v31; // rax
  bool v32; // zf
  int v33; // r8d
  __int64 *v34; // rax
  unsigned int v35; // r8d
  wchar_t *StringRoutine; // rax
  size_t *v37; // r9
  UNICODE_STRING v38; // xmm0
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned __int16 Length; // dx
  __int64 v42; // r8
  unsigned int v43; // r9d
  __int64 v44; // rcx
  size_t v45; // r8
  size_t v46; // rcx
  wchar_t *v47; // r9
  int v48; // edx
  const wchar_t *v49; // r10
  __int64 v50; // r9
  signed __int64 v51; // r11
  size_t v52; // rax
  const wchar_t *v53; // rbx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int16 *v56; // rax
  const wchar_t *v57; // rdx
  const wchar_t *v58; // r8
  const wchar_t *v59; // r9
  const wchar_t *v60; // r10
  __int64 v61; // r11
  size_t v62; // rax
  const wchar_t *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int16 *LogString; // rax
  const wchar_t *v67; // rdx
  const wchar_t *v68; // r8
  const wchar_t *v69; // r9
  const wchar_t *v70; // r10
  __int64 v71; // r11
  int v72; // ecx
  SIZE_T v73; // rcx
  wchar_t *v74; // rax
  __int64 *v75; // rax
  int v76; // esi
  int v77; // ecx
  int v78; // edx
  int v79; // r9d
  __int64 *v80; // r9
  __int64 *v81; // rdx
  int v82; // ecx
  wchar_t *v83; // r8
  unsigned __int16 v84; // cx
  __int64 v85; // rdx
  unsigned int v86; // r9d
  UNICODE_STRING *v87; // rdx
  __int16 *v88; // rcx
  NTSTATUS v89; // ebx
  __int64 v90; // rax
  __int64 v91; // rax
  size_t cchMax; // [rsp+20h] [rbp-268h]
  size_t cchMaxa; // [rsp+20h] [rbp-268h]
  size_t cchMaxb; // [rsp+20h] [rbp-268h]
  ULONG dwFlags[2]; // [rsp+28h] [rbp-260h]
  ULONG dwFlagsa[2]; // [rsp+28h] [rbp-260h]
  ULONG v97[2]; // [rsp+30h] [rbp-258h]
  int v98; // [rsp+48h] [rbp-240h]
  int v99; // [rsp+58h] [rbp-230h]
  int v100; // [rsp+60h] [rbp-228h]
  char v101; // [rsp+90h] [rbp-1F8h]
  char v102; // [rsp+90h] [rbp-1F8h]
  char v103; // [rsp+90h] [rbp-1F8h]
  int v104; // [rsp+90h] [rbp-1F8h]
  unsigned int v105; // [rsp+94h] [rbp-1F4h]
  size_t pcchNewDestLength; // [rsp+98h] [rbp-1F0h] BYREF
  int v107; // [rsp+A0h] [rbp-1E8h]
  int v108; // [rsp+A4h] [rbp-1E4h]
  __int64 **v109; // [rsp+A8h] [rbp-1E0h]
  _TIME_FIELDS TimeFields; // [rsp+B0h] [rbp-1D8h] BYREF
  int v111; // [rsp+C0h] [rbp-1C8h]
  __int64 v112; // [rsp+C8h] [rbp-1C0h]
  __int64 v113; // [rsp+D0h] [rbp-1B8h]
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-1B0h] BYREF
  UNICODE_STRING v115; // [rsp+E8h] [rbp-1A0h] BYREF
  UNICODE_STRING v116; // [rsp+100h] [rbp-188h] BYREF
  _QWORD *v117; // [rsp+110h] [rbp-178h]
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp-170h] BYREF
  UNICODE_STRING v119; // [rsp+130h] [rbp-158h] BYREF
  UNICODE_STRING GuidString; // [rsp+140h] [rbp-148h] BYREF
  wchar_t *ppszDest; // [rsp+150h] [rbp-138h] BYREF
  size_t pcchDest; // [rsp+158h] [rbp-130h] BYREF
  wchar_t *ppszDestEnd; // [rsp+160h] [rbp-128h] BYREF
  size_t pcchRemaining; // [rsp+168h] [rbp-120h] BYREF
  UNICODE_STRING v125; // [rsp+170h] [rbp-118h] BYREF
  __int64 v126; // [rsp+180h] [rbp-108h]
  __int64 v127; // [rsp+188h] [rbp-100h]
  GUID Guid; // [rsp+190h] [rbp-F8h] BYREF
  _QWORD v129[16]; // [rsp+1A0h] [rbp-E8h] BYREF
  wchar_t pszDest[12]; // [rsp+220h] [rbp-68h] BYREF
  wchar_t v131[24]; // [rsp+238h] [rbp-50h] BYREF

  v5 = Microsoft_Windows_Kernel_PnPEnableBits;
  v113 = a1;
  v112 = a2;
  v108 = a4;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v7 = 1;
  *(_DWORD *)&UnicodeString.Length = 0;
  v8 = a4;
  UnicodeString.Buffer = 0LL;
  v105 = 1;
  v9 = 0LL;
  v127 = 0LL;
  v126 = 0LL;
  *(_DWORD *)&v116.Length = 0;
  v116.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v111 = 0;
  *(_DWORD *)&v119.Length = 0;
  v119.Buffer = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x180000) != 0x180000 )
    goto LABEL_34;
  if ( a3 )
  {
    memset(v129, 0, 0x78uLL);
    v10 = *(_QWORD *)(a3 + 16);
    v11 = *(_QWORD *)(a3 + 64);
    v129[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v129[2] = &DestinationString;
    v129[5] = &DEVPKEY_DriverPackage_DriverFlightIds;
    v129[7] = &UnicodeString;
    LODWORD(v129[1]) = 18;
    HIDWORD(v129[3]) = 6;
    LODWORD(v129[6]) = 8210;
    HIDWORD(v129[8]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(v12, v11, 7, v10, (__int64)v129, 2) < 0 )
      goto LABEL_34;
    if ( SLODWORD(v129[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v129[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v42 = 0LL;
      v43 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        do
        {
          if ( !Buffer[v42] )
          {
            Buffer[v42] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v42 = ++v43;
        }
        while ( v43 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( DestinationString.Buffer )
    {
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u) )
        v7 = 0;
      v105 = v7;
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    dwFlags[0] = TimeFields.Year;
    LODWORD(cchMax) = TimeFields.Day;
    if ( RtlStringCchPrintfW(
           pszDest,
           0xBuLL,
           L"%02d/%02d/%04d",
           (unsigned int)TimeFields.Month,
           cchMax,
           *(_QWORD *)dwFlags) < 0 )
      pszDest[0] = 0;
    dwFlagsa[0] = *(unsigned __int16 *)(a3 + 122);
    LODWORD(cchMaxa) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v131,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           cchMaxa,
           *(_QWORD *)dwFlagsa,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v131[0] = 0;
    v14 = (__int64 **)(a3 + 208);
    v15 = *(__int64 ***)(a3 + 208);
    v16 = 0;
    if ( *(_DWORD *)(a3 + 108) != -1 )
      v16 = *(_DWORD *)(a3 + 108);
    v107 = v16;
    if ( v15 == v14 )
      goto LABEL_18;
    v33 = 0;
    do
    {
      v34 = v15[20];
      v33 += *((unsigned __int16 *)v15 + 36) + *((unsigned __int16 *)v15 + 20) + 22;
      if ( v34 )
      {
        v44 = -1LL;
        do
          v32 = *((_WORD *)v34 + ++v44) == 0;
        while ( !v32 );
        v33 += 2 * v44 + 2;
      }
      v15 = (__int64 **)*v15;
    }
    while ( v15 != v14 );
    v35 = v33 + 2;
    if ( v35 > 0xFFFE )
      LOWORD(v35) = -2;
    v116.MaximumLength = v35;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)v35);
    v116.Buffer = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_34;
    v38 = v116;
    *StringRoutine = 0;
    v39 = *v14;
    TimeFields = (_TIME_FIELDS)v38;
    v117 = v39;
    if ( v39 == v14 )
    {
LABEL_18:
      v5 = Microsoft_Windows_Kernel_PnPEnableBits;
      v8 = v108;
    }
    else
    {
      do
      {
        if ( v39 != *v14 )
        {
          if ( RtlUnicodeStringValidateDestWorker(
                 (PCUNICODE_STRING)&TimeFields,
                 &ppszDest,
                 &pcchDest,
                 v37,
                 cchMaxb,
                 0x800u) < 0 )
            goto LABEL_18;
          v45 = 0LL;
          v46 = pcchDest;
          v47 = ppszDest;
          if ( pcchDest )
          {
            v48 = 0;
            v49 = L" ";
            LODWORD(v109) = 0;
            v50 = 0x7FFFLL;
            v51 = (char *)ppszDest - (char *)L" ";
            while ( v50 && *v49 )
            {
              *(const wchar_t *)((char *)v49 + v51) = *v49;
              --v50;
              ++v49;
              ++v45;
              if ( !--v46 )
                goto LABEL_75;
            }
            if ( v46 )
              goto LABEL_79;
LABEL_75:
            if ( v50 )
            {
              if ( *v49 )
                v48 = -2147483643;
              LODWORD(v109) = v48;
            }
LABEL_79:
            pcchNewDestLength = v45;
            LOWORD(v46) = pcchDest - v45;
            pcchRemaining = pcchDest - v45;
            v47 = &ppszDest[v45];
            ppszDestEnd = v47;
            if ( v48 < 0 )
            {
              RtlUnicodeStringExHandleOtherFlags(
                ppszDest,
                pcchDest,
                v45,
                &pcchNewDestLength,
                &ppszDestEnd,
                &pcchRemaining,
                0x800u);
              v47 = ppszDestEnd;
              LOWORD(v46) = pcchRemaining;
              LOWORD(v45) = pcchNewDestLength;
              v48 = (int)v109;
            }
          }
          else
          {
            if ( !ppszDest )
              goto LABEL_18;
            v48 = -2147483643;
          }
          TimeFields.Year = 2 * v45;
          if ( (int)(v48 + 0x80000000) < 0 || v48 == -2147483643 )
          {
            TimeFields.Year = 0;
            TimeFields.Month = 2 * v46;
            *(_QWORD *)&TimeFields.Minute = v47;
          }
          if ( v48 < 0 )
            goto LABEL_18;
          v39 = v117;
        }
        v97[0] = *((_DWORD *)v39 + 27);
        if ( RtlUnicodeStringPrintfEx(
               (PUNICODE_STRING)&TimeFields,
               (PUNICODE_STRING)&TimeFields,
               0x800u,
               L"%wZ:%wZ:%08X",
               v39 + 5,
               v39 + 9,
               *(_QWORD *)v97) < 0 )
          goto LABEL_18;
        v40 = v117;
        if ( v117[20] )
        {
          cchMaxb = v117[20];
          if ( RtlUnicodeStringPrintfEx((PUNICODE_STRING)&TimeFields, (PUNICODE_STRING)&TimeFields, 0x800u, L":%ws") < 0 )
            goto LABEL_18;
          v40 = v117;
        }
        v39 = (_QWORD *)*v40;
        v117 = v39;
      }
      while ( v39 != v14 );
      v5 = Microsoft_Windows_Kernel_PnPEnableBits;
      v8 = v108;
    }
  }
  else
  {
    pszDest[0] = 0;
    v131[0] = 0;
    v105 = 0;
    v107 = 0;
  }
  v17 = a5;
  if ( a5 < 0 )
  {
    if ( (v5 & 0x100000) == 0 )
      goto LABEL_26;
    v103 = v8 & 1;
    v62 = a3 + 256;
    if ( !a3 )
      v62 = 0LL;
    pcchNewDestLength = v62;
    if ( a3 )
      v63 = *(const wchar_t **)(a3 + 48);
    else
      v63 = L"null";
    PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
    PnpGetLogString((__int64)&v116);
    PnpGetLogString(v64);
    PnpGetLogString(v65);
    LogString = PnpGetLogString(pcchNewDestLength);
    Template_zzjzzztzqzztqz(
      v105,
      &KMPnPEvt_DeviceConfig_Failure,
      (__int64)v68,
      *(const wchar_t **)(v112 + 8),
      v63,
      v71,
      pszDest,
      v131,
      (const wchar_t *)LogString,
      v105,
      v67,
      v107,
      v68,
      v70,
      v103,
      a5,
      v69);
    goto LABEL_25;
  }
  if ( (v8 & 2) != 0 )
  {
    if ( (v5 & 0x200000) == 0 )
      goto LABEL_26;
    v102 = v8 & 1;
    v52 = a3 + 256;
    if ( !a3 )
      v52 = 0LL;
    pcchNewDestLength = v52;
    if ( a3 )
      v53 = *(const wchar_t **)(a3 + 48);
    else
      v53 = L"null";
    PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
    PnpGetLogString((__int64)&v116);
    PnpGetLogString(v54);
    PnpGetLogString(v55);
    v56 = PnpGetLogString(pcchNewDestLength);
    Template_zzjzzztzqzztqz(
      v105,
      &KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v58,
      *(const wchar_t **)(v112 + 8),
      v53,
      v61,
      pszDest,
      v131,
      (const wchar_t *)v56,
      v105,
      v57,
      v107,
      v58,
      v60,
      v102,
      a5,
      v59);
    goto LABEL_25;
  }
  if ( (v5 & 0x80000) != 0 )
  {
    v101 = (v8 & 1) != 0;
    if ( a3 )
    {
      v18 = *(const wchar_t **)(a3 + 48);
      pcchNewDestLength = a3 + 256;
    }
    else
    {
      pcchNewDestLength = 0LL;
      v18 = L"null";
    }
    PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
    PnpGetLogString((__int64)&v116);
    PnpGetLogString(v19);
    PnpGetLogString(v20);
    v21 = PnpGetLogString(pcchNewDestLength);
    Template_zzjzzztzqzztqz(
      v105,
      &KMPnPEvt_DeviceConfig_Success,
      (__int64)v23,
      *(const wchar_t **)(v112 + 8),
      v18,
      v26,
      pszDest,
      v131,
      (const wchar_t *)v21,
      v105,
      v22,
      v107,
      v23,
      v25,
      v101,
      a5,
      v24);
LABEL_25:
    v17 = a5;
  }
LABEL_26:
  if ( a3 )
  {
    v27 = (__int64 **)(a3 + 192);
    v28 = *(__int64 ***)(a3 + 192);
    if ( v28 == (__int64 **)(a3 + 192) )
      goto LABEL_28;
    v72 = v111;
    do
    {
      v28 = (__int64 **)*v28;
      ++v72;
    }
    while ( v28 != v27 );
    if ( !v72 )
      goto LABEL_28;
    v119.Length = 0;
    v119.MaximumLength = 823 * v72;
    v73 = (unsigned __int16)(823 * v72);
    pcchNewDestLength = (unsigned __int16)v73;
    v74 = (wchar_t *)ExpAllocateStringRoutine(v73);
    v119.Buffer = v74;
    if ( v74 )
    {
      memset(v74, 0, pcchNewDestLength);
      v75 = *v27;
      TimeFields = (_TIME_FIELDS)v119;
      v109 = (__int64 **)v75;
      if ( v75 == (__int64 *)v27 )
        goto LABEL_138;
      v76 = a5;
      v77 = v108 & 1;
      v111 = v77;
      v78 = v77 | 2;
      v104 = v77 | 2;
      while ( 1 )
      {
        v79 = v78;
        if ( !*((_DWORD *)v75 + 93) )
          v79 = v77;
        PiDevCfgLogDeviceConfigured(v113, v112, (_DWORD)v75, v79, v76);
        memset(v129, 0, 0x78uLL);
        v129[0] = &DEVPKEY_DriverPackage_OriginalInfName;
        LODWORD(v129[1]) = 18;
        v129[2] = &v125;
        v129[5] = &DEVPKEY_DriverPackage_ExtensionId;
        v129[7] = &Guid;
        v129[10] = &DEVPKEY_DriverPackage_DriverFlightIds;
        v129[12] = &v115;
        HIDWORD(v129[3]) = 6;
        LODWORD(v129[6]) = 13;
        LODWORD(v129[8]) = 16;
        v80 = v109[2];
        v81 = v109[8];
        LODWORD(v129[11]) = 8210;
        HIDWORD(v129[13]) = 6;
        if ( (int)PiDevCfgQueryObjectProperties(v82, (_DWORD)v81, 7, (_DWORD)v80, (__int64)v129, 3) >= 0 )
        {
          if ( SLODWORD(v129[4]) < 0 && !RtlCreateUnicodeString(&v125, (PCWSTR)v109[6]) )
            RtlInitUnicodeString(&v125, 0LL);
          if ( SLODWORD(v129[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
            RtlInitUnicodeString(&GuidString, 0LL);
          if ( SLODWORD(v129[14]) < 0 )
            RtlInitUnicodeString(&v115, 0LL);
          v83 = v115.Buffer;
          if ( v115.Buffer && (v84 = v115.Length, v115.Length > 4u) )
          {
            v85 = 0LL;
            v86 = 0;
            if ( (unsigned __int64)v115.Length >> 1 != 2 )
            {
              do
              {
                if ( !v83[v85] )
                {
                  v83[v85] = 59;
                  v83 = v115.Buffer;
                  v84 = v115.Length;
                }
                v85 = ++v86;
              }
              while ( v86 < ((unsigned __int64)v84 >> 1) - 2 );
              v76 = a5;
            }
            v115.Length = v84 - 2;
          }
          else
          {
            RtlFreeUnicodeString(&v115);
            RtlInitUnicodeString(&v115, 0LL);
            v83 = v115.Buffer;
          }
          v87 = &v115;
          if ( !v83 )
            v87 = (UNICODE_STRING *)PiDevCfgEmptyString;
          v88 = L",";
          if ( v109 == (__int64 **)*v27 )
            v88 = &word_1407506C4;
          v89 = RtlUnicodeStringPrintfEx(
                  (PUNICODE_STRING)&TimeFields,
                  (PUNICODE_STRING)&TimeFields,
                  0x800u,
                  L"%ws%wZ:%wZ:%wZ",
                  v88,
                  &v125,
                  &GuidString,
                  v87);
          RtlFreeUnicodeString(&GuidString);
          RtlFreeUnicodeString(&v115);
          RtlFreeUnicodeString(&v125);
          if ( v89 < 0 )
          {
LABEL_137:
            v9 = v126;
LABEL_138:
            v17 = a5;
LABEL_28:
            if ( *(_QWORD *)(v112 + 32) )
              v29 = *(_QWORD *)(v112 + 32);
            else
              v29 = v127;
            if ( *(_QWORD *)(v112 + 48) )
            {
              if ( *(_WORD *)(v112 + 40) > 2u )
              {
                v9 = *(_QWORD *)(v112 + 48);
                v31 = -1LL;
                do
                  v32 = *(_WORD *)(v9 + 2 * v31++ + 2) == 0;
                while ( !v32 );
                if ( *(_WORD *)(v9 + 2 * v31 + 2) )
                {
                  do
                  {
                    v90 = -1LL;
                    do
                      v32 = *(_WORD *)(v9 + 2 * v90++ + 2) == 0;
                    while ( !v32 );
                    v9 += 2 * v90 + 2;
                    v91 = -1LL;
                    do
                      v32 = *(_WORD *)(v9 + 2 * v91++ + 2) == 0;
                    while ( !v32 );
                  }
                  while ( *(_WORD *)(v9 + 2 * v91 + 2) );
                }
              }
            }
            v30 = DestinationString.Buffer;
            if ( !DestinationString.Buffer )
              v30 = *(wchar_t **)(a3 + 48);
            LOBYTE(v100) = (v108 & 2) != 0;
            LOBYTE(v99) = PnpSetupInProgress != 0;
            LOBYTE(v98) = v105 != 0;
            PnpTraceDeviceConfig(
              v113 + 40,
              v29,
              v9,
              *(_QWORD *)(a3 + 248),
              v30,
              *(_QWORD *)(a3 + 264),
              pszDest,
              v131,
              v119.Buffer,
              v98,
              &UnicodeString,
              v99,
              v100,
              v17);
            break;
          }
          v27 = (__int64 **)(a3 + 192);
        }
        v77 = v111;
        v78 = v104;
        v75 = *v109;
        v109 = (__int64 **)v75;
        if ( v75 == (__int64 *)v27 )
          goto LABEL_137;
      }
    }
  }
LABEL_34:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v116);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v119);
}
