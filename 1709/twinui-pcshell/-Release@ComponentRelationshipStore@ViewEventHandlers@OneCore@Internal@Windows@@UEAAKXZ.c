/*
 * XREFs of ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAKXZ @ 0x180118230
 * Callers:
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ @ 0x18012BAF0 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ @ 0x18012C090 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ @ 0x18012C3A0 (-Release@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::Release(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Microsoft::WRL::FtmBase>::Release(this);
}
