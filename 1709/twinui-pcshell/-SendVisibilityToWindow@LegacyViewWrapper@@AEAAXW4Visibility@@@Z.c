/*
 * XREFs of ?SendVisibilityToWindow@LegacyViewWrapper@@AEAAXW4Visibility@@@Z @ 0x18013B09C
 * Callers:
 *     ?v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18013AEA0 (-v_OnWindowCreated@LegacyViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013BF4C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 * Callees:
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180145DEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyViewWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 272);
  if ( v4 )
  {
    result = (unsigned int)~(*(_DWORD *)(a1 + 464) >> 4);
    if ( (result & 1) != 0 )
    {
      LOBYTE(v3) = a2 == 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 184) + 472LL)
                                                                       + 24LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 472LL),
        v4,
        0LL,
        0LL,
        v3);
      WindowReadyState::VisibilityChanged(a1 + 360, 0LL, a2);
      return WindowReadyState::VisibilityChanged(a1 + 360, 1LL, a2);
    }
  }
  return result;
}
