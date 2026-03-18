/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x180050890
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004D69C (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  CVisual *v3; // r11
  int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int8 v7; // r9
  unsigned int v8; // edx
  int v9; // r8d

  v3 = this;
  v4 = *((_DWORD *)a3 + 3);
  v5 = 0;
  v7 = *((_BYTE *)v3 + 93);
  if ( v7 >> 7 != (v4 != 0) )
  {
    v5 = 5;
    *((_BYTE *)v3 + 93) = v7 & 0x7F | (v4 != 0 ? 0x80 : 0);
    CVisual::OnInnerTransformChanged(v3);
    v7 = *((_BYTE *)v3 + 93);
  }
  *((_BYTE *)v3 + 93) = v7 & 0xDF | (*((_DWORD *)a3 + 2) != 0 ? 0x20 : 0);
  v8 = *((_BYTE *)v3 + 94) & 0xEF | (*((_DWORD *)a3 + 4) != 0 ? 0x10 : 0);
  *((_BYTE *)v3 + 94) = v8;
  v9 = *((_DWORD *)a3 + 5);
  if ( ((v8 >> 5) & 1) != (v9 != 0) )
  {
    *((_BYTE *)v3 + 94) = v8 & 0xDF | (v9 != 0 ? 0x20 : 0);
    if ( (v9 != 0 ? 0x20 : 0) != 0 )
    {
      *((_QWORD *)v3 + 51) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x1000u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x800u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x400u;
      *(_DWORD *)(*((_QWORD *)v3 + 27) + 4LL) &= ~0x200u;
    }
    v5 |= 0x10u;
  }
  if ( v5 )
    CVisual::PropagateFlags((__int64)v3, v5, 0);
  return 0LL;
}
