/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::Run @ 0x1801CCE50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0A84 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4ViewEventType@ViewManager.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b65209c995f1ff64cab6d619e0087d7___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = ViewEventDispatcher::_RaiseViewEvent(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1192LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v1);
}
