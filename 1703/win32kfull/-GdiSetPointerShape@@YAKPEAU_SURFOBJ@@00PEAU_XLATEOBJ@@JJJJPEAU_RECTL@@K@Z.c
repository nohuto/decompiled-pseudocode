/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02582E0
 * Callers:
 *     EngSetPointerShape @ 0x1C00A0710 (EngSetPointerShape.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025BDD0 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C025DC1C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall GdiSetPointerShape(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct _RECTL *a9,
        unsigned int a10)
{
  unsigned int v13; // edi
  unsigned int v15; // ebp
  unsigned int v16; // esi
  HDEV hdev; // rbx
  struct _RECTL *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  struct _RECTL *v29; // rsi
  int v30; // ecx
  struct _SPRITESTATE *v32[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v33; // [rsp+130h] [rbp+8h] BYREF
  __int64 v34; // [rsp+138h] [rbp+10h] BYREF

  v13 = ((a10 >> 8) & 0xF) + 1;
  v15 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v16 = 0x3E8u / (unsigned __int8)(a10 >> 12);
  else
    v16 = 0;
  hdev = a1->hdev;
  v33 = hdev;
  v34 = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  if ( psoSrc || a3 )
  {
    while ( *((_DWORD *)hdev + 294) < v13 )
    {
      Sprite = pSpCreateSprite(hdev, 0LL, 0LL, 0LL);
      if ( !Sprite )
        break;
      if ( !*((_QWORD *)hdev + 145) )
        *((_QWORD *)hdev + 145) = Sprite;
      ++*((_DWORD *)hdev + 294);
      *((_QWORD *)hdev + 146) = Sprite;
    }
    while ( *((_DWORD *)hdev + 294) > v13 )
    {
      v22 = *((_QWORD *)hdev + 146);
      *((_QWORD *)hdev + 146) = *(_QWORD *)(v22 + 24);
      vSpDeleteSprite((struct SPRITE *)v22);
      --*((_DWORD *)hdev + 294);
    }
    v23 = *((_QWORD *)hdev + 145) == 0LL;
    *((_DWORD *)hdev + 296) = v16;
    if ( !v23 )
    {
      v24 = *((_QWORD *)hdev + 146);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v33);
      while ( v24 )
      {
        bSpUpdatePosition((struct SPRITE *)v24, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v24);
        v24 = *(_QWORD *)(v24 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v32, v25, v26, v27);
      v28 = *((_QWORD *)hdev + 146);
      v29 = a9;
      while ( v28 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v28, psoSrc, a3, a4, v29) )
        {
          v15 = 0;
          break;
        }
        v28 = *(_QWORD *)(v28 + 24);
      }
      v30 = a6;
      *((_DWORD *)hdev + 288) = a5 - v29->left;
      *((_DWORD *)hdev + 289) = v30 - v29->top;
    }
    GdiMovePointer(a1, a7, a8, v18, 1);
  }
  else
  {
    v19 = *((_QWORD *)hdev + 146);
    *((_QWORD *)hdev + 146) = 0LL;
    *((_QWORD *)hdev + 145) = 0LL;
    *((_DWORD *)hdev + 294) = 0;
    if ( v19 )
    {
      do
      {
        v20 = *(_QWORD *)(v19 + 24);
        vSpDeleteSprite((struct SPRITE *)v19);
        v19 = v20;
      }
      while ( v20 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  return v15;
}
