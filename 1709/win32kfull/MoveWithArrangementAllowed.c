/*
 * XREFs of MoveWithArrangementAllowed @ 0x1C01F82D4
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01401E0 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall MoveWithArrangementAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C03217CC & 1) == 0 || (dword_1C03217CC & 8) == 0 )
    return 0LL;
  return result;
}
