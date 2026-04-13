/*
 * XREFs of ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800964F0
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180061CD8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180061DD4 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800621FC (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063984 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b___ @ 0x1800652B0 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_5382d.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_09a62.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64_ @ 0x180067F14 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180067F14.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618C4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::CommonHelper::SettingsContainer::GetValues(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  struct Windows::Foundation::Collections::IPropertySet *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h]
  _DWORD *v12; // [rsp+60h] [rbp+18h]

  v11 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v3 + 64LL))(
         v3,
         &v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v10;
  v6 = operator new(0x28uLL);
  v7 = v6;
  v12 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Triggers::PropertySetHelper>::`vftable';
    if ( v6 != (_DWORD *)-16LL )
      CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
        (CreativeFramework::Triggers::PropertySetHelper *)(v6 + 4),
        v5);
  }
  else
  {
    v7 = 0LL;
  }
  a2[1] = v7;
  *a2 = v7 + 4;
  if ( v10 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 16LL))(v10);
  return a2;
}
