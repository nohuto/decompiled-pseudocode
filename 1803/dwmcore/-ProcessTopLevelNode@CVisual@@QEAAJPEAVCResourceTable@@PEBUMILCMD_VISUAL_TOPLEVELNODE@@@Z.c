/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180050D2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004CF0C (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_TOPLEVELNODE *a3)
{
  char v3; // al
  __int64 v4; // rdx

  v3 = *((_BYTE *)this + 92);
  v4 = 0LL;
  if ( *((_DWORD *)a3 + 4) )
  {
    *((_BYTE *)this + 92) = v3 | 0x20;
    v4 = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 92) = v3 & 0xDF;
  }
  CVisual::SetTopLevelWindow(this, v4);
  return 0LL;
}
