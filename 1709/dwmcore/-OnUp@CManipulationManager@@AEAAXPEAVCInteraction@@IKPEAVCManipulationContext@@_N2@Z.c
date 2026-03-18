/*
 * XREFs of ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180196A14 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197104 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pq @ 0x180175258 (McTemplateU0pq.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180197AC8 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?RemoveKey@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBI@Z @ 0x180197D18 (-RemoveKey@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBI@Z.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180197D40 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x1801A1830 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x1801A21BC (-OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z.c)
 */

void __fastcall CManipulationManager::OnUp(
        struct CComposition **this,
        struct CInteraction *a2,
        unsigned int a3,
        unsigned int a4,
        struct CManipulationContext *a5,
        bool a6,
        bool a7)
{
  struct CManipulationContext *v7; // rbx
  EVENT_DESCRIPTOR *v12; // rdx
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v7 = a5;
  if ( a5 )
  {
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveKey(
      this + 15,
      &v13);
    CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::RemoveKey(this + 20, &v13);
    CManipulationContext::OnContactDepart(v7, a3, a4, a2, a6, a7);
    if ( *((_QWORD *)v7 + 7) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v12 = (EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_CONTACT_DEPARTED;
        goto LABEL_7;
      }
    }
    else
    {
      a5 = v7;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        this + 18,
        &a5);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v12 = (EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_DESTROYED;
LABEL_7:
        McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, v12, (__int64)v7, a3);
      }
    }
    (*(void (__fastcall **)(struct CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, a3, 0LL);
    return;
  }
  CManipulationContext::CleanTreeState(a2, 0LL, this[2], a7, a4);
}
