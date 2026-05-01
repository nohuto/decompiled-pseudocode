/*
 * XREFs of ?AddRef@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x180068000
 * Callers:
 *     ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180068060 (-QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800A4E10 (-AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A5950 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpView.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800A59F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperience.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800F2630.c)
 *     ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180159D80 (--$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager.c)
 *     ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18015A4C4 (--$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::AddRef(CTaskContinuityActivitiesExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 5);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
}
