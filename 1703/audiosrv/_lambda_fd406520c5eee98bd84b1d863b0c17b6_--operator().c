/*
 * XREFs of _lambda_fd406520c5eee98bd84b1d863b0c17b6_::operator() @ 0x1800D4ED8
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_______ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::VectorOptions_HSTRING_______ptr64_0_1_0____XWinRT::IntVersionTag_::Do__lambda_fd406520c5eee98bd84b1d863b0c17b6___lambda_c8a22bbcfe638c87f71dc137de074b7a___ @ 0x1800D3F38 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_1800D3F38.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_fd406520c5eee98bd84b1d863b0c17b6_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v6 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v1 + 64))(
         *(_QWORD *)(v1 + 64),
         &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
         &v6);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *(_QWORD *)a1[1]);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v3;
}
