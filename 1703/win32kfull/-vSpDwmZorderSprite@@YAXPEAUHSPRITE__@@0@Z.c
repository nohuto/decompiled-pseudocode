/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C0025CB0
 * Callers:
 *     GreZorderSprite @ 0x1C002374C (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00A0C2C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C0025DBC (DwmAsyncZorderSprite.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v13, a1);
  v14 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v14, a2);
  v3 = v13;
  v4 = v14;
  if ( v13 )
  {
    v5 = (_QWORD *)(v13 + 24);
    v6 = *(_QWORD *)(v13 + 24);
    v7 = *(_QWORD **)(v13 + 32);
    if ( *(_QWORD *)(v6 + 8) != v13 + 24 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( v4 )
    {
      v8 = (_QWORD *)(v4 + 24);
      v9 = *(_QWORD *)(v4 + 24);
      if ( *(_QWORD *)(v9 + 8) != v4 + 24 )
        __fastfail(3u);
      *v5 = v9;
      *(_QWORD *)(v3 + 32) = v8;
      *(_QWORD *)(v9 + 8) = v5;
      *v8 = v5;
    }
    else
    {
      v10 = (_QWORD *)((char *)g_pDwmState + 80);
      v11 = *((_QWORD *)g_pDwmState + 10);
      if ( *(struct DwmState **)(v11 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *v5 = v11;
      *(_QWORD *)(v3 + 32) = v10;
      *(_QWORD *)(v11 + 8) = v5;
      *v10 = v5;
    }
    v12 = (void *)UserReferenceDwmApiPort();
    DwmAsyncZorderSprite(v12);
  }
  if ( v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
    v3 = v13;
  }
  if ( v3 )
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
}
