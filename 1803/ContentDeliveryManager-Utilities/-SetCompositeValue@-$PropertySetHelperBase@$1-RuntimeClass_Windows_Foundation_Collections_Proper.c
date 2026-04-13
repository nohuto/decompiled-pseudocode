/*
 * XREFs of ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180070480
 * Callers:
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006C050 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F13C (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18006BA24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *))
{
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  __int64 *v16; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF

  v13[1] = -2LL;
  v13[0] = 0LL;
  v5 = (**a3)(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  v14 = 0LL;
  v15 = 0;
  v7 = a1[1];
  v16 = &v14;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 152LL))(v7, v13[0], &v17);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v16);
  if ( v6 >= 0 )
  {
    v20 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v20);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v20 + 80LL))(v20, a2, v14, &v19);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v6 = 0;
LABEL_11:
        v10 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        goto LABEL_13;
      }
      v9 = 257LL;
    }
    else
    {
      v9 = 255LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)(unsigned int)v6);
LABEL_13:
  if ( v14 && ((v15 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (**)(void))(*(_QWORD *)v14 + 16LL))();
LABEL_16:
  v11 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v6;
}
