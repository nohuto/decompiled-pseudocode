/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1802E2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1802E3168 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1802E3710 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802ECA6C (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x180304F48 (-ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // eax
  HFONT GlyphFont; // rax
  void *v6; // rcx
  HFONT v7; // rsi
  int v8; // eax
  unsigned int v9; // esi
  int v11; // eax
  unsigned int v12; // ebx
  enum DEVICE_SCALE_FACTOR v13; // r8d
  unsigned __int16 v14; // ax
  HRESULT v15; // eax
  void *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  HWND v19; // rcx
  struct IApplicationView *v20; // [rsp+40h] [rbp-19h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-11h] BYREF
  int v22[2]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-1h] BYREF
  int X[4]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp+17h] BYREF
  enum DEVICE_SCALE_FACTOR v26; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v25);
  v4 = v26;
  if ( v26 != *((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 14) = v26;
    *((_QWORD *)this + 6) = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont(v4);
    v6 = (void *)*((_QWORD *)this + 6);
    v7 = GlyphFont;
    *((_QWORD *)this + 6) = 0LL;
    if ( v6 )
      DeleteObject(v6);
    *((_QWORD *)this + 6) = v7;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 2LL) == 1 )
  {
    v8 = JointDivider::EnsureWindow((JointDivider *)((char *)this - 24));
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    *(_QWORD *)v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
    v11 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL))(
            a2,
            0LL,
            2LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v11);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
      return v12;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v22 + 56LL))(*(_QWORD *)v22, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v14 = ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
              (ImmersiveApplicationLayout *)(unsigned int)(X[2] - X[0]),
              *((_DWORD *)this + 14),
              v13);
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), (v14 << 16) | 3u);
    }
    if ( !IsPPIEdition() )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v15 = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              (const GUID *const)&SID_ShellTargetingTracker,
              &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
              &ppvOut);
      v12 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x73,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v15);
LABEL_20:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_21;
      }
      v20 = 0LL;
      v16 = ppvOut;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
      v17 = (*(__int64 (__fastcall **)(void *, _BYTE *, struct IApplicationView **))(*(_QWORD *)v16 + 40LL))(
              v16,
              v23,
              &v20);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 119LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
        goto LABEL_20;
      }
      v17 = JointDivider::ShellTargetChanged(this, v20);
      v12 = v17;
      if ( v17 < 0 )
      {
        v18 = 120LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  }
  else
  {
    v19 = (HWND)*((_QWORD *)this + 3);
    if ( v19 )
      ShowWindow(v19, 0);
  }
  return 0LL;
}
