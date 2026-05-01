/*
 * XREFs of ?AddRef@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x18009F5D0
 * Callers:
 *     ?AddRef@?$SimpleVectorView@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x1800A0790 (-AddRef@-$SimpleVectorView@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Founda.c)
 *     ?AddRef@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800A0830 (-AddRef@ImeNotificationExperienceManager@@W7EAAKXZ.c)
 *     sub_180171FA0 @ 0x180171FA0 (sub_180171FA0.c)
 *     sub_180171FE0 @ 0x180171FE0 (sub_180171FE0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ITaskWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
