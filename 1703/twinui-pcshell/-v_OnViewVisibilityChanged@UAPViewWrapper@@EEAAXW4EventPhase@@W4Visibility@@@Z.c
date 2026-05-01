/*
 * XREFs of ?v_OnViewVisibilityChanged@UAPViewWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180111930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UAPViewWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, __int64 a3)
{
  return WindowReadyState::VisibilityChanged(a1 + 328, a2, a3);
}
