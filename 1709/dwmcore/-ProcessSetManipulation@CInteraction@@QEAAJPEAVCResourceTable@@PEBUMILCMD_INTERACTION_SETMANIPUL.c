/*
 * XREFs of ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x180169B48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z @ 0x180169114 (--4-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulation@@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessSetManipulation(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_SETMANIPULATION *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x55u);
  if ( Resource != *((_QWORD *)this + 37) )
    Microsoft::WRL::ComPtr<CManipulation>::operator=((__int64 *)this + 37, Resource);
  return 0LL;
}
