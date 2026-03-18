/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C008BF64 (GreCreateSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00916F8 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0092178 (InitializeDPIINFO.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DeleteFadeSprite @ 0x1C013E1F0 (DeleteFadeSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, __m128i *a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int32 v23; // r10d
  __int32 v24; // r8d
  LONG v25; // r9d
  __int32 v26; // ecx
  LONG v27; // eax
  __int32 v28; // edx
  __int32 v29; // ecx
  void *Sprite; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp-71h] BYREF
  __m128i v33; // [rsp+68h] [rbp-69h] BYREF
  __int64 v34; // [rsp+78h] [rbp-59h] BYREF
  __int64 v35; // [rsp+80h] [rbp-51h] BYREF
  __int64 v36; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v37[32]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v38[56]; // [rsp+B0h] [rbp-21h] BYREF

  v5 = a5;
  if ( gfade[2] )
    return 0LL;
  v10 = gfade[1];
  if ( v10 )
  {
    GreCleanDC(v10);
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
    v11 = gfade[1];
    if ( !v11 )
      return 0LL;
    GreSetDCOwnerEx(v11, 0LL, 0LL, 1LL);
  }
  if ( a1 )
    a2 = (__m128i *)((char *)a1 + 128);
  LOWORD(v32) = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( IsPWNDEligibleForGDIScaling((__int64)a1) )
    {
      v31 = *((unsigned __int16 *)a1 + 186);
      if ( (_WORD)v31 != 96 )
        LOWORD(v32) = GreGetScaledLogPixels(v31);
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v35);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
  }
  else
  {
    v18 = *a2;
    v34 = 0LL;
    v33 = v18;
    if ( (a5 & 0xF) == 2 )
    {
      v34 = MonitorFromRect((struct tagRECT *)a2, 2u, a5);
    }
    else
    {
      v36 = 0LL;
      LogicalToPhysicalDPIPoint(&v36, a2, a5, &v34);
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 456) + 224LL) & 0x40) != 0 )
      {
        v22 = *(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 64LL);
        if ( (_WORD)v22 != 96 )
        {
          v35 = 0LL;
          LOWORD(v32) = GreGetScaledLogPixels(v22);
          ScaleDPIRect(&v33, &v33, v32, 0x60u, 0LL, 0LL);
          v23 = v33.m128i_i32[1];
          v5 = 24592;
          v24 = v33.m128i_i32[0];
          v25 = a2->m128i_i32[1];
          v26 = v33.m128i_i32[0];
          v27 = a2->m128i_i32[0];
          v28 = v33.m128i_i32[1] - v25;
          a2->m128i_i32[3] += v33.m128i_i32[1] - v25;
          v29 = v26 - v27;
          a2->m128i_i32[2] += v29;
          v33.m128i_i32[2] += v24;
          v33.m128i_i32[3] += v23;
          a2->m128i_i32[0] = v29 + v27;
          a2->m128i_i32[1] = v25 + v28;
          v33.m128i_i32[0] = 2 * v24;
          v33.m128i_i32[1] = 2 * v23;
        }
      }
    }
    InitializeDPIINFO((__int64)v37, v5, v34, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v38, 0, sizeof(v38));
      a4 &= ~0x100u;
      *(__m128i *)v38 = v33;
      *(__m128i *)&v38[16] = v33;
      *(_QWORD *)&v38[48] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 32LL),
                 0LL,
                 (struct tagRECT *)a2,
                 (struct tagMINIWINDOWINFO *)v38,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v32);
    }
    else
    {
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 32LL),
                 0LL,
                 (struct tagRECT *)a2,
                 0LL,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v32);
    }
    gfade[0] = Sprite;
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v12 = a2->m128i_i32[2] - a2->m128i_i32[0];
  v13 = a2->m128i_i32[3] - a2->m128i_i32[1];
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 48LL), v12, v13, 0, 0LL, (unsigned __int16 *)&v32);
  v16 = gfade[2];
  if ( !v16 )
  {
    DeleteFadeSprite(gfade[0], 0LL, v14, v15);
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v16);
  if ( a1 )
  {
    if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 0LL);
  LODWORD(gfade[3]) = a2->m128i_i32[0];
  HIDWORD(gfade[3]) = a2->m128i_i32[1];
  LODWORD(gfade[4]) = v12;
  HIDWORD(gfade[4]) = v13;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}
