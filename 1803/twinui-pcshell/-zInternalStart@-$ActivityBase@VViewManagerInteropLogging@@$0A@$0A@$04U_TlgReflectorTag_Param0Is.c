/*
 * XREFs of ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058EA8
 * Callers:
 *     ?StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180091C20 (-StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK.c)
 *     ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x1800F70F4 (-StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z.c)
 *     ?StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801CD318 (-StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801CD450 (-StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801CD588 (-StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801CD6D8 (-StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801DE084 (-StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801DE1D4 (-StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801DE30C (-StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x1801DE444 (-StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 *     ?StartActivity@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXPEAXPEBG@Z @ 0x1801DE590 (-StartActivity@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXPEAX.c)
 *     ?StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x1801DE6EC (-StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 *     ?StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801DE840 (-StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801DE978 (-StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x1801DEAC0 (-StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z.c)
 *     ?StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801DEC28 (-StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x1801E1CA0 (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     ?StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801E66B4 (-StartActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801E67FC (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
