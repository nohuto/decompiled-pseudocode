/*
 * XREFs of PopBatteryCheckCompositeCapacity @ 0x140610E34
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 *     PopBatteryTracePercentageRemaining @ 0x14076417C (PopBatteryTracePercentageRemaining.c)
 *     PopSqmBatteryUpdate @ 0x14076FF2C (PopSqmBatteryUpdate.c)
 */

void __fastcall PopBatteryCheckCompositeCapacity(int *a1, unsigned int a2)
{
  int *v3; // rdi
  unsigned __int8 v4; // r8
  unsigned int v5; // ebx
  const CHAR *v6; // rsi
  const CHAR *v7; // r14
  const CHAR *v8; // r15
  const CHAR *v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  char v12; // bl
  int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  const CHAR *v24; // r9
  const CHAR *v25; // r13
  bool v26; // zf
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  LPCSTR v29; // r10
  LPCSTR v30; // r11
  int v31; // r10d
  int v32; // eax
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  int updated; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+7Ch] [rbp-84h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  int *v54; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v56; // [rsp+C0h] [rbp-40h]
  int v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+CCh] [rbp-34h]
  int *v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+110h] [rbp+10h] BYREF
  int *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  unsigned int *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  int *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  int *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  int *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  int *p_updated; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v78; // [rsp+180h] [rbp+80h] BYREF
  int *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  int *v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  int *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  int *v91; // [rsp+220h] [rbp+120h]
  __int64 v92; // [rsp+228h] [rbp+128h]
  int *v93; // [rsp+230h] [rbp+130h]
  __int64 v94; // [rsp+238h] [rbp+138h]
  int *v95; // [rsp+240h] [rbp+140h]
  __int64 v96; // [rsp+248h] [rbp+148h]
  __int64 *v97; // [rsp+250h] [rbp+150h]
  __int64 v98; // [rsp+258h] [rbp+158h]

  v54 = a1;
  v3 = a1;
  if ( !dword_1403AA274 )
  {
    v4 = 0;
    dword_1403AA400 = 0;
LABEL_3:
    LOBYTE(v5) = 0;
LABEL_4:
    dword_1403AA408 = 0;
    goto LABEL_5;
  }
  v10 = (unsigned int)a1[1];
  LODWORD(v11) = 100000;
  if ( HIDWORD(qword_1403AA2C0) > (unsigned int)v10 )
  {
    if ( HIDWORD(qword_1403AA2C0) )
      v11 = 100000 * v10 / (unsigned __int64)HIDWORD(qword_1403AA2C0);
    else
      LODWORD(v11) = 0;
  }
  v12 = 1;
  v13 = 0;
  if ( dword_1403AA3F0 != -1 )
  {
    v12 = 0;
    v13 = v11 - dword_1403AA3F0;
  }
  v35 = ((int)v11 + 500) / 0x3E8u;
  v14 = (dword_1403AA3F0 + 500) / 0x3E8u;
  if ( v35 != v14 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v35);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    LOBYTE(v15) = (HIBYTE(PopBsdPowerTransition) ^ v35) & 0x7F;
    HIBYTE(PopBsdPowerTransition) ^= v15;
    PopWriteBsdPowerTransition(v17, v16, v15);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v18) = 0;
    v53 = MEMORY[0xFFFFF78000000008];
    if ( v12 )
      v18 = (MEMORY[0xFFFFF78000000008] - qword_1403AA3F8 + 5000) / 0x2710uLL;
    v19 = v35;
    v20 = v35 - v14;
    PopSqmBatteryUpdate(v35, v35 - v14, a2, (unsigned int)v18);
    PopBatteryTracePercentageRemaining(v19, v20, a2, (unsigned int)v18);
    v3 = v54;
    qword_1403AA3F8 = v53;
  }
  v4 = byte_1403AA404;
  LOBYTE(v5) = byte_1403AA3E8;
  dword_1403AA3F0 = v11;
  if ( a2 == 1 )
  {
    v4 = 0;
    dword_1403AA400 = 0;
    LOBYTE(v5) = 1;
    goto LABEL_4;
  }
  if ( a2 != ((unk_1403AA2A0 & 1) == 0) )
  {
    v4 = 0;
LABEL_22:
    dword_1403AA400 = v11;
    goto LABEL_3;
  }
  if ( byte_1403AA278 )
  {
    if ( byte_1403AA404 )
      goto LABEL_3;
    goto LABEL_22;
  }
  v21 = dword_1403AA400;
  if ( dword_1403AA400 < (unsigned int)v11 )
  {
    v21 = v11;
    dword_1403AA400 = v11;
  }
  v4 = byte_1403AA404;
  if ( v21 > (int)v11 + WeakChargerChargeDropMilliPercent )
    v4 = 1;
  v22 = v13 + dword_1403AA408;
  dword_1403AA408 = v22;
  if ( (int)abs32(v22) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v5 = v22 >> 31;
    goto LABEL_4;
  }
LABEL_5:
  v6 = "AC Power";
  v7 = "Battery Discharging";
  v8 = "Battery Charging";
  v9 = "Battery Critical";
  if ( byte_1403AA404 != v4 )
  {
    byte_1403AA404 = v4;
    v37 = v4;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_WEAK_CHARGER, (__int64)&v37, 4LL);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v23 = *v3;
        v24 = "AC Power";
        v38 = (unsigned __int8)byte_1403AA404;
        v25 = "Battery Critical";
        v39 = dword_1403AA274;
        if ( (v23 & 1) == 0 )
          v24 = "DC Power";
        v26 = (v23 & 8) == 0;
        v27 = (unsigned int)v3[1];
        if ( v26 )
          v25 = "-";
        v35 = v3[1];
        if ( HIDWORD(qword_1403AA2C0) )
          v28 = 100000 * v27 / (unsigned __int64)HIDWORD(qword_1403AA2C0);
        else
          LODWORD(v28) = 0;
        v58 = 0;
        v61 = 0;
        v40 = v28;
        v41 = v35;
        v43 = v3[2];
        v44 = v3[3];
        v56 = &v38;
        v59 = &v39;
        v42 = HIDWORD(qword_1403AA2C0);
        v57 = 4;
        v60 = 4;
        TlgCreateSz(&pDesc, v24);
        TlgCreateSz(&v63, v29);
        TlgCreateSz(&v64, v30);
        TlgCreateSz(&v65, v25);
        v67 = 4LL;
        v68 = &v41;
        v66 = &v40;
        v70 = &v42;
        v69 = 4LL;
        v72 = &v43;
        v74 = &v44;
        p_updated = &updated;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030ADFC, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  if ( byte_1403AA3E8 != (_BYTE)v5 )
  {
    byte_1403AA3E8 = v5;
    v45 = (unsigned __int8)v5;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_DISCHARGING, (__int64)&v45, 4LL);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v32 = *v3;
        v33 = (unsigned int)v3[1];
        v46 = (unsigned __int8)byte_1403AA3E8;
        v47 = dword_1403AA274;
        if ( (v32 & 1) == 0 )
          v6 = "DC Power";
        if ( (v32 & 2) == 0 )
          v7 = "-";
        if ( (v32 & 4) == 0 )
          v8 = "-";
        if ( (v32 & 8) == 0 )
          v9 = "-";
        if ( HIDWORD(qword_1403AA2C0) )
          v34 = 100000 * v33 / (unsigned __int64)HIDWORD(qword_1403AA2C0);
        else
          LODWORD(v34) = 0;
        v48 = v34;
        v51 = v3[2];
        v52 = v3[3];
        v79 = &v46;
        v81 = &v47;
        v49 = v33;
        v50 = HIDWORD(qword_1403AA2C0);
        LODWORD(v53) = v31;
        v80 = 4LL;
        v82 = 4LL;
        TlgCreateSz(&v83, v6);
        TlgCreateSz(&v84, v7);
        TlgCreateSz(&v85, v8);
        TlgCreateSz(&v86, v9);
        v88 = 4LL;
        v89 = &v49;
        v87 = &v48;
        v91 = &v50;
        v93 = &v51;
        v95 = &v52;
        v97 = &v53;
        v90 = 4LL;
        v92 = 4LL;
        v94 = 4LL;
        v96 = 4LL;
        v98 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030A8DF, 0LL, 0LL, 0xEu, &v78);
      }
    }
  }
}
