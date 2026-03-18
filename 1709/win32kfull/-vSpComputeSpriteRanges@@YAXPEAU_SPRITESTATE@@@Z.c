/*
 * XREFs of ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED3B0
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C000AA44 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0017A4C (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00EBED4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED2CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED4A4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00ED580 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall vSpComputeSpriteRanges(struct _SPRITESTATE *a1)
{
  struct _SPRITESCAN *v2; // rax
  __int64 v3; // rsi
  int v4; // r8d
  int v5; // r14d
  __int64 v6; // rdi
  _BYTE *v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // [rsp+30h] [rbp-148h] BYREF
  struct _SPRITESCAN *v15; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v16[56]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v17; // [rsp+78h] [rbp-100h]

  v14 = 0LL;
  v2 = (struct _SPRITESCAN *)*((_QWORD *)a1 + 18);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_QWORD *)a1 + 4);
  v17 = 0LL;
  v15 = v2;
  while ( v6 && *(_DWORD *)(v6 + 92) <= v4 )
    v6 = *(_QWORD *)(v6 + 40);
  while ( 1 )
  {
    v7 = v16;
    v8 = v5;
    if ( v3 )
    {
      do
      {
        v9 = *(_DWORD *)(v3 + 92);
        if ( v9 == v4 )
        {
          *((_QWORD *)v7 + 7) = *(_QWORD *)(v3 + 56);
        }
        else
        {
          v7 = (_BYTE *)v3;
          if ( v9 <= v8 )
            v8 = *(_DWORD *)(v3 + 92);
        }
        v3 = *((_QWORD *)v7 + 7);
      }
      while ( v3 );
      v3 = v17;
    }
    if ( v6 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 84);
        if ( v10 != v4 )
          break;
        v11 = v16;
        do
        {
          v12 = v11;
          v11 = (_BYTE *)*((_QWORD *)v11 + 7);
        }
        while ( v11 && *((_DWORD *)v11 + 16) < *(_DWORD *)(v6 + 64) );
        *((_QWORD *)v12 + 7) = v6;
        v13 = *(_DWORD *)(v6 + 92);
        *(_QWORD *)(v6 + 56) = v11;
        v6 = *(_QWORD *)(v6 + 40);
        if ( v13 <= v8 )
          v8 = v13;
        if ( !v6 )
          goto LABEL_27;
      }
      if ( v10 <= v8 )
        v8 = *(_DWORD *)(v6 + 84);
LABEL_27:
      v3 = v17;
    }
    if ( !(unsigned int)bSpComputeScan(a1, (struct SPRITE *)v3, v4, v8, &v15, &v14) )
      break;
    v4 = v8;
    if ( v8 >= v5 )
    {
      *((_DWORD *)a1 + 31) = 1;
      vSpComputeUncoveredRegion(a1, 1);
      return;
    }
  }
}
