/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18011BCCC
 * Callers:
 *     ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x180114060 (-HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18011B9B4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18011BAEC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18011BD34 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 */

void __fastcall WindowReadyState::_WaitForUnfreezeIfNecessary(HWND *this)
{
  HWND v2; // rcx
  int *v3; // rdi
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v3 = (int *)(this + 1);
    if ( !*((_DWORD *)this + 2) )
    {
      pvAttribute = 0;
      DwmGetWindowAttribute(v2, 0xFu, &pvAttribute, 4u);
      if ( pvAttribute )
      {
        v5 = *v3;
        *v3 = v5 | 4;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          this,
          &v5);
      }
    }
  }
}
