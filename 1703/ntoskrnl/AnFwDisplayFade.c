/*
 * XREFs of AnFwDisplayFade @ 0x14075651C
 * Callers:
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     BgpGxRectangleSize @ 0x14014047C (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14014141C (BgpGxConvertRectangleEx.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     BgpGxParseBitmap @ 0x140755FF4 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14075615C (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x140756374 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x140757D58 (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x140757DE0 (BgpTxtGetRegionContext.c)
 */

__int64 __fastcall AnFwDisplayFade(__int64 a1)
{
  unsigned int *v1; // r13
  __int64 v2; // rsi
  int *v3; // r15
  unsigned int *v4; // r12
  __int64 v5; // rdi
  int SubRectangle; // r14d
  __int64 RegionContext; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  _BOOL8 v10; // rcx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned int v21; // r11d
  unsigned int v22; // r11d
  unsigned int v23; // eax
  int Rectangle; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rsi
  int v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edi
  __int64 v33; // rdi
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  unsigned int v37; // ecx
  char v38; // [rsp+38h] [rbp-39h]
  char v39; // [rsp+39h] [rbp-38h]
  char v40; // [rsp+3Ah] [rbp-37h] BYREF
  char v41; // [rsp+3Bh] [rbp-36h]
  unsigned int v42; // [rsp+3Ch] [rbp-35h]
  int *v43; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-29h]
  _QWORD v45[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned int BitsPerPixel; // [rsp+60h] [rbp-11h]
  int *v47; // [rsp+68h] [rbp-9h] BYREF
  __int64 v48; // [rsp+70h] [rbp-1h] BYREF
  __int64 v49; // [rsp+78h] [rbp+7h] BYREF
  __int64 v50; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v51[4]; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0LL;
  v50 = 0LL;
  v2 = 0LL;
  v42 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v45[0] = 0LL;
  v5 = 0LL;
  v43 = 0LL;
  SubRectangle = 0;
  v49 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( (dword_140341A30 & 0x2000) != 0 )
    goto LABEL_37;
  if ( (dword_140341A30 & 0x200000) != 0 )
  {
LABEL_70:
    AnFwpDisableProgressTimer(a1);
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v50 )
      BgpGxRectangleDestroy(v50);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v4 )
      BgpGxRectangleDestroy(v4);
    if ( v5 )
      BgpGxRectangleDestroy(v5);
    return (unsigned int)SubRectangle;
  }
  RegionContext = BgpTxtGetRegionContext(qword_140341AE0);
  v8 = BgpTxtGetRegionContext(qword_140341AE8);
  v9 = v8;
  if ( !RegionContext || !v8 )
  {
    SubRectangle = -1073741670;
    goto LABEL_37;
  }
  xmmword_14033FB60 = *(_OWORD *)RegionContext;
  qword_14033FB70 = *(_QWORD *)(RegionContext + 16);
  dword_14033FB78 = *(_DWORD *)(RegionContext + 24);
  xmmword_14033FB98 = *(_OWORD *)v8;
  qword_14033FBA8 = *(_QWORD *)(v8 + 16);
  dword_14033FBB0 = *(_DWORD *)(v8 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v9);
  AnFwpDisableProgressTimer(v10);
  AnFwDisableBackgroundUpdateTimer();
  v38 = 0;
  v39 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v11 = BitsPerPixel;
  LogFwStat(1LL, 5LL, 0LL);
  if ( !Src )
  {
    v41 = 1;
    v20 = 0;
    goto LABEL_13;
  }
  v41 = 0;
  v12 = BgpGxParseBitmap((__int64)Src, &v43);
  v3 = v43;
  SubRectangle = v12;
  if ( v12 < 0 )
    goto LABEL_37;
  v13 = v43[2];
  if ( v11 == v13 )
  {
    v15 = 0;
  }
  else
  {
    v14 = BgpGxRectangleSize(*v43, v43[1], v13);
    v43 = 0LL;
    v15 = ((v14 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx((__int64)v3, v11, &v43, 0);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    v51[0] = v3;
    v3 = v43;
    v42 = 1;
  }
  v16 = BgpGxRectangleSize(*v3, v3[1], v11);
  v17 = qword_140341A8C + dword_140341A94;
  v18 = HIDWORD(qword_140341A8C) + dword_140341A98;
  v19 = xmmword_14033FB60 + DWORD2(xmmword_14033FB60);
  v20 = v15 + ((v16 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v16 + 15) & 0xFFFFFFF0) + 32);
  a1 = DWORD1(xmmword_14033FB60);
  v21 = DWORD1(xmmword_14033FB60) + HIDWORD(xmmword_14033FB60);
  v44 = v20;
  if ( (unsigned int)xmmword_14033FB60 <= (int)qword_140341A8C + dword_140341A94
    && (unsigned int)xmmword_14033FB60 >= (unsigned int)qword_140341A8C
    && DWORD1(xmmword_14033FB60) >= HIDWORD(qword_140341A8C)
    && DWORD1(xmmword_14033FB60) <= v18 )
  {
    if ( v19 < (unsigned int)qword_140341A8C || v19 > v17 || v21 < HIDWORD(qword_140341A8C) || v21 > v18 )
      goto LABEL_52;
    v38 = 1;
  }
  v22 = xmmword_14033FB98 + DWORD2(xmmword_14033FB98);
  a1 = DWORD1(xmmword_14033FB98);
  v23 = DWORD1(xmmword_14033FB98) + HIDWORD(xmmword_14033FB98);
  if ( (unsigned int)xmmword_14033FB98 >= (unsigned int)qword_140341A8C
    && (unsigned int)xmmword_14033FB98 <= v17
    && DWORD1(xmmword_14033FB98) >= HIDWORD(qword_140341A8C)
    && DWORD1(xmmword_14033FB98) <= v18 )
  {
    if ( v22 >= (unsigned int)qword_140341A8C && v22 <= v17 && v23 >= HIDWORD(qword_140341A8C) && v23 <= v18 )
    {
      v39 = 1;
      goto LABEL_12;
    }
LABEL_52:
    SubRectangle = -1073741823;
    goto LABEL_37;
  }
LABEL_12:
  v11 = BitsPerPixel;
  if ( !v38 )
  {
LABEL_13:
    Rectangle = BgpGxReadRectangle(v45, (__int64)&xmmword_14033FB60);
    v1 = (unsigned int *)v45[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_37;
    v25 = BgpGxRectangleSize(*(_DWORD *)v45[0], *(_DWORD *)(v45[0] + 4LL), v11);
    v20 += ((v25 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v25 + 15) & 0xFFFFFFF0) + 32);
    v44 = v20;
  }
  if ( !v39 )
  {
    v26 = BgpGxReadRectangle(&v47, (__int64)&xmmword_14033FB98);
    v4 = (unsigned int *)v47;
    SubRectangle = v26;
    if ( v26 < 0 )
      goto LABEL_37;
    v27 = BgpGxRectangleSize(*v47, v47[1], v11);
    v44 = v20 + ((v27 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v27 + 15) & 0xFFFFFFF0) + 32);
  }
  v28 = qword_140341A8C;
  v29 = HIDWORD(qword_140341BA0);
  v47 = (int *)qword_140341A8C;
  if ( !v41 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (unsigned int *)v3,
                     SHIDWORD(qword_140341BA0),
                     (__int64)v45,
                     (unsigned int *)&v43,
                     &v40);
    if ( SubRectangle >= 0 )
    {
      v30 = v42;
      v51[v42] = v3;
      v42 = v30 + 1;
      if ( v40 )
      {
        v41 = 1;
        v3 = 0LL;
      }
      else
      {
        LODWORD(v47) = (_DWORD)v43 + (_DWORD)v47;
        HIDWORD(v47) += HIDWORD(v43);
        v28 = (__int64)v47;
        v3 = (int *)v45[0];
      }
    }
  }
  if ( !v38 )
  {
    SubRectangle = BgpGxFindSubRectangle(v1, v29, (__int64)v45, (unsigned int *)&v43, &v40);
    if ( SubRectangle >= 0 )
    {
      v37 = v42;
      v51[v42] = v1;
      v42 = v37 + 1;
      if ( v40 )
      {
        v38 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(xmmword_14033FB60) = (_DWORD)v43 + xmmword_14033FB60;
        DWORD1(xmmword_14033FB60) += HIDWORD(v43);
        v1 = (unsigned int *)v45[0];
      }
    }
  }
  if ( !v39 )
  {
    SubRectangle = BgpGxFindSubRectangle(v4, v29, (__int64)v45, (unsigned int *)&v43, &v40);
    if ( SubRectangle >= 0 )
    {
      v31 = v42;
      v51[v42] = v4;
      v42 = v31 + 1;
      if ( v40 )
      {
        v39 = 1;
        v4 = 0LL;
      }
      else
      {
        LODWORD(xmmword_14033FB98) = (_DWORD)v43 + xmmword_14033FB98;
        DWORD1(xmmword_14033FB98) += HIDWORD(v43);
        v4 = (unsigned int *)v45[0];
      }
    }
  }
  v32 = BitsPerPixel;
  if ( !v41 )
  {
    LODWORD(v45[0]) = v3[1];
    HIDWORD(v45[0]) = *v3;
    SubRectangle = BgpGxRectangleCreate(v45, BitsPerPixel, &v49);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    memset(*(void **)(v49 + 24), 0, *(unsigned int *)(v49 + 12));
  }
  if ( !v38 )
  {
    LODWORD(v45[0]) = v1[1];
    HIDWORD(v45[0]) = *v1;
    SubRectangle = BgpGxRectangleCreate(v45, v32, &v50);
    if ( SubRectangle < 0 )
      goto LABEL_37;
    memset(*(void **)(v50 + 24), 0, *(unsigned int *)(v50 + 12));
  }
  if ( v39 )
  {
    v33 = v48;
LABEL_36:
    LogFwStat(0LL, 5LL, 0LL);
    dword_14033FB44 = 0;
    byte_14033FB50 = v38;
    byte_14033FB51 = v39;
    byte_14033FB52 = v41;
    qword_14033FB80 = v50;
    qword_14033FB90 = v49;
    dword_14033FB40 = 100;
    qword_14033FB48 = v28;
    qword_14033FB58 = (__int64)v1;
    qword_14033FB88 = (__int64)v3;
    qword_14033FBB8 = (__int64)v4;
    qword_14033FBC0 = v33;
    KeResetEvent(&stru_140387580);
    KeInitializeTimerEx(&stru_140387540, NotificationTimer);
    KeInitializeDpc(&stru_140387500, AnFwpFadeAnimationTimer, 0LL);
    byte_14036F159 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&stru_140387540, 0LL, 0x1Eu, 0, &stru_140387500);
    dword_140341A30 |= 0x2000u;
    dword_140341A4C = v44;
    goto LABEL_37;
  }
  LODWORD(v45[0]) = v4[1];
  HIDWORD(v45[0]) = *v4;
  SubRectangle = BgpGxRectangleCreate(v45, v32, &v48);
  if ( SubRectangle >= 0 )
  {
    v33 = v48;
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
    goto LABEL_36;
  }
LABEL_37:
  if ( v42 )
  {
    v34 = v51;
    v35 = v42;
    do
    {
      BgpGxRectangleDestroy(*v34++);
      --v35;
    }
    while ( v35 );
  }
  if ( SubRectangle < 0 )
  {
    v5 = v48;
    v2 = v49;
    goto LABEL_70;
  }
  return (unsigned int)SubRectangle;
}
