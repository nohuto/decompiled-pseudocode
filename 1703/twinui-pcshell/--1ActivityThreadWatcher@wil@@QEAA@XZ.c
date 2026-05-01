/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18006F014
 * Callers:
 *     __lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator()_::_1_::dtor$0 @ 0x18019A805 (__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator()_--_1_--dtor$0.c)
 *     __lambda_c4af78c0c8077c37e96163482dfb0569_::operator()_::_1_::dtor$0 @ 0x18019A835 (__lambda_c4af78c0c8077c37e96163482dfb0569_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run_::_1_::dtor$0 @ 0x18019C3A5 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run_::_1_::dtor$0 @ 0x18019C3B1 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___--Run_-.c)
 *     __lambda_f748ab983864a1d9251a0884a7c17331_::operator()_::_1_::dtor$0 @ 0x18019DAA2 (__lambda_f748ab983864a1d9251a0884a7c17331_--operator()_--_1_--dtor$0.c)
 *     __lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator()_::_1_::dtor$0 @ 0x1801A10B2 (__lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator()_--_1_--dtor$0.c)
 *     __lambda_00be1f95221eb842538ce67e0fb4e246_::operator()_::_1_::dtor$0 @ 0x1801A55E1 (__lambda_00be1f95221eb842538ce67e0fb4e246_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run_::_1_::dtor$0 @ 0x1801A567D (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run_-.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run_::_1_::dtor$0 @ 0x1801A5725 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run_-.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
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
