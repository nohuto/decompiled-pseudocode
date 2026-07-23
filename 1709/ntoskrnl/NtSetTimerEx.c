/*
 * XREFs of NtSetTimerEx @ 0x1400E17C0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetTimerEx(
        HANDLE TimerHandle,
        TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
        PVOID TimerSetInformation,
        ULONG TimerSetInformationLength)
{
  _OWORD *v4; // rbx
  int v5; // esi
  char PreviousMode; // di
  char *v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // eax
  NTSTATUS v10; // ebx
  NTSTATUS result; // eax
  char v12[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = TimerSetInformation;
  v5 = (int)TimerHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && TimerSetInformationLength )
  {
    if ( ((unsigned __int8)TimerSetInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)TimerSetInformation + TimerSetInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < TimerSetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( TimerSetInformationClass )
    return -1073741821;
  if ( TimerSetInformationLength != 48 )
    return -1073741820;
  if ( PreviousMode )
  {
    v14[0] = *(_OWORD *)TimerSetInformation;
    v14[1] = *((_OWORD *)TimerSetInformation + 1);
    v14[2] = *((_OWORD *)TimerSetInformation + 2);
    v4 = v14;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return -1073741583;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    LOBYTE(TimerSetInformationClass) = PreviousMode;
    result = PoCaptureReasonContext(v8, *(__int64 *)&TimerSetInformationClass, 0LL, 0, (__int64)v12, &P);
    if ( result < 0 )
      return result;
  }
  else
  {
    P = 0LL;
    v12[0] = 0;
  }
  LOBYTE(TimerSetInformationClass) = PreviousMode;
  v9 = ExpSetTimer(
         v5,
         TimerSetInformationClass,
         (int)v4,
         *((_QWORD *)v4 + 1),
         *((_QWORD *)v4 + 2),
         (__int64)P,
         v12[0],
         *((_DWORD *)v4 + 8),
         *((_DWORD *)v4 + 9),
         *((_QWORD *)v4 + 5));
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( P )
      PoDestroyReasonContext(P);
  }
  return v10;
}
