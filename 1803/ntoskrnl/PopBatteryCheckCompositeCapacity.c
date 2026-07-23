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
  unsigned __int64 v15; // r14
  unsigned int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  const CHAR *v21; // r9
  const CHAR *v22; // r13
  bool v23; // zf
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  LPCSTR v26; // r10
  LPCSTR v27; // r11
  int v28; // r10d
  int v29; // eax
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  unsigned int v32; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS updated; // [rsp+44h] [rbp-BCh] BYREF
  int Buffer; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+6Ch] [rbp-94h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+74h] [rbp-8Ch] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  int *v51; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  int *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+110h] [rbp+10h] BYREF
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  unsigned int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  int *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  int *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  NTSTATUS *p_updated; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+180h] [rbp+80h] BYREF
  int *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1F0h] [rbp+F0h] BYREF
  int *v84; // [rsp+200h] [rbp+100h]
  __int64 v85; // [rsp+208h] [rbp+108h]
  int *v86; // [rsp+210h] [rbp+110h]
  __int64 v87; // [rsp+218h] [rbp+118h]
  int *v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  int *v90; // [rsp+230h] [rbp+130h]
  __int64 v91; // [rsp+238h] [rbp+138h]
  int *v92; // [rsp+240h] [rbp+140h]
  __int64 v93; // [rsp+248h] [rbp+148h]
  __int64 *v94; // [rsp+250h] [rbp+150h]
  __int64 v95; // [rsp+258h] [rbp+158h]

  v51 = a1;
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
  v32 = ((int)v11 + 500) / 0x3E8u;
  v14 = (dword_1403AA3F0 + 500) / 0x3E8u;
  if ( v32 != v14 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v32);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) ^= (HIBYTE(PopBsdPowerTransition) ^ v32) & 0x7F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    LODWORD(v15) = 0;
    v50 = MEMORY[0xFFFFF78000000008];
    if ( v12 )
      v15 = (MEMORY[0xFFFFF78000000008] - qword_1403AA3F8 + 5000) / 0x2710uLL;
    v16 = v32;
    v17 = v32 - v14;
    PopSqmBatteryUpdate(v32, v32 - v14, a2, (unsigned int)v15);
    PopBatteryTracePercentageRemaining(v16, v17, a2, (unsigned int)v15);
    v3 = v51;
    qword_1403AA3F8 = v50;
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
  v18 = dword_1403AA400;
  if ( dword_1403AA400 < (unsigned int)v11 )
  {
    v18 = v11;
    dword_1403AA400 = v11;
  }
  v4 = byte_1403AA404;
  if ( v18 > (int)v11 + WeakChargerChargeDropMilliPercent )
    v4 = 1;
  v19 = v13 + dword_1403AA408;
  dword_1403AA408 = v19;
  if ( (int)abs32(v19) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v5 = v19 >> 31;
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
    Buffer = v4;
    updated = ZwUpdateWnfStateData(&WNF_PO_WEAK_CHARGER, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v20 = *v3;
        v21 = "AC Power";
        v35 = (unsigned __int8)byte_1403AA404;
        v22 = "Battery Critical";
        v36 = dword_1403AA274;
        if ( (v20 & 1) == 0 )
          v21 = "DC Power";
        v23 = (v20 & 8) == 0;
        v24 = (unsigned int)v3[1];
        if ( v23 )
          v22 = "-";
        v32 = v3[1];
        if ( HIDWORD(qword_1403AA2C0) )
          v25 = 100000 * v24 / (unsigned __int64)HIDWORD(qword_1403AA2C0);
        else
          LODWORD(v25) = 0;
        v55 = 0;
        v58 = 0;
        v37 = v25;
        v38 = v32;
        v40 = v3[2];
        v41 = v3[3];
        v53 = &v35;
        v56 = &v36;
        v39 = HIDWORD(qword_1403AA2C0);
        v54 = 4;
        v57 = 4;
        TlgCreateSz(&pDesc, v21);
        TlgCreateSz(&v60, v26);
        TlgCreateSz(&v61, v27);
        TlgCreateSz(&v62, v22);
        v64 = 4LL;
        v65 = &v38;
        v63 = &v37;
        v67 = &v39;
        v66 = 4LL;
        v69 = &v40;
        v71 = &v41;
        p_updated = &updated;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030ADFC, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
  if ( byte_1403AA3E8 != (_BYTE)v5 )
  {
    byte_1403AA3E8 = v5;
    v42 = (unsigned __int8)v5;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &v42, 4u, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      {
        v29 = *v3;
        v30 = (unsigned int)v3[1];
        v43 = (unsigned __int8)byte_1403AA3E8;
        v44 = dword_1403AA274;
        if ( (v29 & 1) == 0 )
          v6 = "DC Power";
        if ( (v29 & 2) == 0 )
          v7 = "-";
        if ( (v29 & 4) == 0 )
          v8 = "-";
        if ( (v29 & 8) == 0 )
          v9 = "-";
        if ( HIDWORD(qword_1403AA2C0) )
          v31 = 100000 * v30 / (unsigned __int64)HIDWORD(qword_1403AA2C0);
        else
          LODWORD(v31) = 0;
        v45 = v31;
        v48 = v3[2];
        v49 = v3[3];
        v76 = &v43;
        v78 = &v44;
        v46 = v30;
        v47 = HIDWORD(qword_1403AA2C0);
        LODWORD(v50) = v28;
        v77 = 4LL;
        v79 = 4LL;
        TlgCreateSz(&v80, v6);
        TlgCreateSz(&v81, v7);
        TlgCreateSz(&v82, v8);
        TlgCreateSz(&v83, v9);
        v85 = 4LL;
        v86 = &v46;
        v84 = &v45;
        v88 = &v47;
        v90 = &v48;
        v92 = &v49;
        v94 = &v50;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030A8DF, 0LL, 0LL, 0xEu, &v75);
      }
    }
  }
}
