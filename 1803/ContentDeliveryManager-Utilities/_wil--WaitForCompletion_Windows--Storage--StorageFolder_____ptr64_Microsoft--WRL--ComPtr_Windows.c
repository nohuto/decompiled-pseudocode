/*
 * XREFs of _wil::WaitForCompletion_Windows::Storage::StorageFolder_____ptr64_Microsoft::WRL::ComPtr_Windows::Storage::IStorageFolder____::_1_::dtor$0 @ 0x1800C660D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800145DC (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::WaitForCompletion_Windows::Storage::StorageFolder_____ptr64_Microsoft::WRL::ComPtr_Windows::Storage::IStorageFolder____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
