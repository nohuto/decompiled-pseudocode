/*
 * XREFs of ?SetPrelaunchActivated@CActivatedEventArgsWithPrelaunchAndViewIdBase@@UEAAJE@Z @ 0x1801E1190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::SetPrelaunchActivated(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        char a2)
{
  *((_BYTE *)this + 24) = a2;
  return 0LL;
}
