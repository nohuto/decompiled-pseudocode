/*
 * XREFs of PcwUnregister @ 0x14071F240
 * Callers:
 *     ExpPcwHostCallback @ 0x1405C5170 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140117418 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __stdcall PcwUnregister(PPCW_REGISTRATION Registration)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_REGISTRATION))(ExtensionTable + 8))(Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
