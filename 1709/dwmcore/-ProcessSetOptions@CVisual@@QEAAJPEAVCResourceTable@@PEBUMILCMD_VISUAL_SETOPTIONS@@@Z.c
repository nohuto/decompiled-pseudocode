/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800518E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004F6C8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  CVisual *v5; // r11
  unsigned int v6; // ecx
  char v8; // al
  unsigned int v9; // edx
  int v10; // r8d

  v3 = *((_DWORD *)a3 + 3);
  v4 = 0;
  v5 = this;
  v6 = *((unsigned __int8 *)this + 93);
  if ( ((v6 >> 3) & 1) != (v3 != 0) )
  {
    v4 = 5;
    *((_BYTE *)v5 + 93) = v6 & 0xF7 | (v3 != 0 ? 8 : 0);
    CVisual::OnInnerTransformChanged(v5);
  }
  v8 = *((_BYTE *)v5 + 94);
  *((_BYTE *)v5 + 93) = *((_BYTE *)v5 + 93) & 0xFD | (*((_DWORD *)a3 + 2) != 0 ? 2 : 0);
  v9 = v8 & 0xFE | (*((_DWORD *)a3 + 4) != 0);
  *((_BYTE *)v5 + 94) = v9;
  v10 = *((_DWORD *)a3 + 5);
  if ( ((v9 >> 1) & 1) != (v10 != 0) )
  {
    *((_BYTE *)v5 + 94) = v9 & 0xFD | (v10 != 0 ? 2 : 0);
    if ( (v10 != 0 ? 2 : 0) != 0 )
    {
      *((_QWORD *)v5 + 50) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v5 + 26) + 4LL) &= ~0x1000u;
      *(_DWORD *)(*((_QWORD *)v5 + 26) + 4LL) &= ~0x800u;
      *(_DWORD *)(*((_QWORD *)v5 + 26) + 4LL) &= ~0x400u;
      *(_DWORD *)(*((_QWORD *)v5 + 26) + 4LL) &= ~0x200u;
    }
    v4 |= 0x10u;
  }
  if ( v4 )
    CVisual::PropagateFlags((__int64)v5, v4, 0);
  return 0LL;
}
