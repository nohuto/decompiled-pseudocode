/*
 * XREFs of GetMonitorDC @ 0x1C0056170
 * Callers:
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     GreIsRendering @ 0x1C0056050 (GreIsRendering.c)
 *     GreSetRectRgn @ 0x1C00560A0 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     CreateCacheDC @ 0x1C0057050 (CreateCacheDC.c)
 *     GreSetDCOrg @ 0x1C00592E0 (GreSetDCOrg.c)
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C005B480 (GreGetDCOrgEx.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C005CA00 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 StyleWindow; // rax
  __int64 RedirectionBitmap; // r15
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  int v13; // r10d
  int v14; // r9d
  int v15; // r8d
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int128 v27; // xmm0
  HDC v28; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF

  v30 = 0uLL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 16); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( (unsigned int)GreSetDCOwnerEx((struct HOBJ__ *)i[1], 2147483650LL, 0LL, 1LL) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          *((_DWORD *)i + 16) = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          v7 = *(_QWORD *)(a1 + 40);
          if ( v7 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
          }
          else
          {
            i[5] = v7;
          }
          v8 = 0LL;
          if ( (i[8] & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && (StyleWindow = GetStyleWindow(i[2], 2848LL), (v8 = StyleWindow) != 0) )
          {
            if ( (*(_BYTE *)(StyleWindow + 66) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              RedirectionBitmap = GetRedirectionBitmap(v8);
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
                && !(unsigned int)GreSelectRedirectionBitmap(i[1], RedirectionBitmap) )
              {
                GreSelectVisRgn((HDC)i[1]);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC);
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn((struct HOBJ__ *)ghrgnGDC, 0, 0, 0, 0);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn((HDC)i[1]);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v13 = *(_DWORD *)(v8 + 132);
              v14 = *(_DWORD *)(v8 + 128);
              DWORD2(v30) += v14 + v14;
              HIDWORD(v30) += v13 + v13;
              LODWORD(v30) = v14 + v14 + v30;
              DWORD1(v30) += v13 + v13;
              v31 = *(_OWORD *)GetMonitorRect(&v31, a2);
              IntersectRect(&v30, &v30, &v31);
              v15 = *(_DWORD *)(v8 + 132);
              v16 = -*(_DWORD *)(v8 + 128);
              DWORD2(v30) -= *(_DWORD *)(v8 + 128);
              v17 = -v15;
              HIDWORD(v30) += v17;
              LODWORD(v30) = v16 + v30;
              DWORD1(v30) += v17;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds((HDC)i[1]);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn((HDC)i[1]);
            v27 = *(_OWORD *)GetMonitorRect(&v31, a2);
            v31 = v27;
            if ( a3 )
              v30 = v27;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v30) -= DWORD1(v31);
            DWORD2(v30) -= v31;
            v28 = (HDC)i[1];
            LODWORD(v30) = v30 - v31;
            DWORD1(v30) -= DWORD1(v31);
            GreSetDCOrg(v28);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v8 && (*(_BYTE *)(v8 + 66) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            LOBYTE(v21) = ~*(_BYTE *)(v8 + 67);
            GreHintDCWnd(i[1], *(_QWORD *)i[2], *(_QWORD *)v8, (v21 >> 1) & 1, (*(_WORD *)(v8 + 82) & 0x3FFF) == 669);
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v19, v18, v20);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v22, v24);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
