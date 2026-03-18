/*
 * XREFs of IsShellProcess @ 0x1C001BECC
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C001A094 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C001BBA0 (CheckAllowForeground.c)
 *     _GetWindowTrackInfoAsync @ 0x1C00B2F90 (_GetWindowTrackInfoAsync.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F66E0 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterEdgy @ 0x1C0105C80 (NtUserRegisterEdgy.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0118E50 (NtUserRegisterShellPTPListener.c)
 *     IsWheelTargetDesktopApp @ 0x1C01A08C4 (IsWheelTargetDesktopApp.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C01DF5E0 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 304);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL) == a1;
  return v2;
}
