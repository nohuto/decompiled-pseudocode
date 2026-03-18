/*
 * XREFs of ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1801762A8
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800225BC (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180176128 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CSpriteVisual::SetDropShadow(CSpriteVisual *this, struct CDropShadow *a2)
{
  struct CDropShadow *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CDropShadow *)`CSpriteVisual::SetDropShadow'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x100u;
  else
    CSparseStorage::SetData((CSpriteVisual *)((char *)this + 208), 0x18u, 8u, &v2);
}
