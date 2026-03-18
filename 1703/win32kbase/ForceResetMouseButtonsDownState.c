/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C00911D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 ForceResetMouseButtonsDownState()
{
  __int64 result; // rax
  int v1; // edx
  __int64 v2; // rbx

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  v2 = result;
  if ( result )
  {
    LOBYTE(v1) = 4;
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(result + 8),
               v1,
               10,
               16,
               (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    *(_DWORD *)(v2 + 2536) = 0;
  }
  return result;
}
