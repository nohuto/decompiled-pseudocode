/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC
 * Callers:
 *     _dynamic_initializer_for__c_retailDemoHotspot__ @ 0x180001340 (_dynamic_initializer_for__c_retailDemoHotspot__.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180111530 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1801990C8 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801BFDE0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

unsigned __int64 *__fastcall std::wstring::wstring(unsigned __int64 *a1, _WORD *Src, __int64 a3)
{
  unsigned __int64 v5; // rdx
  char *v6; // rsi
  __int64 v7; // rbx

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  if ( v5 > a1[3] )
  {
    std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
      a1,
      v5,
      a3,
      Src);
  }
  else
  {
    v6 = (char *)a1;
    if ( a1[3] >= 8 )
      v6 = (char *)*a1;
    v7 = 2 * v5;
    a1[2] = v5;
    memmove(v6, Src, 2 * v5);
    *(_WORD *)&v6[v7] = 0;
  }
  return a1;
}
