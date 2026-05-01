/*
 * XREFs of ?RefreshBackground@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x180292C60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x180293960 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1802944DC (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 */

void __fastcall CMultitaskingViewFrameElement::RefreshBackground(CMultitaskingViewFrameElement *this)
{
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  refreshed = CMultitaskingViewFrameElement::_RefreshBackgroundThumbnails((CMultitaskingViewFrameElement *)((char *)this - 216));
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      571LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)refreshed);
    AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 9));
  }
}
