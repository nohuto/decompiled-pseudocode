/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180135F38
 * Callers:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180016678 (-InternalRelease@-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___ @ 0x180135B44 (Windows--Internal--ComTaskPool--QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(
        unsigned int *a1,
        __int128 *a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8[2]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int *v11; // [rsp+60h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
    v8[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
    v8[1] = (__int64)a1;
    v9 = *a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___(v6, v5, a1[12], v8);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(v8);
    if ( v7 >= 0 )
      ++a1[51];
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease((__int64 *)&v11);
    return (unsigned int)v7;
  }
}
