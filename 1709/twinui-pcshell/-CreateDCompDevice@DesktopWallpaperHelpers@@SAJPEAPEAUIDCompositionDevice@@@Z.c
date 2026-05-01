/*
 * XREFs of ?CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801C3410
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1800B8A6C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDCompDevice(struct IDCompositionDevice **a1)
{
  D3D_DRIVER_TYPE *v1; // rsi
  ID3D11DeviceContext *v2; // rdx
  ID3D11Device *v4; // rcx
  unsigned int v5; // edi
  HRESULT Device2; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ID3D11DeviceContext *v10; // rcx
  ID3D11Device *v11; // rcx
  __int64 v12; // rcx
  _DWORD v14[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+90h] [rbp+30h] BYREF
  ID3D11Device *ppDevice; // [rsp+98h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+A8h] [rbp+48h] BYREF

  *a1 = 0LL;
  v1 = (D3D_DRIVER_TYPE *)v14;
  v18 = 0LL;
  v2 = 0LL;
  ppImmediateContext = 0LL;
  v4 = 0LL;
  v14[0] = 1;
  ppDevice = 0LL;
  v5 = 0;
  v14[1] = 5;
  while ( 1 )
  {
    if ( v2 )
    {
      ppImmediateContext = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v2->lpVtbl->Release)(v2);
      v4 = ppDevice;
    }
    if ( v4 )
    {
      ppDevice = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v4->lpVtbl->Release)(v4);
    }
    Device2 = D3D11CreateDevice(0LL, *v1, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, &ppImmediateContext);
    v7 = Device2;
    if ( Device2 >= 0 )
      break;
    ++v5;
    ++v1;
    if ( v5 >= 2 )
    {
      v8 = 109LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
        (const char *)(unsigned int)Device2);
      goto LABEL_18;
    }
    v4 = ppDevice;
    v2 = ppImmediateContext;
  }
  v9 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Device2 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
              ppDevice,
              &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
              &v18);
  v7 = Device2;
  if ( Device2 < 0 )
  {
    v8 = 110LL;
    goto LABEL_16;
  }
  Device2 = DCompositionCreateDevice2(v18, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, a1);
  v7 = Device2;
  if ( Device2 < 0 )
  {
    v8 = 111LL;
    goto LABEL_16;
  }
  v7 = 0;
LABEL_18:
  v10 = ppImmediateContext;
  if ( ppImmediateContext )
  {
    ppImmediateContext = 0LL;
    ((void (__fastcall *)(ID3D11DeviceContext *))v10->lpVtbl->Release)(v10);
  }
  v11 = ppDevice;
  if ( ppDevice )
  {
    ppDevice = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v11->lpVtbl->Release)(v11);
  }
  v12 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v7;
}
