/*
 * XREFs of ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180193728
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18004D330 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801926E4 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180192A60 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 */

__int64 __fastcall CManipulationContext::OnNewContact(
        CManipulationContext *this,
        struct CInteractionChain *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5)
{
  CArrayBasedCoverageSet *v5; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // r14
  _BYTE *v13; // rcx
  bool v14; // bl
  _QWORD *i; // rsi
  CArrayBasedCoverageSet *v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v17 = (CArrayBasedCoverageSet *)*((_QWORD *)a2 + 1);
  v5 = v17;
  Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v17);
  v12 = (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                        (__int64)this + 64,
                        (__int64)&v18,
                        (__int64)&v17) == 0;
  if ( v5 )
    (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !v12 )
  {
    v13 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (v13[200] & 4) != 0
      && (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, a4, 0LL, 0LL) )
    {
      *((_BYTE *)this + 28) |= 2u;
    }
    NtDCompositionUpdatePointerCapture(*(unsigned int *)(*((_QWORD *)a2 + 1) + 196LL), a3);
    if ( !*((_QWORD *)this + 7) )
      Microsoft::WRL::ComPtr<CInteraction>::operator=(
        (CArrayBasedCoverageSet **)this + 7,
        *(CArrayBasedCoverageSet **)a2);
    *((_BYTE *)this + 28) ^= (*((_BYTE *)this + 28) ^ (8
                                                     * CManipulationContext::CheckForSingleTarget(
                                                         *((const struct CInteraction **)this + 7),
                                                         (const struct InputSinkAndEndpoints *)(*((_QWORD *)this + 7)
                                                                                              + 64LL)))) & 8;
  }
  v14 = a5;
  if ( !a5 || (*((_BYTE *)this + 28) & 1) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a2 + 1); i; i = (_QWORD *)i[28] )
    {
      LOBYTE(v10) = !v14;
      LOBYTE(v11) = *((_BYTE *)this + 28) & 1;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD))(*i + 40LL))(i, v10, v11, a4);
    }
    LOBYTE(v10) = !v14;
    LOBYTE(v11) = *((_BYTE *)this + 28) & 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 18) + 40LL))(
      *((_QWORD *)this + 18),
      v10,
      v11,
      a4);
  }
  return v12 ? 0x8007000E : 0;
}
