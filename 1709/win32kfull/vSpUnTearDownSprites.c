/*
 * XREFs of vSpUnTearDownSprites @ 0x1C0265E40
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02510B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     ?GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0259EE8 (-GreUnTearDownSprites@@YAXPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00EC9E8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00ECA28 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00ECAB4 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED2CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025B2A8 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02618B4 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 */

void __fastcall vSpUnTearDownSprites(__int64 a1, const struct _RECTL *a2, int a3)
{
  struct _SPRITESTATE *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  struct SPRITE *v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct SPRITE *v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[96]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v16[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v17; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v18; // [rsp+170h] [rbp+70h] BYREF

  v3 = (struct _SPRITESTATE *)(a1 + 72);
  v14 = a1;
  if ( *(_DWORD *)(a1 + 136) && bIntersect(a2, (const struct _RECTL *)(a1 + 120), &v17) )
  {
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v14, v5, v6);
    if ( a3 )
      vSpComputeUnlockedRegion(v3);
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, v3, &v17, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v13, &v18);
      v8 = v13;
      v9 = v7;
      if ( v13 )
      {
        while ( 1 )
        {
          vSpReadFromScreen(v3, (struct _POINTL *)v8 + 21, *((struct _SURFOBJ **)v8 + 20), &v18);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v15, &v13) )
            break;
          v8 = v13;
        }
      }
    }
    while ( v9 );
    vSpRedrawArea(v3, &v17, 1);
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v16, v10, v11, v12);
  }
}
