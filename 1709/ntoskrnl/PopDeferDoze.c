/*
 * XREFs of PopDeferDoze @ 0x140700F18
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopPrintEx @ 0x14013284C (PopPrintEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopIsWakeTimerImmanent @ 0x140701178 (PopIsWakeTimerImmanent.c)
 *     PopQueryPowerSettingUlong @ 0x140701348 (PopQueryPowerSettingUlong.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140703340 (PopDiagTraceDozeDeferralDecision.c)
 */

char __fastcall PopDeferDoze(int a1, int a2, _BYTE *a3)
{
  int v3; // ebx
  char v4; // si
  int v8; // r9d
  int v9; // r14d
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // ecx
  int v14; // ebx
  int v15; // r9d
  PVOID v16; // rdi
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  P[0] = 0LL;
  v3 = 0;
  v19 = 0;
  v20 = 0;
  v4 = 0;
  v21 = 0LL;
  if ( !PopIsDozeSupported((__int64)&PopCapabilities) )
    v8 |= 0x10u;
  v9 = v8 | 0x20;
  if ( *((_DWORD *)PopPolicy + 22) )
    v9 = v8;
  if ( (unsigned __int8)PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, &v19, &v20) )
  {
    v3 = v19;
    if ( !*a3 )
      v3 = v20;
  }
  v10 = v9 | 0x40;
  if ( v3 )
    v10 = v9;
  v11 = v10;
  if ( a3[3] && *a3 && v19 == 1 && !v20 )
    v11 = v10 | 0x100;
  v12 = MEMORY[0xFFFFF78000000008];
  if ( !(unsigned __int8)PopIsWakeTimerImmanent(MEMORY[0xFFFFF78000000008], a1, a2, (unsigned int)&v21, (__int64)P) )
    v11 |= 0x80u;
  v14 = ~PopDozeDeferralChecksToIgnore & v11;
  if ( !v14 )
  {
    v4 = 1;
    PopPrintEx(3u, (__int64)"Deferring doze to S4\n");
  }
  v15 = v12;
  v16 = P[0];
  LOBYTE(v13) = v4;
  PopDiagTraceDozeDeferralDecision(v13, v14, P[0], v15, v21, a1, a2);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x53577254u);
  return v4;
}
