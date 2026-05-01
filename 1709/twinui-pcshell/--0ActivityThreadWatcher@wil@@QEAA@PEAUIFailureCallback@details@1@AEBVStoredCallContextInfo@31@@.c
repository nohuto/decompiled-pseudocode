/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C
 * Callers:
 *     _lambda_aa48c572b33de96146be9e3e412c5ad4_::operator() @ 0x1800685B0 (_lambda_aa48c572b33de96146be9e3e412c5ad4_--operator().c)
 *     _lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator() @ 0x180068BCC (_lambda_e1365bb4f253a4ea24e8f51062dc9f67_--operator().c)
 *     _lambda_3dca9bc61b2dec62e80cc000dd474755_::operator() @ 0x180069208 (_lambda_3dca9bc61b2dec62e80cc000dd474755_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_3a8de745e4864761b0fe42eebb248ca2___::Invoke @ 0x1800790C0 (CAsyncCallbackWithLambda__lambda_3a8de745e4864761b0fe42eebb248ca2___--Invoke.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run @ 0x1800C9260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run @ 0x1800C9350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___::Run @ 0x180117B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20c41668bf63e4a56980cdec2b4f71f2___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca651380094f5bc4672f860ee3183d95___::Run @ 0x180117C90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ca651380094f5bc4672f860ee3183d95___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___::Run @ 0x180145140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___::Run @ 0x180145260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5b1f275bf309deb67bee58a4dcb93f43___--Run.c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1801590C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180159450 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     _lambda_439a64ed92fed00dbcb4e6e66f12d415_::operator() @ 0x18015A2FC (_lambda_439a64ed92fed00dbcb4e6e66f12d415_--operator().c)
 *     _lambda_05d91f74b5ede77de7d082105d7f406a_::operator() @ 0x1801D2114 (_lambda_05d91f74b5ede77de7d082105d7f406a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801D4700 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run @ 0x1801DC0D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rsi
  __int64 v6; // rax
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *Local; // rcx

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  if ( *((_BYTE *)a3 + 24) )
  {
    v5 = (_WORD *)*((_QWORD *)a3 + 2);
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 )
    {
      v7 = 2 * v6 + 2;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, v7);
      *((_QWORD *)this + 2) = v9;
      if ( v9 )
      {
        *((_BYTE *)this + 24) = 1;
        if ( v7 )
        {
          if ( v5 )
          {
            memcpy_0(v9, v5, v7);
          }
          else
          {
            memset(v9, 0, v7);
            *(_DWORD *)_o__errno(v10) = 22;
            invalid_parameter_noinfo();
          }
        }
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = *((_QWORD *)a3 + 2);
  }
  v11 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
  else
    Local = 0LL;
  *v11 = Local;
  if ( Local )
  {
    *((_QWORD *)this + 6) = *Local;
    *Local = v11;
    *((_DWORD *)this + 14) = GetCurrentThreadId();
  }
  return this;
}
