/*
 * XREFs of ?Release@ThumbnailCacheHelper@ContentManagement@@UEAAKXZ @ 0x180006D90
 * Callers:
 *     ?Release@ActionHelper@ContentManagement@@WDA@EAAKXZ @ 0x180021290 (-Release@ActionHelper@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContextualSuggestionsManager@ContentManagement@@WDI@EAAKXZ @ 0x180021390 (-Release@ContextualSuggestionsManager@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x180021580 (-Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ThumbnailCacheHelper::Release(ContentManagement::ThumbnailCacheHelper *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(this);
}
