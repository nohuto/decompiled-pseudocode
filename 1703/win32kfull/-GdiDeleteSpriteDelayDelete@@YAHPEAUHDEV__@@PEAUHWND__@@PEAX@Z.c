/*
 * XREFs of ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C02576B8
 * Callers:
 *     GreDeleteSpriteDelayDelete @ 0x1C024DD44 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE60 (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DEC8 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall GdiDeleteSpriteDelayDelete(HDEV a1, HWND a2, void *a3)
{
  unsigned int v5; // edi
  HDEV v6; // rbp
  const struct _SPRITESTATE *v7; // rcx
  struct _METASPRITE *v8; // rsi
  int v9; // r9d
  unsigned int v10; // r14d
  __int64 v11; // r13
  __int64 v12; // rcx
  SURFACE *v13; // rax
  __int64 v14; // rcx
  W32PIDLOCK *v15; // rbx
  __int64 v16; // rcx
  __int64 i; // rax
  struct SPRITE *v18; // rax
  struct SPRITE *v19; // rsi
  __int64 v20; // rcx
  SURFACE *v21; // rax
  __int64 v22; // rcx
  W32PIDLOCK *v23; // rbx
  HDEV v25; // [rsp+50h] [rbp+8h] BYREF
  char v26; // [rsp+68h] [rbp+20h] BYREF

  v25 = a1;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v26, (struct PDEVOBJ *)&v25);
  v6 = v25;
  v7 = (const struct _SPRITESTATE *)(v25 + 18);
  if ( *((_DWORD *)v25 + 35) )
  {
    v8 = pSpGetMetaSpriteDelayDelete(v7, a2, a3);
    if ( v8 )
    {
      v10 = 0;
      if ( v9 )
      {
        do
        {
          v11 = *((_QWORD *)v8 + v10 + 4);
          v12 = *(_QWORD *)(v11 + 128);
          if ( v12 )
          {
            v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v12);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v13) )
            {
              v15 = (W32PIDLOCK *)(v14 + 280);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v14 + 280));
              *(_DWORD *)v11 &= ~0x400u;
              *(_DWORD *)v8 &= ~0x400u;
              W32PIDLOCK::vUnlockSingleThread(v15);
            }
          }
          ++v10;
        }
        while ( v10 < *((_DWORD *)v6 + 35) );
      }
      if ( *((_DWORD *)v6 + 35) )
      {
        do
          vSpDeleteSprite(*((struct SPRITE **)v8 + v5++ + 4));
        while ( v5 < *((_DWORD *)v6 + 35) );
      }
      v16 = *((_QWORD *)v6 + 19);
      if ( (struct _METASPRITE *)v16 == v8 )
      {
        *((_QWORD *)v6 + 19) = *((_QWORD *)v8 + 2);
      }
      else
      {
        for ( i = *(_QWORD *)(v16 + 16); (struct _METASPRITE *)i != v8; i = *(_QWORD *)(i + 16) )
          v16 = i;
        *(_QWORD *)(v16 + 16) = *((_QWORD *)v8 + 2);
      }
      Win32FreePool(v8);
LABEL_22:
      v5 = 1;
    }
  }
  else
  {
    v18 = pSpGetSpriteDelayDelete(v7, a2, a3);
    v19 = v18;
    if ( v18 )
    {
      v20 = *((_QWORD *)v18 + 16);
      if ( v20 )
      {
        v21 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v20);
        if ( (unsigned int)SURFACE::bRedirectionBitmap(v21) )
        {
          v23 = (W32PIDLOCK *)(v22 + 280);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v22 + 280));
          *(_DWORD *)v19 &= ~0x400u;
          W32PIDLOCK::vUnlockSingleThread(v23);
        }
      }
      vSpDeleteSprite(v19);
      goto LABEL_22;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v26);
  return v5;
}
