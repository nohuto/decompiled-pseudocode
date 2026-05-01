/*
 * XREFs of ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802838B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x180283164 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z @ 0x180283200 (-_OnContextMenu@CMultitaskingViewFrame@@AEAAXAEBVContextMenuArgs@@@Z.c)
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18028325C (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1802832AC (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1802832FC (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x180283380 (-_OnMouseButtonUp@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1802833F4 (-_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x180283448 (-_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z.c)
 *     ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x180283518 (-_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1802835CC (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1802946E8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x18029478C (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18030CC18 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 */

LRESULT __fastcall CMultitaskingViewFrame::v_WndProc(
        CMultitaskingViewFrame *this,
        HWND a2,
        UINT a3,
        void *a4,
        IRawElementProviderSimple *lParam)
{
  LONG_PTR v5; // r13
  char v6; // r14
  __int64 v10; // r12
  char v11; // al
  __int64 v12; // rcx
  IRawElementProviderSimple *v13; // rax
  CMultitaskingViewFrame *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool *v18; // [rsp+20h] [rbp-20h]
  enum GRID_HOW_SELECTED_FLAGS *v19; // [rsp+28h] [rbp-18h]
  IRawElementProviderSimple *el; // [rsp+30h] [rbp-10h] BYREF
  char v21; // [rsp+38h] [rbp-8h]

  v5 = 0LL;
  v6 = 0;
  if ( a3 > 0x105 )
  {
    if ( a3 > 0x207 )
    {
      if ( a3 != 520 )
      {
        if ( a3 == 533 )
        {
          v17 = *((_QWORD *)this + 309);
          if ( v17 )
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v17 + 232LL))(v17, a2);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
        }
        if ( a3 == 673 )
        {
          LODWORD(el) = (__int16)lParam;
          HIDWORD(el) = SWORD1(lParam);
          CMultitaskingViewFrame::_OnMouseHover(
            (CMultitaskingViewFrame *)((char *)this - 32),
            (const struct Geometry::CPoint *)&el);
          return v5;
        }
        if ( a3 != 675 )
        {
          if ( a3 == 807 )
            CMultitaskingViewFrame::_OnThumbnailSizeChanged((CMultitaskingViewFrame *)((char *)this - 32), a4);
          return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
        }
        v16 = *((_QWORD *)this + 309);
        if ( v16 )
          (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v16 + 216LL))(v16, a2);
        *((_WORD *)this + 1260) = 0;
        return v5;
      }
      goto LABEL_44;
    }
    if ( a3 != 519 )
    {
      if ( a3 == 512 )
      {
        LODWORD(el) = (__int16)lParam;
        HIDWORD(el) = SWORD1(lParam);
        CMultitaskingViewFrame::_OnMouseMove(
          (CMultitaskingViewFrame *)((char *)this - 32),
          (const struct Geometry::CPoint *)&el);
        return v5;
      }
      if ( a3 != 513 )
      {
        if ( a3 == 514 )
          goto LABEL_44;
        if ( a3 != 516 )
        {
          if ( a3 != 517 )
            return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
LABEL_44:
          LODWORD(el) = (__int16)lParam;
          HIDWORD(el) = SWORD1(lParam);
          v11 = CMultitaskingViewFrame::_OnMouseButtonUp(
                  (CMultitaskingViewFrame *)((char *)this - 32),
                  a3,
                  (const struct Geometry::CPoint *)&el);
          goto LABEL_45;
        }
      }
    }
    LODWORD(el) = (__int16)lParam;
    HIDWORD(el) = SWORD1(lParam);
    v11 = CMultitaskingViewFrame::_OnMouseButtonDown((HWND *)this - 4, a3, (const struct Geometry::CPoint *)&el);
    goto LABEL_45;
  }
  if ( a3 == 261 )
    goto LABEL_36;
  if ( a3 > 0x47 )
  {
    switch ( a3 )
    {
      case 0x7Bu:
        el = lParam;
        v21 = 0;
        CMultitaskingViewFrame::_OnContextMenu(
          (CMultitaskingViewFrame *)((char *)this - 32),
          (const struct ContextMenuArgs *)&el);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
      case 0x7Eu:
        AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___((char *)this + 2408, a2);
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
      case 0x100u:
        goto LABEL_33;
    }
    if ( a3 != 257 )
    {
      if ( a3 != 260 )
        return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
LABEL_33:
      v11 = CMultitaskingViewFrame::_OnKeyDown((CMultitaskingViewFrame *)((char *)this - 32), (unsigned int)a4);
      goto LABEL_45;
    }
LABEL_36:
    v11 = CMultitaskingViewFrame::_OnKeyUp((CMultitaskingViewFrame *)((char *)this - 32), (unsigned int)a4);
    goto LABEL_45;
  }
  if ( a3 == 71 )
  {
    CMultitaskingViewFrame::_OnWindowPosChanged((CMultitaskingViewFrame *)((char *)this - 32));
    return v5;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
      v13 = (IRawElementProviderSimple *)*((_QWORD *)this + 1);
    else
      v13 = lParam;
    v14 = (CMultitaskingViewFrame *)((char *)this - 32);
    if ( a4 )
    {
      CMultitaskingViewFrame::_EnsureDesktopZOrder(v14);
    }
    else
    {
      el = v13;
      AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___((char *)v14 + 2440, &el);
    }
    return v5;
  }
  if ( a3 <= 6 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  if ( a3 <= 8 )
  {
    v12 = *((_QWORD *)this + 309);
    if ( v12 )
    {
      LOBYTE(a2) = a3 == 7;
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v12 + 296LL))(v12, a2);
    }
    return v5;
  }
  if ( a3 == 16 || a3 == 20 )
    return v5;
  if ( a3 <= 0x2A )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  if ( a3 <= 0x2C )
  {
    v11 = CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
            *((HWND *)this + 1),
            a3,
            (unsigned __int64)a4,
            (__int64)lParam,
            v18,
            v19);
LABEL_45:
    v6 = v11;
    goto LABEL_46;
  }
  if ( a3 != 61 || lParam != (IRawElementProviderSimple *)-25LL )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  el = 0LL;
  v10 = *((_QWORD *)this + 309);
  if ( v10 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&el);
    if ( (*(int (__fastcall **)(__int64, GUID *, IRawElementProviderSimple **))(*(_QWORD *)v10 + 376LL))(
           v10,
           &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
           &el) >= 0 )
    {
      v5 = UiaReturnRawElementProvider(*((HWND *)this + 1), (WPARAM)a4, -25LL, el);
      v6 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&el);
LABEL_46:
  if ( !v6 )
    return DefWindowProcW(*((HWND *)this + 1), a3, (WPARAM)a4, (LPARAM)lParam);
  return v5;
}
