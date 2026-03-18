/*
 * XREFs of ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x18012AA2C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessProtectContent(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_PROTECTCONTENT *a3)
{
  int v4; // ecx
  bool v5; // zf
  __int64 v6; // rcx

  v4 = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 989) != (v4 != 0) )
  {
    v5 = v4 == 0;
    v6 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 989) = !v5;
    if ( v5 )
      --*(_DWORD *)(v6 + 280);
    else
      ++*(_DWORD *)(v6 + 280);
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  return 0LL;
}
