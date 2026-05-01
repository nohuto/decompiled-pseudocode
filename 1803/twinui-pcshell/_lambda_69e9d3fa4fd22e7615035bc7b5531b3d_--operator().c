/*
 * XREFs of _lambda_69e9d3fa4fd22e7615035bc7b5531b3d_::operator() @ 0x180247B94
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::ViewManagement::Core::CoreInputViewOcclusion_____ptr64____XWinRT::IntVersionTag_::Do__lambda_69e9d3fa4fd22e7615035bc7b5531b3d___lambda_e5e4d18c277ba30337411cbd3c6122b5___ @ 0x180245C1C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180245C1C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_69e9d3fa4fd22e7615035bc7b5531b3d_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_0a11958b_63da_5566_913a_180550dad26a,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return (unsigned int)v3;
}
