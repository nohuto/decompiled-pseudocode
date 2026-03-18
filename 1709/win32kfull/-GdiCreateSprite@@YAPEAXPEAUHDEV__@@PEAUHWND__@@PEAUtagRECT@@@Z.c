/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0009EC8
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C0045C40 (GreTransferDwmStateToSpriteState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C000A464 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // ecx
  __int64 v10; // rdi
  unsigned int v11; // esi
  struct _POINTL *v12; // r9
  HDEV v13; // rcx
  struct SPRITE *Sprite; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  _BYTE v18[56]; // [rsp+20h] [rbp-38h] BYREF
  HDEV v19; // [rsp+60h] [rbp+8h] BYREF
  struct _POINTL v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v19);
  v7 = v19;
  v8 = *((_DWORD *)v19 + 35);
  if ( v8 )
  {
    v10 = PALLOCMEM2((unsigned int)(8 * v8 + 40));
    if ( v10 )
    {
      v11 = 0;
      if ( *((_DWORD *)v7 + 35) )
      {
        while ( 1 )
        {
          v12 = 0LL;
          v13 = *(HDEV *)(*((_QWORD *)v7 + 18) + 8LL * v11);
          if ( a3 )
          {
            v12 = &v20;
            v20.x = a3->left - *((_DWORD *)v13 + 650);
            v20.y = a3->top - *((_DWORD *)v13 + 651);
          }
          Sprite = pSpCreateSprite(v13, a3, a2, v12);
          if ( !Sprite )
            break;
          *(_QWORD *)(v10 + 8LL * v11++ + 32) = Sprite;
          *((_QWORD *)Sprite + 1) = v10;
          if ( v11 >= *((_DWORD *)v7 + 35) )
            goto LABEL_10;
        }
        while ( v11 )
          vSpDeleteSprite(*(struct SPRITE **)(v10 + 8LL * --v11 + 32));
        Win32FreePool(v10, v15, v16);
      }
      else
      {
LABEL_10:
        *(_QWORD *)(v10 + 8) = a2;
        v17 = *((_DWORD *)v7 + 35);
        *(_DWORD *)v10 = 0;
        v6 = (struct SPRITE *)v10;
        *(_DWORD *)(v10 + 24) = v17;
        *(_QWORD *)(v10 + 16) = *((_QWORD *)v7 + 19);
        *((_QWORD *)v7 + 19) = v10;
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v6;
}
