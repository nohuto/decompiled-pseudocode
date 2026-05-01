/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800226F8
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F4EFC (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C0C80 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 (__fastcall *v7)(CWinRTApplicationView *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  unsigned int v9; // ebx
  int OffsetRectFromSize; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v14; // rbx
  CDesktopPositioner *v15; // rcx
  int fixed; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-59h]
  void *v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+38h] [rbp-41h] BYREF
  int v21; // [rsp+40h] [rbp-39h] BYREF
  struct tagSIZE v22; // [rsp+48h] [rbp-31h] BYREF
  struct tagRECT v23; // [rsp+50h] [rbp-29h] BYREF
  LPVOID pv[4]; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v25; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v26; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  *a4 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v7 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)a2 + 136LL);
  if ( v7 == CWinRTApplicationView::GetAppUserModelId )
    AppUserModelId = CWinRTApplicationView::GetAppUserModelId(a2, (unsigned __int16 **)pv);
  else
    AppUserModelId = v7(a2, (unsigned __int16 **)pv);
  v9 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v11 = (unsigned int)AppUserModelId;
    v12 = 1247LL;
    goto LABEL_7;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, int *))(**((_QWORD **)this + 24) + 24LL))(
                         *((_QWORD *)this + 24),
                         pv[0],
                         &v21);
  v9 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v12 = 1250LL;
LABEL_18:
    v11 = (unsigned int)OffsetRectFromSize;
    goto LABEL_7;
  }
  if ( v21 != 1 )
  {
    v9 = -2147023728;
    v11 = 2147943568LL;
    v12 = 1254LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v11,
      v18);
    goto LABEL_8;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct tagSIZE *))(**((_QWORD **)this + 24) + 40LL))(
                         *((_QWORD *)this + 24),
                         pv[0],
                         &v22);
  v9 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v12 = 1257LL;
    goto LABEL_18;
  }
  OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v22, &v23);
  v9 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v12 = 1263LL;
    goto LABEL_18;
  }
  v20 = 0LL;
  if ( IsRectEmpty(a3) )
  {
    v14 = *((_QWORD *)this + 23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( (*(int (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, pv[0], &v20) >= 0
      && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v20 + 56LL))(v20, &v26) >= 0
      && CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v15, &v26, &v25) >= 0 )
    {
      v23.left = v25.left;
      v23.top = v25.top;
      v23.right = v22.cx + v25.left;
      v23.bottom = v25.top + v22.cy;
    }
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v19);
  fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v19);
  v9 = fixed;
  if ( fixed >= 0 )
  {
    fixed = CDesktopPositioner::_FixPosition(
              (__int64)this,
              2u,
              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v19,
              (__int64 *)a4);
    v9 = fixed;
    if ( fixed >= 0 )
    {
      v9 = 0;
      goto LABEL_30;
    }
    v17 = 1288LL;
  }
  else
  {
    v17 = 1287LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)fixed,
    v18);
LABEL_30:
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_8:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v9;
}
