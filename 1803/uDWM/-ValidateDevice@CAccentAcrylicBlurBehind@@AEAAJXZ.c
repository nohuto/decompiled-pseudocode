/*
 * XREFs of ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180047C10
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180047EEC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x18003B540 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003B65C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18003BB2C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180075348 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::ValidateDevice(CAccentAcrylicBlurBehind *this)
{
  struct IDCompositionDesktopDevicePartner *v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)this + 36);
  if ( v1 != CDesktopManager::GetDCompositionInteropDevice(this) )
  {
    v9 = 0;
    goto LABEL_13;
  }
  v10 = 0LL;
  v9 = 1;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 36))(
         *((_QWORD *)this + 36),
         &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3,
         &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1948LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v3,
      v7);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
    return v4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 208LL))(v10, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1950LL;
    goto LABEL_11;
  }
  if ( !v9 )
    CDesktopManager::HandleInteropDeviceLost();
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  if ( v9 )
    return 0LL;
LABEL_13:
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  result = CAccentAcrylicBlurBehind::InitializeDComp(this);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
