/*
 * XREFs of PopBatteryWorker @ 0x1405C9580
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1401803E0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopAccountBatteryEnergyChange @ 0x1406FDC00 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryEstimatesSpoiled @ 0x1406FE358 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x1406FE400 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406FE59C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406FE62C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406FE7B0 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406FEA9C (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x1406FEC60 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1406FECF4 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  int WnfStateData; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r14d
  __int64 *i; // rdi
  __int64 *j; // rdi
  int v7; // r13d
  __int32 v8; // r12d
  __int64 *v9; // rsi
  bool v10; // r15
  __int64 k; // rdi
  __int64 *v12; // rsi
  char v13; // al
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // r9
  unsigned int v17; // r12d
  int v18; // edi
  char v19; // di
  __int64 *m; // rsi
  char v21; // si
  __int64 *v22; // rdi
  bool v23; // zf
  __int64 *v24; // rax
  __int64 **v25; // rcx
  __int64 *v26; // rdi
  int v27; // ecx
  int EstimatedTime; // eax
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  int v34; // esi
  __int64 v35; // rcx
  unsigned int v36; // r15d
  __int64 *v37; // rsi
  int v38; // eax
  unsigned int v39; // ecx
  int updated; // r12d
  const CHAR *v41; // r9
  const CHAR *v42; // rsi
  LPCSTR v43; // r10
  LPCSTR v44; // r11
  const CHAR *v45; // rdx
  int v46; // eax
  signed __int32 v47[8]; // [rsp+8h] [rbp-100h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  __int64 v50; // [rsp+38h] [rbp-D0h]
  __int64 v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+48h] [rbp-C0h]
  __int64 v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h] BYREF
  int v55; // [rsp+68h] [rbp-A0h]
  unsigned int v56; // [rsp+6Ch] [rbp-9Ch]
  int v57; // [rsp+70h] [rbp-98h] BYREF
  int v58; // [rsp+74h] [rbp-94h]
  int v59; // [rsp+78h] [rbp-90h] BYREF
  __int32 v60; // [rsp+7Ch] [rbp-8Ch]
  int v61; // [rsp+80h] [rbp-88h] BYREF
  int v62; // [rsp+84h] [rbp-84h] BYREF
  int v63; // [rsp+88h] [rbp-80h] BYREF
  __int64 v64; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v65; // [rsp+94h] [rbp-74h] BYREF
  int v66; // [rsp+98h] [rbp-70h] BYREF
  int v67; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v68; // [rsp+A0h] [rbp-68h] BYREF
  int v69; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v75; // [rsp+D8h] [rbp-30h]
  _OWORD v76[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v77; // [rsp+108h] [rbp+0h]
  __int128 v78; // [rsp+10Ch] [rbp+4h]
  int v79; // [rsp+11Ch] [rbp+14h]
  int v80; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+128h] [rbp+20h] BYREF
  int *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+188h] [rbp+80h] BYREF
  int *v88; // [rsp+198h] [rbp+90h]
  __int64 v89; // [rsp+1A0h] [rbp+98h]
  int *v90; // [rsp+1A8h] [rbp+A0h]
  __int64 v91; // [rsp+1B0h] [rbp+A8h]
  int *v92; // [rsp+1B8h] [rbp+B0h]
  __int64 v93; // [rsp+1C0h] [rbp+B8h]
  __int64 *v94; // [rsp+1C8h] [rbp+C0h]
  __int64 v95; // [rsp+1D0h] [rbp+C8h]
  char *v96; // [rsp+1D8h] [rbp+D0h]
  __int64 v97; // [rsp+1E0h] [rbp+D8h]
  int *v98; // [rsp+1E8h] [rbp+E0h]
  __int64 v99; // [rsp+1F0h] [rbp+E8h]
  int *v100; // [rsp+1F8h] [rbp+F0h]
  __int64 v101; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+208h] [rbp+100h] BYREF
  int *v103; // [rsp+218h] [rbp+110h]
  __int64 v104; // [rsp+220h] [rbp+118h]
  int *v105; // [rsp+228h] [rbp+120h]
  __int64 v106; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR v107; // [rsp+238h] [rbp+130h] BYREF
  int *v108; // [rsp+258h] [rbp+150h]
  __int64 v109; // [rsp+260h] [rbp+158h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v57 = 8;
  pData = (EVENT_DATA_DESCRIPTOR *)&v57;
  Timeout = (PLARGE_INTEGER)&v74;
  WnfStateData = ZwQueryWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL);
  v3 = 1LL;
  if ( WnfStateData == -1073741670 || WnfStateData == -1073741431 )
  {
    v4 = 0;
  }
  else if ( !WnfStateData && v57 == 8 )
  {
    v4 = (v74 != 0) + 2;
  }
  else
  {
    v4 = 1;
  }
  for ( i = (__int64 *)qword_140365930; i != &qword_140365930; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140365930; j != &qword_140365930; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v7) = 0;
  LOBYTE(v53) = 0;
  do
  {
    v7 = (unsigned __int8)v7;
    v8 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v9 = (__int64 *)qword_140365930;
    v10 = (v8 & 2) != 0;
    v60 = v8;
    if ( (v8 & 8) != 0 )
      v7 = 1;
    v58 = v7;
    while ( v9 != &qword_140365930 )
    {
      v22 = v9 - 8;
      v23 = *((_DWORD *)v9 + 10) == 2;
      v24 = v9;
      v9 = (__int64 *)*v9;
      if ( v23 )
      {
        if ( (__int64 *)v9[1] != v24 || (v25 = (__int64 **)v24[1], *v25 != v24) )
          __fastfail(3u);
        *v25 = v9;
        v9[1] = (__int64)v25;
        *v24 = 0LL;
        --dword_140365914;
        ++dword_140365978;
        byte_140365918 = 1;
        if ( (int)PopBatteryReadTag(v22) < 0 )
          PopBatteryWaitTag(v22);
        v10 = 1;
      }
    }
    for ( k = qword_140365920; (__int64 *)k != &qword_140365920; k = *(_QWORD *)k )
    {
      if ( *(_DWORD *)(k + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(k + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(k) < 0 )
          PopBatteryWaitTag(k);
        else
          v10 = 1;
      }
    }
    v12 = (__int64 *)qword_140365930;
    if ( (__int64 *)qword_140365930 != &qword_140365930 )
    {
      do
      {
        v26 = v12 - 8;
        LOBYTE(v2) = 1;
        v75 = *(_OWORD *)((char *)v12 + 84);
        if ( (int)PopBatteryQueryStatus(v12 - 8, v2) >= 0 )
        {
          PopAccountBatteryEnergyChange(v12 - 8);
          v27 = *((_DWORD *)v26 + 37);
          if ( (((unsigned __int8)v75 ^ *((_BYTE *)v26 + 148)) & 7) != 0 )
          {
            LOBYTE(v53) = 1;
          }
          else if ( DWORD1(v75) != *((_DWORD *)v26 + 38) || HIDWORD(v75) != *((_DWORD *)v26 + 40) )
          {
            LOBYTE(v7) = 1;
          }
          EstimatedTime = -1;
          if ( (v27 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v12 - 8, 0LL);
          *((_DWORD *)v26 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v52) = EstimatedTime;
          LODWORD(v51) = *((_DWORD *)v26 + 40);
          LODWORD(v50) = *((_DWORD *)v26 + 39);
          LODWORD(pData) = *((_DWORD *)v26 + 38);
          LODWORD(Timeout) = *((_DWORD *)v26 + 37);
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v12 - 8,
            Timeout,
            pData,
            v50,
            v51,
            v52);
        }
        else
        {
          *((_DWORD *)v26 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v12 = (__int64 *)*v12;
      }
      while ( v12 != &qword_140365930 );
      LOBYTE(v8) = v60;
      v58 = v7;
    }
    if ( v10 )
    {
      PopBatteryUpdateCompositeInformation(v3);
      v13 = 1;
      PopMaxChargeRate = 0LL;
      LOBYTE(v53) = 1;
    }
    else
    {
      v13 = v53;
    }
    if ( (v8 & 4) != 0 || v13 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140365500);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140365500, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v70 = -1LL;
    v14 = 0x80000000LL;
    v15 = -1;
    v16 = 0xFFFFFFFFLL;
    v54 = 0xFFFFFFFF00000000uLL;
    v17 = -1;
    v56 = 0x80000000;
    v55 = -1;
    if ( dword_140365914 )
    {
      v29 = qword_140365930;
      v18 = v54;
      while ( (__int64 *)v29 != &qword_140365930 )
      {
        v30 = *(_DWORD *)(v29 + 84) & 0xA;
        v18 |= *(_DWORD *)(v29 + 84) & 7;
        LODWORD(v54) = v18;
        if ( (_BYTE)v30 == 10 )
        {
          v18 |= 8u;
          LODWORD(v54) = v18;
        }
        v31 = *(_DWORD *)(v29 + 88);
        if ( v31 != -1 )
        {
          if ( (_DWORD)v16 == -1 )
            LODWORD(v16) = 0;
          v16 = (unsigned int)(v31 + v16);
          HIDWORD(v54) = v16;
        }
        v32 = *(_DWORD *)(v29 + 92);
        if ( v32 != -1 )
        {
          if ( v15 == -1 )
            v15 = 0;
          if ( v32 > v15 )
            v15 = *(_DWORD *)(v29 + 92);
          v55 = v15;
        }
        v33 = *(_DWORD *)(v29 + 96);
        v3 = 0x80000000LL;
        if ( v33 != 0x80000000 )
        {
          if ( (_DWORD)v14 == 0x80000000 )
            LODWORD(v14) = 0;
          v14 = (unsigned int)(v33 + v14);
          v56 = v14;
        }
        v29 = *(_QWORD *)v29;
      }
      if ( PopBatteryChargingInProgress )
      {
        v34 = v18 & 4;
        if ( (v18 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v34 = v18 & 4;
        if ( (v18 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v34 != 0;
      if ( (v18 & 2) != 0 )
      {
        v18 &= ~4u;
        LODWORD(v54) = v18;
      }
      if ( (v18 & 1) != 0 )
      {
        if ( (v18 & 4) != 0 )
          v70 = PopEstimateChargeTime(v3, v29, v14, v16, Timeout, pData);
      }
      else
      {
        v35 = qword_140365930;
        v36 = 0;
        if ( (__int64 *)qword_140365930 != &qword_140365930 )
        {
          do
          {
            v14 = *(unsigned int *)(v35 + 100);
            if ( (unsigned int)(v14 - 1) <= 0xFFFFFFFD )
              v36 -= 3600 * *(_DWORD *)(v35 + 88) / (unsigned int)v14;
            v35 = *(_QWORD *)v35;
          }
          while ( (__int64 *)v35 != &qword_140365930 );
          if ( v36 )
          {
            v37 = (__int64 *)qword_140365930;
            if ( (__int64 *)qword_140365930 != &qword_140365930 )
            {
              do
              {
                v38 = PopBatteryQueryEstimatedTime(v37 - 8, v36);
                if ( v38 != -1 )
                {
                  v39 = 0;
                  if ( v17 != -1 )
                    v39 = v17;
                  v17 = v38 + v39;
                }
                v37 = (__int64 *)*v37;
              }
              while ( v37 != &qword_140365930 );
              LOBYTE(v7) = v58;
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v18) = 1;
      LODWORD(v54) = 1;
      if ( v4 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v4 = 1;
    }
    v19 = v18 & 1;
    if ( v4 == 2 && !v19 || v4 == 3 && v19 )
      v4 = 1;
    PopBatteryApplyCompositeState(&v54, v17, v14, v16);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_140365AB0 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v47, 0);
  if ( qword_140365AB8 )
    ExfUnblockPushLock(&qword_140365AB8, 0LL);
  for ( m = (__int64 *)qword_140365930; m != &qword_140365930; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8, 0LL);
  if ( !PopUserBatteryChargingEstimator )
  {
    LODWORD(v50) = 0;
    LODWORD(pData) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_CHARGE_ESTIMATE, (__int64)&v70, 8LL);
  }
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v17 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v71 = -1LL;
    else
      v71 = v17;
    LODWORD(v50) = 0;
    LODWORD(pData) = 0;
    Timeout = 0LL;
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_ESTIMATE, (__int64)&v71, 8LL);
  }
  v21 = v53;
  if ( (unsigned __int8)v7 | (unsigned __int8)v53 )
  {
    v77 = dword_140365974;
    v76[0] = xmmword_140365954;
    v80 = dword_140365910;
    LODWORD(v50) = 0;
    LODWORD(pData) = 0;
    v78 = xmmword_140365940;
    v79 = dword_140365914;
    v76[1] = xmmword_140365964;
    Timeout = 0LL;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_COMPOSITE_BATTERY, (__int64)v76, 60LL);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v41 = "AC Power";
      v61 = dword_140365914;
      if ( (xmmword_140365940 & 1) == 0 )
        v41 = "DC Power";
      v42 = "Battery Critical";
      if ( (xmmword_140365940 & 8) == 0 )
        v42 = "-";
      if ( (_DWORD)xmmword_140365964 )
        v59 = 100000 * (unsigned __int64)DWORD1(xmmword_140365940) / (unsigned int)xmmword_140365964;
      else
        v59 = 0;
      v62 = DWORD1(xmmword_140365940);
      v64 = *((_QWORD *)&xmmword_140365940 + 1);
      v65 = dword_140365910;
      v67 = HIDWORD(xmmword_140365954);
      v82 = &v61;
      v63 = xmmword_140365964;
      v66 = dword_140365914;
      v68 = updated;
      v83 = 4LL;
      TlgCreateSz(&pDesc, v41);
      TlgCreateSz(&v85, v43);
      TlgCreateSz(&v86, v44);
      TlgCreateSz(&v87, v42);
      v90 = &v62;
      v88 = &v59;
      v92 = &v63;
      v45 = "Relative Capacity Unit";
      v89 = 4LL;
      v94 = &v64;
      v91 = 4LL;
      v96 = (char *)&v64 + 4;
      v98 = &v65;
      v100 = &v66;
      if ( (xmmword_140365954 & 0x40000000) == 0 )
        v45 = "mWh Unit";
      v93 = 4LL;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 4LL;
      v101 = 4LL;
      TlgCreateSz(&v102, v45);
      v104 = 4LL;
      v105 = &v68;
      v103 = &v67;
      v106 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1402D154C, 0LL, 0LL, 0x11u, &v81);
      v21 = v53;
    }
    if ( v4 == 1 )
    {
      if ( v19 )
        v72 = 0LL;
      else
        v72 = MEMORY[0xFFFFF78000000014];
      LODWORD(v50) = 0;
      LODWORD(pData) = 0;
      Timeout = 0LL;
      ZwUpdateWnfStateData((__int64)&WNF_PO_DISCHARGE_START_FILETIME, (__int64)&v72, 8LL);
    }
    if ( v21 )
    {
      LODWORD(v50) = 0;
      v73 = 0xFFFFFFFF00000000uLL;
      LODWORD(pData) = 0;
      Timeout = 0LL;
      v46 = ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_STATE_CHANGE, (__int64)&v73, 8LL);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v69 = v46;
        v108 = &v69;
        v109 = 4LL;
        TlgWrite(&pCallbackContext, &unk_1402D16B2, 0LL, 0LL, 3u, &v107);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
