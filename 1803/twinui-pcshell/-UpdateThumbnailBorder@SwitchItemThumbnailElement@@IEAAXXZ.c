/*
 * XREFs of ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18029DBC8
 * Callers:
 *     ?SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z @ 0x18029D8C0 (-SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18029DE70 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x18029E070 (-v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElem.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180095C04 (-IsHighContrast@@YAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x180296C00 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x18029D458 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x18029D4A4 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 */

void __fastcall SwitchItemThumbnailElement::UpdateThumbnailBorder(SwitchItemThumbnailElement *this)
{
  int v2; // eax
  __int64 *v3; // rsi
  __int64 v4; // rdi
  float *OuterBorderInfo; // rbx
  __int64 InnerBorderInfo; // rax
  int v7; // eax
  float v8[3]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[28]; // [rsp+2Ch] [rbp-1Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 74) )
  {
    LOBYTE(v2) = CMultitaskingViewButtonElement::_CalcButtonRenderMode((__int64)this);
    if ( (unsigned int)(v2 - 1) <= 1 || (unsigned int)IsHighContrast() )
    {
      v3 = (__int64 *)*((_QWORD *)this + 74);
      v4 = *v3;
      OuterBorderInfo = SwitchItemThumbnailElement::GetOuterBorderInfo((__int64)this, v8);
      InnerBorderInfo = SwitchItemThumbnailElement::GetInnerBorderInfo((__int64)this, (__int64)v9);
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, float *))(v4 + 208))(v3, InnerBorderInfo, OuterBorderInfo);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          246LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v7);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 74) + 216LL))(*((_QWORD *)this + 74));
    }
  }
}
