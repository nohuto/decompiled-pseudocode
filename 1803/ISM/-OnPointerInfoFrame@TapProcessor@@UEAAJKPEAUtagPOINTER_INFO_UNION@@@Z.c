/*
 * XREFs of ?OnPointerInfoFrame@TapProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800B6630
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800B6348 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::OnPointerInfoFrame(
        TapProcessor *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 7), 1LL, a2, a3) < 0 )
    TapProcessor::ResetAndInitializeInteractionContext((TapProcessor *)((char *)this - 8));
  return 0LL;
}
