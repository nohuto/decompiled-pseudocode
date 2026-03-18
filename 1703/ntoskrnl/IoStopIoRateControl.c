/*
 * XREFs of IoStopIoRateControl @ 0x140003CE0
 * Callers:
 *     PspIoRateEntryActivate @ 0x14041EE10 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x14041EEF8 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
