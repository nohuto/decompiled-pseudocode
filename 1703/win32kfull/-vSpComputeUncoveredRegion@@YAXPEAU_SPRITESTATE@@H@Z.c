/*
 * XREFs of ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A8520
 * Callers:
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A843C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C024F820 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C007E828 (-vComputeUncoveredSpriteRegion@RGNOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

void __fastcall vSpComputeUncoveredRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h]
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  v4 = *((_QWORD *)a1 + 88);
  v5 = *((_QWORD *)a1 + 19) - *((_QWORD *)a1 + 18) + 120LL;
  if ( *(unsigned int *)(v4 + 24) >= v5 )
  {
LABEL_2:
    v14 = *((_QWORD *)a1 + 88);
    v8 = *(_QWORD *)a1;
    RGNOBJ::vComputeUncoveredSpriteRegion((RGNOBJ *)&v14, (struct PDEVOBJ *)&v8);
    RGNOBJ::vTighten((RGNOBJ *)&v14);
    if ( *((_QWORD *)a1 + 130) && a2 == 1 )
    {
      v9 = *((_QWORD *)a1 + 130);
      v13 = *((_QWORD *)a1 + 89);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      if ( v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)&v13, (struct _RECTL *)a1 + 3);
        if ( !RGNOBJ::bMerge((RGNOBJ *)v12, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v9, BYTE4(gafjRgnOp)) )
          RGNOBJ::vSet((RGNOBJ *)v12);
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v13, (struct RGNOBJ *)&v14, (struct RGNOBJ *)v12, BYTE2(gafjRgnOp)) )
          RGNOBJ::vSet((RGNOBJ *)&v13);
        *((_QWORD *)a1 + 88) = v13;
        *((_QWORD *)a1 + 89) = v14;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
    }
    v6 = *((_QWORD *)a1 + 88);
    *(_DWORD *)(v6 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    return;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, v5);
  if ( v10 )
  {
    v15 = v4;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    v7 = v11 == 1;
    *((_QWORD *)a1 + 88) = v10;
    if ( v7 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
    goto LABEL_2;
  }
  if ( v11 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
}
