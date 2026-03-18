/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C009286C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v7; // rcx
  void *v8; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v5 = ComposeWindow(a1, a2 != 0 ? 13 : 5);
    v8 = (void *)ReferenceDwmApiPort(v7);
    DwmAsyncChildStyleChange(v8, *(_QWORD *)a1, -16, *((_DWORD *)a1 + 17));
  }
  else
  {
    return 4063234;
  }
  return v5;
}
