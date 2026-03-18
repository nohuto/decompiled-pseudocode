/*
 * XREFs of ?RequestModernAppClose@@YAHXZ @ 0x1C01C6D78
 * Callers:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C6D00 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 */

__int64 RequestModernAppClose(void)
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rsi
  __int64 *v3; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rax
  __int64 v7; // rcx

  v0 = 0LL;
  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v1 )
    return 0LL;
  if ( gbLockScreenActive )
  {
    LOBYTE(v0) = *(_DWORD *)(v1 + 320) == 17;
    return (unsigned int)v0;
  }
  v3 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v1);
  if ( CompositionInputWindowUIOwner )
    v1 = (__int64)CompositionInputWindowUIOwner;
  TopLevelHost = CoreWindowProp::GetTopLevelHost((struct tagWND *)v1);
  if ( TopLevelHost )
    v1 = (__int64)TopLevelHost;
  TopLevelWindow = GetTopLevelWindow(v1);
  if ( !TopLevelWindow )
    return 0LL;
  do
  {
    if ( *(char *)(TopLevelWindow + 306) < 0 )
      v3 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 120);
  }
  while ( TopLevelWindow );
  if ( !v3 )
    return 0LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x20u, *v3);
  v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 328LL);
  if ( v7 )
    v0 = *(struct tagTHREADINFO **)(v7 + 16);
  CInputGlobals::SetPtiLastWoken(gpInputGlobals, v0, 0);
  return 1LL;
}
