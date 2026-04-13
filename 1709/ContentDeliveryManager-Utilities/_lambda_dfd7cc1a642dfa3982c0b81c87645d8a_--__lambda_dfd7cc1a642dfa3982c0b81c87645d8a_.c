/*
 * XREFs of _lambda_dfd7cc1a642dfa3982c0b81c87645d8a_::__lambda_dfd7cc1a642dfa3982c0b81c87645d8a_ @ 0x18002C658
 * Callers:
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$1 @ 0x1800B5F56 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$1 @ 0x1800B5F7A (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800B5F9E (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800B5F9E.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$1 @ 0x1800B5FC2 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

volatile signed __int64 *__fastcall lambda_dfd7cc1a642dfa3982c0b81c87645d8a_::__lambda_dfd7cc1a642dfa3982c0b81c87645d8a_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(result);
  }
  return result;
}
