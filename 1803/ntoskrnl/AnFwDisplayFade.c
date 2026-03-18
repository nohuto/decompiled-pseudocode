/*
 * XREFs of AnFwDisplayFade @ 0x14083B548
 * Callers:
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     BgpGxRectangleSize @ 0x140165048 (BgpGxRectangleSize.c)
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     BgpGxConvertRectangleEx @ 0x1401739C0 (BgpGxConvertRectangleEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14083C60C (AnFwpDisableProgressTimer.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 *     BgpGxParseBitmap @ 0x14083D624 (BgpGxParseBitmap.c)
 *     BgpGxFindSubRectangle @ 0x140840DEC (BgpGxFindSubRectangle.c)
 *     BgpGxReadRectangle @ 0x140841048 (BgpGxReadRectangle.c)
 *     BgpTxtGetRegionContext @ 0x1408415B8 (BgpTxtGetRegionContext.c)
 */

__int64 AnFwDisplayFade()
{
  __int64 v0; // rdi
  int *v1; // r12
  int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rdx
  __int64 RegionContext; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
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
  unsigned int v31; // edx
  unsigned int v32; // ecx
  _QWORD *v33; // rsi
  __int64 v34; // r15
  char v35; // [rsp+38h] [rbp-39h]
  char v36; // [rsp+39h] [rbp-38h]
  char v37; // [rsp+3Ah] [rbp-37h] BYREF
  char v38; // [rsp+3Bh] [rbp-36h]
  unsigned int v39; // [rsp+3Ch] [rbp-35h]
  int *v40; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int BitsPerPixel; // [rsp+58h] [rbp-19h]
  int *v43; // [rsp+60h] [rbp-11h] BYREF
  _DWORD *v44; // [rsp+68h] [rbp-9h]
  __int64 v45; // [rsp+70h] [rbp-1h] BYREF
  __int64 v46; // [rsp+78h] [rbp+7h] BYREF
  __int64 v47; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v48[4]; // [rsp+88h] [rbp+17h] BYREF

  v0 = 0LL;
  v46 = 0LL;
  v1 = 0LL;
  v47 = 0LL;
  v2 = 0LL;
  v39 = 0;
  v3 = 0LL;
  SubRectangle = 0;
  v44 = 0LL;
  v5 = 0;
  v41[0] = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  if ( (dword_14039D7F0 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_14039D7F0 & 0x200000) != 0 )
    goto LABEL_3;
  RegionContext = BgpTxtGetRegionContext(qword_14039D8B0);
  v9 = BgpTxtGetRegionContext(qword_14039D8B8);
  v10 = v9;
  if ( !RegionContext || !v9 )
  {
    SubRectangle = -1073741670;
    goto LABEL_76;
  }
  xmmword_14039C980 = *(_OWORD *)RegionContext;
  qword_14039C990 = *(_QWORD *)(RegionContext + 16);
  dword_14039C998 = *(_DWORD *)(RegionContext + 24);
  xmmword_14039C9B8 = *(_OWORD *)v9;
  qword_14039C9C8 = *(_QWORD *)(v9 + 16);
  dword_14039C9D0 = *(_DWORD *)(v9 + 24);
  BgpFwFreeMemory(RegionContext);
  BgpFwFreeMemory(v10);
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  v35 = 0;
  v36 = 0;
  BitsPerPixel = BgpGetBitsPerPixel();
  v11 = BitsPerPixel;
  LogFwStat(1LL, 5LL);
  if ( !Src )
  {
    v38 = 1;
LABEL_43:
    Rectangle = BgpGxReadRectangle(v41, &xmmword_14039C980, (char *)&xmmword_14039C980 + 8);
    v0 = v41[0];
    SubRectangle = Rectangle;
    if ( Rectangle < 0 )
      goto LABEL_76;
    v23 = *(_DWORD *)v41[0];
    v24 = *(_DWORD *)(v41[0] + 4LL);
    v44 = (_DWORD *)v41[0];
    v25 = BgpGxRectangleSize(v23, v24, BitsPerPixel);
    v5 += 2 * (((v25 + 15) & 0xFFFFFFF0) + 32) + ((v25 + 15) & 0xFFFFFFF0) + 32;
    goto LABEL_45;
  }
  v38 = 0;
  v12 = BgpGxParseBitmap(Src, &v40);
  v1 = v40;
  SubRectangle = v12;
  if ( v12 < 0 )
    goto LABEL_80;
  v13 = v40[2];
  if ( v11 != v13 )
  {
    v14 = BgpGxRectangleSize(*v40, v40[1], v13);
    v40 = 0LL;
    v5 = ((v14 + 15) & 0xFFFFFFF0) + 32;
    SubRectangle = BgpGxConvertRectangleEx(v1, v11, &v40, 0);
    if ( SubRectangle >= 0 )
    {
      v48[0] = v1;
      v1 = v40;
      v39 = 1;
      goto LABEL_24;
    }
LABEL_80:
    v3 = v45;
LABEL_3:
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    SubRectangle = BgpClearScreen(4278190080LL, v6);
    if ( v0 )
      BgpGxRectangleDestroy(v0);
    if ( v46 )
      BgpGxRectangleDestroy(v46);
    if ( v1 )
      BgpGxRectangleDestroy(v1);
    if ( v47 )
      BgpGxRectangleDestroy(v47);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    return (unsigned int)SubRectangle;
  }
LABEL_24:
  v15 = BgpGxRectangleSize(*v1, v1[1], v11);
  v16 = qword_14039D84C + dword_14039D854;
  v17 = HIDWORD(qword_14039D84C) + dword_14039D858;
  v18 = xmmword_14039C980 + DWORD2(xmmword_14039C980);
  v5 += ((v15 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v15 + 15) & 0xFFFFFFF0) + 32);
  v19 = DWORD1(xmmword_14039C980) + HIDWORD(xmmword_14039C980);
  if ( (unsigned int)xmmword_14039C980 >= (unsigned int)qword_14039D84C
    && (unsigned int)xmmword_14039C980 <= v16
    && DWORD1(xmmword_14039C980) >= HIDWORD(qword_14039D84C)
    && DWORD1(xmmword_14039C980) <= v17 )
  {
    if ( v18 < (unsigned int)qword_14039D84C || v18 > v16 || v19 < HIDWORD(qword_14039D84C) || v19 > v17 )
      goto LABEL_52;
    v35 = 1;
  }
  v20 = xmmword_14039C9B8 + DWORD2(xmmword_14039C9B8);
  v21 = DWORD1(xmmword_14039C9B8) + HIDWORD(xmmword_14039C9B8);
  if ( (unsigned int)xmmword_14039C9B8 >= (unsigned int)qword_14039D84C
    && (unsigned int)xmmword_14039C9B8 <= v16
    && DWORD1(xmmword_14039C9B8) >= HIDWORD(qword_14039D84C)
    && DWORD1(xmmword_14039C9B8) <= v17 )
  {
    if ( v20 >= (unsigned int)qword_14039D84C && v20 <= v16 && v21 >= HIDWORD(qword_14039D84C) && v21 <= v17 )
    {
      v36 = 1;
      goto LABEL_42;
    }
LABEL_52:
    SubRectangle = -1073741823;
    goto LABEL_76;
  }
LABEL_42:
  if ( !v35 )
    goto LABEL_43;
LABEL_45:
  if ( !v36 )
  {
    v26 = BgpGxReadRectangle(&v43, &xmmword_14039C9B8, (char *)&xmmword_14039C9B8 + 8);
    v2 = v43;
    SubRectangle = v26;
    if ( v26 < 0 )
      goto LABEL_76;
    v27 = BgpGxRectangleSize(*v43, v43[1], BitsPerPixel);
    v5 += 2 * (((v27 + 15) & 0xFFFFFFF0) + 32) + ((v27 + 15) & 0xFFFFFFF0) + 32;
  }
  v28 = qword_14039D84C;
  v29 = HIDWORD(qword_14039D970);
  v43 = (int *)qword_14039D84C;
  if ( !v38 )
  {
    SubRectangle = BgpGxFindSubRectangle(
                     (_DWORD)v1,
                     HIDWORD(qword_14039D970),
                     (unsigned int)v41,
                     (unsigned int)&v40,
                     (__int64)&v37);
    if ( SubRectangle >= 0 )
    {
      v30 = v39;
      v48[v39] = v1;
      v39 = v30 + 1;
      if ( v37 )
      {
        v38 = 1;
        v1 = 0LL;
      }
      else
      {
        LODWORD(v43) = (_DWORD)v40 + (_DWORD)v43;
        HIDWORD(v43) += HIDWORD(v40);
        v28 = (__int64)v43;
        v1 = (int *)v41[0];
      }
    }
  }
  if ( !v35 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v44, v29, (unsigned int)v41, (unsigned int)&v40, (__int64)&v37);
    if ( SubRectangle >= 0 )
    {
      v31 = v39;
      v48[v39] = v44;
      v39 = v31 + 1;
      if ( v37 )
      {
        v44 = 0LL;
        v35 = 1;
      }
      else
      {
        v44 = (_DWORD *)v41[0];
        LODWORD(xmmword_14039C980) = (_DWORD)v40 + xmmword_14039C980;
        DWORD1(xmmword_14039C980) += HIDWORD(v40);
      }
    }
  }
  if ( !v36 )
  {
    SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v29, (unsigned int)v41, (unsigned int)&v40, (__int64)&v37);
    if ( SubRectangle >= 0 )
    {
      v32 = v39;
      v48[v39] = v2;
      v39 = v32 + 1;
      if ( v37 )
      {
        v36 = 1;
        v2 = 0LL;
      }
      else
      {
        LODWORD(xmmword_14039C9B8) = (_DWORD)v40 + xmmword_14039C9B8;
        DWORD1(xmmword_14039C9B8) += HIDWORD(v40);
        v2 = (int *)v41[0];
      }
    }
  }
  if ( !v38 )
  {
    LODWORD(v41[0]) = v1[1];
    HIDWORD(v41[0]) = *v1;
    SubRectangle = BgpGxRectangleCreate(v41, BitsPerPixel, &v47);
    if ( SubRectangle < 0 )
    {
      v0 = (__int64)v44;
      goto LABEL_76;
    }
    memset(*(void **)(v47 + 24), 0, *(unsigned int *)(v47 + 12));
  }
  v0 = (__int64)v44;
  if ( !v35 )
  {
    LODWORD(v41[0]) = v44[1];
    HIDWORD(v41[0]) = *v44;
    SubRectangle = BgpGxRectangleCreate(v41, BitsPerPixel, &v46);
    if ( SubRectangle < 0 )
      goto LABEL_76;
    memset(*(void **)(v46 + 24), 0, *(unsigned int *)(v46 + 12));
  }
  if ( !v36 )
  {
    LODWORD(v41[0]) = v2[1];
    HIDWORD(v41[0]) = *v2;
    SubRectangle = BgpGxRectangleCreate(v41, BitsPerPixel, &v45);
    if ( SubRectangle < 0 )
      goto LABEL_76;
    memset(*(void **)(v45 + 24), 0, *(unsigned int *)(v45 + 12));
  }
  LogFwStat(0LL, 5LL);
  dword_14039C964 = 0;
  byte_14039C970 = v35;
  byte_14039C971 = v36;
  byte_14039C972 = v38;
  qword_14039C9A0 = v46;
  qword_14039C9B0 = v47;
  qword_14039C9E0 = v45;
  dword_14039C960 = 100;
  qword_14039C968 = v28;
  qword_14039C978 = v0;
  qword_14039C9A8 = (__int64)v1;
  qword_14039C9D8 = (__int64)v2;
  KeResetEvent(&stru_1403E9090);
  KeInitializeTimerEx(&stru_1403EBE50, NotificationTimer);
  KeInitializeDpc(&stru_1403EBDD0, AnFwpFadeAnimationTimer, 0LL);
  byte_1403EFAD0 = 1;
  LogFwStat(1LL, 7LL);
  KeSetCoalescableTimer(&stru_1403EBE50, 0LL, 0x1Eu, 0, &stru_1403EBDD0);
  dword_14039D7F0 |= 0x2000u;
  dword_14039D80C = v5;
LABEL_76:
  if ( v39 )
  {
    v33 = v48;
    v34 = v39;
    do
    {
      BgpGxRectangleDestroy(*v33++);
      --v34;
    }
    while ( v34 );
  }
  if ( SubRectangle < 0 )
    goto LABEL_80;
  return (unsigned int)SubRectangle;
}
