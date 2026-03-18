/*
 * XREFs of PoCaptureReasonContext @ 0x14007698C
 * Callers:
 *     NtSetTimerEx @ 0x14005AE80 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x14014A5DC (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402786C0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x1405251E0 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x1405253F0 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x140526F38 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x1406270A0 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1408C7738 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x140076AA4 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x140076BDC (PopCaptureReasonContext.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PoCaptureReasonContext(unsigned __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  char v7; // di
  __int64 v8; // rcx
  int v9; // ebx
  _OWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v7 = a2;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v11[0] = *(_OWORD *)a1;
      v11[1] = *(_OWORD *)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)v11;
    }
    LOBYTE(a2) = v7;
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  else
  {
    v9 = PopCaptureReasonContext(a1, a2, a5, a6);
  }
  if ( v9 >= 0 )
  {
    LOBYTE(v8) = v7;
    PoGetRequester(v8, a3, *a6);
  }
  return (unsigned int)v9;
}
