/*
 * XREFs of ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x1801E2730
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1801E2850 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E3620 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

char __fastcall LegacyViewWrapper::SendVisibilityToWindow(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  char result; // al

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 272);
  if ( v4 )
  {
    if ( (*(_BYTE *)(a1 + 464) & 0x10) == 0 )
    {
      LOBYTE(v3) = a2 == 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 472LL)
                                                                       + 24LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 472LL),
        v4,
        0LL,
        0LL,
        v3);
      WindowReadyState::VisibilityChanged((WindowReadyState *)(a1 + 360));
      return WindowReadyState::VisibilityChanged((WindowReadyState *)(a1 + 360));
    }
  }
  return result;
}
