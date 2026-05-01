/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800BE548
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019CAA3 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner_::_1_::dtor$3 @ 0x18019CC79 (_TwinUI--Cortana--CortanaPositionerSelector--_GetDesktopExperiencePositioner_--_1_--dtor$3.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019CC85 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
