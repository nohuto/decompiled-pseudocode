/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801A84C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801A7F10 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A7F5C (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801A8F84 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801A8FC4 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  __int64 v6; // rax
  char v7; // al
  struct D2D_VECTOR_3F v9; // [rsp+20h] [rbp-28h] BYREF
  FLOAT v10; // [rsp+38h] [rbp-10h]

  CVisual::GetWorldUpVectorOverride(this, &v9);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v9.x
    || *((float *)a3 + 4) != v9.y
    || *((float *)a3 + 5) != v9.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v10 = *((float *)a3 + 5);
    *(_QWORD *)&v9.x = *(_QWORD *)((char *)a3 + 12);
    v9.z = v10;
    CVisual::SetWorldUpVectorOverride(this, &v9);
    v6 = *((_QWORD *)this + 27);
    if ( (*(_BYTE *)(v6 + 4) & 8) != 0 || (*(_BYTE *)(v6 + 4) & 4) != 0 )
      v7 = 0x80;
    else
      v7 = 0;
    *((_BYTE *)this + 94) &= ~0x80u;
    *((_BYTE *)this + 94) |= v7;
    if ( (*((_DWORD *)this + 22) & 0x800) != 0 )
    {
      *((_QWORD *)this + 51) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u, 0);
    }
  }
  return 0LL;
}
