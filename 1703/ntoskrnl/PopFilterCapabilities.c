/*
 * XREFs of PopFilterCapabilities @ 0x1404C5A80
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x140581174 (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     PopLogDisabledSleepReason @ 0x1404C598C (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x1404C5BD0 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404C5C00 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1404C5C84 (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x1405C2380 (PopLogSleepDisabled.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  char v3; // di
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r9d
  __int64 v21; // r9
  char *v22; // rcx
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp+8h] BYREF
  int v25; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( (int)IoGetLegacyVetoList(&P, &v25) < 0 )
    goto LABEL_6;
  if ( v25 )
  {
    v3 = 1;
    v21 = 0LL;
    v22 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)&v22[2 * v23] );
        v21 += 2 * v23 + 2;
        v22 = (char *)P + v21;
      }
      while ( *(_WORD *)((char *)P + v21) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v21 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v3 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v24 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v24);
  if ( v24 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_14034BB3D )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  v4 = PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL, v5, v6, v4) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL, v7, v8, v9) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL, v10, v11, v12) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL, v13, v14, v15) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL, v16, v17, v18) )
    *(_BYTE *)(a2 + 17) = 0;
  if ( !*(_BYTE *)(a2 + 5) || !*(_BYTE *)(a2 + 6) )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !*(_BYTE *)(a2 + 6) )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v19;
}
