/*
 * XREFs of IoStopIoRateControl @ 0x140007DDC
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140445AF8 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall IoStopIoRateControl(__int64 a1)
{
  __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
}
