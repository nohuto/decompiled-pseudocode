/*
 * XREFs of _wil::CallAndWaitForCompletion_Windows::Storage::IStorageFolderStatics_HSTRING_______ptr64_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFolder_____ptr64______ptr64_____ptr64_HSTRING_______ptr64__::_1_::dtor$2 @ 0x1800B93EB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004350 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::CallAndWaitForCompletion_Windows::Storage::IStorageFolderStatics_HSTRING_______ptr64_Windows::Foundation::IAsyncOperation_Windows::Storage::StorageFolder_____ptr64______ptr64_____ptr64_HSTRING_______ptr64__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
