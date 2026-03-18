/*
 * XREFs of KeUnstackDetachProcess @ 0x1400BD880
 * Callers:
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess(ApcState, 0LL);
  }
}
