/*
 * XREFs of ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0114904
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C01147C4 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreEnableMirrorRendering @ 0x1C02655C4 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDeleteExMirror(_QWORD *a1)
{
  SURFOBJ *v2; // rcx

  if ( a1 )
  {
    v2 = (SURFOBJ *)a1[178];
    if ( v2 )
    {
      EngUnlockSurface(v2);
      if ( !(unsigned int)HmgQueryAltLock(*(_QWORD *)(a1[178] + 8LL)) )
      {
        *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1[178]) + 116) = 0;
        EngDeleteSurface(*(HSURF *)(a1[178] + 8LL));
        a1[178] = 0LL;
      }
    }
  }
}
