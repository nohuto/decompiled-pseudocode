/*
 * XREFs of ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00262E0
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B212C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C005E4B0 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SetVPRPaging(VIDMM_GLOBAL *this, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // bl

  v3 = a2;
  VIDMM_SEGMENT::Defragment(this, a2, a3);
  *((_BYTE *)this + 41449) = (8 * v3) | *((_BYTE *)this + 41449) & 0xF7;
}
