/*
 * XREFs of wil::details::ScopeExitFn__lambda_f908dd7fdf7292fc484c26ff7b466538___::_ScopeExitFn__lambda_f908dd7fdf7292fc484c26ff7b466538___ @ 0x1800C6EF0
 * Callers:
 *     _SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::EnsureDevice_::_1_::dtor$0 @ 0x1800D2329 (_SpatialInteractionDevices--SpatialInteractionController--DeviceHandleScope--EnsureDevice_--_1_-.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?UnableToOpenDevice_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800C375C (-UnableToOpenDevice_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_f908dd7fdf7292fc484c26ff7b466538___::_ScopeExitFn__lambda_f908dd7fdf7292fc484c26ff7b466538___(
        __int64 a1)
{
  PCWSTR StringRawBuffer; // rax
  int *v3; // rsi
  const wchar_t *v4; // rdi
  _DWORD *v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v6; // rcx

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    if ( **(int **)a1 < 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
      v3 = *(int **)a1;
      v4 = StringRawBuffer;
      v5 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v5 )
      {
        if ( *v5 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::UnableToOpenDevice_(v6, *v3, *(_DWORD *)(a1 + 8), v4);
        }
      }
    }
  }
}
