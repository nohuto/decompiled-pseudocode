/*
 * XREFs of ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1801A55E8
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18009DDD0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801A545C (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CSpriteVisual::SetDropShadow(CSpriteVisual *this, struct CDropShadow *a2)
{
  char **v2; // rcx
  struct CDropShadow *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CDropShadow *)`CSpriteVisual::SetDropShadow'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x100u;
  else
    CSparseStorage::SetData(v2, 24, 8u, &v3);
}
