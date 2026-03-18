/*
 * XREFs of ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C025BA0C
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0265378 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSpSpriteOnTopOfWndObjInZ(struct SPRITE *a1, struct EWNDOBJ *a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 i; // r9
  __int64 v6; // rcx

  v3 = *((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 16);
  for ( i = *(_QWORD *)(v3 + 1096); v4 != i; v4 = *(_QWORD *)(v4 + 24) )
  {
    if ( *(_QWORD *)(v4 + 72) == *((_QWORD *)a2 + 22) )
      break;
  }
  v6 = 0LL;
  if ( v4 != i )
    v6 = v4;
  return !v6 || *((_DWORD *)a1 + 16) > *(_DWORD *)(v6 + 64);
}
