/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___ @ 0x180136304
 * Callers:
 *     ?EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136B20 (-EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x180135EA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___(
        unsigned int *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v10 = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    v8[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
    v8[1] = (__int64)a1;
    v8[2] = a2;
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___(v6, v5, a1[12], v8);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v8);
    if ( v4 >= 0 )
      ++a1[51];
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease((__int64 *)&v10);
  }
  return (unsigned int)v4;
}
