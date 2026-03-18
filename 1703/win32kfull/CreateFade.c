/*
 * XREFs of CreateFade @ 0x1C01C1A90
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01C2A28 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0203A74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C001E1B4 (GreCreateSprite.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0022FD0 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0025848 (InitializeDPIINFO.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     DeleteFadeSprite @ 0x1C01C1F70 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CreateFade(__int64 a1, struct tagRECT *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v10; // rcx
  char v11; // si
  struct tagRECT v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  LONG top; // r10d
  LONG left; // r8d
  LONG v17; // r9d
  LONG v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  void *Sprite; // rax
  __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // [rsp+50h] [rbp-71h] BYREF
  __int64 v28; // [rsp+58h] [rbp-69h] BYREF
  __int64 v29; // [rsp+60h] [rbp-61h] BYREF
  __int64 v30; // [rsp+68h] [rbp-59h] BYREF
  char v31[32]; // [rsp+70h] [rbp-51h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v33[56]; // [rsp+A0h] [rbp-21h] BYREF

  if ( *(_QWORD *)&gfade[4] )
    return 0LL;
  if ( *(_QWORD *)&gfade[2] )
  {
    GreCleanDC();
    GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    *(_QWORD *)&gfade[2] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
    v10 = *(_QWORD *)&gfade[2];
    if ( !v10 )
      return 0LL;
    GreSetDCOwnerEx(v10, 0LL, 0LL, 1LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(a1 + 128);
  LOWORD(v27) = 96;
  if ( a1 )
  {
    gfade[12] |= 8u;
    *(_QWORD *)gfade = *(_QWORD *)a1;
    if ( IsPWNDEligibleForGDIScaling(a1) )
    {
      v23 = *(unsigned __int16 *)(a1 + 372);
      if ( (_WORD)v23 != 96 )
        LOWORD(v27) = GreGetScaledLogPixels(v23);
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
    xxxSetLayeredWindow((struct tagWND *)a1, 0, 0LL);
    if ( !(_BYTE)v28 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v28);
    }
  }
  else
  {
    v11 = a5;
    v12 = *a2;
    v29 = 0LL;
    v32 = v12;
    if ( (a5 & 0xF) == 2 )
    {
      v29 = MonitorFromRect(&a2->left, 2u);
    }
    else
    {
      v30 = 0LL;
      v13 = MonitorFlagsFromDpiAwarenessContext(a5);
      LogicalToPhysicalDPIPoint(&v30, a2, v13 | 2u, &v29);
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x40) != 0 )
      {
        v14 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 40) + 128LL);
        if ( (_WORD)v14 != 96 )
        {
          v28 = 0LL;
          LOWORD(v27) = GreGetScaledLogPixels(v14);
          ScaleDPIRect(&v32, &v32, (unsigned __int16)v27, 96LL, 0LL, 0LL);
          top = v32.top;
          v11 = 16;
          left = v32.left;
          v17 = a2->top;
          v18 = v32.left;
          v19 = a2->left;
          v20 = v32.top - v17;
          a2->bottom += v32.top - v17;
          v21 = v18 - v19;
          a2->right += v21;
          v32.right += left;
          v32.bottom += top;
          a2->left = v21 + v19;
          a2->top = v17 + v20;
          v32.left = 2 * left;
          v32.top = 2 * top;
        }
      }
    }
    InitializeDPIINFO((__int64)v31, v11, v29, 0LL);
    gfade[12] &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(&v33[4], 0, 0x34uLL);
      a4 &= ~0x100u;
      *(struct tagRECT *)v33 = v32;
      *(struct tagRECT *)&v33[16] = v32;
      *(_QWORD *)&v33[48] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 32LL),
                 0LL,
                 a2,
                 (struct tagMINIWINDOWINFO *)v33,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v27);
    }
    else
    {
      Sprite = GreCreateSprite(*(HDEV *)(gpDispInfo + 32LL), 0LL, a2, 0LL, 1, 1, 0, 0, 0, (unsigned __int16 *)&v27);
    }
    *(_QWORD *)gfade = Sprite;
    if ( *(_QWORD *)gfade )
      GreDwmNotifySpriteDPIChange(*(__int64 *)gfade, 0LL, *(HSPRITE *)gfade);
  }
  if ( !*(_QWORD *)gfade )
    return 0LL;
  v24 = a2->right - a2->left;
  v25 = a2->bottom - a2->top;
  *(_QWORD *)&gfade[4] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 48LL), v24, v25, 0, 0LL, &v27);
  v26 = *(_QWORD *)&gfade[4];
  if ( !v26 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(*(_QWORD *)&gfade[2], v26);
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      GreSetLayout(*(_QWORD *)&gfade[2], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 2147483650LL, 0LL, 0LL);
  gfade[6] = a2->left;
  gfade[7] = a2->top;
  gfade[8] = v24;
  gfade[9] = v25;
  gfade[10] = a3;
  gfade[12] |= a4;
  gfade[13] = (gfade[12] & 0x40) != 0 ? 0xFF00FF : 0;
  return *(_QWORD *)&gfade[2];
}
