/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C
 * Callers:
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // r12d
  int v11; // r15d
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx

  v3 = 0LL;
  if ( a3 )
  {
    v17 = *((_QWORD *)a3 + 2);
    v18 = *((_QWORD *)a1 + 2);
    if ( v17 != v18 )
    {
      if ( !a2 || (v19 = *((_QWORD *)a2 + 2), v19 == v18) || v19 != v17 )
        zzzAttachThreadInput(v18, v17, 0LL);
    }
  }
  if ( a2 )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 && (!a3 || v7 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v8, v7, 1LL);
  }
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)a1;
  v10 = IsTrayWindow((__int64)a1);
  if ( !gpqForeground || (v11 = 1, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
    v11 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_16;
    if ( v10 )
    {
      xxxCallHook(2, v9, 0LL, 0xAu);
      PostShellHookMessagesEx(2u, v9, 0LL);
    }
    v12 = v9;
    v13 = 25;
    v14 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( !v11 )
      v13 = 28;
    goto LABEL_15;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v12 = v9;
      v14 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v11 )
        v13 = 27;
      else
        v13 = 30;
LABEL_15:
      PostIAMShellHookMessageEx(v14, v13, v12);
    }
  }
  else
  {
    v20 = 26;
    if ( !v11 )
      v20 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), v20, v9);
    if ( v10 )
    {
      xxxCallHook(1, v9, 0LL, 0xAu);
      PostShellHookMessagesEx(1u, v9, 0LL);
    }
  }
LABEL_16:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v16 = (void *)ReferenceDwmApiPort(v15);
    DwmAsyncOwnerChange(v16, *(_QWORD *)a1, v3);
  }
}
