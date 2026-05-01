/*
 * XREFs of ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAKXZ @ 0x1800ED6D0
 * Callers:
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ @ 0x180101430 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ @ 0x180101960 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ @ 0x180101C90 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::Release(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
