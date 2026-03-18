/*
 * XREFs of IoStopIoRateControl @ 0x140001960
 * Callers:
 *     PspIoRateEntryActivate @ 0x140489D84 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140489E6C (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
