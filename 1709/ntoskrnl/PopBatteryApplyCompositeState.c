/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1405C9948
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopSetNotificationWork @ 0x1400B0BE4 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x1400B0F0C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PopInitilizeAcDcSettings @ 0x140139D88 (PopInitilizeAcDcSettings.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140146E2C (PopBatteryTraceSystemBatteryStatus.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopTracePowerReconfig @ 0x140247C50 (PopTracePowerReconfig.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopBatteryUpdateAlarms @ 0x1405B900C (PopBatteryUpdateAlarms.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x1405C9B9C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x1405C9C48 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x1405C9C78 (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x1405C9CE0 (PopAccountCbEnergyChange.c)
 *     PopRecalculateCBTriggerLevels @ 0x1405C9DA4 (PopRecalculateCBTriggerLevels.c)
 *     PopBatteryCheckCompositeCapacity @ 0x1405CAF18 (PopBatteryCheckCompositeCapacity.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1406FE0A4 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopDiagTraceAcDcStateChange @ 0x1407017F4 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140701C94 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140701FDC (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140702098 (PopDiagTraceBatteryTriggerMet.c)
 *     PpmProfileAcDcUpdate @ 0x14070BBB4 (PpmProfileAcDcUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(__m128i *a1, int a2)
{
  unsigned int v4; // ebx
  __m128i v5; // xmm1
  int v6; // edx
  __int64 v7; // r9
  unsigned int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  char *v20; // rdx
  unsigned int updated; // eax
  unsigned int LevelPlus1; // ecx
  const CHAR *v23; // rdx
  unsigned __int8 v24; // r9
  char v25; // [rsp+40h] [rbp-39h]
  unsigned int v26; // [rsp+44h] [rbp-35h] BYREF
  int v27; // [rsp+48h] [rbp-31h] BYREF
  int v28; // [rsp+4Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v31; // [rsp+80h] [rbp+7h]
  __int64 v32; // [rsp+88h] [rbp+Fh]

  v25 = 0;
  v4 = (a1->m128i_i32[0] & 1) == 0;
  PopAcquirePolicyLock();
  if ( dword_1403661AC != v4 )
  {
    dword_1403661AC = v4;
    PopCurrentPowerState(&pData);
    PopDiagTraceAcDcStateChange(v4, pData.Reserved, pData.Size);
    PopBatteryUpdateAlarms(1, 0);
    PopSetNotificationWork(4u);
    PopInitSIdle(2);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v25 = 1;
  }
  if ( byte_140365918 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_140365914);
    v15 = qword_140365920;
    v16 = 0LL;
    v17 = 0LL;
    while ( (__int64 *)v15 != &qword_140365920 )
    {
      v18 = *(_DWORD *)(v15 + 104);
      if ( v18 == 2 )
      {
        v17 = (unsigned int)(v17 + 1);
      }
      else if ( v18 == 4 )
      {
        v16 = (unsigned int)(v16 + 1);
      }
      v15 = *(_QWORD *)v15;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140365914 )
    {
      PopCachedValidBatteryCount = dword_140365914;
      PopDiagTraceBatteryCountChange((unsigned int)dword_140365914, v17, v16, &qword_140365920);
    }
    v25 = 1;
  }
  PopReleasePolicyLock();
  PopBatteryCheckCompositeCapacity(a1, v4);
  if ( a1->m128i_i32[0] != unk_140365940 || byte_140365918 )
  {
    PopSetNotificationWork(8u);
    byte_140365918 = 0;
  }
  v5 = *a1;
  v6 = 0;
  HIDWORD(qword_14036594C) = a2;
  v7 = (unsigned int)_mm_cvtsi128_si32(v5);
  if ( a2 != -1 )
    v6 = a2;
  unk_140365940 = v5;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v7,
    v5.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)),
    _mm_srli_si128(v5, 8).m128i_i32[1],
    v6);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140365960
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140365A28, 1LL)
    && (dword_140365A2C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v26 = 0;
  v8 = 0;
  v9 = dword_140365914 != 0 ? 3 : 0;
  do
  {
    if ( (unsigned __int8)PopBatteryCheckTrigger((char *)&unk_140365A28 + 24 * v8) )
    {
      v19 = dword_140365A2C[6 * v8];
      if ( PopBatteryCachedFlags[v8] != v19 )
      {
        v20 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v8] = v19;
        PopDiagTraceBatteryAlarmStatus((char *)&unk_140365A28 + 24 * v8, &v20[24 * v8], &v26);
        v8 = v26;
        if ( dword_140365A2C[6 * v26] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v26 + 3562024, (char *)PopPolicy + 24 * v26 + 96, &v26);
          v8 = v26;
        }
      }
      if ( !byte_140365A20 )
        PopExecutePowerAction(
          (unsigned int)&unk_140365A28 + 24 * v8,
          8,
          (_DWORD)PopPolicy + 104 + 24 * v8,
          *((_DWORD *)PopPolicy + 6 * v8 + 29),
          1);
      if ( v9 == 3 )
      {
        if ( v8 )
        {
          if ( v8 == 1 )
            v9 = 2;
        }
        else
        {
          v9 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v8] = -1;
      dword_140365A2C[6 * v8] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v26, (char *)&unk_140365A28 + 24 * v8);
      v8 = v26;
    }
    v26 = ++v8;
  }
  while ( v8 < 4 );
  if ( dword_14036597C != v9 )
  {
    v27 = v9;
    updated = ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v27, 4LL);
    LevelPlus1 = pCallbackContext.LevelPlus1;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v23 = "PoBatteryLevelCritical";
        }
        else if ( v9 == 2 )
        {
          v23 = "PoBatteryLevelLow";
        }
        else
        {
          v23 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v23 = "PoBatteryLevelUnknown";
      }
      v26 = updated;
      TlgCreateSz(&pDesc, v23);
      v32 = 4LL;
      v31 = &v26;
      TlgWrite(&pCallbackContext, &unk_1402D1729, 0LL, 0LL, 4u, &pData);
      LevelPlus1 = pCallbackContext.LevelPlus1;
    }
    if ( (unsigned int)(v9 - 1) <= 1 != (unsigned int)(dword_14036597C - 1) <= 1
      && LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v26 = v24;
      pDesc.Ptr = (ULONGLONG)&v26;
      v31 = (unsigned int *)&v28;
      v28 = v9;
      *(_QWORD *)&pDesc.Size = 4LL;
      v32 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1402D16E6, 0LL, 0LL, 4u, &pData);
    }
    dword_14036597C = v9;
  }
  if ( v25 )
    PopTracePowerReconfig();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_140365AC0);
  memset(&xmmword_140365AD0, 0, 0x20uLL);
  LOBYTE(v12) = unk_140365940;
  BYTE7(xmmword_140365AD0) = dword_140365978;
  LOBYTE(xmmword_140365AD0) = unk_140365940 & 1;
  if ( dword_140365914 )
  {
    BYTE1(xmmword_140365AD0) = 1;
    BYTE2(xmmword_140365AD0) = (unk_140365940 & 4) != 0;
    LOBYTE(v12) = byte_140365A88 != 0 || (unk_140365940 & 2) != 0;
    DWORD2(xmmword_140365AD0) = HIDWORD(qword_140365960);
    HIDWORD(xmmword_140365AD0) = unk_140365944;
    *(_QWORD *)&xmmword_140365AE0 = qword_14036594C;
    *((_QWORD *)&xmmword_140365AE0 + 1) = unk_140365968;
    BYTE3(xmmword_140365AD0) = v12;
  }
  PopAccountCbEnergyChange(v12, v10, v11);
  PopReleaseRwLock((ULONG_PTR)&qword_140365AC0);
  LOBYTE(v13) = v25;
  return PopEsQueueStateEvaluation(v13);
}
