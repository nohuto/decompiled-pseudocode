/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197104
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801973EC (-ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180195910 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18019628C (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801A2358 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v2; // r12
  unsigned int i; // esi
  __int64 v6; // r15
  char *v7; // r14
  CManipulationContext *v8; // rcx
  struct CManipulationContext *v9; // rbx
  struct CInteraction *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD); // [rsp+78h] [rbp+10h] BYREF
  struct CManipulationContext *v12; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 224LL * i;
    v7 = (char *)a2 + v6;
    if ( (*(_DWORD *)((_BYTE *)a2 + v6 + 108) & 0x840000) != 0 )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 120,
        (__int64 (__fastcall ****)(_QWORD))&v12,
        (__int64)(v7 + 100));
      v9 = v12;
      if ( v12 )
      {
        v10 = (struct CInteraction *)(*(__int64 (__fastcall **)(struct CManipulationContext *, _QWORD))(*(_QWORD *)v12 + 24LL))(
                                       v12,
                                       *((unsigned int *)v7 + 25));
        CManipulationManager::OnUp(
          (struct CComposition **)this,
          v10,
          *((_DWORD *)v7 + 25),
          *((_DWORD *)a2 + 24),
          v9,
          0,
          0);
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
    }
    else if ( (*((_BYTE *)a2 + v6 + 108) & 2) == 0 )
    {
      v8 = (CManipulationContext *)*((_QWORD *)this + 33);
      if ( v8 )
        CManipulationContext::OnContactHoverDepart(v8, *((_DWORD *)v7 + 25));
    }
    if ( !v2 && *(_QWORD *)((char *)a2 + v6 + 120) == -1LL )
    {
      v11 = (__int64 (__fastcall ***)(_QWORD))a2;
      v2 = 1;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v11);
      CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
        (char **)this + 23,
        &v11);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v11);
    }
  }
}
