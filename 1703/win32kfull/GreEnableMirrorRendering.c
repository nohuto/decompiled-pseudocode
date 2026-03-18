/*
 * XREFs of GreEnableMirrorRendering @ 0x1C02663B4
 * Callers:
 *     NtUserSetMirrorRendering @ 0x1C01DF9A0 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C010B358 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE2C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE94 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreEnableMirrorRendering(__int64 a1, HWND a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  const struct _SPRITESTATE *v5; // rcx
  struct _METASPRITE *MetaSprite; // rax
  struct _METASPRITE *v7; // rbp
  __int64 v8; // rbx
  struct SPRITE *Sprite; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = a1;
  v3 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( v11 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v12, (struct PDEVOBJ *)&v11);
    v4 = v11;
    v5 = (const struct _SPRITESTATE *)(v11 + 72);
    if ( *(_DWORD *)(v11 + 140) )
    {
      MetaSprite = pSpGetMetaSprite(v5, a2, 0LL);
      v7 = MetaSprite;
      if ( MetaSprite )
      {
        *(_DWORD *)MetaSprite &= ~0x100u;
        if ( *(_DWORD *)(v4 + 140) )
        {
          do
          {
            v8 = v3;
            vSpDeleteExMirror(*(_QWORD **)(*(_QWORD *)(v4 + 144) + 8LL * v3++));
            **((_DWORD **)v7 + v8 + 4) &= ~0x100u;
            *(_DWORD *)(*((_QWORD *)v7 + v8 + 4) + 224LL) &= ~0x10000000u;
          }
          while ( v3 < *(_DWORD *)(v4 + 140) );
        }
        goto LABEL_9;
      }
    }
    else
    {
      Sprite = pSpGetSprite(v5, a2, 0LL);
      if ( Sprite )
      {
        vSpDeleteExMirror(*(_QWORD **)(v4 + 72));
        *(_DWORD *)Sprite &= ~0x100u;
        *((_DWORD *)Sprite + 56) &= ~0x10000000u;
LABEL_9:
        v3 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v12);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v3;
}
