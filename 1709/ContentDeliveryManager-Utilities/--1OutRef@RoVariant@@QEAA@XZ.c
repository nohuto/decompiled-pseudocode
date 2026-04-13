/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800617CC
 * Callers:
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180061DD4 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800648AC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b___ @ 0x1800652B0 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_5382d.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_09a62.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64_ @ 0x180067F14 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180067F14.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted_::_1_::dtor$8 @ 0x1800B8BBB (_Windows--Services--TargetedContent--Internal--SetTriggerAsExecuted_--_1_--dtor$8.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$2 @ 0x1800B8F54 (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800B8F54.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b____::_1_::dtor$8 @ 0x1800B8FFC (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B8FFC.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf____::_1_::dtor$8 @ 0x1800B90C8 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B90C8.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b__&___ptr64__::_1_::dtor$8 @ 0x1800B91DC (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B91DC.c)
 *     _Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64__::_1_::dtor$8 @ 0x1800B9278 (_Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer_ea_1800B9278.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  __int64 v1; // rbx
  __int64 *v2; // r14
  __int64 v3; // rsi
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = *(__int64 **)this;
  if ( v1 )
  {
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v1)(
           *((_QWORD *)this + 1),
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        v3 = v1;
        v4 = 3;
      }
      else
      {
        v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      }
    }
    else
    {
      v3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      v4 = 7;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
  }
  v6 = *v2;
  *v2 = v3;
  v7 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 2) = v4;
  if ( v6 )
  {
    if ( ((v7 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
