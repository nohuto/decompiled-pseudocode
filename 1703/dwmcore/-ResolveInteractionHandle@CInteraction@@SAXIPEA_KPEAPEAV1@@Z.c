/*
 * XREFs of ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801672AC
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18018AD60 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18007E21C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteraction::ResolveInteractionHandle(unsigned int a1, unsigned __int64 *a2, struct CInteraction **a3)
{
  struct CInteraction *v6; // rbx
  struct CInteraction::HANDLE_ENTRY *Entry; // rax
  CArrayBasedCoverageSet *v8; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v8 = 0LL;
    AcquireSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(a1);
    if ( Entry )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=(&v8, *((CArrayBasedCoverageSet **)Entry + 1));
      v6 = v8;
      if ( v8 )
      {
        if ( a2 )
        {
          if ( *a2 < *((_QWORD *)v8 + 165) )
          {
            v6 = 0LL;
            (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v8 + 8LL))(v8);
          }
        }
      }
    }
    *a3 = v6;
    ReleaseSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
  }
}
