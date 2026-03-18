/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0045374
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateRectRgn @ 0x1C006F220 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(REGION **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(*this);
    *this = 0LL;
  }
}
