/*
 * XREFs of PopDeferDoze @ 0x1407653E4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopPrintEx @ 0x140077270 (PopPrintEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PopIsDozeSupported @ 0x14051CC74 (PopIsDozeSupported.c)
 *     PopQueryPowerSettingUlong @ 0x1405EEC60 (PopQueryPowerSettingUlong.c)
 *     PopIsWakeTimerImmanent @ 0x140765568 (PopIsWakeTimerImmanent.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1407675CC (PopDiagTraceDozeDeferralDecision.c)
 */

bool __fastcall PopDeferDoze(int a1, int a2, _BYTE *a3)
{
  int v3; // ebx
  int v7; // r9d
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // ecx
  int v13; // ebx
  int v14; // r9d
  PVOID v15; // rdi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  P[0] = 0LL;
  v3 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  if ( !PopIsDozeSupported((__int64)&PopCapabilities) )
    v7 |= 0x10u;
  v8 = v7 | 0x20;
  if ( *((_DWORD *)PopPolicy + 22) )
    v8 = v7;
  if ( PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, &v18, &v19) )
  {
    v3 = v18;
    if ( !*a3 )
      v3 = v19;
  }
  v9 = v8 | 0x40;
  if ( v3 )
    v9 = v8;
  v10 = v9;
  if ( a3[3] && *a3 && v18 == 1 && !v19 )
    v10 = v9 | 0x100;
  v11 = MEMORY[0xFFFFF78000000008];
  if ( !(unsigned __int8)PopIsWakeTimerImmanent(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v20, (__int64)P) )
    v10 |= 0x80u;
  v13 = ~PopDozeDeferralChecksToIgnore & v10;
  if ( !v13 )
    PopPrintEx(3u, (__int64)"Deferring doze to S4\n");
  v14 = v11;
  v15 = P[0];
  LOBYTE(v12) = v13 == 0;
  PopDiagTraceDozeDeferralDecision(v12, v13, P[0], v14, v20, a1, a2);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x53577254u);
  return v13 == 0;
}
