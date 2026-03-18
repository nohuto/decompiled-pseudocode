/*
 * XREFs of ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x180179548
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessProtectContent(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_PROTECTCONTENT *a3)
{
  int v3; // r9d
  __int64 v4; // rax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 1013) != (v3 != 0) )
  {
    *((_BYTE *)this + 1013) = v3 != 0;
    v4 = *((_QWORD *)this + 2);
    if ( v3 )
      ++*(_DWORD *)(v4 + 256);
    else
      --*(_DWORD *)(v4 + 256);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
