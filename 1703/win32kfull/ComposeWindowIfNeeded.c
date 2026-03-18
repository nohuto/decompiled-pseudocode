/*
 * XREFs of ComposeWindowIfNeeded @ 0x1C0022184
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetDisplayAffinity @ 0x1C0211780 (SetDisplayAffinity.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall ComposeWindowIfNeeded(__int64 a1, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax

  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v4) )
  {
    v5 = ComposeWindow((struct tagWND *)a1, a2 != 0 ? 13 : 5);
    v11 = (void *)ReferenceDwmApiPort(v8, v7, v9, v10);
    DwmAsyncChildStyleChange(v11, *(_QWORD *)a1, -16, *(_DWORD *)(a1 + 68));
  }
  else
  {
    return 4063234;
  }
  return v5;
}
