/*
 * XREFs of ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019D530
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 * Callees:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002800 (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ResolveInputSinkToPwnd @ 0x1C01A0DB8 (ResolveInputSinkToPwnd.c)
 */

struct tagWND *__fastcall ResolveDCompInputHandleToPwnd(
        unsigned __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagINPUT_TRANSFORM *a5)
{
  struct tagWND *v5; // rdi
  __int64 v8; // rax
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *v11; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v5 = 0LL;
  if ( a3 != 6 )
  {
    if ( a3 )
    {
      v8 = HMValidateHandleNoSecure(a1, 1);
      LODWORD(v11) = 0;
      TopLevelWindow = (struct tagWND *)v8;
      if ( v8 )
      {
        if ( *(char *)(v8 + 59) >= 0 )
          TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v8);
        if ( TopLevelWindow )
        {
          v5 = (struct tagWND *)ResolveInputSinkToPwnd(a2, a3, &v11);
          if ( v5 )
            UpdateInputTransformFromHitTest(
              v5,
              TopLevelWindow,
              a2,
              (struct tagWND *)(unsigned int)v11,
              a5,
              (struct tagINPUT_TRANSFORM *)&v12);
        }
      }
    }
  }
  NtClose(a2);
  return v5;
}
