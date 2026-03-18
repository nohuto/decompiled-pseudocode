/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1801DAD20
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x180026454 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801DA378 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801DA4EC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1801DB690 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        Dwm3DRECompositorThunk *a4,
        char a5,
        char a6,
        char a7)
{
  Dwm3DRECompositorThunk *v7; // rbx
  int Key; // eax
  Dwm3DRECompositorThunk *v12; // rsi
  __int64 v13; // rsi
  Dwm3DRECompositorThunk *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v7 = a4;
  v14 = a4;
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v14);
  if ( !v7 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 64,
            (int *)&v15);
    if ( Key == -1 )
    {
      v14 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v14 = *(Dwm3DRECompositorThunk **)(*(_QWORD *)(a1 + 72) + 8LL * Key);
      v7 = v14;
      Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v14);
      v12 = v7;
    }
    Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v14);
    if ( v12 )
      (*(void (__fastcall **)(Dwm3DRECompositorThunk *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  if ( a5 )
  {
    v13 = (__int64)v7;
    if ( v7 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 56LL))(v13, a3);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v13);
      }
      while ( v13 );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 56LL))(*(_QWORD *)(a1 + 144), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    a1 + 64,
    &v15);
  if ( !a5
    && (*(unsigned __int8 (__fastcall **)(Dwm3DRECompositorThunk *, _QWORD))(*(_QWORD *)v7 + 216LL))(v7, 0LL)
    && (*(unsigned __int8 (__fastcall **)(Dwm3DRECompositorThunk *, _QWORD, _QWORD))(*(_QWORD *)v7 + 224LL))(
         v7,
         a2,
         0LL) )
  {
    (*(void (__fastcall **)(Dwm3DRECompositorThunk *, _QWORD))(*(_QWORD *)v7 + 232LL))(v7, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  CManipulationContext::CleanTreeState(v7, a1, *(RTL_SRWLOCK **)(a1 + 48), a6, a3);
  if ( v7 )
    (*(void (__fastcall **)(Dwm3DRECompositorThunk *))(*(_QWORD *)v7 + 8LL))(v7);
}
