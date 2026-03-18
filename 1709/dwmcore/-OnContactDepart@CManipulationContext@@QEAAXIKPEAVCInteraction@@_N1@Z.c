/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIKPEAVCInteraction@@_N1@Z @ 0x1801A21BC
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18000A370 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x1801A1830 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801A199C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1801A2B60 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        CManipulationContext *this,
        unsigned int a2,
        unsigned int a3,
        struct CInteraction *a4,
        bool a5,
        char a6)
{
  CArrayBasedCoverageSet *v6; // rbx
  int Key; // eax
  __int64 v11; // r14
  CArrayBasedCoverageSet *v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v6 = a4;
  v12 = a4;
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v12);
  if ( !v6 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            (__int64)this + 64,
            (int *)&v13);
    if ( Key == -1 )
    {
      v12 = 0LL;
    }
    else
    {
      v6 = *(CArrayBasedCoverageSet **)(*((_QWORD *)this + 9) + 8LL * Key);
      v12 = v6;
      Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v12);
    }
    Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v12);
    if ( v6 )
      (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( a5 )
  {
    v11 = (__int64)v6;
    if ( v6 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, a3);
        v11 = (*(__int64 (__fastcall **)(CManipulationContext *, __int64))(*(_QWORD *)this + 48LL))(this, v11);
      }
      while ( v11 );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 56LL))(*((_QWORD *)this + 18), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 64,
    &v13);
  if ( !a5
    && (*(unsigned __int8 (__fastcall **)(CArrayBasedCoverageSet *, _QWORD))(*(_QWORD *)v6 + 216LL))(v6, 0LL)
    && (*(unsigned __int8 (__fastcall **)(CArrayBasedCoverageSet *, _QWORD, _QWORD))(*(_QWORD *)v6 + 224LL))(
         v6,
         a2,
         0LL) )
  {
    (*(void (__fastcall **)(CArrayBasedCoverageSet *, _QWORD))(*(_QWORD *)v6 + 232LL))(v6, a2);
  }
  else
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
  CManipulationContext::CleanTreeState(v6, this, *((RTL_SRWLOCK **)this + 6), a6, a3);
  if ( v6 )
    (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v6 + 8LL))(v6);
}
