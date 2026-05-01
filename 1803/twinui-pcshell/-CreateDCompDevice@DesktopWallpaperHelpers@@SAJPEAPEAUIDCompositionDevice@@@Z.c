/*
 * XREFs of ?CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z @ 0x1802FE7B8
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180174424 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDCompDevice(struct IDCompositionDevice **a1)
{
  D3D_DRIVER_TYPE *v1; // rsi
  unsigned int v3; // edi
  HRESULT Device2; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _DWORD v8[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+90h] [rbp+30h] BYREF
  ID3D11Device *ppDevice; // [rsp+98h] [rbp+38h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+40h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+A8h] [rbp+48h] BYREF

  *a1 = 0LL;
  v1 = (D3D_DRIVER_TYPE *)v8;
  v12 = 0LL;
  ppDevice = 0LL;
  ppImmediateContext = 0LL;
  v3 = 0;
  v8[0] = 1;
  v8[1] = 5;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
    Device2 = D3D11CreateDevice(0LL, *v1, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, &ppImmediateContext);
    v5 = Device2;
    if ( Device2 >= 0 )
      break;
    ++v3;
    ++v1;
    if ( v3 >= 2 )
    {
      v6 = 109LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
        (const char *)(unsigned int)Device2);
      goto LABEL_11;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Device2 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
              ppDevice,
              &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
              &v12);
  v5 = Device2;
  if ( Device2 < 0 )
  {
    v6 = 110LL;
    goto LABEL_9;
  }
  Device2 = DCompositionCreateDevice2(v12, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, a1);
  v5 = Device2;
  if ( Device2 < 0 )
  {
    v6 = 111LL;
    goto LABEL_9;
  }
  v5 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v5;
}
