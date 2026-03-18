/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180051D60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004EE34 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_TOPLEVELNODE *a3)
{
  __int64 v3; // rdx

  if ( *((_DWORD *)a3 + 4) )
  {
    *((_BYTE *)this + 92) |= 8u;
    v3 = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 92) &= ~8u;
    v3 = 0LL;
  }
  CVisual::SetTopLevelWindow(this, v3);
  return 0LL;
}
