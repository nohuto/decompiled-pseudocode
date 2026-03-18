/*
 * XREFs of MmGetSessionGlobalVA @ 0x140454588
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400618B4 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 * Callees:
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 */

unsigned __int64 __fastcall MmGetSessionGlobalVA(struct _KPROCESS *a1)
{
  if ( PsIsSystemProcess(a1) )
    return 0LL;
  else
    return a1[1].ActiveProcessors.Bitmap[2];
}
