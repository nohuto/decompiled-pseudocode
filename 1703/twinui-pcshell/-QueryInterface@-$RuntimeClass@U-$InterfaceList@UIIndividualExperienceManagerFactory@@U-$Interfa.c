/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIIndividualExperienceManagerFactory@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180095130
 * Callers:
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180097304 (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@Y.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIIndividualExperienceManagerFactory@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800976F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIIndividualExperienceManagerFactor_ea_1800976F0.c)
 *     ??$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18009F354 (--$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A06B8 (--$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A41E8 (--$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A5F14 (--$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microso.c)
 *     ??$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A6AD4 (--$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A8004 (--$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B0908 (--$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@Y.c)
 *     ??$MakeAndInitialize@VWelcomeScreenExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B50C4 (--$MakeAndInitialize@VWelcomeScreenExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B99F4 (--$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IIndividualExperienceManagerFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 == 406227695
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224.Data4[4] )
    {
      *a3 = (void *)a1;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
