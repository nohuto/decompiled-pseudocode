/*
 * XREFs of KeUnstackDetachProcess @ 0x1400B64F0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess((__int64 *)ApcState, 0);
  }
}
