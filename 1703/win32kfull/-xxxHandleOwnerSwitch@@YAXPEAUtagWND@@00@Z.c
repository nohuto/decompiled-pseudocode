/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C
 * Callers:
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // r12d
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rax
  __int64 v23; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 )
    {
      if ( !a2 || (v23 = *((_QWORD *)a2 + 2), v23 == v8) || v23 != v7 )
        zzzAttachThreadInput(v8, v7, 0LL);
    }
  }
  if ( a2 )
  {
    v9 = *((_QWORD *)a2 + 2);
    v10 = *((_QWORD *)a1 + 2);
    if ( v9 != v10 && (!a3 || v9 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v10, v9, 1LL);
  }
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)a1;
  v12 = IsTrayWindow((__int64)a1);
  if ( !gpqForeground || (v13 = 1, *(struct tagWND **)(gpqForeground + 88LL) != a1) )
    v13 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_24;
    if ( v12 )
    {
      xxxCallHook(2, v11, 0LL, 0xAu);
      PostShellHookMessagesEx(2u, v11, 0LL);
    }
    v15 = v11;
    v16 = 25LL;
    v17 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v13 )
      v16 = 28LL;
    goto LABEL_23;
  }
  if ( a2 )
  {
    if ( a3 == a2 )
      goto LABEL_24;
    v15 = v11;
    v17 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v13 )
      v16 = 27LL;
    else
      v16 = 30LL;
LABEL_23:
    PostIAMShellHookMessageEx(v17, v16, v15);
    goto LABEL_24;
  }
  v14 = 26LL;
  if ( !v13 )
    v14 = 29LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v14, v11);
  if ( v12 )
  {
    xxxCallHook(1, v11, 0LL, 0xAu);
    PostShellHookMessagesEx(1u, v11, 0LL);
  }
LABEL_24:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v22 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
    DwmAsyncOwnerChange(v22, *(_QWORD *)a1, v3);
  }
}
