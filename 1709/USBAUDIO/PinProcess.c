/*
 * XREFs of PinProcess @ 0x1C0014900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinProcess(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x11u,
      (__int64)&WPP_f45567b61f903821dcfca6276dd00e2d_Traceguids,
      a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 128) + 128LL) + 16LL))(a1);
}
