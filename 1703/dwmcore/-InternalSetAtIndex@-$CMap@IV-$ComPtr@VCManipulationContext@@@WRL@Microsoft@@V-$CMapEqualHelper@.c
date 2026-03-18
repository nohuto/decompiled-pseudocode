/*
 * XREFs of ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18018A340
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180193EC4 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::InternalSetAtIndex(
        _QWORD *a1,
        int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // r10
  _DWORD *v5; // rdx
  __int64 result; // rax
  __int64 (__fastcall ****v7)(_QWORD); // rcx

  v4 = a2;
  v5 = (_DWORD *)(*a1 + 4LL * a2);
  if ( v5 )
    *v5 = *a3;
  result = a1[1];
  v7 = (__int64 (__fastcall ****)(_QWORD))(result + 8 * v4);
  if ( v7 )
  {
    *v7 = (__int64 (__fastcall ***)(_QWORD))*a4;
    return Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v7);
  }
  return result;
}
