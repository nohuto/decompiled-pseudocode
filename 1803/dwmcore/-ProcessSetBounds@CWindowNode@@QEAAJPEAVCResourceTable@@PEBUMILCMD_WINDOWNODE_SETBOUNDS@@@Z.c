/*
 * XREFs of ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009325C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  int v3; // ebx
  char v4; // r10
  int v5; // edx
  int v7; // ecx
  int v8; // r11d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v3 = *((_DWORD *)this + 172);
  v4 = 0;
  v5 = *((_DWORD *)this + 174);
  v7 = 0;
  v8 = *((_DWORD *)a3 + 10);
  if ( *((_DWORD *)a3 + 12) - v8 >= 0 )
    v7 = *((_DWORD *)a3 + 12) - v8;
  v9 = 0;
  v10 = v5 - v3;
  if ( v10 >= 0 )
    v9 = v10;
  if ( v9 != v7 )
    goto LABEL_16;
  v11 = 0;
  if ( *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11) >= 0 )
    v11 = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v12 = 0;
  if ( *((_DWORD *)this + 175) - *((_DWORD *)this + 173) >= 0 )
    v12 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
  if ( v12 != v11 )
LABEL_16:
    v4 = 1;
  if ( (v3 - *((_DWORD *)this + 160) != v8 - *((_DWORD *)a3 + 2)
     || *((_DWORD *)this + 173) - *((_DWORD *)this + 161) != *((_DWORD *)a3 + 11) - *((_DWORD *)a3 + 3))
    && *((_QWORD *)this + 97) )
  {
    v4 = 1;
  }
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)this + 42) = *(_OWORD *)((char *)a3 + 24);
  *((_OWORD *)this + 43) = *(_OWORD *)((char *)a3 + 40);
  if ( v4 )
  {
    *((_BYTE *)this + 912) = 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
