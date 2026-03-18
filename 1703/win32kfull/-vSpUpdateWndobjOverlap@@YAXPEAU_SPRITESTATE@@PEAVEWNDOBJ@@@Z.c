/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0265378
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C025EA04 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F5B4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02616A0 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C025BA0C (-bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C025D5E8 (-bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C02606F4 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0267C2C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rdi
  bool v9; // zf
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // esi
  int v15; // eax
  struct RGNOBJ *v16; // r8
  int v17; // eax
  unsigned int v18; // eax
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _POINTL v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL);
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( v4 == *(_QWORD *)(v5 + 2568) && v5 != *(_QWORD *)a1 )
        return;
    }
  }
  v23 = *((_QWORD *)a1 + 89);
  v25 = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v23);
  for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      v17 = *((_DWORD *)a2 + 46);
      if ( (v17 & 0x2000000) != 0 )
      {
        v18 = v17 & 0xFDFFFFFF;
        *((_DWORD *)a2 + 46) = v18;
        if ( (v18 & 0x80u) != 0 )
        {
          v13 = 256LL;
          goto LABEL_46;
        }
      }
      goto LABEL_47;
    }
    if ( !(unsigned int)bIntersect((char *)a2 + 4, i + 80, v6, v7) && (*((_DWORD *)a2 + 46) & 0x200) == 0
      || RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) != 2
      && ((*((_DWORD *)a2 + 46) & 0x200) == 0 || !v25 || RGNOBJ::bInside((RGNOBJ *)&v25, (struct _RECTL *)(i + 80)) != 2) )
    {
      continue;
    }
    v9 = (*((_DWORD *)a2 + 46) & 0x200) == 0;
    v10 = *(_QWORD *)(i + 184);
    v24 = v10;
    if ( v9 )
      break;
    if ( (*(_DWORD *)i & 1) == 0
      && *(_QWORD *)(i + 72)
      && !(unsigned int)bSpWndObjTrackedSprite((struct SPRITE *)i)
      && bSpSpriteOnTopOfWndObjInZ((struct SPRITE *)i, a2) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
      if ( v20[0] && v21[0] && v19[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v21, (struct _RECTL *)(i + 80));
        v14 = 1;
        if ( !v24 )
          goto LABEL_35;
        if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v25, BYTE1(gafjRgnOp))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v20) == 1
          || !RGNOBJ::bCopy((RGNOBJ *)v19, (struct RGNOBJ *)&v24)
          || (v22.x = -*(_DWORD *)(i + 80),
              v22.y = -*(_DWORD *)(i + 84),
              RGNOBJ::bOffset((RGNOBJ *)v19, &v22),
              vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)v19),
              (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v19) == 1) )
        {
          v14 = 0;
        }
        else
        {
          v22.x = -v22.x;
          v22.y = -v22.y;
          RGNOBJ::bOffset((RGNOBJ *)v19, &v22);
        }
        if ( v24 )
        {
          if ( v14 == 1 )
          {
            v15 = 1;
            goto LABEL_36;
          }
        }
        else
        {
LABEL_35:
          v15 = 0;
LABEL_36:
          v16 = (struct RGNOBJ *)v21;
          if ( v15 )
            v16 = (struct RGNOBJ *)v19;
          if ( RGNOBJ::bMerge((RGNOBJ *)v20, (struct RGNOBJ *)&v23, v16, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v23);
            *((_QWORD *)a1 + 89) = v23;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
      continue;
    }
LABEL_41:
    ;
  }
  if ( v10 && RGNOBJ::bInside((RGNOBJ *)&v24, (struct _RECTL *)((char *)a2 + 4)) != 2 )
    goto LABEL_41;
  v11 = *((_DWORD *)a2 + 46);
  if ( (v11 & 0x2000000) == 0 )
  {
    v12 = v11 | 0x2000000;
    *((_DWORD *)a2 + 46) = v12;
    if ( (v12 & 0x80u) != 0 )
    {
      v13 = 128LL;
LABEL_46:
      (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a2 + 21) + 40LL))(a2, v13);
    }
  }
LABEL_47:
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v23);
    *((_QWORD *)a1 + 89) = v23;
  }
}
