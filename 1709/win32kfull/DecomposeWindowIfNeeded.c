/*
 * XREFs of DecomposeWindowIfNeeded @ 0x1C008A3AC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall DecomposeWindowIfNeeded(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  void *v4; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v2 = ComposeWindow(a1, 6);
    v4 = (void *)ReferenceDwmApiPort(v3);
    DwmAsyncChildStyleChange(v4);
  }
  else
  {
    return 4063234;
  }
  return v2;
}
