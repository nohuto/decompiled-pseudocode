/*
 * XREFs of ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180081D70
 * Callers:
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x180087090 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetWindowFramePart(
        struct CTopLevelWindow::WindowFrame *a1,
        unsigned int a2)
{
  struct CBitmapSource *result; // rax

  result = (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 187);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) )
  {
    if ( *((_QWORD *)a1 + 2 * a2 + 188) )
      return (struct CBitmapSource *)*((_QWORD *)a1 + 2 * a2 + 188);
  }
  return result;
}
