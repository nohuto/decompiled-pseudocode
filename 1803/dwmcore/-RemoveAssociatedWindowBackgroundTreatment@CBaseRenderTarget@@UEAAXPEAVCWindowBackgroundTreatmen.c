/*
 * XREFs of ?RemoveAssociatedWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18013DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA_KAEBQEAVCWindowBackgroundTreatment@@@Z @ 0x18001A344 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowBackgroundTrea.c)
 */

void __fastcall CBaseRenderTarget::RemoveAssociatedWindowBackgroundTreatment(
        CBaseRenderTarget *this,
        struct CWindowBackgroundTreatment *a2)
{
  struct CWindowBackgroundTreatment *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
    (__int64 *)this + 18,
    (unsigned __int64 *)&v2);
}
