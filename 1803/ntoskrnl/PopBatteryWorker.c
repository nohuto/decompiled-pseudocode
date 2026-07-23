/*
 * XREFs of PopBatteryWorker @ 0x140610630
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x1401AA020 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopAccountBatteryEnergyChange @ 0x14076347C (PopAccountBatteryEnergyChange.c)
 *     PopBatteryEstimatesSpoiled @ 0x140763BD8 (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x140763C80 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140763E1C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140763EAC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14076402C (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14076430C (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x140764464 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1407644D4 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  int v3; // r14d
  __int64 *i; // rdi
  __int64 *j; // rdi
  char v6; // r13
  __int32 v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // si
  __int64 k; // rdi
  __int64 *v12; // r15
  char v13; // al
  __int64 v14; // r8
  unsigned int v15; // r10d
  __int64 v16; // r9
  unsigned int v17; // r15d
  char v18; // si
  __int64 *n; // rdi
  __int64 v20; // rax
  char v21; // di
  __int64 *v22; // rdi
  __int64 v23; // r15
  __int64 **v24; // rcx
  __int64 *v25; // rdi
  int v26; // edx
  int EstimatedTime; // eax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // edi
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  int v36; // esi
  __int64 v37; // rcx
  unsigned int v38; // esi
  __int64 *m; // rdi
  int v40; // eax
  unsigned int v41; // ecx
  NTSTATUS updated; // r12d
  const CHAR *v43; // r9
  const CHAR *v44; // rdi
  unsigned __int64 v45; // rax
  LPCSTR v46; // r10
  LPCSTR v47; // r11
  const CHAR *v48; // rdx
  NTSTATUS v49; // eax
  signed __int32 v50[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  __int64 CheckStamp; // [rsp+38h] [rbp-D0h]
  __int64 v54; // [rsp+40h] [rbp-C8h]
  __int64 v55; // [rsp+48h] [rbp-C0h]
  __int64 v56; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A8h] BYREF
  int v58; // [rsp+68h] [rbp-A0h]
  unsigned int v59; // [rsp+6Ch] [rbp-9Ch]
  ULONG v60; // [rsp+70h] [rbp-98h] BYREF
  __int32 v61; // [rsp+74h] [rbp-94h]
  int v62; // [rsp+78h] [rbp-90h] BYREF
  int v63; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v64; // [rsp+80h] [rbp-88h] BYREF
  int v65; // [rsp+84h] [rbp-84h] BYREF
  __int64 v66; // [rsp+88h] [rbp-80h] BYREF
  int v67; // [rsp+90h] [rbp-78h] BYREF
  int v68; // [rsp+94h] [rbp-74h] BYREF
  int v69; // [rsp+98h] [rbp-70h] BYREF
  NTSTATUS v70; // [rsp+9Ch] [rbp-6Ch] BYREF
  NTSTATUS v71; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v74; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ChangeStamp; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v78; // [rsp+D8h] [rbp-30h]
  _OWORD v79[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v80; // [rsp+108h] [rbp+0h]
  __int128 v81; // [rsp+10Ch] [rbp+4h]
  int v82; // [rsp+11Ch] [rbp+14h]
  int v83; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF
  int *v85; // [rsp+148h] [rbp+40h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+188h] [rbp+80h] BYREF
  int *v91; // [rsp+198h] [rbp+90h]
  __int64 v92; // [rsp+1A0h] [rbp+98h]
  int *v93; // [rsp+1A8h] [rbp+A0h]
  __int64 v94; // [rsp+1B0h] [rbp+A8h]
  int *v95; // [rsp+1B8h] [rbp+B0h]
  __int64 v96; // [rsp+1C0h] [rbp+B8h]
  __int64 *v97; // [rsp+1C8h] [rbp+C0h]
  __int64 v98; // [rsp+1D0h] [rbp+C8h]
  char *v99; // [rsp+1D8h] [rbp+D0h]
  __int64 v100; // [rsp+1E0h] [rbp+D8h]
  int *v101; // [rsp+1E8h] [rbp+E0h]
  __int64 v102; // [rsp+1F0h] [rbp+E8h]
  int *v103; // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+208h] [rbp+100h] BYREF
  int *v106; // [rsp+218h] [rbp+110h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  NTSTATUS *v108; // [rsp+228h] [rbp+120h]
  __int64 v109; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR v110; // [rsp+238h] [rbp+130h] BYREF
  NTSTATUS *v111; // [rsp+258h] [rbp+150h]
  __int64 v112; // [rsp+260h] [rbp+158h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v60 = 8;
  v1 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v76, &v60);
  if ( v1 == -1073741670 || v1 == -1073741431 )
  {
    v3 = 0;
  }
  else if ( !v1 && v60 == 8 )
  {
    v3 = (v76 != 0) + 2;
  }
  else
  {
    v3 = 1;
  }
  for ( i = (__int64 *)qword_1403AA290; i != &qword_1403AA290; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_1403AA290; j != &qword_1403AA290; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  v6 = 0;
  LOBYTE(v56) = 0;
  do
  {
    v7 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v8 = qword_1403AA290;
    v9 = (__int64)&qword_1403AA290;
    v61 = v7;
    v10 = (v7 & 2) != 0;
    if ( (v7 & 8) != 0 )
      v6 = 1;
    if ( (__int64 *)qword_1403AA290 != &qword_1403AA290 )
    {
      do
      {
        v22 = *(__int64 **)v8;
        v23 = v8 - 64;
        if ( *(_DWORD *)(v8 - 64 + 104) == 2 )
        {
          if ( v22[1] != v8 || (v24 = *(__int64 ***)(v8 + 8), *v24 != (__int64 *)v8) )
            __fastfail(3u);
          *v24 = v22;
          v22[1] = (__int64)v24;
          *(_QWORD *)v8 = 0LL;
          --dword_1403AA274;
          ++dword_1403AA2D8;
          byte_1403AA278 = 1;
          if ( (int)PopBatteryReadTag(v8 - 64) < 0 )
            PopBatteryWaitTag(v23);
          v9 = (__int64)&qword_1403AA290;
          v10 = 1;
        }
        v8 = (__int64)v22;
      }
      while ( v22 != &qword_1403AA290 );
    }
    for ( k = qword_1403AA280; (__int64 *)k != &qword_1403AA280; k = *(_QWORD *)k )
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
    v12 = (__int64 *)qword_1403AA290;
    if ( (__int64 *)qword_1403AA290 != &qword_1403AA290 )
    {
      do
      {
        v25 = v12 - 8;
        LOBYTE(v2) = 1;
        v78 = *(_OWORD *)((char *)v12 + 84);
        if ( (int)PopBatteryQueryStatus(v12 - 8, v2) >= 0 )
        {
          PopAccountBatteryEnergyChange(v12 - 8);
          v26 = *((_DWORD *)v25 + 37);
          if ( (((unsigned __int8)v78 ^ *((_BYTE *)v25 + 148)) & 7) != 0 )
          {
            LOBYTE(v56) = 1;
          }
          else if ( DWORD1(v78) != *((_DWORD *)v25 + 38) || HIDWORD(v78) != *((_DWORD *)v25 + 40) )
          {
            v6 = 1;
          }
          EstimatedTime = -1;
          if ( (v26 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v12 - 8, 0LL);
            v26 = *((_DWORD *)v25 + 37);
          }
          *((_DWORD *)v25 + 41) = EstimatedTime;
          v28 = 0;
          if ( EstimatedTime != -1 )
            v28 = EstimatedTime;
          v29 = *((_DWORD *)v25 + 40);
          LODWORD(v55) = v28;
          LODWORD(v54) = v29;
          LODWORD(CheckStamp) = *((_DWORD *)v25 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v25 + 38);
          LODWORD(Buffer) = v26;
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
            Buffer,
            BufferSize,
            CheckStamp,
            v54,
            v55);
        }
        else
        {
          *((_DWORD *)v25 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v12 = (__int64 *)*v12;
      }
      while ( v12 != &qword_1403AA290 );
      LOBYTE(v7) = v61;
    }
    if ( v10 )
    {
      PopBatteryUpdateCompositeInformation(v9);
      v13 = 1;
      PopMaxChargeRate = 0LL;
      LOBYTE(v56) = 1;
    }
    else
    {
      v13 = v56;
    }
    if ( (v7 & 4) != 0 || v13 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_1403A9B80);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_1403A9B80, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v72 = -1LL;
    v14 = 0x80000000LL;
    v15 = -1;
    v16 = 0xFFFFFFFFLL;
    v57 = 0xFFFFFFFF00000000uLL;
    v17 = -1;
    v59 = 0x80000000;
    v58 = -1;
    if ( dword_1403AA274 )
    {
      v30 = qword_1403AA290;
      v31 = v57;
      while ( (__int64 *)v30 != &qword_1403AA290 )
      {
        v32 = *(_DWORD *)(v30 + 84) & 0xA;
        v31 |= *(_DWORD *)(v30 + 84) & 7;
        LODWORD(v57) = v31;
        if ( (_BYTE)v32 == 10 )
        {
          v31 |= 8u;
          LODWORD(v57) = v31;
        }
        v33 = *(_DWORD *)(v30 + 88);
        if ( v33 != -1 )
        {
          if ( (_DWORD)v16 == -1 )
            LODWORD(v16) = 0;
          v16 = (unsigned int)(v33 + v16);
          HIDWORD(v57) = v16;
        }
        v34 = *(_DWORD *)(v30 + 92);
        if ( v34 != -1 )
        {
          if ( v15 == -1 )
            v15 = 0;
          if ( v34 > v15 )
            v15 = *(_DWORD *)(v30 + 92);
          v58 = v15;
        }
        v35 = *(_DWORD *)(v30 + 96);
        v9 = 0x80000000LL;
        if ( v35 != 0x80000000 )
        {
          if ( (_DWORD)v14 == 0x80000000 )
            LODWORD(v14) = 0;
          v14 = (unsigned int)(v35 + v14);
          v59 = v14;
        }
        v30 = *(_QWORD *)v30;
      }
      if ( PopBatteryChargingInProgress )
      {
        v36 = v31 & 4;
        if ( (v31 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v36 = v31 & 4;
        if ( (v31 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v36 != 0;
      if ( (v31 & 2) != 0 )
      {
        v31 &= ~4u;
        LODWORD(v57) = v31;
      }
      if ( (v31 & 1) != 0 )
      {
        if ( (v31 & 4) != 0 )
          v72 = PopEstimateChargeTime(v9, v30, v14, v16);
      }
      else
      {
        v37 = qword_1403AA290;
        v38 = 0;
        if ( (__int64 *)qword_1403AA290 != &qword_1403AA290 )
        {
          do
          {
            v14 = *(unsigned int *)(v37 + 100);
            if ( (unsigned int)(v14 - 1) <= 0xFFFFFFFD )
              v38 -= 3600 * *(_DWORD *)(v37 + 88) / (unsigned int)v14;
            v37 = *(_QWORD *)v37;
          }
          while ( (__int64 *)v37 != &qword_1403AA290 );
          if ( v38 )
          {
            for ( m = (__int64 *)qword_1403AA290; m != &qword_1403AA290; m = (__int64 *)*m )
            {
              v40 = PopBatteryQueryEstimatedTime(m - 8, v38);
              if ( v40 != -1 )
              {
                v41 = 0;
                if ( v17 != -1 )
                  v41 = v17;
                v17 = v40 + v41;
              }
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v57) = 1;
      if ( v3 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v3 = 1;
    }
    v18 = v57 & 1;
    if ( v3 == 2 && !v18 || v3 == 3 && v18 )
      v3 = 1;
    PopBatteryApplyCompositeState(&v57, v17, v14, v16);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_1403AA410 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v50, 0);
  if ( qword_1403AA418 )
    ExfUnblockPushLock(&qword_1403AA418, 0LL);
  for ( n = (__int64 *)qword_1403AA290; n != &qword_1403AA290; n = (__int64 *)*n )
    PopBatteryQueryStatus(n - 8, 0LL);
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v72, 8u, 0LL, 0LL, 0, 0);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v17 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v20 = -1LL;
    else
      v20 = v17;
    v77 = v20;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v77, 8u, 0LL, 0LL, 0, 0);
  }
  v21 = v56;
  if ( (unsigned __int8)v6 | (unsigned __int8)v56 )
  {
    v80 = dword_1403AA2D4;
    v79[0] = xmmword_1403AA2B4;
    v83 = dword_1403AA270;
    v81 = xmmword_1403AA2A0;
    v82 = dword_1403AA274;
    v79[1] = xmmword_1403AA2C4;
    updated = ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v79, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v43 = "AC Power";
      v62 = dword_1403AA274;
      if ( (xmmword_1403AA2A0 & 1) == 0 )
        v43 = "DC Power";
      v44 = "Battery Critical";
      if ( (xmmword_1403AA2A0 & 8) == 0 )
        v44 = "-";
      if ( (_DWORD)xmmword_1403AA2C4 )
        v45 = 100000 * (unsigned __int64)DWORD1(xmmword_1403AA2A0) / (unsigned int)xmmword_1403AA2C4;
      else
        LODWORD(v45) = 0;
      v63 = v45;
      v66 = *((_QWORD *)&xmmword_1403AA2A0 + 1);
      v64 = DWORD1(xmmword_1403AA2A0);
      v67 = dword_1403AA270;
      v69 = HIDWORD(xmmword_1403AA2B4);
      v85 = &v62;
      v65 = xmmword_1403AA2C4;
      v68 = dword_1403AA274;
      v70 = updated;
      v86 = 4LL;
      TlgCreateSz(&pDesc, v43);
      TlgCreateSz(&v88, v46);
      TlgCreateSz(&v89, v47);
      TlgCreateSz(&v90, v44);
      v93 = &v64;
      v91 = &v63;
      v95 = &v65;
      v48 = "Relative Capacity Unit";
      v92 = 4LL;
      v97 = &v66;
      v94 = 4LL;
      v99 = (char *)&v66 + 4;
      v101 = &v67;
      v103 = &v68;
      if ( (xmmword_1403AA2B4 & 0x40000000) == 0 )
        v48 = "mWh Unit";
      v96 = 4LL;
      v98 = 4LL;
      v100 = 4LL;
      v102 = 4LL;
      v104 = 4LL;
      TlgCreateSz(&v105, v48);
      v107 = 4LL;
      v108 = &v70;
      v106 = &v69;
      v109 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14030AF21, 0LL, 0LL, 0x11u, &pData);
      v21 = v56;
    }
    if ( v3 == 1 )
    {
      if ( v18 )
        v73 = 0LL;
      else
        v73 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v73, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v21 )
    {
      v74 = 0xFFFFFFFF00000000uLL;
      v49 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v74, 8u, 0LL, 0LL, 0, 0);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v71 = v49;
        v111 = &v71;
        v112 = 4LL;
        TlgWrite(&pCallbackContext, &unk_14030B087, 0LL, 0LL, 3u, &v110);
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
