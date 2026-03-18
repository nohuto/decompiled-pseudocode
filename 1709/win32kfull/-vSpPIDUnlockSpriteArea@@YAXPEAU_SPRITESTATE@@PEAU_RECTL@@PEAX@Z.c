/*
 * XREFs of ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0261838
 * Callers:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C02653DC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C025DFA0 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpPIDUnlockSpriteArea(struct _SPRITESTATE *a1, struct _RECTL *a2, void *a3)
{
  struct SPRITE *v5; // rcx
  struct _RECTL *i; // rsi
  SURFACE *v7; // rax
  struct SPRITE *v8; // rax
  struct SPRITE *v9; // rdi

  v5 = (struct SPRITE *)*((_QWORD *)a1 + 3);
  for ( i = a2; ; a2 = i )
  {
    v8 = pSpReverseFindInZForPidLock(v5, a2);
    v9 = v8;
    if ( !v8 )
      break;
    v7 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v8 + 16));
    SURFACE::bUnMap(v7, a3, 0LL);
    v5 = (struct SPRITE *)*((_QWORD *)v9 + 4);
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)a1 + 128));
}
