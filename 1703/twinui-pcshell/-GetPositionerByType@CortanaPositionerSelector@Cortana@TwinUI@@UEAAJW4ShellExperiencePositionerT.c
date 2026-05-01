/*
 * XREFs of ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1800C08C0
 * Callers:
 *     ?GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0870 (-GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePosit.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x1800C0A90 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0CBC (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 *     ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0E44 (-_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperi.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
        TwinUI::Cortana::CortanaPositionerSelector *a1,
        int a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a3)
{
  int v3; // edx
  int HoloExperiencePositioner; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        HoloExperiencePositioner = -2147024809;
        v5 = 48LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
          (const char *)(unsigned int)HoloExperiencePositioner);
        return (unsigned int)HoloExperiencePositioner;
      }
      HoloExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetHoloExperiencePositioner(a1, a3);
      if ( HoloExperiencePositioner < 0 )
      {
        v5 = 42LL;
        goto LABEL_9;
      }
    }
    else
    {
      HoloExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(a1, a3);
      if ( HoloExperiencePositioner < 0 )
      {
        v5 = 39LL;
        goto LABEL_9;
      }
    }
    return (unsigned int)HoloExperiencePositioner;
  }
  return 0LL;
}
