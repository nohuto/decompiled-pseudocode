/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C022623C
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C022275C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0225E20 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0226154 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct InteractiveControlDevice *a1,
        PCHAR Report,
        const GUID *ReportLength,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  int v7; // r14d
  int v8; // r12d
  struct InteractiveControlDevice *v9; // r13
  struct InteractiveControlDevice *v10; // rax
  struct InteractiveControlDevice *v11; // rbx
  struct InteractiveControlDevice *v12; // r15
  int v13; // ecx
  NTSTATUS ScaledUsageValue; // eax
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  NTSTATUS UsageValue; // eax
  NTSTATUS Usages; // eax
  __int64 v21; // rcx
  signed int ScaledComponentValue; // eax
  __int16 v23; // cx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r8d
  int v27; // eax
  int v28; // r9d
  int v29; // eax
  int v30; // r9d
  __int16 v31; // ax
  int DigitizerForDevice; // eax
  __int64 v33; // rcx
  unsigned int pActivityId; // [rsp+40h] [rbp-C0h]
  signed int pActivityId_4; // [rsp+44h] [rbp-BCh] BYREF
  CHAR *v37; // [rsp+48h] [rbp-B8h]
  struct _HIDP_PREPARSED_DATA *v38; // [rsp+50h] [rbp-B0h]
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  int v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  const char *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  int *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+100h] [rbp+0h] BYREF
  const char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  USHORT UsageList[4]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v64; // [rsp+138h] [rbp+38h]

  pActivityId = (unsigned int)ReportLength;
  v37 = Report;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 32);
  v38 = PreparsedData;
  UsageLength = 5;
  *(_QWORD *)a4 = 0LL;
  v7 = 0;
  *((_QWORD *)a4 + 1) = 0LL;
  v8 = 0;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 6) = 0;
  v9 = (struct InteractiveControlDevice *)*((_QWORD *)a1 + 23);
  *(_QWORD *)UsageList = 0LL;
  v64 = 0;
  v45 = 0LL;
  if ( v9 == (struct InteractiveControlDevice *)((char *)a1 + 184) )
    return (unsigned int)v7;
  v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
  do
  {
    pActivityId_4 = 0;
    v11 = v9;
    v12 = v9;
    v9 = *(struct InteractiveControlDevice **)v9;
    if ( *((_DWORD *)v11 + 25) )
      continue;
    v13 = *((_DWORD *)v11 + 4);
    if ( ((v13 - 5) & 0xFFFFFFFD) != 0 )
    {
      if ( v13 != 1 )
      {
        ScaledUsageValue = HidP_GetScaledUsageValue(
                             HidP_Input,
                             *((_WORD *)v11 + 12),
                             *((_WORD *)v11 + 15),
                             *((_WORD *)v11 + 40),
                             &pActivityId_4,
                             PreparsedData,
                             Report,
                             (ULONG)ReportLength);
        v17 = pActivityId_4;
        v7 = ScaledUsageValue;
        goto LABEL_7;
      }
LABEL_15:
      UsageValue = HidP_GetUsageValue(
                     HidP_Input,
                     *((_WORD *)v11 + 12),
                     *((_WORD *)v11 + 15),
                     *((_WORD *)v11 + 40),
                     (PULONG)&pActivityId_4,
                     PreparsedData,
                     Report,
                     (ULONG)ReportLength);
      v17 = pActivityId_4;
      v7 = UsageValue;
      if ( pActivityId_4 < *((_DWORD *)v11 + 16) || pActivityId_4 > *((_DWORD *)v11 + 17) )
        v7 = -2146369535;
      goto LABEL_7;
    }
    if ( v13 == 1 )
      goto LABEL_15;
    UsageLength = 5;
    Usages = HidP_GetUsages(
               HidP_Input,
               *((_WORD *)v11 + 12),
               *((_WORD *)v11 + 15),
               UsageList,
               &UsageLength,
               PreparsedData,
               Report,
               (ULONG)ReportLength);
    v21 = 0LL;
    v7 = Usages;
    if ( UsageLength )
    {
      v15 = (const GUID *)*((unsigned __int16 *)v12 + 40);
      while ( UsageList[v21] != (_WORD)v15 )
      {
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= UsageLength )
          goto LABEL_22;
      }
      v17 = 1;
      pActivityId_4 = 1;
    }
    else
    {
LABEL_22:
      v17 = pActivityId_4;
    }
LABEL_7:
    if ( v7 < 0 )
    {
      if ( v7 != -2146369535 && (unsigned int)dword_1C0320190 > 2 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( aInteractivecon_21[v18] );
        v47 = "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.";
        v48 = v18 + 1;
        v50 = &v40;
        v41 = *((_DWORD *)v11 + 4);
        v52 = &v41;
        v42 = pActivityId;
        v54 = &v42;
        v43 = *((unsigned __int16 *)a1 + 40);
        v56 = &v43;
        v49 = 0;
        v40 = v7;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9A5E, v15, v16, 7u, &pData);
      }
      v7 = 0;
      goto LABEL_50;
    }
    if ( *((_DWORD *)v11 + 4) == 1 )
    {
      if ( *((_WORD *)v11 + 12) == 1 )
      {
        v31 = *((_WORD *)v11 + 40);
        if ( v31 == 48 )
        {
          LODWORD(v45) = v17;
          goto LABEL_56;
        }
        if ( v31 == 49 )
        {
          HIDWORD(v45) = v17;
LABEL_56:
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        }
      }
      v8 = 1;
      goto LABEL_34;
    }
    if ( *((_DWORD *)v11 + 4) != 3 )
    {
      if ( *((_DWORD *)v11 + 4) == 5 || *((_DWORD *)v11 + 4) == 7 )
      {
        if ( v17 )
          *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        goto LABEL_34;
      }
      if ( *((_DWORD *)v11 + 4) == 8 && v17 )
      {
        *((_DWORD *)a4 + 5) |= *((_DWORD *)v11 + 24);
        ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v11, v17);
        pActivityId_4 = ScaledComponentValue;
        if ( *((_DWORD *)a1 + 43) == 1 )
        {
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
        }
        else
        {
          v23 = *((_WORD *)v11 + 40);
          if ( v23 != 72 )
          {
            if ( v23 == 73 )
              *((_DWORD *)a1 + 56) = ScaledComponentValue;
            goto LABEL_34;
          }
        }
        *((_DWORD *)a1 + 55) = ScaledComponentValue;
      }
LABEL_34:
      ReportLength = (const GUID *)pActivityId;
      v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
      Report = v37;
      PreparsedData = v38;
      continue;
    }
    if ( !v17 )
      goto LABEL_34;
    if ( *((_DWORD *)v11 + 28) )
    {
      v25 = InteractiveControlParser::GetScaledComponentValue(v11, v17);
      v26 = *((_DWORD *)v11 + 26);
      v27 = v26 + v25;
      v28 = *((_DWORD *)v11 + 27);
      *((_DWORD *)v11 + 26) = v27;
      v29 = v27 / v28;
      v30 = v29 * v28;
      *((_DWORD *)a4 + 6) = v30;
      if ( (v26 ^ *((_DWORD *)v11 + 26)) < 0 )
      {
        if ( *((int *)v11 + 26) <= 0 )
          *((_DWORD *)a4 + 6) = v30 - *((_DWORD *)v11 + 27);
        else
          *((_DWORD *)a4 + 6) = v30 + *((_DWORD *)v11 + 27);
      }
      *((_DWORD *)a4 + 6) = v29 * *((_DWORD *)v11 + 27);
      *((_DWORD *)v11 + 26) -= v29 * *((_DWORD *)v11 + 27);
    }
    else
    {
      if ( (unsigned int)dword_1C0320190 <= 2 )
        goto LABEL_34;
      v24 = -1LL;
      do
        ++v24;
      while ( aInteractivecon_10[v24] );
      v47 = "InteractiveControlParser::ParseInputReport -> Invalid component configuration";
      v48 = v24 + 1;
      v50 = &v43;
      v52 = &v42;
      v41 = *((_DWORD *)v11 + 26);
      v54 = &v41;
      v56 = &v40;
      v44 = *((_DWORD *)v11 + 27);
      v58 = &v44;
      v49 = 0;
      v43 = v7;
      v51 = 4LL;
      v42 = 3;
      v53 = 4LL;
      v55 = 4LL;
      v40 = 0;
      v57 = 4LL;
      v59 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E99E2, v15, v16, 8u, &pData);
    }
LABEL_50:
    ReportLength = (const GUID *)pActivityId;
    v10 = (struct InteractiveControlDevice *)((char *)a1 + 184);
    Report = v37;
    PreparsedData = v38;
  }
  while ( v9 != v10 );
  if ( v8 )
  {
    if ( !*((_QWORD *)a1 + 30) )
    {
      if ( *((_DWORD *)a1 + 62) != 100 )
        goto LABEL_65;
      if ( (unsigned int)dword_1C0320190 > 3 )
      {
        v62 = 72LL;
        v61 = "No mapped digitizer found for positional data. Attempting to rematch...";
        TlgWrite(
          (TraceLoggingHProvider)&dword_1C0320190,
          &unk_1C02E99B2,
          ReportLength,
          (LPCGUID)PreparsedData,
          3u,
          &v60);
      }
      DigitizerForDevice = InteractiveControlParser::FindDigitizerForDevice(a1, (struct _HIDP_PREPARSED_DATA *)Report);
      *((_DWORD *)a1 + 62) = 0;
      if ( DigitizerForDevice < 0 )
      {
LABEL_65:
        *((_DWORD *)a4 + 5) &= ~2u;
        v8 = 0;
      }
      ++*((_DWORD *)a1 + 62);
    }
    if ( v8 )
    {
      v33 = *((_QWORD *)a1 + 30);
      if ( v33 )
        RIMTransformCoordinatesFromDigitizer(v33, &v45, (char *)a4 + 12, (char *)a4 + 4);
    }
  }
  return (unsigned int)v7;
}
