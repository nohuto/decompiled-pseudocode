/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0261768
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E6E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C025DDD0 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C025DFA0 (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2, void *a3)
{
  SPRITERANGELOCK *v3; // rbp
  unsigned int v5; // esi
  struct SPRITE *i; // rcx
  __int64 v9; // rax
  struct SPRITE *v10; // rax
  struct SPRITE *v11; // rbx
  SURFACE *v12; // rax
  struct SPRITE *v13; // rax

  v3 = (SPRITERANGELOCK *)(a1 + 128);
  v5 = 0;
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(a1 + 128));
  for ( i = *(struct SPRITE **)(a1 + 16); ; i = (struct SPRITE *)*((_QWORD *)v11 + 3) )
  {
    v10 = pSpFindInZForPidLock(i, a2);
    v11 = v10;
    if ( !v10 )
      break;
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v10 + 16));
    v5 = SURFACE::Map(v9, a3, 0LL);
    if ( v5 == 2 )
    {
      while ( 1 )
      {
        v13 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v11 + 4), a2);
        v11 = v13;
        if ( !v13 )
          break;
        v12 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)v13 + 16));
        SURFACE::bUnMap(v12, a3, 0LL);
      }
      SPRITERANGELOCK::vUnlock(v3);
      return v5;
    }
  }
  return v5;
}
