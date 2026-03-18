/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021E5EC
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021F520 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021E350 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C021EA7C (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(InkDevice *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  unsigned int v3; // edx
  int v5; // eax
  const GUID *v6; // r8
  unsigned int v7; // ebx
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  const CHAR *v11; // rdx
  int v12; // ecx
  const GUID *v13; // r9
  LPCGUID v14; // r8
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+34h] [rbp-CCh] BYREF
  char v18; // [rsp+35h] [rbp-CBh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  char *v22; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  float *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  const char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-70h] BYREF
  float *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  const char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  char **v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  const struct IFC_SUPERWET_INK_START_DATA *v36; // [rsp+F0h] [rbp-10h]
  const GUID *v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  char *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  char *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  char *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  char *v48; // [rsp+150h] [rbp+50h]
  const GUID *v49; // [rsp+158h] [rbp+58h]
  char *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  char *v52; // [rsp+170h] [rbp+70h]
  const GUID *v53; // [rsp+178h] [rbp+78h]
  char *v54; // [rsp+180h] [rbp+80h]
  const GUID *v55; // [rsp+188h] [rbp+88h]
  char *v56; // [rsp+190h] [rbp+90h]
  const GUID *v57; // [rsp+198h] [rbp+98h]
  char *v58; // [rsp+1A0h] [rbp+A0h]
  const GUID *v59; // [rsp+1A8h] [rbp+A8h]
  char *v60; // [rsp+1B0h] [rbp+B0h]
  const GUID *v61; // [rsp+1B8h] [rbp+B8h]
  char *v62; // [rsp+1C0h] [rbp+C0h]
  const GUID *v63; // [rsp+1C8h] [rbp+C8h]
  char *v64; // [rsp+1D0h] [rbp+D0h]
  const GUID *v65; // [rsp+1D8h] [rbp+D8h]
  char *v66; // [rsp+1E0h] [rbp+E0h]
  const GUID *v67; // [rsp+1E8h] [rbp+E8h]
  char *v68; // [rsp+1F0h] [rbp+F0h]
  const GUID *v69; // [rsp+1F8h] [rbp+F8h]
  char *v70; // [rsp+200h] [rbp+100h]
  const GUID *v71; // [rsp+208h] [rbp+108h]
  int *v72; // [rsp+210h] [rbp+110h]
  const GUID *v73; // [rsp+218h] [rbp+118h]
  int *v74; // [rsp+220h] [rbp+120h]
  const GUID *v75; // [rsp+228h] [rbp+128h]
  int *v76; // [rsp+230h] [rbp+130h]
  const GUID *v77; // [rsp+238h] [rbp+138h]

  v3 = *(_DWORD *)a2;
  v16 = 0;
  v5 = InkDevice::GetDisplayScalingInfoAndCheckSupported(this, v3, (float *)&v16);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v11 = (const CHAR *)*((_QWORD *)this + 10);
        v29 = (float *)&v16;
        v16 = 0;
        v31 = "Started super-wet ink";
        v30 = 4LL;
        v32 = 22LL;
        TlgCreateSz(&pDesc, v11);
        v35 = 8LL;
        v34 = &v22;
        v17 = *((_BYTE *)a2 + 4);
        v38 = &v17;
        v40 = (char *)a2 + 8;
        v42 = (char *)a2 + 9;
        v44 = (char *)a2 + 10;
        v46 = (char *)a2 + 11;
        v48 = (char *)a2 + 12;
        v18 = *((_BYTE *)a2 + 16);
        v50 = &v18;
        v52 = (char *)a2 + 20;
        v54 = (char *)a2 + 24;
        v56 = (char *)a2 + 28;
        v58 = (char *)a2 + 32;
        v60 = (char *)a2 + 36;
        v62 = (char *)a2 + 40;
        v64 = (char *)a2 + 44;
        v66 = (char *)a2 + 48;
        v68 = (char *)a2 + 52;
        v70 = (char *)a2 + 56;
        v22 = (char *)this + 32;
        v12 = *((_DWORD *)a2 + 15);
        v36 = a2;
        v37 = v13;
        v19 = -(v12 & 1);
        v72 = &v19;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 1LL;
        v45 = 1LL;
        v47 = 1LL;
        v49 = v13;
        v51 = 1LL;
        v53 = v13;
        v55 = v13;
        v57 = v13;
        v59 = v13;
        v61 = v13;
        v63 = v13;
        v65 = v13;
        v67 = v13;
        v69 = v13;
        v71 = v13;
        v73 = v13;
        v75 = v13;
        v77 = v13;
        v20 = -__CFSHR__(v12, 2);
        v74 = &v20;
        v76 = &v21;
        v21 = -__CFSHR__(v12, 3);
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9540, v14, v13, 0x1Bu, &v28);
      }
    }
    else if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v16 = v8;
      v24 = (float *)&v16;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v9, v10, 3u, &pData);
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v16 = v5;
    v25 = 4LL;
    v24 = (float *)&v16;
    v26 = "GetDisplayScalingInfoAndCheckSupported failed";
    v27 = 46LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v6, (LPCGUID)4, 4u, &pData);
  }
  return v7;
}
