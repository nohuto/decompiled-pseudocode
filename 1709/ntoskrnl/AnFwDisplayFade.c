/*
 * XREFs of AnFwDisplayFade @ 0x1407CEDC0
 * Callers:
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     BgpGxRectangleSize @ 0x14013B5B0 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangleEx @ 0x14013C748 (BgpGxConvertRectangleEx.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     BgpGxParseBitmap @ 0x1407CE81C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1407CE960 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x1407CEC18 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x1407CFD10 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1407CFFBC (BgpGxRectangleCreate.c)
 *     BgpTxtGetRegionContext @ 0x1407D07A8 (BgpTxtGetRegionContext.c)
 */

__int64 __fastcall AnFwDisplayFade(__int64 a1)
{
  unsigned int *v1; // rdi
  int *v2; // r12
  unsigned int *v3; // r13
  __int64 v4; // rsi
  int SubRectangle; // r14d
  unsigned int v6; // r15d
  __int64 RegionContext; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  _BOOL8 v10; // rcx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  unsigned int v18; // edx
  unsigned int v19; // r11d
  unsigned int v20; // r11d
  unsigned int v21; // eax
  int Rectangle; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rsi
  int v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  _QWORD *v32; // rsi
  __int64 v33; // r15
  unsigned int v35; // edx
  char v36; // [rsp+38h] [rbp-39h]
  char v37; // [rsp+39h] [rbp-38h]
  char v38; // [rsp+3Ah] [rbp-37h] BYREF
  char v39; // [rsp+3Bh] [rbp-36h]
  unsigned int v40; // [rsp+3Ch] [rbp-35h]
  int *v41; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v42[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int BitsPerPixel; // [rsp+58h] [rbp-19h]
  int *v44; // [rsp+60h] [rbp-11h] BYREF
  unsigned int *v45; // [rsp+68h] [rbp-9h]
  __int64 v46; // [rsp+70h] [rbp-1h] BYREF
  __int64 v47; // [rsp+78h] [rbp+7h] BYREF
  __int64 v48; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[4]; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0LL;
  v47 = 0LL;
  v2 = 0LL;
  v48 = 0LL;
  v3 = 0LL;
  v40 = 0;
  v4 = 0LL;
  SubRectangle = 0;
  v45 = 0LL;
  v6 = 0;
  v42[0] = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  if ( (dword_14035A1B0 & 0x2000) != 0 )
    goto LABEL_36;
  if ( (dword_14035A1B0 & 0x200000) != 0 )
  {
LABEL_69:
    AnFwpDisableProgressTimer(a1);
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(0xFF000000);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v47 )
      BgpGxRectangleDestroy(v47);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v48 )
      BgpGxRectangleDestroy(v48);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( v4 )
      BgpGxRectangleDestroy(v4);
    return (unsigned int)SubRectangle;
  }
  RegionContext = BgpTxtGetRegionContext(qword_14035A260);
  v8 = BgpTxtGetRegionContext(qword_14035A268);
  v9 = v8;
  if ( !RegionContext || !v8 )
  {
    SubRectangle = -1073741670;
    goto LABEL_36;
  }
  xmmword_1403581F0 = *(_OWORD *)RegionContext;
  qword_140358200 = *(_QWORD *)(RegionContext + 16);
  dword_140358208 = *(_DWORD *)(RegionContext + 24);
  xmmword_140358228 = *(_OWORD *)v8;
  qword_140358238 = *(_QWORD *)(v8 + 16);
  dword_140358240 = *(_DWORD *)(v8 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v9);
  AnFwpDisableProgressTimer(v10);
  AnFwDisableBackgroundUpdateTimer();
  v36 = 0;
  v37 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v11 = BitsPerPixel;
  LogFwStat(1LL, 5LL, 0LL);
  if ( !Src )
  {
    v39 = 1;
    goto LABEL_13;
  }
  v39 = 0;
  v12 = BgpGxParseBitmap((__int64)Src, &v41);
  v2 = v41;
  SubRectangle = v12;
  if ( v12 < 0 )
    goto LABEL_36;
  v13 = v41[2];
  if ( v11 != v13 )
  {
    v14 = BgpGxRectangleSize(*v41, v41[1], v13);
    v41 = 0LL;
    v6 = ((v14 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx(v2, v11, &v41, 0);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    v49[0] = v2;
    v2 = v41;
    v40 = 1;
  }
  v15 = BgpGxRectangleSize(*v2, v2[1], v11);
  v16 = qword_14035A20C + dword_14035A214;
  v17 = HIDWORD(qword_14035A20C) + dword_14035A218;
  v18 = xmmword_1403581F0 + DWORD2(xmmword_1403581F0);
  v6 += ((v15 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v15 + 15) & 0xFFFFFFF0) + 32);
  a1 = DWORD1(xmmword_1403581F0);
  v19 = DWORD1(xmmword_1403581F0) + HIDWORD(xmmword_1403581F0);
  if ( (unsigned int)xmmword_1403581F0 <= (int)qword_14035A20C + dword_14035A214
    && (unsigned int)xmmword_1403581F0 >= (unsigned int)qword_14035A20C
    && DWORD1(xmmword_1403581F0) >= HIDWORD(qword_14035A20C)
    && DWORD1(xmmword_1403581F0) <= v17 )
  {
    if ( v18 < (unsigned int)qword_14035A20C || v18 > v16 || v19 < HIDWORD(qword_14035A20C) || v19 > v17 )
      goto LABEL_51;
    v36 = 1;
  }
  v20 = xmmword_140358228 + DWORD2(xmmword_140358228);
  a1 = DWORD1(xmmword_140358228);
  v21 = DWORD1(xmmword_140358228) + HIDWORD(xmmword_140358228);
  if ( (unsigned int)xmmword_140358228 >= (unsigned int)qword_14035A20C
    && (unsigned int)xmmword_140358228 <= v16
    && DWORD1(xmmword_140358228) >= HIDWORD(qword_14035A20C)
    && DWORD1(xmmword_140358228) <= v17 )
  {
    if ( v20 >= (unsigned int)qword_14035A20C && v20 <= v16 && v21 >= HIDWORD(qword_14035A20C) && v21 <= v17 )
    {
      v37 = 1;
      goto LABEL_12;
    }
LABEL_51:
    SubRectangle = -1073741823;
    goto LABEL_36;
  }
LABEL_12:
  if ( !v36 )
  {
LABEL_13:
    Rectangle = BgpGxReadRectangle(v42, (__int64)&xmmword_1403581F0);
    v1 = (unsigned int *)v42[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_36;
    v23 = *(_DWORD *)v42[0];
    v24 = *(_DWORD *)(v42[0] + 4LL);
    v45 = (unsigned int *)v42[0];
    v25 = BgpGxRectangleSize(v23, v24, BitsPerPixel);
    v6 += 2 * (((v25 + 15) & 0xFFFFFFF0) + 32) + ((v25 + 15) & 0xFFFFFFF0) + 32;
  }
  if ( !v37 )
  {
    v26 = BgpGxReadRectangle(&v44, (__int64)&xmmword_140358228);
    v3 = (unsigned int *)v44;
    SubRectangle = v26;
    if ( v26 < 0 )
      goto LABEL_36;
    v27 = BgpGxRectangleSize(*v44, v44[1], BitsPerPixel);
    v6 += 2 * (((v27 + 15) & 0xFFFFFFF0) + 32) + ((v27 + 15) & 0xFFFFFFF0) + 32;
  }
  v28 = qword_14035A20C;
  v29 = HIDWORD(qword_14035A320);
  v44 = (int *)qword_14035A20C;
  if ( !v39 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (unsigned int *)v2,
                     SHIDWORD(qword_14035A320),
                     (__int64)v42,
                     (unsigned int *)&v41,
                     &v38);
    if ( SubRectangle >= 0 )
    {
      v30 = v40;
      v49[v40] = v2;
      v40 = v30 + 1;
      if ( v38 )
      {
        v39 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(v44) = (_DWORD)v41 + (_DWORD)v44;
        HIDWORD(v44) += HIDWORD(v41);
        v28 = (__int64)v44;
        v2 = (int *)v42[0];
      }
    }
  }
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle(v45, v29, (__int64)v42, (unsigned int *)&v41, &v38);
    if ( SubRectangle >= 0 )
    {
      v35 = v40;
      v49[v40] = v45;
      v40 = v35 + 1;
      if ( v38 )
      {
        v45 = 0LL;
        v36 = 1;
      }
      else
      {
        v45 = (unsigned int *)v42[0];
        LODWORD(xmmword_1403581F0) = (_DWORD)v41 + xmmword_1403581F0;
        DWORD1(xmmword_1403581F0) += HIDWORD(v41);
      }
    }
  }
  if ( !v37 )
  {
    SubRectangle = BgpGxFindSubRectangle(v3, v29, (__int64)v42, (unsigned int *)&v41, &v38);
    if ( SubRectangle >= 0 )
    {
      v31 = v40;
      v49[v40] = v3;
      v40 = v31 + 1;
      if ( v38 )
      {
        v37 = 1;
        v3 = 0LL;
      }
      else
      {
        LODWORD(xmmword_140358228) = (_DWORD)v41 + xmmword_140358228;
        DWORD1(xmmword_140358228) += HIDWORD(v41);
        v3 = (unsigned int *)v42[0];
      }
    }
  }
  if ( !v39 )
  {
    LODWORD(v42[0]) = v2[1];
    HIDWORD(v42[0]) = *v2;
    SubRectangle = BgpGxRectangleCreate(v42, BitsPerPixel, &v48);
    if ( SubRectangle < 0 )
    {
      v1 = v45;
      goto LABEL_36;
    }
    memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
  }
  v1 = v45;
  if ( !v36 )
  {
    LODWORD(v42[0]) = v45[1];
    HIDWORD(v42[0]) = *v45;
    SubRectangle = BgpGxRectangleCreate(v42, BitsPerPixel, &v47);
    if ( SubRectangle < 0 )
      goto LABEL_36;
    memset(*(void **)(v47 + 24), 0, *(unsigned int *)(v47 + 12));
  }
  if ( v37 )
    goto LABEL_35;
  LODWORD(v42[0]) = v3[1];
  HIDWORD(v42[0]) = *v3;
  SubRectangle = BgpGxRectangleCreate(v42, BitsPerPixel, &v46);
  if ( SubRectangle >= 0 )
  {
    memset(*(void **)(v46 + 24), 0, *(unsigned int *)(v46 + 12));
LABEL_35:
    LogFwStat(0LL, 5LL, 0LL);
    dword_1403581D4 = 0;
    byte_1403581E0 = v36;
    byte_1403581E1 = v37;
    byte_1403581E2 = v39;
    qword_140358210 = v47;
    qword_140358220 = v48;
    qword_140358250 = v46;
    dword_1403581D0 = 100;
    qword_1403581D8 = v28;
    qword_1403581E8 = (__int64)v1;
    qword_140358218 = (__int64)v2;
    qword_140358248 = (__int64)v3;
    KeResetEvent(&stru_1403A2A70);
    KeInitializeTimerEx(&Timer, NotificationTimer);
    KeInitializeDpc(&stru_1403A29B0, AnFwpFadeAnimationTimer, 0LL);
    byte_14038D871 = 1;
    LogFwStat(1LL, 7LL, 0LL);
    KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_1403A29B0);
    dword_14035A1B0 |= 0x2000u;
    dword_14035A1CC = v6;
  }
LABEL_36:
  if ( v40 )
  {
    v32 = v49;
    v33 = v40;
    do
    {
      BgpGxRectangleDestroy(*v32++);
      --v33;
    }
    while ( v33 );
  }
  if ( SubRectangle < 0 )
  {
    v4 = v46;
    goto LABEL_69;
  }
  return (unsigned int)SubRectangle;
}
