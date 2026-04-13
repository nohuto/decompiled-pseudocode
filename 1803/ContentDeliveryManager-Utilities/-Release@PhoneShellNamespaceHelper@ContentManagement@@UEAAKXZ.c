/*
 * XREFs of ?Release@PhoneShellNamespaceHelper@ContentManagement@@UEAAKXZ @ 0x1800071E0
 * Callers:
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x1800242D0 (-Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x1800243C0 (-Release@ActionHelper@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180024460 (-Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::PhoneShellNamespaceHelper::Release(
        ContentManagement::PhoneShellNamespaceHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(this);
}
