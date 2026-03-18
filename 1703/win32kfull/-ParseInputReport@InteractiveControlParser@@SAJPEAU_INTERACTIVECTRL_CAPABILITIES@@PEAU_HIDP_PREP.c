/*
 * XREFs of ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0224D74
 * Callers:
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0221278 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::ParseInputReport(
        struct _INTERACTIVECTRL_CAPABILITIES *a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        CHAR *Report,
        ULONG ReportLength,
        struct tagINTERACTIVECTRL_INFO *a5)
{
  int v6; // esi
  int v7; // r13d
  struct _INTERACTIVECTRL_CAPABILITIES *v8; // r12
  struct _INTERACTIVECTRL_CAPABILITIES *v9; // rax
  struct _INTERACTIVECTRL_CAPABILITIES *v10; // rbx
  struct _INTERACTIVECTRL_CAPABILITIES *v11; // r15
  int v12; // ecx
  NTSTATUS v13; // eax
  ULONG v14; // ecx
  NTSTATUS Usages; // eax
  __int64 v16; // rcx
  NTSTATUS ScaledUsageValue; // eax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  ULONG v20; // eax
  __int16 v21; // cx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int ScaledComponentValue; // eax
  int v25; // r8d
  int v26; // eax
  int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  ULONG v31; // [rsp+40h] [rbp-C0h]
  ULONG UsageValue; // [rsp+44h] [rbp-BCh] BYREF
  struct _HIDP_PREPARSED_DATA *v33; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+50h] [rbp-B0h]
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v38; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v42; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A0h] [rbp-60h] BYREF
  int *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  ULONG *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  int *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  int *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  int *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  ULONG *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  int *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  USHORT UsageList[4]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v65; // [rsp+198h] [rbp+98h]

  v31 = ReportLength;
  v34 = (unsigned __int8 *)Report;
  v33 = PreparsedData;
  *(_QWORD *)a5 = 0LL;
  v6 = 0;
  *((_QWORD *)a5 + 1) = 0LL;
  v7 = 0;
  *((_QWORD *)a5 + 2) = 0LL;
  *((_DWORD *)a5 + 6) = 0;
  v8 = (struct _INTERACTIVECTRL_CAPABILITIES *)*((_QWORD *)a1 + 14);
  UsageLength = 5;
  *(_QWORD *)UsageList = 0LL;
  v65 = 0;
  v41 = 0LL;
  if ( v8 == (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112) )
    return (unsigned int)v6;
  v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
  do
  {
    UsageValue = 0;
    v10 = v8;
    v11 = v8;
    v8 = *(struct _INTERACTIVECTRL_CAPABILITIES **)v8;
    if ( *((_DWORD *)v10 + 25) )
      continue;
    v12 = *((_DWORD *)v10 + 4);
    if ( ((v12 - 1) & 0xFFFFFFF9) != 0 || v12 == 3 )
    {
      ScaledUsageValue = HidP_GetScaledUsageValue(
                           HidP_Input,
                           *((_WORD *)v10 + 12),
                           *((_WORD *)v10 + 15),
                           *((_WORD *)v10 + 40),
                           (PLONG)&UsageValue,
                           PreparsedData,
                           Report,
                           ReportLength);
      v14 = UsageValue;
      v6 = ScaledUsageValue;
    }
    else if ( v12 == 1 )
    {
      v13 = HidP_GetUsageValue(
              HidP_Input,
              *((_WORD *)v10 + 12),
              *((_WORD *)v10 + 15),
              *((_WORD *)v10 + 40),
              &UsageValue,
              PreparsedData,
              Report,
              ReportLength);
      v14 = UsageValue;
      v6 = v13;
      if ( (signed int)UsageValue < *((_DWORD *)v10 + 16) || (signed int)UsageValue > *((_DWORD *)v10 + 17) )
        v6 = -2146369535;
    }
    else
    {
      UsageLength = 5;
      Usages = HidP_GetUsages(
                 HidP_Input,
                 *((_WORD *)v10 + 12),
                 *((_WORD *)v10 + 15),
                 UsageList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 ReportLength);
      v16 = 0LL;
      v6 = Usages;
      if ( UsageLength )
      {
        while ( UsageList[v16] != *((_WORD *)v11 + 40) )
        {
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= UsageLength )
            goto LABEL_13;
        }
        v14 = 1;
        UsageValue = 1;
      }
      else
      {
LABEL_13:
        v14 = UsageValue;
      }
    }
    if ( v6 < 0 )
    {
      if ( v6 != -2146369535 && (unsigned int)dword_1C0324190 > 2 )
      {
        TlgCreateSz(&pDesc, "InteractiveControlParser::ParseInputReport -> HidP_GetUsageValue failed.");
        v36 = v6;
        v56 = &v36;
        v37 = *((_DWORD *)v10 + 4);
        v58 = &v37;
        v38 = v31;
        v60 = &v38;
        v39 = *((unsigned __int16 *)a1 + 4);
        v62 = &v39;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECE04, v18, v19, 7u, &pData);
      }
      v6 = 0;
LABEL_46:
      ReportLength = v31;
      v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
      PreparsedData = v33;
      Report = (CHAR *)v34;
      continue;
    }
    switch ( *((_DWORD *)v10 + 4) )
    {
      case 1:
        if ( *((_WORD *)v10 + 12) == 1 )
        {
          if ( *((_WORD *)v10 + 40) == 48 )
          {
            LODWORD(v41) = v14;
LABEL_52:
            *((_DWORD *)a5 + 5) |= *((_DWORD *)v10 + 24);
            goto LABEL_53;
          }
          if ( *((_WORD *)v10 + 40) == 49 )
          {
            HIDWORD(v41) = v14;
            goto LABEL_52;
          }
        }
LABEL_53:
        v7 = 1;
        goto LABEL_31;
      case 3:
        if ( !v14 )
          goto LABEL_31;
        if ( *((_DWORD *)v10 + 28) )
        {
          ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v10, v14);
          v25 = *((_DWORD *)v10 + 26);
          v26 = v25 + ScaledComponentValue;
          *((_DWORD *)v10 + 26) = v26;
          v27 = v26 / *((_DWORD *)v10 + 28);
          v28 = v27 * *((_DWORD *)v10 + 27);
          *((_DWORD *)a5 + 6) = v28;
          if ( (v25 ^ *((_DWORD *)v10 + 26)) < 0 )
          {
            if ( *((int *)v10 + 26) <= 0 )
              *((_DWORD *)a5 + 6) = v28 - *((_DWORD *)v10 + 27);
            else
              *((_DWORD *)a5 + 6) = v28 + *((_DWORD *)v10 + 27);
          }
          *((_DWORD *)a5 + 6) = v27 * *((_DWORD *)v10 + 27);
          *((_DWORD *)v10 + 26) -= *((_DWORD *)v10 + 28) * v27;
        }
        else
        {
          if ( (unsigned int)dword_1C0324190 <= 2 )
            goto LABEL_31;
          TlgCreateSz(&v43, "InteractiveControlParser::ParseInputReport -> Invalid component configuration");
          v39 = v6;
          v44 = &v39;
          v38 = *((_DWORD *)v10 + 4);
          v46 = &v38;
          v37 = *((_DWORD *)v10 + 26);
          v48 = &v37;
          v36 = *((_DWORD *)v10 + 28);
          v50 = &v36;
          v40 = *((_DWORD *)v10 + 27);
          v52 = &v40;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECD88, v22, v23, 8u, &v42);
        }
        goto LABEL_46;
      case 5:
      case 7:
        ReportLength = v31;
        PreparsedData = v33;
        Report = (CHAR *)v34;
        if ( v14 )
          *((_DWORD *)a5 + 5) |= *((_DWORD *)v10 + 24);
        break;
      default:
        if ( *((_DWORD *)v10 + 4) != 8 || !v14 )
          goto LABEL_31;
        *((_DWORD *)a5 + 5) |= *((_DWORD *)v10 + 24);
        v20 = InteractiveControlParser::GetScaledComponentValue(v10, v14);
        UsageValue = v20;
        if ( *((_DWORD *)a1 + 25) == 1 )
        {
          *((_DWORD *)a1 + 38) = v20;
LABEL_30:
          *((_DWORD *)a1 + 37) = v20;
LABEL_31:
          ReportLength = v31;
          v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
          PreparsedData = v33;
          Report = (CHAR *)v34;
          continue;
        }
        v21 = *((_WORD *)v10 + 40);
        if ( v21 == 72 )
          goto LABEL_30;
        ReportLength = v31;
        PreparsedData = v33;
        Report = (CHAR *)v34;
        if ( v21 == 73 )
          *((_DWORD *)a1 + 38) = v20;
        break;
    }
    v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a1 + 112);
  }
  while ( v8 != v9 );
  if ( v7 )
  {
    v29 = *((_QWORD *)a1 + 21);
    if ( v29 )
      RIMTransformCoordinatesFromDigitizer(v29, &v41, (char *)a5 + 12, (char *)a5 + 4);
  }
  return (unsigned int)v6;
}
