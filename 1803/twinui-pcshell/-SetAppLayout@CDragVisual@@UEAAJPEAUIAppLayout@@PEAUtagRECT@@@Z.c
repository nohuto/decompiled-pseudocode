/*
 * XREFs of ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1802F1760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z @ 0x1802F0E28 (-GetSingleAppFromLayout@@YAJPEAUIAppLayout@@PEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1802F0EDC (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1802F3A1C (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1802F3EB8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803058CC (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x180315C24 (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

__int64 __fastcall CDragVisual::SetAppLayout(CDragVisual *this, struct IAppLayout *a2, struct tagRECT *a3)
{
  __int64 v6; // rcx
  char v7; // r15
  __int64 v8; // rbx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  struct IApplicationView **v12; // r8
  struct IApplicationView *v13; // rdx
  int SingleViewFromLayout; // ebx
  HWND WindowForView; // rax
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // edx
  int v20; // r9d
  bool v21; // zf
  const struct Geometry::CRect *v22; // rdx
  enum DEVICE_SCALE_FACTOR v23; // r8d
  __int64 v24; // rdi
  unsigned __int16 **v25; // r8
  int ViewTitle; // eax
  unsigned int v27; // edi
  char *v28; // rdi
  __int64 v29; // rcx
  float v30; // xmm0_4
  int v31; // eax
  struct tagSIZE *v33; // [rsp+28h] [rbp-71h]
  void *ppvOut; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v35[4]; // [rsp+58h] [rbp-41h] BYREF
  enum DEVICE_SCALE_FACTOR v36[3]; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v37[2]; // [rsp+68h] [rbp-31h] BYREF
  int v38; // [rsp+70h] [rbp-29h]
  ApplicationViewHelpers *v39; // [rsp+78h] [rbp-21h] BYREF
  __int64 v40[2]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int16 *v41[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  ppvOut = (void *)*((_QWORD *)this + 6);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&ppvOut);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v40, (__int64 *)&ppvOut, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = *((_QWORD *)this + 8);
  v7 = 1;
  if ( v6 )
  {
    if ( !*((_QWORD *)this + 18)
      || (*(unsigned int (__fastcall **)(__int64, struct IAppLayout *, __int64))(*(_QWORD *)v6 + 200LL))(v6, a2, 4LL) )
    {
      goto LABEL_12;
    }
    ppvOut = 0LL;
    v41[0] = 0LL;
    v41[1] = 0LL;
    v42 = 0LL;
    v36[0] = DEVICE_SCALE_FACTOR_INVALID;
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( (int)GetSingleAppFromLayout(a2, (struct IImmersiveApplication **)&ppvOut) >= 0
      && (v8 = *((_QWORD *)this + 7),
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v41),
          v41[1] = (unsigned __int16 *)-1LL,
          v42 = -1LL,
          (*(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v8 + 32LL))(v8, v41) >= 0)
      && (*(int (__fastcall **)(void *, unsigned __int16 *, enum DEVICE_SCALE_FACTOR *))(*(_QWORD *)ppvOut + 88LL))(
           ppvOut,
           v41[0],
           v36) >= 0
      && v36[0] )
    {
      v7 = 0;
    }
    else
    {
LABEL_10:
      DestroyWindow(*((HWND *)this + 18));
      *((_QWORD *)this + 18) = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v41);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( v7 )
    {
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
      SetRectEmpty((LPRECT)((char *)this + 200));
      SetRectEmpty((LPRECT)((char *)this + 216));
    }
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a2);
  if ( !*((_DWORD *)this + 30) && *((_DWORD *)this + 77) == -1 )
  {
    if ( *((_BYTE *)this + 253) )
    {
      if ( Geometry::CRect::Contains((CDragVisual *)((char *)this + 232), (const struct tagPOINT *)this + 19) )
        v11 = MulDiv(100, *v9 - *v10, v10[2] - *v10);
      else
        v11 = 50;
      *((_DWORD *)this + 77) = v11;
    }
    else
    {
      *((_DWORD *)this + 77) = *((_BYTE *)this + 249) != 0 ? 20 : 80;
    }
  }
  *((_QWORD *)this + 17) = 0LL;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v39);
  SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(a2, (struct IAppLayout *)&v39, v12);
  if ( SingleViewFromLayout < 0 )
    goto LABEL_61;
  WindowForView = (HWND)*((_QWORD *)this + 18);
  if ( !WindowForView || !v7 )
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v39,
                      v13);
  *((_QWORD *)this + 17) = WindowForView;
  if ( v7 )
  {
    v16 = 0;
    v17 = *((_QWORD *)this + 18);
    if ( *((_DWORD *)this + 31) == 6 || v17 )
      v16 = 0x4000000;
    if ( v17 )
    {
      v16 |= 0x800000u;
      if ( *((_QWORD *)this + 17) )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        if ( IUnknown_QueryService(
               *((IUnknown **)this - 1),
               &IID_ISplashScreenIconicBitmap,
               &GUID_9cc99a99_3470_4985_8fed_1365cd80b8c4,
               &ppvOut) >= 0 )
          (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *((_QWORD *)this + 17));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    v18 = *((_DWORD *)this + 30) - 5;
    *(_OWORD *)v41 = 0LL;
    if ( v18 <= 1 )
    {
      SingleViewFromLayout = DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 17), 0LL, &ppvOut);
      v41[0] = 0LL;
      *(_QWORD *)v37 = 0LL;
      v41[1] = (unsigned __int16 *)ppvOut;
    }
    else
    {
      SingleViewFromLayout = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, unsigned __int16 **))(*(_QWORD *)v39 + 128LL))(
                               v39,
                               v41);
    }
    if ( SingleViewFromLayout < 0 )
      goto LABEL_61;
    if ( Geometry::CRect::IsEmpty((Geometry::CRect *)v41) )
    {
      SingleViewFromLayout = -2147019873;
LABEL_61:
      v27 = SingleViewFromLayout;
      goto LABEL_62;
    }
    v19 = (int)v41[1];
    v20 = (int)v41[0];
    v21 = *((_DWORD *)this + 31) == 4;
    LODWORD(ppvOut) = LODWORD(v41[1]) - LODWORD(v41[0]);
    HIDWORD(ppvOut) = HIDWORD(v41[1]) - HIDWORD(v41[0]);
    if ( !v21 && (v16 & 0x800000) == 0 )
    {
      v22 = (const struct Geometry::CRect *)*((unsigned int *)this + 65);
      v36[0] = LODWORD(v41[1]) - LODWORD(v41[0]);
      v23 = *((_DWORD *)this + 80);
      v36[1] = HIDWORD(v41[1]) - HIDWORD(v41[0]);
      AppLayoutHelpers::GetDragVisualScaledSize(
        (CDragVisual *)((char *)this + 168),
        v22,
        v23,
        (enum DEVICE_SCALE_FACTOR)v36,
        (const struct tagSIZE *)&ppvOut,
        v33);
      v19 = (int)v41[1];
      v20 = (int)v41[0];
    }
    v24 = *((_QWORD *)this + 6);
    v37[1] = HIDWORD(v41[1]) - HIDWORD(v41[0]);
    ppvOut = 0LL;
    v37[0] = v19 - v20;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, struct tagRECT *, GUID *, char *))(*(_QWORD *)v24 + 64LL))(
                             v24,
                             0LL,
                             *((_QWORD *)this + 17),
                             v16,
                             v37,
                             a3,
                             &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                             (char *)this + 80);
    if ( SingleViewFromLayout >= 0 )
    {
      if ( *((_QWORD *)this + 11) )
        (*(void (__fastcall **)(_QWORD, unsigned __int16 **, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 24LL))(
          *((_QWORD *)this + 10),
          v41,
          0LL,
          0LL);
      else
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 11, (__int64 *)this + 10);
      *(_OWORD *)((char *)this + 200) = *(_OWORD *)v41;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  if ( SingleViewFromLayout < 0 )
    goto LABEL_61;
  v41[0] = 0LL;
  v41[1] = 0LL;
  v42 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v41);
  v41[1] = (unsigned __int16 *)-1LL;
  v42 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(v39, (struct IApplicationView *)v41, v25);
  v27 = ViewTitle;
  if ( ViewTitle >= 0 )
  {
    v28 = (char *)this - 24;
    CDragVisual::_SetText((CDragVisual *)((char *)this - 24), v41[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v41);
    if ( v7 )
    {
      if ( !v28[277] )
        CDragVisual::_UpdateThumbnailRect((char *)this - 24, *((unsigned int *)v28 + 37));
      if ( *((_BYTE *)this + 253) && *((_DWORD *)this + 31) == 4 )
        (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 40LL))(
          *((_QWORD *)this + 11),
          (char *)this + 216,
          0LL,
          0LL);
      (*(void (__fastcall **)(_QWORD, enum DEVICE_SCALE_FACTOR *, void **, _BYTE *))(**((_QWORD **)this + 6) + 112LL))(
        *((_QWORD *)this + 6),
        v36,
        &ppvOut,
        v35);
      v29 = *((_QWORD *)this + 11);
      v41[0] = (unsigned __int16 *)__PAIR64__((unsigned int)ppvOut, v36[0]);
      v37[1] = 0;
      v37[0] = 0;
      v30 = (double)v35[0] / 255.0;
      *(float *)&v41[1] = v30;
      v38 = 0;
      v31 = (*(__int64 (__fastcall **)(__int64, int *, unsigned __int16 **))(*(_QWORD *)v29 + 208LL))(v29, v37, v41);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          734LL,
          (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
          (const char *)(unsigned int)v31);
      CDragVisual::_UpdateThumbnail((char *)this - 24, 0LL, 1LL);
    }
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BF,
    (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
    (const char *)(unsigned int)ViewTitle);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v41);
LABEL_62:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v39);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v40);
  return v27;
}
