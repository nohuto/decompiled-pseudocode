/*
 * XREFs of ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x180094440
 * Callers:
 *     _lambda_426d63d8a8f31d1aac1a208ad6758ad1_::_lambda_invoker_cdecl_ @ 0x180094410 (_lambda_426d63d8a8f31d1aac1a208ad6758ad1_--_lambda_invoker_cdecl_.c)
 *     _lambda_e4030f021b3ea92efb30b4fc18581bc0_::_lambda_invoker_cdecl_ @ 0x180159B70 (_lambda_e4030f021b3ea92efb30b4fc18581bc0_--_lambda_invoker_cdecl_.c)
 *     _lambda_abca3fe783134c9474c9cbbdcdb80191_::_lambda_invoker_cdecl_ @ 0x18016A190 (_lambda_abca3fe783134c9474c9cbbdcdb80191_--_lambda_invoker_cdecl_.c)
 *     ?OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x18016C170 (-OnApplicationActivatedForLaunch@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 *     ?OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z @ 0x18016C3D0 (-OnIdleStateChanged@CPeopleBarFlyoutExperienceManager@@UEAAJH@Z.c)
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180173B70 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186DC8 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803094E8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ExperienceManagerUtils::PostToUIThread(
        ExperienceManagerUtils *this,
        struct IUnknown *a2,
        void *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  HRESULT v8; // eax
  unsigned int v9; // ebx
  LPVOID v10; // rbx
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  v15[1] = -2LL;
  v5 = (unsigned int)a3;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( !this )
  {
    v8 = CoCreateInstance(
           &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
           0LL,
           0x404u,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           &ppv);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    v13 = 248LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_7;
  }
  v8 = (**(__int64 (__fastcall ***)(ExperienceManagerUtils *, GUID *, LPVOID *))this)(
         this,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 244LL;
    goto LABEL_11;
  }
LABEL_3:
  v15[0] = 0LL;
  v10 = ppv;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
          v10,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 252LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown *, __int64))(*(_QWORD *)v15[0] + 48LL))(
          v15[0],
          v5,
          a2,
          a4);
  v9 = v11;
  if ( v11 < 0 )
  {
    v14 = 253LL;
    goto LABEL_14;
  }
  v9 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v9;
}
