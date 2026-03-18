/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A3C8
 * Callers:
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00730B0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00749D8 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032DEC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032E14 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rdi
  unsigned int v4; // ebp
  struct PDEV *v6; // rbx
  size_t v7; // rcx
  __int64 v8; // rdx
  struct PDEV *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  struct RFONT *v12; // rdx
  signed __int32 v13; // ett
  struct PDEV *v14; // rax
  struct PDEV *v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( !gbNoHookBmpDev )
  {
    v2 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
      {
        v3 = *(_DWORD **)(v2 + 48);
        v16 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        if ( (v3[8] & 0x20000000) == 0 && (v3[536] & 0x8000) == 0 || (v3[536] & 0x1000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 112LL) &= ~0x10u;
          SEMOBJ::vUnlock((SEMOBJ *)&v16);
          return 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v16);
        if ( v3 )
        {
          v6 = gpBmpDev;
          v4 = 1;
          if ( gpBmpDev
            || (v7 = gdwDirectDrawContext + 3580, (unsigned int)v7 > gdwDirectDrawContext)
            && (gpBmpDev = (struct PDEV *)PALLOCMEM2(v7, 1986348103LL, 1), (v6 = gpBmpDev) != 0LL) )
          {
            if ( *(struct PDEV **)(*(_QWORD *)a1 + 48LL) != v6 )
            {
              v8 = 27LL;
              v15 = v6;
              v9 = v6;
              v10 = v3;
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
              memmove((char *)v6 + 3576, v3 + 894, gdwDirectDrawContext);
              PDEVOBJ::prfntActive((PDEVOBJ *)&v15, 0LL);
              PDEVOBJ::prfntInactive((PDEVOBJ *)&v15, v12);
              if ( (*((_DWORD *)v6 + 8) & 0x800000) != 0 )
                *(_DWORD *)(*((_QWORD *)v6 + 442) + 1544LL) = 0;
              else
                *((_DWORD *)v6 + 386) = 0;
              _m_prefetchw((char *)v6 + 32);
              do
                v13 = *((_DWORD *)v6 + 8);
              while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 8, v13 | 0x800000, v13) );
              v14 = v15;
              *((_QWORD *)v15 + 442) = v3;
              *((_QWORD *)v14 + 9) = v14;
              *((_QWORD *)gpBmpDev + 361) = BmpDevTextOut;
              *((_QWORD *)gpBmpDev + 352) = BmpDevStrokePath;
              *((_QWORD *)gpBmpDev + 357) = BmpDevCopyBits;
              *((_QWORD *)gpBmpDev + 356) = BmpDevBitBlt;
              *((_QWORD *)gpBmpDev + 369) = BmpDevLineTo;
              *((_QWORD *)gpBmpDev + 353) = BmpDevFillPath;
              *((_QWORD *)gpBmpDev + 354) = BmpDevStrokeAndFillPath;
              *((_QWORD *)gpBmpDev + 358) = BmpDevStretchBlt;
              *((_QWORD *)gpBmpDev + 409) = BmpDevAlphaBlend;
              *((_QWORD *)gpBmpDev + 412) = BmpDevTransparentBlt;
              *((_QWORD *)gpBmpDev + 406) = BmpDevGradientFill;
              *((_QWORD *)gpBmpDev + 428) = BmpDevDrawStream;
              *((_QWORD *)gpBmpDev + 429) = BmpDevNineGrid;
              *((_QWORD *)gpBmpDev + 408) = BmpDevPlgBlt;
              bBmpMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 512LL));
              *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpBmpDev;
              return v4;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0LL;
}
