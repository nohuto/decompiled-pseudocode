/*
 * XREFs of DragOperationFromMaximizedAllowed @ 0x1C01401B0
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01401E0 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall DragOperationFromMaximizedAllowed(struct tagWND *a1)
{
  __int64 result; // rax

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0LL;
  result = 1LL;
  if ( (dword_1C03217CC & 1) == 0 || (dword_1C03217CC & 2) == 0 )
    return 0LL;
  return result;
}
