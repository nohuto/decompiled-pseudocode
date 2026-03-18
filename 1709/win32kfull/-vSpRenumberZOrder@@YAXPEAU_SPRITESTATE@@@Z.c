/*
 * XREFs of ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C000ABE4
 * Callers:
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C000A464 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRenumberZOrder(struct _SPRITESTATE *a1)
{
  __int64 v1; // rax
  int v2; // edx

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  while ( v1 )
  {
    *(_DWORD *)(v1 + 64) = v2++;
    v1 = *(_QWORD *)(v1 + 24);
  }
}
