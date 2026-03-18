/*
 * XREFs of ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C01108A0
 * Callers:
 *     GreHideSprites @ 0x1C0110840 (GreHideSprites.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A51E4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011094C (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpHideSprites(HDEV a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  HDEV v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct _SPRITESTATE *v9[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v10; // [rsp+F0h] [rbp+8h] BYREF

  v10 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v9, (struct PDEVOBJ *)&v10);
  v6 = v10;
  v7 = *((_QWORD *)v10 + 11);
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)(v7 + 24);
      if ( a2 )
        *(_DWORD *)v7 |= 0x10u;
      else
        *(_DWORD *)v7 &= ~0x10u;
      bSpUpdatePosition((struct SPRITE *)v7, (struct _POINTL *)(v7 + 112), 0, 1);
      v7 = v8;
    }
    while ( v8 );
  }
  if ( a2 )
  {
    if ( *((_DWORD *)v6 + 20) )
      vSpUnhook((struct _SPRITESTATE *)(v6 + 18));
  }
  else if ( !*((_DWORD *)v6 + 20) )
  {
    vSpHook((struct _SPRITESTATE *)(v6 + 18));
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v9, v3, v4, v5);
}
