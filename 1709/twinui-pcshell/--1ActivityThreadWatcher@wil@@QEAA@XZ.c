/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800710E4
 * Callers:
 *     __lambda_aa48c572b33de96146be9e3e412c5ad4_::operator()_::_1_::dtor$0 @ 0x1801E9220 (__lambda_aa48c572b33de96146be9e3e412c5ad4_--operator()_--_1_--dtor$0.c)
 *     __lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator()_::_1_::dtor$0 @ 0x1801E9268 (__lambda_e1365bb4f253a4ea24e8f51062dc9f67_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___::Run_::_1_::dtor$0 @ 0x1801E999B (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___::Run_::_1_::dtor$0 @ 0x1801EBB0B (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run_::_1_::dtor$0 @ 0x1801EBB17 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run_::_1_::dtor$0 @ 0x1801EE0F8 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___--Run_-.c)
 *     _XamlAllUpViewHost::ViewLoaded_::_1_::dtor$1 @ 0x1801F137C (_XamlAllUpViewHost--ViewLoaded_--_1_--dtor$1.c)
 *     __lambda_439a64ed92fed00dbcb4e6e66f12d415_::operator()_::_1_::dtor$0 @ 0x1801F149B (__lambda_439a64ed92fed00dbcb4e6e66f12d415_--operator()_--_1_--dtor$0.c)
 *     __lambda_05d91f74b5ede77de7d082105d7f406a_::operator()_::_1_::dtor$0 @ 0x1801F7AD8 (__lambda_05d91f74b5ede77de7d082105d7f406a_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run_::_1_::dtor$0 @ 0x1801F7B74 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run_::_1_::dtor$0 @ 0x1801F7C1C (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run_-.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(LPVOID *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx
  HANDLE ProcessHeap; // rax

  v2 = (wil::details::ThreadFailureCallbackHolder *)(this + 4);
  if ( *((_DWORD *)v2 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  if ( *((_BYTE *)this + 24) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  this[2] = 0LL;
}
