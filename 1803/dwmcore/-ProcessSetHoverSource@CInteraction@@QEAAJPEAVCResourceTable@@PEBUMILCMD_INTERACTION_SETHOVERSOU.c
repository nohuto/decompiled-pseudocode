/*
 * XREFs of ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x1800288C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCHoverPointerSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCHoverPointerSource@@@Z @ 0x1800C76A4 (--4-$ComPtr@VCHoverPointerSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCHoverPointerSource@@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessSetHoverSource(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_SETHOVERSOURCE *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 Resource; // rax

  v4 = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource(a2, v5, 73LL);
    if ( Resource )
      v4 = Resource - 8;
  }
  if ( v4 != *((_QWORD *)this + 34) )
    Microsoft::WRL::ComPtr<CHoverPointerSource>::operator=((char *)this + 272, v4);
  return 0LL;
}
