/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x180085A10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180086B80 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  int v3; // r9d
  char v4; // di
  CVisual *v5; // r11
  unsigned int v6; // ecx
  char v8; // al

  v3 = *((_DWORD *)a3 + 3);
  v4 = 0;
  v5 = this;
  v6 = *((unsigned __int8 *)this + 90);
  if ( ((v6 >> 3) & 1) != (v3 != 0) )
  {
    v4 = 1;
    *((_BYTE *)v5 + 90) = v6 & 0xF7 | (v3 != 0 ? 8 : 0);
    CVisual::OnInnerTransformChanged(v5);
  }
  v8 = *((_BYTE *)v5 + 91);
  *((_BYTE *)v5 + 90) = *((_BYTE *)v5 + 90) & 0xFD | (*((_DWORD *)a3 + 2) != 0 ? 2 : 0);
  *((_BYTE *)v5 + 91) = v8 & 0xFE | (*((_DWORD *)a3 + 4) != 0);
  if ( v4 )
    CVisual::PropagateFlags(v5, 1, 1, 0, 0, 0, 0, 0);
  return 0LL;
}
