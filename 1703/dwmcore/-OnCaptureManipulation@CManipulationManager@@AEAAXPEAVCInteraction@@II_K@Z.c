/*
 * XREFs of ?OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z @ 0x18018A7B8
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180135174 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

void __fastcall CManipulationManager::OnCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  int Key; // eax
  __int64 v9; // r11
  __int64 v10; // rcx
  struct CInteraction *v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 120,
          (int *)&v12);
  if ( Key != -1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 128) + 8LL * Key);
    v11 = (struct CInteraction *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a3);
    if ( v11 )
    {
      while ( v11 != a2 )
      {
        v11 = (struct CInteraction *)*((_QWORD *)v11 + 28);
        if ( !v11 )
          return;
      }
      (*(void (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, unsigned __int64))(*(_QWORD *)v11 + 184LL))(
        v11,
        a3,
        a4,
        a5);
    }
  }
}
