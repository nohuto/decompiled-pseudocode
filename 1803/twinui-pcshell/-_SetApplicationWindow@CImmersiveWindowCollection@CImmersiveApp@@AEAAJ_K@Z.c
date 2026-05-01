/*
 * XREFs of ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180131DA4
 * Callers:
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18012F660 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800484F8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1801321F4 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned __int64 a2,
        bool a3)
{
  int updated; // edi
  __int64 v5; // r8

  updated = CImmersiveApp::CImmersiveWindowCollection::_UpdateZOrderActivation(this, a2, a3);
  if ( updated >= 0 )
  {
    CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
      (CFrameApplicationPresentation **)this,
      **((struct ITaskWindow ***)this + 19),
      v5);
    CImmersiveApp::_UpdateWindowTitleAndButtons(*((CImmersiveApp **)this + 18));
  }
  return (unsigned int)updated;
}
