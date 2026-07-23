/*
 * XREFs of PopBatteryCheckCompositeCapacity @ 0x1405CAF18
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     PopBatteryTracePercentageRemaining @ 0x1406FE90C (PopBatteryTracePercentageRemaining.c)
 *     PopSqmBatteryUpdate @ 0x14070CA6C (PopSqmBatteryUpdate.c)
 */

void __fastcall PopBatteryCheckCompositeCapacity(int *a1, unsigned int a2)
{
  unsigned __int8 v4; // r8
  unsigned int v5; // ebx
  const CHAR *v6; // rdi
  const CHAR *v7; // rsi
  const CHAR *v8; // r14
  const CHAR *v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r15d
  char v13; // bl
  unsigned __int64 v14; // r14
  unsigned int v15; // edi
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  const CHAR *v20; // r9
  const CHAR *v21; // r13
  int v22; // eax
  LPCSTR v23; // r10
  LPCSTR v24; // r11
  int v25; // r9d
  int v26; // eax
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  NTSTATUS updated; // [rsp+40h] [rbp-C0h]
  unsigned int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int Buffer; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  NTSTATUS v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+7Ch] [rbp-84h] BYREF
  int v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+84h] [rbp-7Ch] BYREF
  int v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  int *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+110h] [rbp+10h] BYREF
  int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  int *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  int *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  int *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  NTSTATUS *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v71; // [rsp+180h] [rbp+80h] BYREF
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  int *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v80; // [rsp+200h] [rbp+100h]
  __int64 v81; // [rsp+208h] [rbp+108h]
  int *v82; // [rsp+210h] [rbp+110h]
  __int64 v83; // [rsp+218h] [rbp+118h]
  int *v84; // [rsp+220h] [rbp+120h]
  __int64 v85; // [rsp+228h] [rbp+128h]
  int *v86; // [rsp+230h] [rbp+130h]
  __int64 v87; // [rsp+238h] [rbp+138h]
  int *v88; // [rsp+240h] [rbp+140h]
  __int64 v89; // [rsp+248h] [rbp+148h]
  __int64 *v90; // [rsp+250h] [rbp+150h]
  __int64 v91; // [rsp+258h] [rbp+158h]

  if ( !dword_140365914 )
  {
    v4 = 0;
    dword_140365AA0 = 0;
LABEL_3:
    LOBYTE(v5) = 0;
LABEL_4:
    dword_140365AA8 = 0;
    goto LABEL_5;
  }
  v10 = (unsigned int)a1[1];
  LODWORD(v11) = 100000;
  if ( HIDWORD(qword_140365960) > (unsigned int)v10 )
  {
    if ( HIDWORD(qword_140365960) )
      v11 = 100000 * v10 / (unsigned __int64)HIDWORD(qword_140365960);
    else
      LODWORD(v11) = 0;
  }
  v12 = 0;
  v13 = 1;
  if ( dword_140365A90 != -1 )
  {
    v12 = v11 - dword_140365A90;
    v13 = 0;
  }
  v29 = ((int)v11 + 500) / 0x3E8u;
  v27 = (dword_140365A90 + 500) / 0x3E8u;
  if ( v29 != v27 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v29);
    LODWORD(v14) = 0;
    v47 = MEMORY[0xFFFFF78000000008];
    if ( v13 )
      v14 = (MEMORY[0xFFFFF78000000008] - qword_140365A98 + 5000) / 0x2710uLL;
    v15 = v29;
    v16 = v29 - v27;
    PopSqmBatteryUpdate(v29, v29 - v27, a2, (unsigned int)v14);
    PopBatteryTracePercentageRemaining(v15, v16, a2, (unsigned int)v14);
    qword_140365A98 = v47;
  }
  v4 = byte_140365AA4;
  LOBYTE(v5) = byte_140365A88;
  dword_140365A90 = v11;
  if ( a2 == 1 )
  {
    LOBYTE(v5) = 1;
    v4 = 0;
    dword_140365AA0 = 0;
    goto LABEL_4;
  }
  if ( a2 != ((unk_140365940 & 1) == 0) )
  {
    v4 = 0;
LABEL_22:
    dword_140365AA0 = v11;
    goto LABEL_3;
  }
  if ( byte_140365918 )
  {
    if ( byte_140365AA4 )
      goto LABEL_3;
    goto LABEL_22;
  }
  v17 = dword_140365AA0;
  if ( dword_140365AA0 < (unsigned int)v11 )
  {
    v17 = v11;
    dword_140365AA0 = v11;
  }
  v4 = byte_140365AA4;
  if ( v17 > (int)v11 + WeakChargerChargeDropMilliPercent )
    v4 = 1;
  v18 = v12 + dword_140365AA8;
  dword_140365AA8 = v18;
  if ( (int)abs32(v18) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v5 = v18 >> 31;
    goto LABEL_4;
  }
LABEL_5:
  v6 = "AC Power";
  v7 = "Battery Discharging";
  v8 = "Battery Charging";
  v9 = "Battery Critical";
  if ( byte_140365AA4 != v4 )
  {
    byte_140365AA4 = v4;
    Buffer = v4;
    updated = ZwUpdateWnfStateData(&WNF_PO_WEAK_CHARGER, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v19 = *a1;
        v20 = "AC Power";
        v33 = (unsigned __int8)byte_140365AA4;
        v21 = "Battery Critical";
        v34 = dword_140365914;
        if ( (v19 & 1) == 0 )
          v20 = "DC Power";
        if ( (v19 & 8) == 0 )
          v21 = "-";
        if ( HIDWORD(qword_140365960) )
          v30 = 100000 * (unsigned __int64)(unsigned int)a1[1] / HIDWORD(qword_140365960);
        else
          v30 = 0;
        v22 = a1[1];
        v51 = 0;
        v54 = 0;
        v35 = v22;
        v37 = a1[2];
        v38 = a1[3];
        v39 = updated;
        v49 = &v33;
        v52 = &v34;
        v36 = HIDWORD(qword_140365960);
        v50 = 4;
        v53 = 4;
        TlgCreateSz(&pDesc, v20);
        TlgCreateSz(&v56, v23);
        TlgCreateSz(&v57, v24);
        TlgCreateSz(&v58, v21);
        v60 = 4LL;
        v61 = &v35;
        v59 = &v30;
        v63 = &v36;
        v62 = 4LL;
        v65 = &v37;
        v67 = &v38;
        v69 = &v39;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        TlgWrite(&pCallbackContext, &unk_1402D0FCE, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  if ( byte_140365A88 != (_BYTE)v5 )
  {
    byte_140365A88 = v5;
    v40 = (unsigned __int8)v5;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &v40, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v26 = *a1;
        v41 = (unsigned __int8)byte_140365A88;
        v42 = dword_140365914;
        if ( (v26 & 1) == 0 )
          v6 = "DC Power";
        if ( (v26 & 2) == 0 )
          v7 = "-";
        if ( (v26 & 4) == 0 )
          v8 = "-";
        if ( (v26 & 8) == 0 )
          v9 = "-";
        if ( HIDWORD(qword_140365960) )
          v31 = 100000 * (unsigned __int64)(unsigned int)a1[1] / HIDWORD(qword_140365960);
        else
          v31 = 0;
        v43 = a1[1];
        v45 = a1[2];
        v46 = a1[3];
        v72 = &v41;
        v74 = &v42;
        v44 = HIDWORD(qword_140365960);
        LODWORD(v47) = v25;
        v73 = 4LL;
        v75 = 4LL;
        TlgCreateSz(&v76, v6);
        TlgCreateSz(&v77, v7);
        TlgCreateSz(&v78, v8);
        TlgCreateSz(&v79, v9);
        v81 = 4LL;
        v82 = &v43;
        v80 = &v31;
        v84 = &v44;
        v86 = &v45;
        v88 = &v46;
        v90 = &v47;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        TlgWrite(&pCallbackContext, &unk_1402D0E9B, 0LL, 0LL, 0xEu, &v71);
      }
    }
  }
}
