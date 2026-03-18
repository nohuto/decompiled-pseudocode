/*
 * XREFs of PoCaptureReasonContext @ 0x1400B526C
 * Callers:
 *     NtSetTimerEx @ 0x1400E17C0 (NtSetTimerEx.c)
 *     PoRegisterSystemState @ 0x1402411B0 (PoRegisterSystemState.c)
 *     NtSetTimer @ 0x140286C38 (NtSetTimer.c)
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1404F1D38 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x1405DBED0 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x1406F69D0 (PoCreateThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x14084EDCC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     PoGetRequester @ 0x1400B5380 (PoGetRequester.c)
 *     PopCaptureReasonContext @ 0x1400B54B8 (PopCaptureReasonContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
