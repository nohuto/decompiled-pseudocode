/*
 * XREFs of ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0258DF0
 * Callers:
 *     GreDeleteSpriteDelayDelete @ 0x1C024F7B4 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE68 (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE9C (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiDeleteSpriteDelayDelete(HDEV a1, HWND a2, void *a3)
{
  unsigned int v5; // edi
  HDEV v6; // rbp
  const struct _SPRITESTATE *v7; // rcx
  __int64 v8; // rdx
  struct _METASPRITE *v9; // rsi
  int v10; // r9d
  unsigned int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rcx
  SURFACE *v14; // rax
  __int64 v15; // rcx
  W32PIDLOCK *v16; // rbx
  __int64 v17; // rcx
  __int64 i; // rax
  struct SPRITE *v19; // rax
  struct SPRITE *v20; // rsi
  __int64 v21; // rcx
  SURFACE *v22; // rax
  __int64 v23; // rcx
  W32PIDLOCK *v24; // rbx
  HDEV v26; // [rsp+50h] [rbp+8h] BYREF
  char v27; // [rsp+68h] [rbp+20h] BYREF

  v26 = a1;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v27, (struct PDEVOBJ *)&v26);
  v6 = v26;
  v7 = (const struct _SPRITESTATE *)(v26 + 18);
  if ( *((_DWORD *)v26 + 35) )
  {
    v9 = pSpGetMetaSpriteDelayDelete(v7, a2, a3);
    if ( v9 )
    {
      v11 = 0;
      if ( v10 )
      {
        do
        {
          v12 = *((_QWORD *)v9 + v11 + 4);
          v13 = *(_QWORD *)(v12 + 128);
          if ( v13 )
          {
            v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v13);
            if ( (unsigned int)SURFACE::bRedirectionBitmap(v14) )
            {
              v16 = (W32PIDLOCK *)(v15 + 280);
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 280));
              *(_DWORD *)v12 &= ~0x400u;
              *(_DWORD *)v9 &= ~0x400u;
              W32PIDLOCK::vUnlockSingleThread(v16);
            }
          }
          ++v11;
        }
        while ( v11 < *((_DWORD *)v6 + 35) );
      }
      if ( *((_DWORD *)v6 + 35) )
      {
        do
          vSpDeleteSprite(*((struct SPRITE **)v9 + v5++ + 4));
        while ( v5 < *((_DWORD *)v6 + 35) );
      }
      v17 = *((_QWORD *)v6 + 19);
      if ( (struct _METASPRITE *)v17 == v9 )
      {
        *((_QWORD *)v6 + 19) = *((_QWORD *)v9 + 2);
      }
      else
      {
        for ( i = *(_QWORD *)(v17 + 16); (struct _METASPRITE *)i != v9; i = *(_QWORD *)(i + 16) )
          v17 = i;
        *(_QWORD *)(v17 + 16) = *((_QWORD *)v9 + 2);
      }
      Win32FreePool(v9, v8);
LABEL_22:
      v5 = 1;
    }
  }
  else
  {
    v19 = pSpGetSpriteDelayDelete(v7, a2, a3);
    v20 = v19;
    if ( v19 )
    {
      v21 = *((_QWORD *)v19 + 16);
      if ( v21 )
      {
        v22 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v21);
        if ( (unsigned int)SURFACE::bRedirectionBitmap(v22) )
        {
          v24 = (W32PIDLOCK *)(v23 + 280);
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v23 + 280));
          *(_DWORD *)v20 &= ~0x400u;
          W32PIDLOCK::vUnlockSingleThread(v24);
        }
      }
      vSpDeleteSprite(v20);
      goto LABEL_22;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v27);
  return v5;
}
