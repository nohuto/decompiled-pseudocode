/*
 * XREFs of ?ShouldHitTest@CWindowNode@@AEBA_NXZ @ 0x18004FEA0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180053B1C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 986) )
    return *((_QWORD *)this + 72) != 0LL;
  return result;
}
