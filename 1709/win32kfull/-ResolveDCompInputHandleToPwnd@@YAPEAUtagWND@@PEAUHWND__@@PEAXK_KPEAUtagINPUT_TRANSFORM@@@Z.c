/*
 * XREFs of ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01B9B44
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 * Callees:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006C9C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ResolveInputSinkToPwnd @ 0x1C01BB0D8 (ResolveInputSinkToPwnd.c)
 */

struct tagWND *__fastcall ResolveDCompInputHandleToPwnd(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        struct tagINPUT_TRANSFORM *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 TopLevelWindow; // rbx
  __int64 v10; // rax
  int v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = a4;
  v5 = 0LL;
  v6 = a3;
  v7 = (struct tagWND *)a2;
  if ( (_DWORD)a3 != 6 )
  {
    if ( (_DWORD)a3 )
    {
      LOBYTE(a2) = 1;
      v8 = HMValidateHandleNoSecure(a1, a2, a3, a4);
      v12 = 0;
      TopLevelWindow = v8;
      if ( v8 )
      {
        if ( *(char *)(v8 + 59) >= 0 )
          TopLevelWindow = GetTopLevelWindow(v8);
        if ( TopLevelWindow && *(char *)(TopLevelWindow + 59) >= 0 )
        {
          v10 = ResolveInputSinkToPwnd(v7, v6, &v12);
          v5 = v10;
          if ( v10 && *(char *)(v10 + 59) >= 0 )
            UpdateInputTransformFromHitTest(
              (struct tagWND *)v10,
              (struct tagWND *)TopLevelWindow,
              v7,
              v12,
              a5,
              (struct tagINPUT_TRANSFORM *)&v13);
          else
            v5 = 0LL;
        }
      }
    }
  }
  NtClose(v7);
  return (struct tagWND *)v5;
}
