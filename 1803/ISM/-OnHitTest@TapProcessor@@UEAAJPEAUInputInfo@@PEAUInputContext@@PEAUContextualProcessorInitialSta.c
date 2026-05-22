/*
 * XREFs of ?OnHitTest@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnHitTest(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // eax

  *(_DWORD *)a4 = 0;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 19)) != 0 )
  {
    v4 = *(_DWORD *)a4;
    if ( (*(_DWORD *)a2 & 0x4000) == 0 )
      v4 = 3;
    *(_DWORD *)a4 = v4;
  }
  return 0LL;
}
