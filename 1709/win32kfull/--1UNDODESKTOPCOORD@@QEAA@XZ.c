/*
 * XREFs of ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0258A18
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED2CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C025AAC0 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C025E744 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F2F4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260A28 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02611B8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C02652C4 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C0266958 (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 */

void __fastcall UNDODESKTOPCOORD::~UNDODESKTOPCOORD(UNDODESKTOPCOORD *this)
{
  __int64 v2; // rcx
  struct _POINTL v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(v2 + 192) )
      {
        v4 = *(_QWORD *)(v2 + 192);
        v3 = (struct _POINTL)*((_QWORD *)this + 1);
        RGNOBJ::bOffset((RGNOBJ *)&v4, &v3);
      }
    }
    EWNDOBJ::vOffset(*(EWNDOBJ **)this, *((_DWORD *)this + 2), *((_DWORD *)this + 3));
    *(_DWORD *)(*(_QWORD *)this + 184LL) |= 0x100u;
  }
}
