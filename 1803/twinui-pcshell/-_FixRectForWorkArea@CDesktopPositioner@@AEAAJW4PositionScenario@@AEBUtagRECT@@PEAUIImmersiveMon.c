/*
 * XREFs of ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_d40303f400b27b9399fd75f15be23f87_::operator() @ 0x1802BEC1C (_lambda_d40303f400b27b9399fd75f15be23f87_--operator().c)
 *     ?PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1802BF840 (-PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802BFD20 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1802C0744 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_FixRectForWorkArea(
        __int64 a1,
        int a2,
        LONG *a3,
        __int64 a4,
        struct tagRECT *lprc)
{
  LONG v9; // ecx
  LONG v10; // r8d
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  IUnknown *v14; // rcx
  int v15; // eax
  __int64 result; // rax
  int v17; // eax
  LONG right; // edx
  int v19; // ecx
  int v20; // ecx
  LONG bottom; // r8d
  int v22; // r11d
  int v23; // ebx
  int v24; // r8d
  int v25; // r8d
  int v26; // edx
  RECT v27; // xmm0
  struct IApplicationViewTitlebarConfiguration *v28; // [rsp+40h] [rbp-61h] BYREF
  int v29[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h]
  _DWORD v31[2]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-41h] BYREF
  RECT rcSrc1; // [rsp+70h] [rbp-31h] BYREF
  RECT rcSrc2; // [rsp+80h] [rbp-21h] BYREF
  struct tagRECT rcDst; // [rsp+90h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v32[1] = -2LL;
  SetRectEmpty(lprc);
  v9 = *a3;
  rcSrc1.left = *a3;
  v10 = a3[1];
  rcSrc1.top = v10;
  rcSrc1.right = a3[2];
  rcSrc1.bottom = a3[3];
  if ( a2 == 2 )
  {
    v28 = (struct IApplicationViewTitlebarConfiguration *)__PAIR64__(v10, v9);
    v32[0] = __PAIR64__(v10, v9);
    *(_QWORD *)v29 = 0LL;
    v11 = *(_QWORD *)(a1 + 176);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v29);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, GUID *, GUID *, int *))(*(_QWORD *)v11 + 96LL))(
            v11,
            v32,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            v29);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x623,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v29);
      return v13;
    }
    LODWORD(v30) = rcSrc1.right - rcSrc1.left;
    HIDWORD(v30) = rcSrc1.bottom - rcSrc1.top;
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    v15 = CDesktopPositioner::_CreateTitlebarConfiguration(v14, 0LL, &v28);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62A,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      goto LABEL_6;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, struct IApplicationViewTitlebarConfiguration *, _DWORD *))(**(_QWORD **)(a1 + 200) + 48LL))(
      *(_QWORD *)(a1 + 200),
      v30,
      *(_QWORD *)v29,
      0LL,
      1,
      v28,
      v31);
    rcSrc1.right = v31[0] + rcSrc1.left;
    rcSrc1.bottom = v31[1] + rcSrc1.top;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v29);
  }
  rcSrc2 = 0LL;
  if ( a4 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a4 + 88LL))(a4, &rcSrc2);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63A,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v17);
      return v13;
    }
  }
  else if ( (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, &rcSrc1, &rcSrc2) < 0
         && (int)CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)a1, 0LL, &rcSrc2) < 0 )
  {
    goto LABEL_33;
  }
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  UnionRect(&rcDst, &rcSrc1, &rcSrc2);
  if ( EqualRect(&rcDst, &rcSrc2) )
  {
LABEL_33:
    v27 = rcSrc1;
    goto LABEL_34;
  }
  right = rcSrc1.right;
  if ( a2 == 6 )
  {
    v19 = rcSrc2.right - rcSrc2.left;
    if ( rcSrc1.right - rcSrc1.left > rcSrc2.right - rcSrc2.left )
    {
      right = v19 + rcSrc1.left;
      rcSrc1.right = v19 + rcSrc1.left;
    }
    v20 = rcSrc2.bottom - rcSrc2.top;
    bottom = rcSrc1.bottom;
    if ( rcSrc1.bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    {
      bottom = v20 + rcSrc1.top;
      rcSrc1.bottom = v20 + rcSrc1.top;
    }
  }
  else
  {
    bottom = rcSrc1.bottom;
  }
  if ( right - rcSrc1.left > rcSrc2.right - rcSrc2.left || bottom - rcSrc1.top > rcSrc2.bottom - rcSrc2.top )
    return 2147942487LL;
  v22 = rcSrc2.right - right;
  v23 = rcSrc2.bottom - bottom;
  rc = rcSrc1;
  v24 = 0;
  if ( rcSrc2.top - rcSrc1.top >= 0 )
    v24 = rcSrc2.top - rcSrc1.top;
  if ( v23 >= 0 )
    v23 = 0;
  v25 = v23 + v24;
  v26 = 0;
  if ( rcSrc2.left - rcSrc1.left >= 0 )
    v26 = rcSrc2.left - rcSrc1.left;
  if ( v22 >= 0 )
    v22 = 0;
  OffsetRect(&rc, v22 + v26, v25);
  v27 = rc;
LABEL_34:
  result = 0LL;
  *lprc = v27;
  return result;
}
