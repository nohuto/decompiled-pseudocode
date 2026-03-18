/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0264720
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C025E744 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F2F4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02611B8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C025CAE8 (-bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C025D824 (-bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C026040C (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C02669FC (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rdi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // esi
  int v13; // eax
  struct RGNOBJ *v14; // r8
  int v15; // eax
  unsigned int v16; // eax
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _POINTL v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

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
  v21 = *((_QWORD *)a1 + 89);
  v23 = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v21);
  for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      v15 = *((_DWORD *)a2 + 46);
      if ( (v15 & 0x2000000) != 0 )
      {
        v16 = v15 & 0xFDFFFFFF;
        *((_DWORD *)a2 + 46) = v16;
        if ( (v16 & 0x80u) != 0 )
        {
          v11 = 256LL;
          goto LABEL_46;
        }
      }
      goto LABEL_47;
    }
    if ( !(unsigned int)bIntersect((char *)a2 + 4, i + 80) && (*((_DWORD *)a2 + 46) & 0x200) == 0
      || RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) != 2
      && ((*((_DWORD *)a2 + 46) & 0x200) == 0 || !v23 || RGNOBJ::bInside((RGNOBJ *)&v23, (struct _RECTL *)(i + 80)) != 2) )
    {
      continue;
    }
    v7 = (*((_DWORD *)a2 + 46) & 0x200) == 0;
    v8 = *(_QWORD *)(i + 184);
    v22 = v8;
    if ( v7 )
      break;
    if ( (*(_DWORD *)i & 1) == 0
      && *(_QWORD *)(i + 72)
      && !(unsigned int)bSpWndObjTrackedSprite((struct SPRITE *)i)
      && bSpSpriteOnTopOfWndObjInZ((struct SPRITE *)i, a2) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v18[0] && v19[0] && v17[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v19, (struct _RECTL *)(i + 80));
        v12 = 1;
        if ( !v22 )
          goto LABEL_35;
        if ( RGNOBJ::bMerge((RGNOBJ *)v18, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v23, BYTE1(gafjRgnOp))
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) == 1
          || !RGNOBJ::bCopy((RGNOBJ *)v17, (struct RGNOBJ *)&v22)
          || (v20.x = -*(_DWORD *)(i + 80),
              v20.y = -*(_DWORD *)(i + 84),
              RGNOBJ::bOffset((RGNOBJ *)v17, &v20),
              vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)v17),
              (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v17) == 1) )
        {
          v12 = 0;
        }
        else
        {
          v20.x = -v20.x;
          v20.y = -v20.y;
          RGNOBJ::bOffset((RGNOBJ *)v17, &v20);
        }
        if ( v22 )
        {
          if ( v12 == 1 )
          {
            v13 = 1;
            goto LABEL_36;
          }
        }
        else
        {
LABEL_35:
          v13 = 0;
LABEL_36:
          v14 = (struct RGNOBJ *)v19;
          if ( v13 )
            v14 = (struct RGNOBJ *)v17;
          if ( RGNOBJ::bMerge((RGNOBJ *)v18, (struct RGNOBJ *)&v21, v14, BYTE2(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)v18, (struct RGNOBJ *)&v21);
            *((_QWORD *)a1 + 89) = v21;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
      continue;
    }
LABEL_41:
    ;
  }
  if ( v8 && RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)((char *)a2 + 4)) != 2 )
    goto LABEL_41;
  v9 = *((_DWORD *)a2 + 46);
  if ( (v9 & 0x2000000) == 0 )
  {
    v10 = v9 | 0x2000000;
    *((_DWORD *)a2 + 46) = v10;
    if ( (v10 & 0x80u) != 0 )
    {
      v11 = 128LL;
LABEL_46:
      (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a2 + 21) + 40LL))(a2, v11);
    }
  }
LABEL_47:
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v21);
    *((_QWORD *)a1 + 89) = v21;
  }
}
