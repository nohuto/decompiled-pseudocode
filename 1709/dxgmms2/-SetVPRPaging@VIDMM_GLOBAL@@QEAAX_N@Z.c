/*
 * XREFs of ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0023930
 * Callers:
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AAF74 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C0059A90 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetVPRPaging(VIDMM_GLOBAL *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // bl

  v3 = a2;
  VIDMM_SEGMENT::Defragment(this, a2, a3);
  *((_BYTE *)this + 40873) = (4 * v3) | *((_BYTE *)this + 40873) & 0xFB;
}
