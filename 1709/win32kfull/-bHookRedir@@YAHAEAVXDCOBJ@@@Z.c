/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F5FD4
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00222E8 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002B7A0 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE70 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  struct PDEV *v5; // rbx
  unsigned int v6; // esi
  size_t v7; // rcx
  __int64 v8; // rdx
  struct PDEV *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  struct RFONT *v12; // rdx
  signed __int32 v13; // ett
  struct PDEV *v14; // rax
  struct PDEV *v15; // [rsp+38h] [rbp+10h] BYREF

  if ( gbNoHookRedir )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  if ( !v3 || (*(_DWORD *)(v3 + 32) & 0x20000000) == 0 )
    return 0LL;
  v5 = gpRedirDev;
  v6 = 1;
  if ( (gpRedirDev
     || (v7 = gdwDirectDrawContext + 3580, (unsigned int)v7 > gdwDirectDrawContext)
     && (gpRedirDev = (struct PDEV *)PALLOCMEM2(v7, 1986348103LL, 1), (v5 = gpRedirDev) != 0LL))
    && *(struct PDEV **)(*(_QWORD *)a1 + 48LL) != v5 )
  {
    v8 = 27LL;
    v15 = v5;
    v9 = v5;
    v10 = (_OWORD *)v3;
    do
    {
      *(_OWORD *)v9 = *v10;
      *((_OWORD *)v9 + 1) = v10[1];
      *((_OWORD *)v9 + 2) = v10[2];
      *((_OWORD *)v9 + 3) = v10[3];
      *((_OWORD *)v9 + 4) = v10[4];
      *((_OWORD *)v9 + 5) = v10[5];
      *((_OWORD *)v9 + 6) = v10[6];
      v9 = (struct PDEV *)((char *)v9 + 128);
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v9 - 1) = v11;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v9 = *v10;
    *((_OWORD *)v9 + 1) = v10[1];
    *((_OWORD *)v9 + 2) = v10[2];
    *((_OWORD *)v9 + 3) = v10[3];
    *((_OWORD *)v9 + 4) = v10[4];
    memmove((char *)v5 + 3576, (const void *)(v3 + 3576), gdwDirectDrawContext);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v15, 0LL);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v15, v12);
    if ( (*((_DWORD *)v5 + 8) & 0x800000) != 0 )
      *(_DWORD *)(*((_QWORD *)v5 + 442) + 1544LL) = 0;
    else
      *((_DWORD *)v5 + 386) = 0;
    _m_prefetchw((char *)v5 + 32);
    do
      v13 = *((_DWORD *)v5 + 8);
    while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 8, v13 | 0x800000, v13) );
    v14 = v15;
    *((_QWORD *)v15 + 442) = v3;
    *((_QWORD *)v14 + 9) = v14;
    *((_QWORD *)gpRedirDev + 361) = RedirTextOut;
    *((_QWORD *)gpRedirDev + 352) = RedirStrokePath;
    *((_QWORD *)gpRedirDev + 357) = RedirCopyBits;
    *((_QWORD *)gpRedirDev + 356) = RedirBitBlt;
    *((_QWORD *)gpRedirDev + 369) = RedirLineTo;
    *((_QWORD *)gpRedirDev + 353) = RedirFillPath;
    *((_QWORD *)gpRedirDev + 354) = RedirStrokeAndFillPath;
    *((_QWORD *)gpRedirDev + 358) = RedirStretchBlt;
    *((_QWORD *)gpRedirDev + 409) = RedirAlphaBlend;
    *((_QWORD *)gpRedirDev + 412) = RedirTransparentBlt;
    *((_QWORD *)gpRedirDev + 406) = RedirGradientFill;
    *((_QWORD *)gpRedirDev + 428) = RedirDrawStream;
    *((_QWORD *)gpRedirDev + 429) = RedirNineGrid;
    *((_QWORD *)gpRedirDev + 408) = RedirPlgBlt;
    *((_QWORD *)gpRedirDev + 407) = RedirStretchBltROP;
    *((_QWORD *)gpRedirDev + 363) = RedirDrawEscape;
    bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL));
    *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpRedirDev;
  }
  else
  {
    return 0;
  }
  return v6;
}
