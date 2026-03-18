/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0117400 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0118CC0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C0118D20 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0118E20 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  __int64 v5; // r14
  char v7; // r10
  __int64 v8; // rbp
  int v9; // r9d
  char v11; // dl
  char v12; // al
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // eax
  int v17; // esi
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r8
  bool v21; // zf

  v3 = 0;
  v4 = a3;
  v5 = a2;
  LOBYTE(a3) = gCurrentModifierBit;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  v9 = *((_WORD *)a1 + 1) & 0x8000;
  if ( !gCurrentModifierBit )
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C018F8E4 & 1) != 0 )
    {
      if ( !gPhysModifierState || v9 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, v4) )
          xxxProcessKeyEvent((unsigned __int16 *)a1, v5, 0, 0, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, v4);
        v21 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v21 )
          ApiSetEditionPostAccessibility(1LL);
        return 0LL;
      }
      xxxTwoKeysDown(v4);
    }
    return 1LL;
  }
  if ( (*((_WORD *)a1 + 1) & 0x8000) == 0
    && ((unsigned __int8)gPrevModifierState & (unsigned __int8)gCurrentModifierBit) != 0 )
  {
    gPrevModifierState = gPhysModifierState;
    return 1LL;
  }
  gPrevModifierState = gPhysModifierState;
  if ( *((_BYTE *)a1 + 2) != 0xA0 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
  {
    v11 = 0;
    gStickyKeysLeftShiftCount = 0;
  }
  else
  {
    v11 = ++gStickyKeysLeftShiftCount;
  }
  if ( *((_BYTE *)a1 + 2) != 0xA1 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
  {
    v12 = 0;
    gStickyKeysRightShiftCount = 0;
  }
  else
  {
    v12 = ++gStickyKeysRightShiftCount;
  }
  if ( v11 == 10 || v12 == 10 )
  {
    if ( (dword_1C018F8E4 & 4) != 0 )
    {
      if ( (dword_1C018F8E4 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C018F8E4 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 1LL, v20, 0LL);
      }
      else
      {
        if ( (dword_1C018F8E4 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 0LL, a3, 0LL);
        PostWinlogonMessage(1026LL, 1u);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  if ( (dword_1C018F8E4 & 1) == 0 )
    return 1LL;
  if ( v9 )
  {
    LOBYTE(v3) = ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
    return v3;
  }
  if ( gPhysModifierState == gCurrentModifierBit )
  {
    v16 = *((unsigned __int16 *)a1 + 1);
    if ( v16 >= 0x5B )
    {
      if ( v16 <= 0x5C )
      {
        v7 = -64;
      }
      else if ( v16 > 0x9F )
      {
        if ( v16 <= 0xA1 )
        {
          v7 = 3;
        }
        else if ( v16 <= 0xA3 )
        {
          v7 = 12;
        }
        else if ( v16 <= 0xA5 )
        {
          v7 = 48;
        }
      }
    }
    LOBYTE(v17) = gLockBits;
    LOBYTE(v18) = gLatchBits;
    if ( ((unsigned __int8)gLockBits & (unsigned __int8)v7) != 0 )
    {
      v18 = (unsigned __int8)(gLatchBits & ~v7);
      v17 = (unsigned __int8)(gLockBits & ~v7);
      xxxUpdateModifierState((unsigned __int8)gCurrentModifierBit | v17 | v18, v4);
    }
    else
    {
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        LOBYTE(v18) = gCurrentModifierBit ^ gLatchBits;
      if ( (dword_1C018F8E4 & 0x80u) != 0
        && ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
      {
        LOBYTE(v17) = gCurrentModifierBit ^ gLockBits;
      }
    }
    if ( gLatchBits != (_BYTE)v18 || (v19 = 0, gLockBits != (_BYTE)v17) )
      v19 = 1;
    gLatchBits = v18;
    gLockBits = v17;
    if ( v19 )
      ApiSetEditionPostAccessibility(1LL);
    if ( (dword_1C018F8E4 & 0x40) != 0 )
    {
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        ApiSetEditionPostRitSound(v8, 2LL, a3, 0LL);
      if ( ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        ApiSetEditionPostRitSound(v8, 3LL, a3, 0LL);
    }
    LOBYTE(v3) = ((unsigned __int8)gLatchBits & (unsigned __int8)gCurrentModifierBit) != 0;
    return v3;
  }
  if ( !(unsigned int)xxxTwoKeysDown(v4) )
    return 1LL;
  if ( gLockBits || (v14 = 0, gLatchBits != gPhysModifierState) )
    v14 = 1;
  gLatchBits = gPhysModifierState;
  gLockBits = 0;
  if ( v14 )
    ApiSetEditionPostAccessibility(1LL);
  if ( (dword_1C018F8E4 & 0x40) != 0 )
  {
    ApiSetEditionPostRitSound(v8, 2LL, v13, 0LL);
    ApiSetEditionPostRitSound(v8, 3LL, v15, 0LL);
  }
  return 0LL;
}
