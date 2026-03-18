/*
 * XREFs of ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C000A990
 * Callers:
 *     GreZorderSprite @ 0x1C0091084 (GreZorderSprite.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C000AA10 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE34 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

void __fastcall GdiZorderSprite(HDEV a1, HWND a2, HWND a3)
{
  HDEV v4; // rbx
  struct _SPRITESTATE *v6; // rcx
  struct SPRITE *v7; // rax
  struct SPRITE *v8; // r9
  __int64 v9; // rbp
  struct _SPRITESTATE *v10; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v12; // r9
  HDEV v13; // r10
  const struct _SPRITESTATE *v14; // rcx
  struct _METASPRITE *MetaSprite; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  HDEV v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+58h] [rbp+20h] BYREF

  v19 = a1;
  v4 = a1 + 18;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v20, (struct PDEVOBJ *)&v19);
  if ( *((_DWORD *)v4 + 17) )
  {
    v9 = 0LL;
    do
    {
      pSpGetSprite((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v4 + 9) + 8 * v9) + 72LL), a3, 0LL);
      Sprite = pSpGetSprite(v10, a2, 0LL);
      vSpZorderSprite(v13, Sprite, v12);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)v4 + 17) );
    pSpGetMetaSprite((const struct _SPRITESTATE *)v4, a3, 0LL);
    MetaSprite = pSpGetMetaSprite(v14, a2, 0LL);
    v17 = *((_QWORD *)v4 + 10);
    if ( MetaSprite && v17 )
    {
      if ( (struct _METASPRITE *)v17 == MetaSprite )
      {
        *((_QWORD *)v4 + 10) = *(_QWORD *)(v17 + 16);
      }
      else
      {
        v18 = 0LL;
        while ( (struct _METASPRITE *)v17 != MetaSprite )
        {
          v18 = v17;
          v17 = *(_QWORD *)(v17 + 16);
          if ( !v17 )
            goto LABEL_16;
        }
        *(_QWORD *)(v18 + 16) = *(_QWORD *)(v17 + 16);
      }
      *(_QWORD *)(v17 + 16) = 0LL;
LABEL_16:
      if ( !*((_QWORD *)MetaSprite + 2) )
      {
        if ( v16 )
        {
          *((_QWORD *)MetaSprite + 2) = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(v16 + 16) = MetaSprite;
        }
        else
        {
          *((_QWORD *)MetaSprite + 2) = *((_QWORD *)v4 + 10);
          *((_QWORD *)v4 + 10) = MetaSprite;
        }
      }
    }
  }
  else
  {
    pSpGetSprite((struct _SPRITESTATE *)v4, a3, 0LL);
    v7 = pSpGetSprite(v6, a2, 0LL);
    vSpZorderSprite(*(HDEV *)v4, v7, v8);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v20);
}
