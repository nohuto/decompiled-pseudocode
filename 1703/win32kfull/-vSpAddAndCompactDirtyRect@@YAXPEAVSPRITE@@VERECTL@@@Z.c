/*
 * XREFs of ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C025EB70
 * Callers:
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0257980 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C025CF7C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C007E994 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C025ED70 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpAddAndCompactDirtyRect(__int64 a1, struct _RECTL *a2)
{
  int v2; // edi
  __int64 v3; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  struct REGION *v8; // rdx
  int v9; // esi
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  int v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  int v14; // [rsp+40h] [rbp-40h]
  _QWORD v15[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-28h] BYREF
  struct _RECTL v17; // [rsp+68h] [rbp-18h] BYREF

  v2 = 0;
  v3 = _InterlockedExchange64((volatile __int64 *)(a1 + 192), 0LL);
  v10 = v3;
  if ( !v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    if ( v11 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v11, a2);
      v2 = 1;
      v10 = v11;
    }
    if ( v12 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v3 + 80) != 160 || !RGNOBJ::bContain((RGNOBJ *)&v10, a2) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
    if ( v16[0] )
    {
      if ( v15[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v15, a2);
        v9 = RGNOBJ::iComplexity((RGNOBJ *)&v10);
        if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v10, (struct RGNOBJ *)v15, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v16, (struct RGNOBJ *)&v10);
          v2 = 1;
          if ( v9 == 3 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v10) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
            if ( v13 )
            {
              v17 = *(struct _RECTL *)(v10 + 88);
              RGNOBJ::vSet((RGNOBJ *)&v13, &v17);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
              v10 = v13;
            }
            if ( v14 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
LABEL_20:
    if ( v2 )
    {
      if ( v10 )
      {
        v8 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)(a1 + 192), v10);
        v10 = 0LL;
        if ( v8 )
          goto LABEL_23;
      }
    }
    goto LABEL_24;
  }
  v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 192), v6);
  v10 = 0LL;
  if ( v7 )
  {
    v8 = (struct REGION *)v7;
LABEL_23:
    vSpAddAndCompactDirtyRegion((struct SPRITE *)a1, v8);
  }
LABEL_24:
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
}
