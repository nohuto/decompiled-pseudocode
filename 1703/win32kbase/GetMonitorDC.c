/*
 * XREFs of GetMonitorDC @ 0x1C002A240
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C0028978 (UserGetMonitorDC.c)
 * Callees:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     GreGetDCOrgEx @ 0x1C0028640 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C0028A30 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0028AD0 (GreSetDCOrg.c)
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 *     GreIsRendering @ 0x1C002A1F0 (GreIsRendering.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1C00400D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0040BF0 (GreSetRectRgn.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, __int64 a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 StyleWindow; // rax
  __int64 RedirectionBitmap; // r15
  HRGN v11; // r8
  int v12; // r10d
  int v13; // r9d
  int *v14; // r8
  int v15; // r8d
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // r9d
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v23; // rax
  _DWORD *v24; // rsi
  int *v25; // rax
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  HDC v29; // rcx
  HRGN RectRgnIndirect; // rax
  __int128 v31; // [rsp+30h] [rbp-10h] BYREF
  char v32; // [rsp+88h] [rbp+48h] BYREF

  v31 = 0uLL;
  while ( 2 )
  {
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 2); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 1LL) )
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
            RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion((struct tagMONITOR *)a2, RectRgnIndirect, *(HRGN *)(a1 + 40));
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
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v11 = *(HRGN *)(a2 + 96);
            }
            else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                   && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                   && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 52LL) & 1) != 0 )
            {
              v11 = *(HRGN *)(a2 + 104);
            }
            else
            {
              v11 = *(HRGN *)(a2 + 88);
            }
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, v11, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn((HDC)i[1]);
            GreGetDCOrgEx(*(HDC *)(a1 + 8), (__int64)&v32, &v31);
            if ( a3 )
            {
              v12 = *(_DWORD *)(v8 + 132);
              v13 = *(_DWORD *)(v8 + 128);
              LODWORD(v31) = v13 + v13 + v31;
              DWORD2(v31) += v13 + v13;
              HIDWORD(v31) += v12 + v12;
              DWORD1(v31) += v12 + v12;
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v14 = (int *)(*(_QWORD *)(a2 + 40) + 44LL);
              }
              else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                     && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                     && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 52LL) & 1) != 0 )
              {
                v14 = (int *)(*(_QWORD *)(a2 + 40) + 60LL);
              }
              else
              {
                v14 = (int *)(*(_QWORD *)(a2 + 40) + 28LL);
              }
              IntersectRect((int *)&v31, (int *)&v31, v14);
              v15 = *(_DWORD *)(v8 + 132);
              v16 = -*(_DWORD *)(v8 + 128);
              DWORD2(v31) -= *(_DWORD *)(v8 + 128);
              v17 = v16 + v31;
              v18 = -v15;
              HIDWORD(v31) += v18;
              v19 = v18 + DWORD1(v31);
              LODWORD(v31) = v17;
              DWORD1(v31) += v18;
            }
            else
            {
              v19 = DWORD1(v31);
              v17 = v31;
            }
            GreSetDCOrg((HDC)i[1], v17, v19, &v31);
            GreGetBounds(i[1], 0LL, 5LL);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion((struct tagMONITOR *)a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn((HDC)i[1]);
            if ( a3 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
                && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                              + 52LL) & 1) != 0 )
              {
                v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 44LL);
              }
              else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                     && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                     && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 52LL) & 1) != 0 )
              {
                v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 60LL);
              }
              else
              {
                v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 28LL);
              }
              v31 = *v23;
            }
            else
            {
              GreGetDCOrgEx(*(HDC *)(a1 + 8), (__int64)&v32, &v31);
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v24 = (_DWORD *)(*(_QWORD *)(a2 + 40) + 48LL);
            }
            else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                   && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                   && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 52LL) & 1) != 0 )
            {
              v24 = (_DWORD *)(*(_QWORD *)(a2 + 40) + 64LL);
            }
            else
            {
              v24 = (_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL);
            }
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
              && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                            + 52LL) & 1) != 0 )
            {
              v25 = (int *)(*(_QWORD *)(a2 + 40) + 44LL);
            }
            else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                   && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                   && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 52LL) & 1) != 0 )
            {
              v25 = (int *)(*(_QWORD *)(a2 + 40) + 60LL);
            }
            else
            {
              v25 = (int *)(*(_QWORD *)(a2 + 40) + 28LL);
            }
            v26 = *v25;
            v27 = DWORD1(v31) - *v24;
            HIDWORD(v31) -= *v24;
            v28 = -v26;
            v29 = (HDC)i[1];
            DWORD2(v31) += v28;
            LODWORD(v31) = v28 + v31;
            DWORD1(v31) = v27;
            GreSetDCOrg(v29, v31, v27, &v31);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v8 && (*(_BYTE *)(v8 + 66) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            LOBYTE(v20) = ~*(_BYTE *)(v8 + 67);
            GreHintDCWnd(i[1], *(_QWORD *)i[2], *(_QWORD *)v8, (v20 >> 1) & 1, (*(_WORD *)(v8 + 82) & 0x3FFF) == 669);
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process();
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
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
