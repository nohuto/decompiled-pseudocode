/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14058289C
 * Callers:
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     PopSetNotificationWork @ 0x14006FD70 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x140070144 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140148E30 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x1401557BC (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopTracePowerReconfig @ 0x1402328EC (PopTracePowerReconfig.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopBatteryCheckTrigger @ 0x140582AD4 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x140582B04 (PopEsQueueStateEvaluation.c)
 *     PopRecalculateCBTriggerLevels @ 0x140582B64 (PopRecalculateCBTriggerLevels.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x1405C364C (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x1406CA278 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x1406CAB10 (PopBatteryTracePercentageRemaining.c)
 *     PopDiagTraceAcDcStateChange @ 0x1406CC520 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x1406CC5C0 (PopDiagTraceBatteryCountChange.c)
 *     PpmProfileAcDcUpdate @ 0x1406D5E40 (PpmProfileAcDcUpdate.c)
 *     PopSqmBatteryUpdate @ 0x1406D6804 (PopSqmBatteryUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(__m128i *a1, int a2)
{
  char v2; // di
  unsigned int v3; // edi
  int v4; // ebx
  __m128i v6; // xmm1
  __int64 v7; // r9
  unsigned __int64 v8; // xmm0_8
  unsigned int v9; // edi
  __int64 v10; // rsi
  int v11; // ebx
  ULONG_PTR *v12; // r12
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int32 v20; // eax
  __int64 v21; // r12
  int v22; // esi
  unsigned __int64 v23; // r14
  unsigned int v24; // ebx
  int v25; // ecx
  char v26; // r9
  void *ExplicitScope; // [rsp+20h] [rbp-59h]
  WNF_CHANGE_STAMP MatchingChangeStamp[2]; // [rsp+28h] [rbp-51h]
  __int64 CheckStamp; // [rsp+30h] [rbp-49h]
  char v30; // [rsp+40h] [rbp-39h]
  char v31; // [rsp+41h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-35h] BYREF
  int Buffer; // [rsp+48h] [rbp-31h] BYREF
  int v34; // [rsp+4Ch] [rbp-2Dh]
  int v35; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-21h] BYREF
  char *v37; // [rsp+78h] [rbp-1h]
  __int64 v38; // [rsp+80h] [rbp+7h]

  v2 = ~(unsigned __int8)a1->m128i_i32[0];
  v34 = a2;
  v3 = v2 & 1;
  v30 = 0;
  v4 = a2;
  PopAcquirePolicyLock();
  if ( dword_14034BB2C != v3 )
  {
    dword_14034BB2C = v3;
    PopDiagTraceAcDcStateChange(v3);
    LOBYTE(v15) = 1;
    PopBatteryUpdateAlarms(v15, 0LL);
    PopSetNotificationWork(4u);
    PopInitSIdle(2LL);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v3 == 1 )
      PopMaxChargeRate = 0LL;
    v30 = 1;
  }
  if ( byte_14034B398 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_14034B394);
    v16 = qword_14034B3A0;
    v17 = 0LL;
    v18 = 0LL;
    while ( (__int64 *)v16 != &qword_14034B3A0 )
    {
      v19 = *(_DWORD *)(v16 + 104);
      if ( v19 == 2 )
      {
        v18 = (unsigned int)(v18 + 1);
      }
      else if ( v19 == 4 )
      {
        v17 = (unsigned int)(v17 + 1);
      }
      v16 = *(_QWORD *)v16;
    }
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_14034B394 )
    {
      PopCachedValidBatteryCount = dword_14034B394;
      PopDiagTraceBatteryCountChange((unsigned int)dword_14034B394, v18, v17, &qword_14034B3A0);
    }
    v30 = 1;
  }
  PopReleasePolicyLock();
  if ( dword_14034B394 )
  {
    v20 = a1->m128i_u32[1];
    v32 = 100;
    if ( HIDWORD(qword_14034B3E0) > v20 )
      v32 = ((HIDWORD(qword_14034B3E0) >> 1) + 100 * v20) / HIDWORD(qword_14034B3E0);
    v21 = MEMORY[0xFFFFF78000000008];
    if ( dword_14034B50C == -1 )
    {
      v22 = 0;
      LODWORD(v23) = 0;
    }
    else
    {
      v22 = v32 - dword_14034B50C;
      v23 = (MEMORY[0xFFFFF78000000008] - qword_14034B510 + 5000) / 0x2710uLL;
    }
    if ( v32 != dword_14034B50C )
    {
      PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v32);
      v24 = v32;
      PopSqmBatteryUpdate(v32, (unsigned int)v22, v3, (unsigned int)v23);
      PopBatteryTracePercentageRemaining(v24, (unsigned int)v22, v3, (unsigned int)v23);
      dword_14034B50C = v24;
      v4 = v34;
      qword_14034B510 = v21;
    }
    Buffer = dword_14034B508;
    v25 = dword_14034B508;
    if ( v3 == 1 )
    {
      v25 = 1;
    }
    else if ( v3 == ((unk_14034B3C0 & 1) == 0) )
    {
      if ( byte_14034B398 || !v22 && (_DWORD)v23 )
      {
LABEL_50:
        if ( v25 != dword_14034B508 )
        {
          dword_14034B508 = v25;
          ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &Buffer, 4u, 0LL, 0LL, 0, 0);
        }
        goto LABEL_4;
      }
      v25 = v22 < 0;
    }
    else
    {
      v25 = 0;
    }
    Buffer = v25;
    goto LABEL_50;
  }
LABEL_4:
  if ( a1->m128i_i32[0] != unk_14034B3C0 || byte_14034B398 )
  {
    PopSetNotificationWork(8u);
    byte_14034B398 = 0;
  }
  v6 = *a1;
  HIDWORD(qword_14034B3CC) = v4;
  v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v4 == -1 )
    v4 = 0;
  LODWORD(CheckStamp) = HIDWORD(v8);
  MatchingChangeStamp[0] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  LODWORD(ExplicitScope) = v6.m128i_i32[1];
  unk_14034B3C0 = v6;
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
    ExplicitScope,
    *(_QWORD *)MatchingChangeStamp,
    CheckStamp,
    v4);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_14034B3E0
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_14034B4A8, 1LL)
    && (dword_14034B4AC & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = 0;
  v10 = 0LL;
  v11 = dword_14034B394 != 0 ? 3 : 0;
  do
  {
    v12 = &PopCB + 3 * v9;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v12 + 37) )
    {
      if ( !byte_14034B4A0 )
        PopExecutePowerAction(
          (__int64)(v12 + 37),
          8u,
          (__int64 *)PopPolicy + 3 * v9 + 13,
          *(_DWORD *)((char *)PopPolicy + v10 + 116),
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
      *(_DWORD *)((char *)&PopCB + v10 + 300) &= 0xFFFFFFFC;
    }
    v10 += 24LL;
    ++v9;
  }
  while ( v9 < 4 );
  if ( dword_14034B3FC != v11 )
  {
    v35 = v11;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &v35, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)(v11 - 1) <= 1 != (unsigned int)(dword_14034B3FC - 1) <= 1
      && hProvider.LevelPlus1 > 5
      && TlgKeywordOn(&hProvider, 0x800000000000uLL) )
    {
      v31 = v26;
      v37 = &v31;
      v38 = 1LL;
      TlgWrite(&hProvider, &unk_1402ACF1A, 0LL, 0LL, 3u, &pData);
    }
    dword_14034B3FC = v11;
  }
  if ( v30 )
    PopTracePowerReconfig();
  PopAcquireRwLockExclusive((ULONG_PTR)&qword_14034B528);
  memset(&xmmword_14034B538, 0, 0x20uLL);
  BYTE7(xmmword_14034B538) = dword_14034B3F8;
  if ( dword_14034B394 )
  {
    BYTE1(xmmword_14034B538) = 1;
    LOBYTE(xmmword_14034B538) = unk_14034B3C0 & 1;
    BYTE2(xmmword_14034B538) = (unk_14034B3C0 & 4) != 0;
    DWORD2(xmmword_14034B538) = HIDWORD(qword_14034B3E0);
    HIDWORD(xmmword_14034B538) = unk_14034B3C4;
    *(_QWORD *)&xmmword_14034B548 = qword_14034B3CC;
    *((_QWORD *)&xmmword_14034B548 + 1) = unk_14034B3E8;
    BYTE3(xmmword_14034B538) = (unk_14034B3C0 & 2) != 0;
  }
  else
  {
    LOBYTE(xmmword_14034B538) = dword_14034BB2C == 0;
  }
  PopReleaseRwLock((ULONG_PTR)&qword_14034B528);
  LOBYTE(v13) = v30;
  PopEsQueueStateEvaluation(v13);
  return PopReleasePolicyLock();
}
