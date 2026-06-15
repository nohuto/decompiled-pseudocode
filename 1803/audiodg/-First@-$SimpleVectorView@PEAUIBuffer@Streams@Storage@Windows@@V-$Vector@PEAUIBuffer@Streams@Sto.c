/*
 * XREFs of ?First@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAUIBuffer@Streams@Storage@Windows@@@345@@Z @ 0x14004AAC0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____ptr64____XWinRT::IntVersionTag_::Do__lambda_e9d7646433b52fdb35f3acecbe7ce79e___lambda_01f654561f6914b7d349bbf6578065e4___ @ 0x140047C04 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140047C04.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v4; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v4 = &v5;
  v3[0] = a1 - 16;
  v3[1] = &v5;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____ptr64____XWinRT::IntVersionTag_::Do__lambda_e9d7646433b52fdb35f3acecbe7ce79e___lambda_01f654561f6914b7d349bbf6578065e4___(
           (unsigned int *)(a1 - 16 + 48),
           *(_QWORD *)(a1 - 16 + 40),
           (__int64)v3,
           &v4);
}
