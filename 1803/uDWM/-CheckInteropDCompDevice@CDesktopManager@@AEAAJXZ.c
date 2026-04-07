/*
 * XREFs of ?CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ @ 0x1800255C0
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180075348 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 *     ?InvalidateAcrylicAccentDevices@CWindowList@@QEAAXXZ @ 0x1800852DC (-InvalidateAcrylicAccentDevices@CWindowList@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::CheckInteropDCompDevice(CDesktopManager *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 26) )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v7);
    v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 26))(
           *((_QWORD *)this + 26),
           &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3,
           &v7);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1FFu);
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 208LL))(v7, &v6);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x202u);
      }
      else if ( !v6 )
      {
        CDesktopManager::HandleInteropDeviceLost();
        CWindowList::InvalidateAcrylicAccentDevices(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56));
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v7);
  }
  return v1;
}
