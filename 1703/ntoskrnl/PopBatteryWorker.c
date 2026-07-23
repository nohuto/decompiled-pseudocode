/*
 * XREFs of PopBatteryWorker @ 0x140582550
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     PopBatteryQueueWork @ 0x14014A7C0 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x140180A00 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x1406CA52C (PopBatteryEstimatesSpoiled.c)
 *     PopBatteryInitialize @ 0x1406CA5D0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406CA76C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406CA7FC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406CA980 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406CABEC (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x1406CAD44 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x1406CADB0 (PopEstimateChargeTime.c)
 */

void PopBatteryWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r15d
  __int64 *v5; // rdi
  char v6; // r13
  __int32 v7; // r12d
  __int64 *v8; // rsi
  bool v9; // r14
  __int64 j; // rdi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // r9
  unsigned int v15; // r14d
  char v16; // si
  __int64 *m; // rdi
  __int64 *i; // rdi
  __int64 *v19; // rdi
  bool v20; // zf
  __int64 *v21; // rax
  __int64 **v22; // rcx
  __int64 *v23; // rdi
  int v24; // ecx
  int EstimatedTime; // eax
  __int64 v26; // rdx
  int v27; // edi
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // esi
  __int64 v33; // rcx
  unsigned int v34; // esi
  __int64 *k; // rdi
  int v36; // eax
  unsigned int v37; // ecx
  signed __int32 v38[8]; // [rsp+8h] [rbp-B9h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-99h]
  PULONG BufferSize; // [rsp+30h] [rbp-91h]
  __int64 CheckStamp; // [rsp+38h] [rbp-89h]
  __int64 v42; // [rsp+40h] [rbp-81h]
  __int64 v43; // [rsp+48h] [rbp-79h]
  char v44; // [rsp+58h] [rbp-69h]
  unsigned __int64 v45; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-59h]
  ULONG v47; // [rsp+70h] [rbp-51h] BYREF
  __int32 v48; // [rsp+74h] [rbp-4Dh]
  __int64 v49; // [rsp+78h] [rbp-49h] BYREF
  __int64 v50; // [rsp+80h] [rbp-41h] BYREF
  __int64 v51; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-31h] BYREF
  ULONG ChangeStamp; // [rsp+98h] [rbp-29h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-19h]
  _OWORD v56[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v57; // [rsp+D8h] [rbp+17h]
  __int128 v58; // [rsp+DCh] [rbp+1Bh]
  int v59; // [rsp+ECh] [rbp+2Bh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v47 = 8;
  v1 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v54, &v47);
  if ( v1 == -1073741670 || v1 == -1073741431 )
  {
    v4 = 0;
  }
  else if ( !v1 && v47 == 8 )
  {
    v4 = (v54 != 0) + 2;
  }
  else
  {
    v4 = 1;
  }
  v5 = (__int64 *)qword_14034B3B0;
  if ( (__int64 *)qword_14034B3B0 != &qword_14034B3B0 )
  {
    do
    {
      IoCancelIrp((PIRP)*(v5 - 1));
      v5 = (__int64 *)*v5;
    }
    while ( v5 != &qword_14034B3B0 );
    for ( i = (__int64 *)qword_14034B3B0; i != &qword_14034B3B0; i = (__int64 *)*i )
      KeWaitForSingleObject(i + 2, Executive, 0, 0, 0LL);
  }
  v44 = 0;
  v6 = 0;
  do
  {
    v7 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v8 = (__int64 *)qword_14034B3B0;
    v9 = (v7 & 2) != 0;
    v48 = v7;
    while ( v8 != &qword_14034B3B0 )
    {
      v19 = v8 - 8;
      v20 = *((_DWORD *)v8 + 10) == 2;
      v21 = v8;
      v8 = (__int64 *)*v8;
      if ( v20 )
      {
        v22 = (__int64 **)v21[1];
        if ( (__int64 *)v8[1] != v21 || *v22 != v21 )
          __fastfail(3u);
        *v22 = v8;
        v8[1] = (__int64)v22;
        *v21 = 0LL;
        --dword_14034B394;
        ++dword_14034B3F8;
        byte_14034B398 = 1;
        if ( (int)PopBatteryReadTag(v19) < 0 )
          PopBatteryWaitTag(v19);
        v9 = 1;
      }
    }
    for ( j = qword_14034B3A0; (__int64 *)j != &qword_14034B3A0; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(j + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(j) < 0 )
          PopBatteryWaitTag(j);
        else
          v9 = 1;
      }
    }
    v11 = (__int64 *)qword_14034B3B0;
    if ( (__int64 *)qword_14034B3B0 != &qword_14034B3B0 )
    {
      do
      {
        v23 = v11 - 8;
        LOBYTE(v2) = 1;
        v55 = *(_OWORD *)((char *)v11 + 84);
        if ( (int)PopBatteryQueryStatus(v11 - 8, v2) >= 0 )
        {
          v24 = *((_DWORD *)v23 + 37);
          if ( (((unsigned __int8)v55 ^ *((_BYTE *)v23 + 148)) & 7) != 0 )
          {
            v6 = 1;
          }
          else if ( DWORD1(v55) != *((_DWORD *)v23 + 38) || HIDWORD(v55) != *((_DWORD *)v23 + 40) )
          {
            v44 = 1;
          }
          EstimatedTime = -1;
          if ( (v24 & 2) != 0 )
            EstimatedTime = PopBatteryQueryEstimatedTime(v11 - 8, 0LL);
          *((_DWORD *)v23 + 41) = EstimatedTime;
          if ( EstimatedTime == -1 )
            EstimatedTime = 0;
          LODWORD(v43) = EstimatedTime;
          LODWORD(v42) = *((_DWORD *)v23 + 40);
          LODWORD(CheckStamp) = *((_DWORD *)v23 + 39);
          LODWORD(BufferSize) = *((_DWORD *)v23 + 38);
          LODWORD(Buffer) = *((_DWORD *)v23 + 37);
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
            v11 - 8,
            Buffer,
            BufferSize,
            CheckStamp,
            v42,
            v43);
        }
        else
        {
          *((_DWORD *)v23 + 26) = 2;
          PopBatteryQueueWork(1u);
        }
        v11 = (__int64 *)*v11;
      }
      while ( v11 != &qword_14034B3B0 );
      LOBYTE(v7) = v48;
    }
    if ( v9 )
    {
      PopBatteryUpdateCompositeInformation();
      v6 = 1;
      PopMaxChargeRate = 0LL;
    }
    if ( (v7 & 4) != 0 || v6 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_14034AD80);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_14034AD80, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v49 = -1LL;
    v12 = 0x80000000LL;
    v13 = -1;
    v14 = 0xFFFFFFFFLL;
    v45 = 0xFFFFFFFF00000000uLL;
    v15 = -1;
    v46 = 0x80000000FFFFFFFFuLL;
    if ( dword_14034B394 )
    {
      v26 = qword_14034B3B0;
      v27 = v45;
      while ( (__int64 *)v26 != &qword_14034B3B0 )
      {
        v28 = *(_DWORD *)(v26 + 84) & 0xA;
        v27 |= *(_DWORD *)(v26 + 84) & 7;
        LODWORD(v45) = v27;
        if ( (_BYTE)v28 == 10 )
        {
          v27 |= 8u;
          LODWORD(v45) = v27;
        }
        v29 = *(_DWORD *)(v26 + 88);
        if ( v29 != -1 )
        {
          if ( (_DWORD)v14 == -1 )
            LODWORD(v14) = 0;
          v14 = (unsigned int)(v29 + v14);
          HIDWORD(v45) = v14;
        }
        v30 = *(_DWORD *)(v26 + 92);
        if ( v30 != -1 )
        {
          if ( v13 == -1 )
            v13 = 0;
          if ( v30 > v13 )
            v13 = *(_DWORD *)(v26 + 92);
          LODWORD(v46) = v13;
        }
        v31 = *(_DWORD *)(v26 + 96);
        v3 = 0x80000000LL;
        if ( v31 != 0x80000000 )
        {
          if ( (_DWORD)v12 == 0x80000000 )
            LODWORD(v12) = 0;
          v12 = (unsigned int)(v31 + v12);
          HIDWORD(v46) = v12;
        }
        v26 = *(_QWORD *)v26;
      }
      if ( PopBatteryChargingInProgress )
      {
        v32 = v27 & 4;
        if ( (v27 & 4) == 0 )
          KeCancelTimer2((__int64)&PopBatteryWakeTimer);
      }
      else
      {
        v32 = v27 & 4;
        if ( (v27 & 4) != 0 )
          KeSetTimer2((__int64)&PopBatteryWakeTimer, -50000000LL, 50000000LL, 0LL);
      }
      PopBatteryChargingInProgress = v32 != 0;
      if ( (v27 & 2) != 0 )
      {
        v27 &= ~4u;
        LODWORD(v45) = v27;
      }
      if ( (v27 & 1) != 0 )
      {
        if ( (v27 & 4) != 0 )
          v49 = PopEstimateChargeTime(v3, v26, v12, v14);
      }
      else
      {
        v33 = qword_14034B3B0;
        v34 = 0;
        if ( (__int64 *)qword_14034B3B0 != &qword_14034B3B0 )
        {
          do
          {
            v12 = *(unsigned int *)(v33 + 100);
            if ( (unsigned int)(v12 - 1) <= 0xFFFFFFFD )
              v34 -= 3600 * *(_DWORD *)(v33 + 88) / (unsigned int)v12;
            v33 = *(_QWORD *)v33;
          }
          while ( (__int64 *)v33 != &qword_14034B3B0 );
          if ( v34 )
          {
            for ( k = (__int64 *)qword_14034B3B0; k != &qword_14034B3B0; k = (__int64 *)*k )
            {
              v36 = PopBatteryQueryEstimatedTime(k - 8, v34);
              if ( v36 != -1 )
              {
                v37 = 0;
                if ( v15 != -1 )
                  v37 = v15;
                v15 = v36 + v37;
              }
            }
          }
        }
      }
    }
    else
    {
      LODWORD(v45) = 1;
      if ( v4 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v4 = 1;
    }
    v16 = v45 & 1;
    if ( v4 == 2 && !v16 || v4 == 3 && v16 )
      v4 = 1;
    PopBatteryApplyCompositeState(&v45, v15, v12, v14);
  }
  while ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) != 0x80000000 );
  qword_14034B518 = MEMORY[0xFFFFF78000000008];
  _InterlockedOr(v38, 0);
  if ( qword_14034B520 )
    ExfUnblockPushLock(&qword_14034B520, 0LL);
  for ( m = (__int64 *)qword_14034B3B0; m != &qword_14034B3B0; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8, 0LL);
  ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v49, 8u, 0LL, 0LL, 0, 0);
  if ( !PopUserBatteryDischargeEstimator )
  {
    if ( v15 == -1 || (unsigned __int8)PopBatteryEstimatesSpoiled() )
      v50 = -1LL;
    else
      v50 = v15;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v50, 8u, 0LL, 0LL, 0, 0);
  }
  if ( (unsigned __int8)v44 | (unsigned __int8)v6 )
  {
    v57 = dword_14034B3F4;
    v56[0] = xmmword_14034B3D4;
    v56[1] = xmmword_14034B3E4;
    v59 = dword_14034B394;
    v58 = xmmword_14034B3C0;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, v56, 0x38u, 0LL, 0LL, 0, 0);
    if ( v4 == 1 )
    {
      if ( v16 )
        v51 = 0LL;
      else
        v51 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v51, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v6 )
    {
      v52 = 0xFFFFFFFF00000000uLL;
      ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v52, 8u, 0LL, 0LL, 0, 0);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
