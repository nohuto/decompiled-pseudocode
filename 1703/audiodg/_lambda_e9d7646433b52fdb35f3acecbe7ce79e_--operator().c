/*
 * XREFs of _lambda_e9d7646433b52fdb35f3acecbe7ce79e_::operator() @ 0x140049BF4
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____ptr64____XWinRT::IntVersionTag_::Do__lambda_e9d7646433b52fdb35f3acecbe7ce79e___lambda_01f654561f6914b7d349bbf6578065e4___ @ 0x1400485D4 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1400485D4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e9d7646433b52fdb35f3acecbe7ce79e_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v5 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v1 + 40))(
         *(_QWORD *)(v1 + 40),
         &GUID_902972bf_a984_5443_b1c5_2f04a99e1fca,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return (unsigned int)v3;
}
