/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x180050850
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  *((_BYTE *)this + 96) |= 0x3Eu;
  v3 = *((_DWORD *)this + 24) & 0xFFF807FF;
  *(_QWORD *)((char *)this + 188) = 1LL;
  *((_DWORD *)this + 24) = v3 | 0x400;
  *(_QWORD *)((char *)this + 196) = 0LL;
  CVisual::PropagateFlags((__int64)this, 5u, 0);
  return 0LL;
}
