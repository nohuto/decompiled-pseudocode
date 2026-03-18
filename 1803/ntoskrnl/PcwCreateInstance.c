/*
 * XREFs of PcwCreateInstance @ 0x140539B90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x14009C108 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x1407C62E8 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwCreateInstance(
        PPCW_INSTANCE *Instance,
        PPCW_REGISTRATION Registration,
        PCUNICODE_STRING Name,
        ULONG Count,
        PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // rax
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    v10 = (*(__int64 (__fastcall **)(PPCW_INSTANCE *, PPCW_REGISTRATION, PCUNICODE_STRING, _QWORD, PPCW_DATA))(ExtensionTable + 16))(
            Instance,
            Registration,
            Name,
            Count,
            Data);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Instance = 0LL;
    return ExpPcwDisabledStatus();
  }
  return v10;
}
