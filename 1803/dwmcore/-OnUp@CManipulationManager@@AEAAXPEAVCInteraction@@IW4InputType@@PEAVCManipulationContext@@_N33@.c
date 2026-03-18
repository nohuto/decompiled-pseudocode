/*
 * XREFs of ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801CEFF4 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF714 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pq @ 0x18019F6A8 (McTemplateU0pq.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1801D0178 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1801D03D4 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?RemoveKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z @ 0x1801D03FC (-RemoveKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801DA378 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801DAD20 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 */

__int64 __fastcall CManipulationManager::OnUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD),
        char a6,
        char a7,
        char a8)
{
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  unsigned int v9; // ebp
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v8 = a5;
  v9 = a4;
  if ( a5 )
  {
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveKey(
      a1 + 120,
      &v15);
    CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveKey(a1 + 160, &v15);
    CManipulationContext::OnContactDepart(v8, a3, v9, a2, a6, a7, a8);
    if ( v8[7] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_CONTACT_DEPARTED;
        goto LABEL_7;
      }
    }
    else
    {
      a5 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        a1 + 144,
        &a5);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_DESTROYED;
LABEL_7:
        McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, v13, (__int64)v8, a3);
      }
    }
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v8)[9])(v8, a3, 0LL);
  }
  LOBYTE(a4) = a7;
  return CManipulationContext::CleanTreeState(a2, 0LL, *(_QWORD *)(a1 + 16), a4, v9);
}
