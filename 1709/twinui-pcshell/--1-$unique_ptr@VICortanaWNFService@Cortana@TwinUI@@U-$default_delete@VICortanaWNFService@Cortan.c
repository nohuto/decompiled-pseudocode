/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800A5648
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801EAD3F (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1801EAD4B (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 *     _TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner_::_1_::dtor$3 @ 0x1801EBCC6 (_TwinUI--Cortana--CortanaPositionerSelector--_GetDesktopExperiencePositioner_--_1_--dtor$3.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801EBDCE (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
