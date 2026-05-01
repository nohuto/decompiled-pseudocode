/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d__&___ptr64__1_long_::Invoke @ 0x180046C00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d______ptr64__1_long_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CAppViewManager::_ShowViewAsyncWorker(
         *(CAppViewManager **)(a1 + 16),
         *(HWND *)(a1 + 24),
         *(HWND *)(a1 + 32),
         *(_DWORD *)(a1 + 40),
         *(_DWORD *)(a1 + 44),
         *(_BYTE *)(a1 + 48) != 0,
         *(_DWORD *)(a1 + 52),
         *(float *)(a1 + 56),
         *(float *)(a1 + 60),
         0LL,
         0LL,
         *(struct IAsyncCallback **)(a1 + 64));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
