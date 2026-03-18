/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0119B70
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0118570 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C011A090 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C011A0F0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C011A1F0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013BE54 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
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
  char v13; // r14
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // eax
  char v18; // cl
  char v19; // dl
  int v20; // esi
  int v21; // r12d
  int v22; // eax
  __int64 v23; // r8
  bool v24; // zf

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
    if ( (dword_1C018AD64 & 1) != 0 )
    {
      if ( !gPhysModifierState || v9 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, v4) )
          xxxProcessKeyEvent(a1, v5, 0, 0, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, v4);
        v24 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v24 )
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
    if ( (dword_1C018AD64 & 4) != 0 )
    {
      if ( (dword_1C018AD64 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C018AD64 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 1LL, v23, 0LL);
      }
      else
      {
        if ( (dword_1C018AD64 & 0x10) != 0 )
          ApiSetEditionPostRitSound(v8, 0LL, a3, 0LL);
        PostWinlogonMessage(1026LL, 1u);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  v13 = dword_1C018AD64;
  if ( (dword_1C018AD64 & 1) == 0 )
    return 1LL;
  if ( v9 )
  {
    LOBYTE(v3) = ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
    return v3;
  }
  if ( gPhysModifierState == gCurrentModifierBit )
  {
    v17 = *((unsigned __int16 *)a1 + 1);
    if ( v17 >= 0x5B )
    {
      if ( v17 <= 0x5C )
      {
        v7 = -64;
      }
      else if ( v17 > 0x9F )
      {
        if ( v17 <= 0xA1 )
        {
          v7 = 3;
        }
        else if ( v17 <= 0xA3 )
        {
          v7 = 12;
        }
        else if ( v17 <= 0xA5 )
        {
          v7 = 48;
        }
      }
    }
    v18 = gLockBits;
    v19 = gLatchBits;
    LOBYTE(v20) = gLockBits;
    LOBYTE(v21) = gLatchBits;
    if ( ((unsigned __int8)gLockBits & (unsigned __int8)v7) != 0 )
    {
      v21 = (unsigned __int8)(gLatchBits & ~v7);
      v20 = (unsigned __int8)(gLockBits & ~v7);
      xxxUpdateModifierState((unsigned __int8)gCurrentModifierBit | v20 | v21, v4);
      LOBYTE(a3) = gCurrentModifierBit;
      v19 = gLatchBits;
      v18 = gLockBits;
      v13 = dword_1C018AD64;
    }
    else
    {
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        LOBYTE(v21) = gCurrentModifierBit ^ gLatchBits;
      if ( (dword_1C018AD64 & 0x80u) != 0
        && ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
      {
        LOBYTE(v20) = gCurrentModifierBit ^ gLockBits;
      }
    }
    if ( v19 != (_BYTE)v21 || (v22 = 0, v18 != (_BYTE)v20) )
      v22 = 1;
    gLatchBits = v21;
    gLockBits = v20;
    if ( v22 )
    {
      ApiSetEditionPostAccessibility(1LL);
      LOBYTE(a3) = gCurrentModifierBit;
      v13 = dword_1C018AD64;
      LOBYTE(v20) = gLockBits;
    }
    if ( (v13 & 0x40) != 0 )
    {
      if ( ((unsigned __int8)v20 & (unsigned __int8)a3) == 0 )
      {
        ApiSetEditionPostRitSound(v8, 2LL, a3, 0LL);
        LOBYTE(a3) = gCurrentModifierBit;
        LOBYTE(v20) = gLockBits;
      }
      if ( ((unsigned __int8)(gLatchBits | v20) & (unsigned __int8)a3) != 0 )
      {
        ApiSetEditionPostRitSound(v8, 3LL, a3, 0LL);
        LOBYTE(a3) = gCurrentModifierBit;
      }
    }
    LOBYTE(v3) = ((unsigned __int8)a3 & (unsigned __int8)gLatchBits) != 0;
    return v3;
  }
  if ( !(unsigned int)xxxTwoKeysDown(v4) )
    return 1LL;
  if ( gLockBits || (v15 = 0, gLatchBits != gPhysModifierState) )
    v15 = 1;
  gLatchBits = gPhysModifierState;
  gLockBits = 0;
  if ( v15 )
    ApiSetEditionPostAccessibility(1LL);
  if ( (dword_1C018AD64 & 0x40) != 0 )
  {
    ApiSetEditionPostRitSound(v8, 2LL, v14, 0LL);
    ApiSetEditionPostRitSound(v8, 3LL, v16, 0LL);
  }
  return 0LL;
}
