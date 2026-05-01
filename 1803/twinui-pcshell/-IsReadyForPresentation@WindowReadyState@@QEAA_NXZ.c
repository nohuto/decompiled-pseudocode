/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18005B684
 * Callers:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1800FABE4 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1801F4BB0 (-get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 2) )
      return 1;
  }
  return result;
}
