/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AC50
 * Callers:
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18009D100 (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D5E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18009D5E0.c)
 *     ??$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18009E0F4 (--$MakeAndInitialize@VCortanaConversationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Mi.c)
 *     ??$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A9208 (--$MakeAndInitialize@VCortanaExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AABE4 (--$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@.c)
 *     ??$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ABE34 (--$MakeAndInitialize@VTaskContinuityActivitiesExperienceManagerFactory@@UIUnknown@@$$V@Details@W.c)
 *     ??$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B0A18 (--$MakeAndInitialize@VPeopleBarFlyoutExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 *     ??$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B27D4 (--$MakeAndInitialize@VPeopleBarJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micr.c)
 *     ??$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B3284 (--$MakeAndInitialize@VPeopleTestExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B5764 (--$MakeAndInitialize@VShoulderTapExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800BA23C (--$MakeAndInitialize@VStartExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPE.c)
 *     ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800C0A18 (--$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800C9164 (--$MakeAndInitialize@VQuickConnectExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800CDD30 (--$MakeAndInitialize@VVirtualTouchpadExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Micros.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int v4; // edi

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
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
      if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) >= 0 )
        v4 = 0;
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
