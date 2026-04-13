/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180066F5C
 * Callers:
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b___ @ 0x1800652B0 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_5382d.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_09a62.c)
 *     ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAA@XZ @ 0x180066B2C (--1-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VISettin.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64_ @ 0x180067F14 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180067F14.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 *     ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x180096370 (-DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ @ 0x180096D40 (-_Destroy@-$_Ref_count_obj@VSettingsContainer@CommonHelper@CreativeFramework@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x18003BCB0 (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180067834 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_180067834.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
        void **a1)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rsi

  v2 = (_QWORD *)*((_QWORD *)*a1 + 1);
  for ( i = v2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
      a1,
      i[2]);
    i = (_QWORD *)*i;
    std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>((__int64)(v2 + 4));
    operator delete(v2);
  }
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1);
}
