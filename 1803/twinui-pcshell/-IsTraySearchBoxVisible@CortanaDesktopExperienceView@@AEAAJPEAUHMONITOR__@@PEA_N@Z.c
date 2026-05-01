/*
 * XREFs of ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180063DB0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066260 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     _lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_::operator() @ 0x1800935A4 (_lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_--operator().c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::IsTraySearchBoxVisible(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        bool *a3)
{
  LPVOID *v5; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  HRESULT Instance; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0;
  v20 = 0LL;
  v5 = (LPVOID *)((char *)this + 112);
  if ( *((_QWORD *)this + 14)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     v5),
        v6 = Instance,
        Instance >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)Instance,
      (int)ppv);
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      (int)ppv);
    goto LABEL_9;
  }
  v19 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v19);
  v6 = v7;
  if ( v7 < 0 )
  {
    v13 = 1470LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7,
      (int)ppv);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_9;
  }
  ppv = (LPVOID *)&v20;
  v7 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *))(*(_QWORD *)v19 + 72LL))(
         v19,
         a2,
         &SID_EdgeUi,
         &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
  v6 = v7;
  if ( v7 < 0 )
  {
    v13 = 1471LL;
    goto LABEL_20;
  }
  v8 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v6 = 0;
LABEL_9:
  if ( v6 < 0 )
  {
    v14 = (unsigned int)v6;
    v15 = 2337LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 96LL))(v20, &v18);
    v6 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v18 != 0;
      v6 = 0;
      goto LABEL_12;
    }
    v14 = (unsigned int)v9;
    v15 = 2340LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v14,
    (int)ppv);
LABEL_12:
  v10 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
