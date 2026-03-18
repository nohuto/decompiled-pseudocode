/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x1801E1678
 * Callers:
 *     CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x1801DEA30 (CAsyncTask_CD3DDeviceLevel1--D3D12Resources_--Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x1801DEC30 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
        struct _TP_WORK **a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
