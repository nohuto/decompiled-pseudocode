/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BC430 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180141368 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180141570 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x18014185C (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     FlushAndWait @ 0x1801C6298 (FlushAndWait.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x1801FE9B0 (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021C744 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x18021D9CC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
