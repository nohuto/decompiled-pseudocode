/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00926CC
 * Callers:
 *     GreZorderSprite @ 0x1C0091084 (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00E4468 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00927C8 (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v14, a1);
  v15 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v15, a2);
  v5 = v14;
  v6 = v15;
  if ( v14 )
  {
    v7 = (_QWORD *)(v14 + 24);
    v8 = *(_QWORD *)(v14 + 24);
    if ( *(_QWORD *)(v8 + 8) != v14 + 24 || (v9 = *(_QWORD **)(v14 + 32), (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( v6 )
    {
      v10 = (_QWORD *)(v6 + 24);
      v11 = *(_QWORD **)(v6 + 24);
      if ( v11[1] != v6 + 24 )
        __fastfail(3u);
      *v7 = v11;
      *(_QWORD *)(v5 + 32) = v10;
      v11[1] = v7;
      *v10 = v7;
    }
    else
    {
      v11 = (_QWORD *)((char *)g_pDwmState + 80);
      v13 = *((_QWORD *)g_pDwmState + 10);
      if ( *(struct DwmState **)(v13 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *v7 = v13;
      *(_QWORD *)(v5 + 32) = v11;
      *(_QWORD *)(v13 + 8) = v7;
      *v11 = v7;
    }
    v12 = (void *)UserReferenceDwmApiPort(v7, v11, v3, v4);
    DwmAsyncZorderSprite(v12);
  }
  if ( v6 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    v5 = v14;
  }
  if ( v5 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
}
