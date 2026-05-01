/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream_____ptr64____::_2_::FTMEventDelegate::Invoke @ 0x180192800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::Streams::IRandomAccessStream_____ptr64__Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream_____ptr64____::_2_::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  SetEvent(*(HANDLE *)(a1 + 56));
  return 0LL;
}
