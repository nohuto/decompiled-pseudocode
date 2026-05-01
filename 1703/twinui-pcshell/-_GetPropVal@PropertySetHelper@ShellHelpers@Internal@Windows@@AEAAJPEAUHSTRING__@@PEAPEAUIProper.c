/*
 * XREFs of ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800067D0
 * Callers:
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z @ 0x18003C2CC (-GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z.c)
 *     ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008D7D8 (-GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundatio.c)
 *     ?GetInt32WithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAHPEAUHSTRING__@@H@Z @ 0x180097DC4 (-GetInt32WithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAHPEAUHSTRING__@@H@Z.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18009E4F0 (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x180102078 (-GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  if ( v5 )
  {
    v7 = (**v5)(v5, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v14);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x14,
        (__int64)"internal\\shell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v7);
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, a2, &v13);
      if ( v6 >= 0 )
      {
        v8 = (**v13)(v13, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a3);
        v6 = v8;
        if ( v8 >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1E,
            (__int64)"internal\\shell\\inc\\propertysethelpers.h",
            (const char *)(unsigned int)v8);
      }
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v9)[2])(v9);
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
