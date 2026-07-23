/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800124E8
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x1800122D4 (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180012560 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(BaseOfImage);
    return 0;
  }
  return result;
}
