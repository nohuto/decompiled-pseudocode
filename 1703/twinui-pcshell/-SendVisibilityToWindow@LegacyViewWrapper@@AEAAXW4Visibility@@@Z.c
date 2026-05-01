/*
 * XREFs of ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x180110DEC
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x180110BF0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111CCC (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18011BAEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyViewWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 )
  {
    result = (unsigned int)~(*(_DWORD *)(a1 + 440) >> 4);
    if ( (result & 1) != 0 )
    {
      LOBYTE(v3) = a2 == 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 400LL)
                                                                       + 24LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 400LL),
        v4,
        0LL,
        0LL,
        v3);
      WindowReadyState::VisibilityChanged(a1 + 336, 0LL, a2);
      return WindowReadyState::VisibilityChanged(a1 + 336, 1LL, a2);
    }
  }
  return result;
}
