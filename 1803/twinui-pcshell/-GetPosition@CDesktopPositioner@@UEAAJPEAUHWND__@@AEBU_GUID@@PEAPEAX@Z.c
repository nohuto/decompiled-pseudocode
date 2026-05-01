/*
 * XREFs of ?GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180021FB0
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke @ 0x18000BFC0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f9.c)
 *     ?GetPosition@CDesktopPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AF100 (-GetPosition@CDesktopPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@CDesktopPositioner@@WBA@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AF110 (-GetPosition@CDesktopPositioner@@WBA@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18008B140.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18008B228 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::GetPosition(
        CDesktopPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(void *, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v15);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(&v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 123LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v11,
      v13);
    goto LABEL_6;
  }
  v8 = **(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v15;
  if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::QueryInterface )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
                  v15,
                  a3,
                  a4);
  else
    Interface = v8(v15, a3, a4);
  v7 = Interface;
  if ( Interface < 0 )
  {
    v11 = (unsigned int)Interface;
    v12 = 124LL;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v15);
  return v7;
}
