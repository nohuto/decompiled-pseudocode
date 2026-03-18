/*
 * XREFs of Interrupter_WdfEvtCleanupCallback @ 0x1C0017D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 */

void __fastcall Interrupter_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B340);
  v3 = v2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      5u,
      9u,
      0x24u,
      (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
      a1,
      v2);
  v4 = *(struct _PCW_INSTANCE **)(v3 + 88);
  if ( v4 )
    PcwCloseInstance(v4);
  if ( !*(_DWORD *)(v3 + 32) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
      WdfDriverGlobals,
      a1,
      off_1C004B1B0);
}
