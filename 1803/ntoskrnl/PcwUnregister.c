/*
 * XREFs of PcwUnregister @ 0x1407C63B0
 * Callers:
 *     ExpPcwHostCallback @ 0x140642570 (ExpPcwHostCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
