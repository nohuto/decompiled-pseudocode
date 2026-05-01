/*
 * XREFs of ?ActivateView@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@8@@Z @ 0x1800C07B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0870 (-GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePosit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::ActivateView(
        TwinUI::Cortana::CortanaPositionerSelector *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int ActivePositioner; // eax
  unsigned int v8; // edi
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v9; // rbx
  __int64 v10; // rdx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[1] = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)-2LL;
  v12[0] = 0LL;
  ActivePositioner = TwinUI::Cortana::CortanaPositionerSelector::GetActivePositioner(a1, v12);
  v8 = ActivePositioner;
  v9 = v12[0];
  if ( ActivePositioner < 0 )
  {
    v10 = 20LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)(unsigned int)ActivePositioner);
    goto LABEL_7;
  }
  ActivePositioner = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, __int64, __int64, __int64))(*(_QWORD *)v12[0] + 80LL))(
                       v12[0],
                       a2,
                       a3,
                       a4);
  v8 = ActivePositioner;
  if ( ActivePositioner < 0 )
  {
    v10 = 21LL;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
