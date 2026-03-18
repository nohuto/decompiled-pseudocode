/*
 * XREFs of ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D314
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021E220 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C021D798 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStart(LPCSTR *this, const struct IFC_SUPERWET_INK_START_DATA *a2)
{
  unsigned int v3; // edx
  int v5; // eax
  unsigned int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID cData; // r9
  int v9; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
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
  EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-B0h] BYREF
  float *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+90h] [rbp-70h] BYREF
  char **v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  const struct IFC_SUPERWET_INK_START_DATA *v30; // [rsp+B0h] [rbp-50h]
  const GUID *v31; // [rsp+B8h] [rbp-48h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  char *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  char *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  char *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  char *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  char *v42; // [rsp+110h] [rbp+10h]
  const GUID *v43; // [rsp+118h] [rbp+18h]
  char *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  char *v46; // [rsp+130h] [rbp+30h]
  const GUID *v47; // [rsp+138h] [rbp+38h]
  char *v48; // [rsp+140h] [rbp+40h]
  const GUID *v49; // [rsp+148h] [rbp+48h]
  char *v50; // [rsp+150h] [rbp+50h]
  const GUID *v51; // [rsp+158h] [rbp+58h]
  char *v52; // [rsp+160h] [rbp+60h]
  const GUID *v53; // [rsp+168h] [rbp+68h]
  char *v54; // [rsp+170h] [rbp+70h]
  const GUID *v55; // [rsp+178h] [rbp+78h]
  char *v56; // [rsp+180h] [rbp+80h]
  const GUID *v57; // [rsp+188h] [rbp+88h]
  char *v58; // [rsp+190h] [rbp+90h]
  const GUID *v59; // [rsp+198h] [rbp+98h]
  char *v60; // [rsp+1A0h] [rbp+A0h]
  const GUID *v61; // [rsp+1A8h] [rbp+A8h]
  char *v62; // [rsp+1B0h] [rbp+B0h]
  const GUID *v63; // [rsp+1B8h] [rbp+B8h]
  char *v64; // [rsp+1C0h] [rbp+C0h]
  const GUID *v65; // [rsp+1C8h] [rbp+C8h]
  int *v66; // [rsp+1D0h] [rbp+D0h]
  const GUID *v67; // [rsp+1D8h] [rbp+D8h]
  int *v68; // [rsp+1E0h] [rbp+E0h]
  const GUID *v69; // [rsp+1E8h] [rbp+E8h]
  int *v70; // [rsp+1F0h] [rbp+F0h]
  const GUID *v71; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF
  float *v73; // [rsp+230h] [rbp+130h]
  __int64 v74; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+240h] [rbp+140h] BYREF

  v3 = *(_DWORD *)a2;
  v16 = 0;
  v5 = InkDevice::GetDisplayScalingInfoAndCheckSupported((InkDevice *)this, v3, (float *)&v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 1u, (__int64)a2, 0x40u);
    v6 = v9;
    if ( v9 >= 0 )
    {
      if ( hProvider > 4u )
      {
        v16 = 0;
        v24 = (float *)&v16;
        v25 = 4LL;
        TlgCreateSz(&v26, "Started super-wet ink");
        TlgCreateSz(&v27, this[10]);
        v29 = 8LL;
        v28 = &v22;
        v17 = *((_BYTE *)a2 + 4);
        v32 = &v17;
        v34 = (char *)a2 + 8;
        v36 = (char *)a2 + 9;
        v38 = (char *)a2 + 10;
        v40 = (char *)a2 + 11;
        v42 = (char *)a2 + 12;
        v18 = *((_BYTE *)a2 + 16);
        v44 = &v18;
        v46 = (char *)a2 + 20;
        v48 = (char *)a2 + 24;
        v50 = (char *)a2 + 28;
        v52 = (char *)a2 + 32;
        v54 = (char *)a2 + 36;
        v56 = (char *)a2 + 40;
        v58 = (char *)a2 + 44;
        v60 = (char *)a2 + 48;
        v62 = (char *)a2 + 52;
        v64 = (char *)a2 + 56;
        v22 = (char *)(this + 4);
        v12 = *((_DWORD *)a2 + 15);
        v30 = a2;
        v31 = v13;
        v19 = -(v12 & 1);
        v66 = &v19;
        v33 = 1LL;
        v35 = 1LL;
        v37 = 1LL;
        v39 = 1LL;
        v41 = 1LL;
        v43 = v13;
        v45 = 1LL;
        v47 = v13;
        v49 = v13;
        v51 = v13;
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
        v20 = -__CFSHR__(v12, 2);
        v68 = &v20;
        v70 = &v21;
        v21 = -__CFSHR__(v12, 3);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC83B, v14, v13, 0x1Bu, &v23);
      }
    }
    else if ( hProvider > 2u )
    {
      v16 = v9;
      v73 = (float *)&v16;
      v74 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v10, v11, 3u, &pData);
    }
  }
  else if ( hProvider > 2u )
  {
    v16 = v5;
    v74 = 4LL;
    v73 = (float *)&v16;
    TlgCreateSz(&pDesc, "GetDisplayScalingInfoAndCheckSupported failed");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v7, cData, (UINT32)cData, &pData);
  }
  return v6;
}
