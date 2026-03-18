/*
 * XREFs of ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C000A194
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpFreeClipResources(struct SPRITE *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 23);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v2);
  *((_QWORD *)a1 + 23) = 0LL;
}
