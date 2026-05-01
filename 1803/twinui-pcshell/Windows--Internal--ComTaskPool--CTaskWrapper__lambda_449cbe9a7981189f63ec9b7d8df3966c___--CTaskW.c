/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_449cbe9a7981189f63ec9b7d8df3966c___::CTaskWrapper__lambda_449cbe9a7981189f63ec9b7d8df3966c_____lambda_449cbe9a7981189f63ec9b7d8df3966c___ @ 0x18012C248
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_449cbe9a7981189f63ec9b7d8df3966c___ @ 0x18012C864 (Windows--Internal--ComTaskPool--QueueTask__lambda_449cbe9a7981189f63ec9b7d8df3966c___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ @ 0x180090E78 (-InternalAddRef@-$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_449cbe9a7981189f63ec9b7d8df3966c___::CTaskWrapper__lambda_449cbe9a7981189f63ec9b7d8df3966c_____lambda_449cbe9a7981189f63ec9b7d8df3966c___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180326800;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  return a1;
}
