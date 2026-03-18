/*
 * XREFs of IsShellProcess @ 0x1C0090B7C
 * Callers:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0055510 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0084EB0 (_GetWindowTrackInfoAsync.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     CheckAllowForeground @ 0x1C0090860 (CheckAllowForeground.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D6230 (_RegisterWindowArrangementCallout.c)
 *     NtUserRegisterEdgy @ 0x1C0110840 (NtUserRegisterEdgy.c)
 *     NtUserRegisterShellPTPListener @ 0x1C0122D30 (NtUserRegisterShellPTPListener.c)
 *     NtUserSetInteractiveControlFocus @ 0x1C01EB7A0 (NtUserSetInteractiveControlFocus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 312);
  v2 = 0;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL) == a1;
  return v2;
}
