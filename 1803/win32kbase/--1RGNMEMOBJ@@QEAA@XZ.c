/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00209F4
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateRectRgn @ 0x1C00D9A90 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(REGION **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(*this);
    *this = 0LL;
  }
}
