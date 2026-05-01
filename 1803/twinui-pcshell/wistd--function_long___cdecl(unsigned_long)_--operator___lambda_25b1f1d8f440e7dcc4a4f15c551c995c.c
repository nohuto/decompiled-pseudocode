/*
 * XREFs of wistd::function_long___cdecl(unsigned_long)_::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c___ @ 0x1802D26EC
 * Callers:
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@Z @ 0x1802C25AC (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1802D27BC (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1802D27BC.c)
 *     ??$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@ZW42@W43@PEAVWindowArrangementView@@@SmartCookie@@QEAAJPEAUIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@ZP81@EAAJK@Z12PEAVWindowArrangementView@@@Z @ 0x1802D9DEC (--$Register@UIShellTargetingContractManager@@P81@EAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_C.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ??0?$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ @ 0x18013A1B8 (--0-$_Func_base@JKU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_unsigned_long__::operator___lambda_25b1f1d8f440e7dcc4a4f15c551c995c___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)a1,
    (__int64)a2);
  wistd::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Func_base<long,unsigned long,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>(a1);
  *a1 = off_180322960;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  result = a1;
  a1[13] = a1;
  return result;
}
