/*
 * XREFs of ?QueryInterface@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017B350
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017C5A0 (-QueryInterface@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Intern_ea_18017C5A0.c)
 *     ?QueryInterface@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017C670 (-QueryInterface@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Intern_ea_18017C670.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVectorView<unsigned int>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<unsigned int>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           a1,
           a2,
           a3);
}
