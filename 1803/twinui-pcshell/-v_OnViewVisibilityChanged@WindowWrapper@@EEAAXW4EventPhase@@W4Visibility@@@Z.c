/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1801EE640
 * Callers:
 *     <none>
 * Callees:
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

char __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1)
{
  return WindowReadyState::VisibilityChanged((WindowReadyState *)(a1 + 360));
}
