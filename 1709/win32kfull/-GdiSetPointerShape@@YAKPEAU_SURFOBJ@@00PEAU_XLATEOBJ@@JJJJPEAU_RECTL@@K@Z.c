/*
 * XREFs of ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0259810
 * Callers:
 *     EngSetPointerShape @ 0x1C00E4010 (EngSetPointerShape.c)
 * Callees:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C000A464 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C025921C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025CEA8 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
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
  __int64 v18; // r8
  struct _RECTL *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  struct SPRITE *Sprite; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  struct _RECTL *v30; // rsi
  int v31; // ecx
  __int64 *v33[31]; // [rsp+30h] [rbp-F8h] BYREF
  HDEV v34; // [rsp+130h] [rbp+8h] BYREF
  __int64 v35; // [rsp+138h] [rbp+10h] BYREF

  v13 = ((a10 >> 8) & 0xF) + 1;
  v15 = 2;
  if ( (unsigned __int8)(a10 >> 12) )
    v16 = 0x3E8u / (unsigned __int8)(a10 >> 12);
  else
    v16 = 0;
  hdev = a1->hdev;
  v34 = hdev;
  v35 = ghsemSprite;
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
      v23 = *((_QWORD *)hdev + 146);
      *((_QWORD *)hdev + 146) = *(_QWORD *)(v23 + 24);
      vSpDeleteSprite((struct SPRITE *)v23);
      --*((_DWORD *)hdev + 294);
    }
    v24 = *((_QWORD *)hdev + 145) == 0LL;
    *((_DWORD *)hdev + 296) = v16;
    if ( !v24 )
    {
      v25 = *((_QWORD *)hdev + 146);
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v33, (struct PDEVOBJ *)&v34, v18, (__int64)v19);
      while ( v25 )
      {
        bSpUpdatePosition((struct SPRITE *)v25, 0LL, 0, 0);
        vSpRedrawSprite((struct SPRITE *)v25);
        v25 = *(_QWORD *)(v25 + 24);
      }
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v33, v26, v27, v28);
      v29 = *((_QWORD *)hdev + 146);
      v30 = a9;
      while ( v29 )
      {
        if ( !(unsigned int)bSpUpdateCursor((struct SPRITE *)v29, psoSrc, a3, a4, v30) )
        {
          v15 = 0;
          break;
        }
        v29 = *(_QWORD *)(v29 + 24);
      }
      v31 = a6;
      *((_DWORD *)hdev + 288) = a5 - v30->left;
      *((_DWORD *)hdev + 289) = v31 - v30->top;
    }
    GdiMovePointer(a1, a7, a8, v19, 1);
  }
  else
  {
    v20 = *((_QWORD *)hdev + 146);
    *((_QWORD *)hdev + 146) = 0LL;
    *((_QWORD *)hdev + 145) = 0LL;
    *((_DWORD *)hdev + 294) = 0;
    if ( v20 )
    {
      do
      {
        v21 = *(_QWORD *)(v20 + 24);
        vSpDeleteSprite((struct SPRITE *)v20);
        v20 = v21;
      }
      while ( v21 );
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v35);
  return v15;
}
