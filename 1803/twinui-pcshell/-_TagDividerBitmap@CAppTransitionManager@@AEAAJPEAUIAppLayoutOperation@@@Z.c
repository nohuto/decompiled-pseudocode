/*
 * XREFs of ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802ADCCC
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802ABCD0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x1800F804C (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800FA334 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YA.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1802AD59C (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180304F9C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagDividerBitmap(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  int v3; // eax
  unsigned int LastError; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  int v6; // eax
  HDC CompatibleDC; // rbx
  CAppTransitionManager *v8; // rcx
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  HWND ShellWindow; // rax
  HBITMAP v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  HBITMAP v16; // [rsp+40h] [rbp-29h] BYREF
  int v17; // [rsp+48h] [rbp-21h] BYREF
  int v18; // [rsp+4Ch] [rbp-1Dh]
  int v19; // [rsp+50h] [rbp-19h]
  int v20; // [rsp+54h] [rbp-15h]
  BITMAPINFO pbmi; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v22[4]; // [rsp+88h] [rbp+1Fh] BYREF
  int v23; // [rsp+8Ch] [rbp+23h]
  int v24; // [rsp+94h] [rbp+2Bh]
  enum DEVICE_SCALE_FACTOR v25; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v3 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v15);
  LastError = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26E,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_19;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 24LL))(v15, v22);
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v22, v5);
  v17 = 0;
  v18 = 0;
  v19 = v6;
  v20 = v24 - v23;
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)&v17) )
    goto LABEL_18;
  CompatibleDC = CreateCompatibleDC(0LL);
  if ( !CompatibleDC )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  memset_0(&pbmi.bmiHeader.biWidth, 0, 0x28uLL);
  pbmi.bmiHeader.biCompression = 0;
  pbmi.bmiHeader.biWidth = v19 - v17;
  pbmi.bmiHeader.biHeight = v18 - v20;
  pbmi.bmiHeader.biSize = 40;
  *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
  v16 = CreateDIBSection(CompatibleDC, &pbmi, 0, 0LL, 0LL, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
    &v14,
    &v16);
  if ( v14 )
  {
    v10 = CAppTransitionManager::_PaintDividerForDWM(v8, CompatibleDC, v14, &pbmi, v25);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 644LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_13;
    }
    ShellWindow = GetShellWindow();
    v10 = DwmpTransitionBitmap(ShellWindow, v14, 22LL, &v17, &v17);
    LastError = v10;
    if ( v10 < 0 )
    {
      v11 = 647LL;
      goto LABEL_12;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>((void **)&v14);
    DeleteDC(CompatibleDC);
LABEL_18:
    LastError = 0;
    goto LABEL_19;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x282,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                v9);
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>((void **)&v14);
LABEL_14:
  if ( CompatibleDC )
    DeleteDC(CompatibleDC);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return LastError;
}
