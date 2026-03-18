/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0009F50
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C008F260 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C000AA10 (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C025DE34 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rsi
  unsigned int v7; // ebx
  struct _SPRITESTATE *v8; // rcx
  struct SPRITE *Sprite; // rax
  struct SPRITE *v10; // rsi
  int v11; // ebp
  __int64 v13; // rdx
  struct _METASPRITE *MetaSprite; // rdi
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  unsigned int i; // r14d
  __int64 v24; // rcx
  __int64 j; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  W32PIDLOCK *v28; // r14
  int v29; // eax
  HDEV v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[64]; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v30 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v33, (struct PDEVOBJ *)&v30);
  v6 = v30;
  v7 = 0;
  v8 = (struct _SPRITESTATE *)(v30 + 18);
  if ( !*((_DWORD *)v30 + 35) )
  {
    Sprite = pSpGetSprite(v8, a2, a3);
    v10 = Sprite;
    if ( Sprite )
    {
      v11 = 1;
      if ( !*((_QWORD *)Sprite + 16) )
        goto LABEL_4;
      v26 = SURFOBJ_TO_SURFACE_NOT_NULL();
      if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v26) )
        goto LABEL_4;
      v28 = (W32PIDLOCK *)(v27 + 280);
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v27 + 280));
      if ( *(_DWORD *)(v26 + 332) )
      {
        v29 = *(_DWORD *)(v26 + 116);
        if ( (v29 & 2) == 0 )
        {
          *(_QWORD *)(v26 + 424) = a1;
          *(_DWORD *)(v26 + 116) = v29 | 2;
          *(_QWORD *)(v26 + 432) = a2;
          *(_QWORD *)(v26 + 440) = a3;
          *(_DWORD *)(v26 + 448) = 1;
          *(_DWORD *)v10 |= 0x400u;
        }
        v11 = 0;
      }
      W32PIDLOCK::vUnlockSingleThread(v28);
      if ( v11 )
LABEL_4:
        vSpDeleteSprite(v10);
      goto LABEL_5;
    }
LABEL_6:
    v7 = -2143354870;
    goto LABEL_5;
  }
  MetaSprite = pSpGetMetaSprite(v8, a2, a3);
  if ( !MetaSprite )
    goto LABEL_6;
  v17 = 0;
  v36 = 1;
  v18 = 1;
  if ( !v16 )
    goto LABEL_20;
  do
  {
    v31 = *((_QWORD *)MetaSprite + v17 + 4);
    if ( *(_QWORD *)(v31 + 128) )
    {
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL();
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v19) )
      {
        v32 = (W32PIDLOCK *)(v20 + 280);
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v20 + 280));
        if ( *(_DWORD *)(v19 + 332) )
        {
          v21 = *(_DWORD *)(v19 + 116);
          if ( (v21 & 2) == 0 )
          {
            *(_DWORD *)(v19 + 116) = v21 | 2;
            v22 = (_DWORD *)v31;
            *(_QWORD *)(v19 + 424) = a1;
            *(_QWORD *)(v19 + 432) = a2;
            *(_QWORD *)(v19 + 440) = a3;
            *(_DWORD *)(v19 + 448) = 1;
            *v22 |= 0x400u;
            *(_DWORD *)MetaSprite |= 0x400u;
          }
          v18 = 0;
          v36 = 0;
        }
        else
        {
          v18 = v36;
        }
        W32PIDLOCK::vUnlockSingleThread(v32);
      }
      else
      {
        v18 = v36;
      }
    }
    ++v17;
  }
  while ( v17 < *((_DWORD *)v6 + 35) );
  if ( v18 )
  {
LABEL_20:
    for ( i = 0; i < *((_DWORD *)v6 + 35); ++i )
      vSpDeleteSprite(*((struct SPRITE **)MetaSprite + i + 4));
    v24 = *((_QWORD *)v6 + 19);
    if ( (struct _METASPRITE *)v24 == MetaSprite )
    {
      *((_QWORD *)v6 + 19) = *((_QWORD *)MetaSprite + 2);
    }
    else
    {
      for ( j = *(_QWORD *)(v24 + 16); (struct _METASPRITE *)j != MetaSprite; j = *(_QWORD *)(j + 16) )
        v24 = j;
      *(_QWORD *)(v24 + 16) = *((_QWORD *)MetaSprite + 2);
    }
    Win32FreePool(MetaSprite, v13, v15);
  }
LABEL_5:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v33);
  return v7;
}
