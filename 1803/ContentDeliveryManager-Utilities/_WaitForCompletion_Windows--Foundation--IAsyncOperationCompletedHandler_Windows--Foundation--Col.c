/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_____ptr64______ptr64__Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_____ptr64______ptr64____::_2_::FTMEventDelegate::Invoke @ 0x180019120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_____ptr64______ptr64__Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_____ptr64______ptr64____::_2_::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  SetEvent(*(HANDLE *)(a1 + 56));
  return 0LL;
}
