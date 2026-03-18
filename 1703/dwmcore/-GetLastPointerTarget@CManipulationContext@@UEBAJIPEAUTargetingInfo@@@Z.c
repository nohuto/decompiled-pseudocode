/*
 * XREFs of ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x1800D2810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180135174 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

__int64 __fastcall CManipulationContext::GetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  int Key; // eax
  _DWORD *v6; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *(_DWORD *)a3 = 0;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)a3 + 1);
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 88,
          &v8);
  if ( Key != -1 )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 12) + 16LL * Key);
    *(_DWORD *)a3 = *v6;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)a3 + 8, v6 + 2);
  }
  return 0LL;
}
