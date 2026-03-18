/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C0099F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ForceResetMouseButtonsDownState()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  v1 = result;
  if ( result )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(result + 8),
               4u,
               0xAu,
               0x10u,
               (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    *(_DWORD *)(v1 + 2688) = 0;
  }
  return result;
}
