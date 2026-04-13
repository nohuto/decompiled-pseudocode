/*
 * XREFs of ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAA@XZ @ 0x180066B2C
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b____::_1_::dtor$11 @ 0x1800B9020 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B9020.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf____::_1_::dtor$11 @ 0x1800B90F8 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B90F8.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64__::_1_::dtor$11 @ 0x1800B9200 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B9200.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64__::_1_::dtor$11 @ 0x1800B92A8 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B92A8.c)
 *     _CreativeFramework::CommonHelper::SettingsContainer::DeleteContainer_::_1_::dtor$0 @ 0x1800BCB65 (_CreativeFramework--CommonHelper--SettingsContainer--DeleteContainer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::map<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~map<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>(
        __int64 a1)
{
  return std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(a1);
}
