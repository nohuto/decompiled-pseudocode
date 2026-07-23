/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1406109C0
 * Callers:
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     PopSetNotificationWork @ 0x140074D80 (PopSetNotificationWork.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14016B004 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x140171BA4 (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopTracePowerReconfig @ 0x14027DEC4 (PopTracePowerReconfig.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140610C2C (PopDiagTraceBatteryTriggerFlags.c)
 *     PopBatteryCheckTrigger @ 0x140610CD8 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x140610D08 (PopEsQueueStateEvaluation.c)
 *     PopAccountCbEnergyChange @ 0x140610D70 (PopAccountCbEnergyChange.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140610E34 (PopBatteryCheckCompositeCapacity.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
 *     PopBatteryUpdateAlarms @ 0x14062604C (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x140763924 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopRecalculateCBTriggerLevels @ 0x140764784 (PopRecalculateCBTriggerLevels.c)
 *     PopDiagTraceAcDcStateChange @ 0x140765C0C (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140765CD8 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140766020 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1407660DC (PopDiagTraceBatteryTriggerMet.c)
 *     PpmProfileAcDcUpdate @ 0x14076F08C (PpmProfileAcDcUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(_DWORD *a1, int a2)
{
  BOOL v4; // edi
  int v5; // ebx
  __m128i v6; // xmm1
  int v7; // edx
  __int64 v8; // r9
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // rsi
  char *v14; // r12
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  char *v23; // rdx
  NTSTATUS updated; // eax
  unsigned int LevelPlus1; // ecx
  const CHAR *v26; // rdx
  unsigned __int8 v27; // r9
  char v28; // [rsp+40h] [rbp-39h]
  unsigned int v29; // [rsp+44h] [rbp-35h] BYREF
  int Buffer; // [rsp+48h] [rbp-31h] BYREF
  int v31; // [rsp+4Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v34; // [rsp+80h] [rbp+7h]
  __int64 v35; // [rsp+88h] [rbp+Fh]

  v28 = 0;
  v4 = (*a1 & 1) == 0;
  v5 = !(*(_BYTE *)a1 & 1);
  PopAcquirePolicyLock();
  if ( dword_1403AAA2C != v5 )
  {
    dword_1403AAA2C = v4;
    PopCurrentPowerState(&pData);
    PopDiagTraceAcDcStateChange(v4, pData.Reserved, pData.Size);
    LOBYTE(v17) = 1;
    PopBatteryUpdateAlarms(v17, 0LL);
    PopSetNotificationWork(4u);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    HIBYTE(PopBsdPowerTransition) = HIBYTE(PopBsdPowerTransition) & 0x7F | ((_BYTE)v5 << 7);
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v5 == 1 )
      PopMaxChargeRate = 0LL;
    v28 = 1;
  }
  if ( byte_1403AA278 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_1403AA274);
    v18 = qword_1403AA280;
    v19 = 0LL;
    v20 = 0LL;
    while ( (__int64 *)v18 != &qword_1403AA280 )
    {
      v21 = *(_DWORD *)(v18 + 104);
      if ( v21 == 2 )
      {
        v20 = (unsigned int)(v20 + 1);
      }
      else if ( v21 == 4 )
      {
        v19 = (unsigned int)(v19 + 1);
      }
      v18 = *(_QWORD *)v18;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_1403AA274 )
    {
      PopCachedValidBatteryCount = dword_1403AA274;
      PopDiagTraceBatteryCountChange((unsigned int)dword_1403AA274, v20, v19, &qword_1403AA280);
    }
    v28 = 1;
  }
  PopReleasePolicyLock();
  PopBatteryCheckCompositeCapacity(a1, v4);
  if ( *a1 != unk_1403AA2A0 || byte_1403AA278 )
  {
    PopSetNotificationWork(8u);
    byte_1403AA278 = 0;
  }
  v6 = *(__m128i *)a1;
  v7 = 0;
  HIDWORD(qword_1403AA2AC) = a2;
  v8 = (unsigned int)_mm_cvtsi128_si32(v6);
  if ( a2 != -1 )
    v7 = a2;
  unk_1403AA2A0 = v6;
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
    v8,
    v6.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
    _mm_srli_si128(v6, 8).m128i_i32[1],
    v7);
  if ( HIDWORD(qword_1403AA2C0) )
    PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_1403AA2C0
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_1403AA388, 1LL)
    && (dword_1403AA38C[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v29 = 0;
  v9 = 0;
  v10 = 0;
  v11 = dword_1403AA274 != 0 ? 3 : 0;
  do
  {
    v12 = v10;
    v13 = 3LL * v10;
    v14 = (char *)&unk_1403AA388 + 24 * v10;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v14) )
    {
      v22 = dword_1403AA38C[2 * v13];
      if ( PopBatteryCachedFlags[v12] != v22 )
      {
        v23 = (char *)PopPolicy + 96;
        PopBatteryCachedFlags[v12] = v22;
        PopDiagTraceBatteryAlarmStatus(v14, &v23[8 * v13], &v29);
        v9 = v29;
        if ( dword_1403AA38C[6 * v29] == 128 )
        {
          PopDiagTraceBatteryTriggerMet(0x140000000LL + 24LL * v29 + 3842952, (char *)PopPolicy + 24 * v29 + 96, &v29);
          v9 = v29;
        }
      }
      if ( !byte_1403AA380 )
        PopExecutePowerAction(
          (__int64)&unk_1403AA388 + 24 * v9,
          8u,
          (__int64 *)PopPolicy + 3 * v9 + 13,
          *((_DWORD *)PopPolicy + 6 * v9 + 29),
          1u);
      if ( v11 == 3 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
            v11 = 2;
        }
        else
        {
          v11 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v12] = -1;
      dword_1403AA38C[2 * v13] &= 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v29, v14);
      v9 = v29;
    }
    v29 = ++v9;
    v10 = v9;
  }
  while ( v9 < 4 );
  if ( dword_1403AA2DC != v11 )
  {
    Buffer = v11;
    updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    LevelPlus1 = pCallbackContext.LevelPlus1;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v26 = "PoBatteryLevelCritical";
        }
        else if ( v11 == 2 )
        {
          v26 = "PoBatteryLevelLow";
        }
        else
        {
          v26 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v26 = "PoBatteryLevelUnknown";
      }
      v29 = updated;
      TlgCreateSz(&pDesc, v26);
      v35 = 4LL;
      v34 = &v29;
      TlgWrite(&pCallbackContext, &unk_14030B12A, 0LL, 0LL, 4u, &pData);
      LevelPlus1 = pCallbackContext.LevelPlus1;
    }
    if ( (unsigned int)(v11 - 1) <= 1 != (unsigned int)(dword_1403AA2DC - 1) <= 1
      && LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v29 = v27;
      pDesc.Ptr = (ULONGLONG)&v29;
      v34 = (unsigned int *)&v31;
      v31 = v11;
      *(_QWORD *)&pDesc.Size = 4LL;
      v35 = 4LL;
      TlgWrite(&pCallbackContext, &unk_14030B16E, 0LL, 0LL, 4u, &pData);
    }
    dword_1403AA2DC = v11;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v11 << 6);
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  if ( v28 )
    PopTracePowerReconfig();
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_1403AA420);
  memset(&xmmword_1403AA430, 0, 0x20uLL);
  BYTE7(xmmword_1403AA430) = dword_1403AA2D8;
  LOBYTE(xmmword_1403AA430) = unk_1403AA2A0 & 1;
  if ( dword_1403AA274 )
  {
    BYTE1(xmmword_1403AA430) = 1;
    BYTE2(xmmword_1403AA430) = (unk_1403AA2A0 & 4) != 0;
    DWORD2(xmmword_1403AA430) = HIDWORD(qword_1403AA2C0);
    HIDWORD(xmmword_1403AA430) = unk_1403AA2A4;
    *(_QWORD *)&xmmword_1403AA440 = qword_1403AA2AC;
    *((_QWORD *)&xmmword_1403AA440 + 1) = unk_1403AA2C8;
    BYTE3(xmmword_1403AA430) = byte_1403AA3E8 != 0 || (unk_1403AA2A0 & 2) != 0;
  }
  PopAccountCbEnergyChange();
  PopReleaseRwLock((ULONG_PTR)&qword_1403AA420);
  LOBYTE(v15) = v28;
  return PopEsQueueStateEvaluation(v15);
}
