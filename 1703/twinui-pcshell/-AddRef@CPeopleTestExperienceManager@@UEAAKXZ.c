/*
 * XREFs of ?AddRef@CPeopleTestExperienceManager@@UEAAKXZ @ 0x18005D840
 * Callers:
 *     ?AddRef@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ @ 0x180070E90 (-AddRef@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ @ 0x180070EF0 (-AddRef@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CWelcomeScreenExperienceManager@@WBA@EAAKXZ @ 0x180070F10 (-AddRef@CWelcomeScreenExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
