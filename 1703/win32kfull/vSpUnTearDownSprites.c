/*
 * XREFs of vSpUnTearDownSprites @ 0x1C0266BB0
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C024F60C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0258DBC (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A80C4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025A168 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0261E88 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpUnTearDownSprites(__int64 a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *v3; // rbx
  int v5; // eax
  struct SPRITE *v6; // r8
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct SPRITE *v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[96]; // [rsp+40h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v14[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v15; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v16; // [rsp+170h] [rbp+70h] BYREF

  v3 = (struct _SPRITESTATE *)(a1 + 72);
  v12 = a1;
  if ( *(_DWORD *)(a1 + 136) && bIntersect(a2, (const struct _RECTL *)(a1 + 120), &v15) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v14, (struct PDEVOBJ *)&v12);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v13, v3, &v15, 0, 0LL);
    do
    {
      v5 = ENUMAREAS::bEnum((ENUMAREAS *)v13, &v11, &v16);
      v6 = v11;
      v7 = v5;
      if ( v11 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(v3, (struct _POINTL *)v6 + 21, *((struct _SURFOBJ **)v6 + 20), &v16);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v13, &v11) )
            break;
          v6 = v11;
        }
      }
    }
    while ( v7 );
    vSpRedrawArea(v3, &v15, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v13);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v14, v8, v9, v10);
  }
}
