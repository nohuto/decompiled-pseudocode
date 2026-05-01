/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::Invoke @ 0x180120B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::Invoke(
        __int64 a1)
{
  unsigned int v2; // ebx

  v2 = CAppViewManager::_ShowAsViewModeWorker(
         *(CAppViewManager **)(a1 + 16),
         *(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode **)(a1 + 24));
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24), v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
