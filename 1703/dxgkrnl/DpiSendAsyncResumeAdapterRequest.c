/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C00427DC
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0012DDC (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v2[4] = 0LL;
  v2[5] = 0LL;
  WdLogEvent5_WdPower(v2);
  *(_DWORD *)(a1 + 3816) = 2;
  v3 = *(_QWORD **)(a1 + 3776);
  v4 = (_QWORD *)(a1 + 3792);
  if ( *v3 != a1 + 3768 )
    __fastfail(3u);
  *v4 = a1 + 3768;
  *(_QWORD *)(a1 + 3800) = v3;
  *v3 = v4;
  *(_QWORD *)(a1 + 3776) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 3736), 0, 0);
}
