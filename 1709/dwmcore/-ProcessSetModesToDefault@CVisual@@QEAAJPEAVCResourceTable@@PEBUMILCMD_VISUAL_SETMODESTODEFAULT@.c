/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800518A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
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
