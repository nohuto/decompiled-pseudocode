/*
 * XREFs of ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4300
 * Callers:
 *     ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4950 (-s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18029366C (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x1802F0EDC (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1802F2804 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x1802F2D0C (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x1802F2EBC (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1802F2F38 (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F2FD4 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1802F30B0 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1802F3124 (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F31B0 (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F325C (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1802F33E4 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1802F35C0 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1802F3600 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1802F3710 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x1802F3B00 (-_ShouldHandleInput@CDragVisual@@AEAA_NI@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1802F3B70 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x1802F4928 (-s_IsPointerIdTouch@CDragVisual@@CA_NI@Z.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F837C (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 */

LONG_PTR __fastcall CDragVisual::_WndProc(CDragVisual *this, HWND hWnd, UINT Msg, void *a4, LPARAM lParam)
{
  UINT v7; // r12d
  HWND v8; // r13
  __int64 v9; // rbx
  bool v10; // si
  LONG_PTR v11; // r15
  _QWORD *v12; // r12
  const struct _GUID *v13; // rdx
  bool v14; // zf
  __int64 v15; // rbx
  int SingleViewFromLayout; // eax
  __int64 v17; // rdx
  struct IApplicationView **v18; // r8
  __int64 v19; // rcx
  HWND v20; // rdx
  struct tagPOINT *v21; // rax
  HWND v22; // rdx
  struct tagPOINT *v23; // rax
  HWND v24; // rdx
  struct tagPOINT *v25; // rax
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  IRawElementProviderSimple *el; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  HWND v31; // [rsp+78h] [rbp+48h]
  UINT v32; // [rsp+80h] [rbp+50h]

  v32 = Msg;
  v31 = hWnd;
  ppvOut = this;
  v7 = Msg;
  v8 = hWnd;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&ppvOut);
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( v7 <= 0x202 )
  {
    if ( v7 == 514 )
    {
      if ( CDragVisual::_ShouldHandleInput(this, 0x202u) )
      {
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        CDragVisual::_OnLButtonUp(this, (struct tagPOINT)ppvOut);
        goto LABEL_82;
      }
      goto LABEL_81;
    }
    if ( v7 == 6 )
    {
      if ( !a4 && CDragVisual::_ShouldHandleInput(this, 6u) )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        if ( IUnknown_QueryService(
               *((IUnknown **)this + 2),
               &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
               &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
               &ppvOut) >= 0 )
          v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 96LL))(ppvOut);
        if ( lParam != v9 )
          PostMessageW(*((HWND *)this + 19), 0x401u, 0LL, 0LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    else
    {
      switch ( v7 )
      {
        case 0x10u:
          goto LABEL_82;
        case 0x14u:
          v11 = 1LL;
          goto LABEL_82;
        case 0x21u:
          v10 = *((_DWORD *)this + 37) != 6;
          v11 = v10 ? 3 : 0;
          goto LABEL_80;
      }
      if ( v7 != 61 )
      {
        switch ( v7 )
        {
          case 0x47u:
            goto LABEL_82;
          case 0x100u:
            if ( CDragVisual::_ShouldHandleInput(this, 0x100u) )
            {
              CDragVisual::_OnKeyDown(this, (int)a4);
              goto LABEL_82;
            }
            break;
          case 0x200u:
            if ( CDragVisual::_ShouldHandleInput(this, 0x200u) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnMouseMove(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
          default:
            if ( v7 == 513 && CDragVisual::_ShouldHandleInput(this, 0x201u) )
            {
              LODWORD(ppvOut) = (__int16)lParam;
              HIDWORD(ppvOut) = SWORD1(lParam);
              CDragVisual::_OnLButtonDown(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
        }
        goto LABEL_81;
      }
      if ( *((_BYTE *)this + 272) && lParam == -25 )
      {
        v12 = (_QWORD *)((char *)this + 96);
        if ( *((_QWORD *)this + 12) || !*((_QWORD *)this + 17) )
          goto LABEL_32;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
        if ( (int)CDragVisualAcc_CreateInstance((CDragVisual *)((char *)this + 24), v13, (void **)this + 12) < 0 )
        {
LABEL_31:
          v8 = v31;
LABEL_32:
          el = 0LL;
          if ( *v12 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&el);
            if ( (**(int (__fastcall ***)(_QWORD, GUID *, IRawElementProviderSimple **))*v12)(
                   *v12,
                   &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                   &el) >= 0 )
            {
              v11 = UiaReturnRawElementProvider(*((HWND *)this + 19), (WPARAM)a4, -25LL, el);
              v10 = 1;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&el);
          v7 = v32;
LABEL_80:
          if ( v10 )
            goto LABEL_82;
          goto LABEL_81;
        }
        v14 = *((_DWORD *)this + 37) == 6;
        v27 = 0LL;
        ppvOut = 0LL;
        if ( v14 )
        {
          v15 = *((_QWORD *)this + 17);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          SingleViewFromLayout = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 72LL))(v15, &v27);
          if ( SingleViewFromLayout >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&ppvOut);
            SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                                     *((AppLayoutHelpers **)this + 11),
                                     (struct IAppLayout *)&ppvOut,
                                     v18);
            if ( SingleViewFromLayout >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, void *, __int64))(*(_QWORD *)*v12 + 88LL))(*v12, ppvOut, v27);
              goto LABEL_30;
            }
            v17 = 2282LL;
          }
          else
          {
            v17 = 2281LL;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            v17,
            (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)SingleViewFromLayout);
        }
LABEL_30:
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 216LL))((char *)this + 24);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        goto LABEL_31;
      }
    }
    goto LABEL_81;
  }
  switch ( v7 )
  {
    case 0x215u:
      CDragVisual::_OnCaptureChanged(this);
      v10 = 1;
      goto LABEL_80;
    case 0x245u:
      if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
        goto LABEL_81;
      if ( CDragVisual::_ShouldHandleInput(this, 0x245u) )
      {
        v24 = (HWND)*((_QWORD *)this + 19);
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        v25 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v24, (LONG *)&ppvOut);
        CDragVisual::_OnPointerUpdate(this, (unsigned __int16)a4, *v25);
      }
      break;
    case 0x246u:
      if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
        goto LABEL_81;
      if ( CDragVisual::_ShouldHandleInput(this, 0x246u) )
      {
        v22 = (HWND)*((_QWORD *)this + 19);
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        v23 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v22, (LONG *)&ppvOut);
        CDragVisual::_OnPointerDown(this, (unsigned __int16)a4, *v23);
      }
      break;
    case 0x247u:
      if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
        goto LABEL_81;
      if ( CDragVisual::_ShouldHandleInput(this, 0x247u) )
      {
        v20 = (HWND)*((_QWORD *)this + 19);
        LODWORD(ppvOut) = (__int16)lParam;
        HIDWORD(ppvOut) = SWORD1(lParam);
        v21 = Geometry::CPoint::ScreenToClient((struct tagPOINT *)&el, v20, (LONG *)&ppvOut);
        if ( (_WORD)a4 )
        {
          if ( (unsigned __int16)a4 == *((_DWORD *)this + 82) )
          {
            if ( *((_BYTE *)this + 325) )
            {
              CDragVisual::_OnFinishDrag(this, (unsigned __int16)a4, *v21);
              *((_BYTE *)this + 325) = 0;
            }
            else
            {
              CDragVisual::_OnClick((HWND *)this, *v21);
            }
            *((_DWORD *)this + 82) = 0;
          }
        }
      }
      break;
    case 0x24Cu:
      CDragVisual::_OnPointerCaptureChanged(this, (unsigned __int16)a4);
      break;
    case 0x2A3u:
      if ( !CDragVisual::_ShouldHandleInput(this, 0x2A3u) )
      {
LABEL_81:
        v11 = DefWindowProcW(v8, v7, (WPARAM)a4, lParam);
        break;
      }
      CDragVisual::_TrackMouseLeave(this, 0);
      if ( *((HWND *)this + 19) != GetCapture() && !*((_DWORD *)this + 82) )
        CDragVisual::_ClearVisualFeedback(this);
      break;
    default:
      switch ( v7 )
      {
        case 0x327u:
          CDragVisual::_OnAppWindowSizeChanged(this, a4);
          break;
        case 0x401u:
          CDragVisual::_OnCancelDrag(this);
          break;
        case 0x402u:
          v19 = *((_QWORD *)this + 12);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
          break;
      }
      goto LABEL_81;
  }
LABEL_82:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
  return v11;
}
