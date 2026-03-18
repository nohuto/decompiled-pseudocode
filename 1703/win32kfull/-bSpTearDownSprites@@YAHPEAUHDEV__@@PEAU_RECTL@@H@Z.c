/*
 * XREFs of ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68
 * Callers:
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C024F2F0 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0258D48 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A80C4 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0265AE0 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bSpTearDownSprites(HDEV a1, struct _RECTL *a2, int a3)
{
  unsigned int v5; // ebx
  HDEV v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // esi
  int v11; // r14d
  HDEV v13; // [rsp+38h] [rbp-D0h] BYREF
  struct SPRITE *v14; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v15[96]; // [rsp+48h] [rbp-C0h] BYREF
  struct _SPRITESTATE *v16[24]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v17; // [rsp+168h] [rbp+60h] BYREF
  struct _RECTL v18; // [rsp+178h] [rbp+70h] BYREF

  v13 = a1;
  if ( ((_DWORD)a1[8] & 1) != 0 )
  {
    v6 = a1 + 18;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v13);
    v10 = 0;
    if ( *((_DWORD *)v6 + 16) && bIntersect(a2, (const struct _RECTL *)v6 + 3, &v17) )
    {
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v15, (struct _SPRITESTATE *)v6, &v17, 0, 0LL);
      do
      {
        v11 = ENUMAREAS::bEnum((ENUMAREAS *)v15, &v14, &v18);
        if ( v14 )
        {
          v10 = 1;
          vSpWriteToScreen((struct _SPRITESTATE *)v6, (struct _POINTL *)v14 + 21, *((struct _SURFOBJ **)v14 + 20), &v18);
        }
      }
      while ( v11 );
      if ( a3 )
        vSpComputeUnlockedRegion((struct _SPRITESTATE *)v6);
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v15);
    }
    v5 = v10;
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v16, v7, v8, v9);
  }
  else
  {
    return 0;
  }
  return v5;
}
