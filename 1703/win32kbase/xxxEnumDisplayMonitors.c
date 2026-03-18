/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0026E90
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C0026990 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     LookupDC @ 0x1C0028930 (LookupDC.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     GreIntersectClipRect @ 0x1C0040CC0 (GreIntersectClipRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00917C4 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 StyleWindow; // rsi
  CCursorClip *v10; // r14
  __int128 *v11; // rax
  struct tagMONITOR *v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // r8
  HDC MonitorDC; // r14
  unsigned int v16; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // ecx
  struct tagMONITOR *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-51h]
  __int64 v25; // [rsp+48h] [rbp-39h]
  struct tagTHREADINFO *v26; // [rsp+50h] [rbp-31h]
  _QWORD v27[3]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v28; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp-1h] BYREF

  v5 = 0;
  v28 = 0uLL;
  v22 = 0LL;
  v8 = 0LL;
  v26 = gptiCurrent;
  StyleWindow = 0LL;
  v25 = 0LL;
  if ( !a1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v10 = gpDispInfo;
      v11 = (__int128 *)(*(_QWORD *)gpDispInfo + 40LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v10 = gpDispInfo;
      v11 = (__int128 *)(*(_QWORD *)gpDispInfo + 56LL);
    }
    else
    {
      v10 = gpDispInfo;
      v11 = (__int128 *)(*(_QWORD *)gpDispInfo + 24LL);
    }
    v28 = *v11;
    if ( a2 && !(unsigned int)IntersectRect(&v28, &v28, a2) )
      return 1LL;
    goto LABEL_9;
  }
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 4));
  v18 = LookupDC(a1, 1LL);
  v8 = v18;
  if ( !v18 )
  {
LABEL_64:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
    return v5;
  }
  v25 = *(_QWORD *)(v18 + 16);
  if ( (*(_DWORD *)(v18 + 64) & 0x4000) != 0 )
    StyleWindow = GetStyleWindow(*(_QWORD *)(v18 + 16), 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v28, 0) == 1 )
    goto LABEL_63;
  if ( StyleWindow
    && (*(_WORD *)(StyleWindow + 82) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v28, &v28, 0LL, StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v28, &v28, a2) )
  {
LABEL_63:
    v5 = 1;
    goto LABEL_64;
  }
  if ( StyleWindow )
  {
    if ( (*(_WORD *)(StyleWindow + 82) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v19 = *(_DWORD *)(StyleWindow + 128);
      LODWORD(v22) = v19;
      v20 = *(_DWORD *)(StyleWindow + 132);
      HIDWORD(v22) = v20;
      goto LABEL_56;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v19 = 0;
  v20 = 0;
LABEL_56:
  LODWORD(v28) = v19 + v28;
  DWORD2(v28) += v19;
  HIDWORD(v28) += v20;
  DWORD1(v28) += v20;
  v10 = gpDispInfo;
LABEL_9:
  v12 = (struct tagMONITOR *)*((_QWORD *)v10 + 12);
  v13 = 1;
  while ( v12 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 5) + 24LL) & 1) == 0 )
      goto LABEL_31;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v14 = *((_QWORD *)v12 + 5) + 44LL;
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
    {
      v14 = *((_QWORD *)v12 + 5) + 60LL;
    }
    else
    {
      v14 = *((_QWORD *)v12 + 5) + 28LL;
    }
    if ( (unsigned int)IntersectRect(&v29, &v28, v14) )
    {
      if ( a1 )
      {
        v21 = AdjustDisplayMonitor(v12, &v29);
        MonitorDC = (HDC)GetMonitorDC(v8, v21, v21 != v12);
        if ( !MonitorDC )
          goto LABEL_64;
        v29.top -= HIDWORD(v22);
        v29.left -= v22;
        v29.bottom -= HIDWORD(v22);
        v29.right -= v22;
        GreIntersectClipRect(MonitorDC, v29.bottom);
      }
      else
      {
        MonitorDC = 0LL;
      }
      v27[0] = *((_QWORD *)v26 + 46);
      *((_QWORD *)v26 + 46) = v27;
      v27[1] = v12;
      ++*((_DWORD *)v12 + 2);
      if ( a1 )
        GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
      if ( a5 )
      {
        v16 = a3(v12, MonitorDC, &v29, a4);
LABEL_23:
        v13 = v16;
      }
      else if ( (int)IsxxxClientMonitorEnumProcSupported() >= 0 )
      {
        v16 = xxxClientMonitorEnumProc(*(_QWORD *)v12, MonitorDC, &v29, a4, a3);
        goto LABEL_23;
      }
      if ( !ThreadUnlock1()
        || (*((_BYTE *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)v12 + 25) & 1) != 0 )
      {
        v13 = 0;
      }
      if ( MonitorDC )
        ReleaseCacheDC(MonitorDC, 0LL);
      if ( !v13 )
        return 0LL;
      if ( a1 )
      {
        GreLockVisRgn(*((_QWORD *)gpDispInfo + 4));
        v8 = LookupDC(a1, 1LL);
        if ( !v8 || *(_QWORD *)(v8 + 16) != v25 )
          goto LABEL_64;
      }
    }
    v10 = gpDispInfo;
LABEL_31:
    v12 = (struct tagMONITOR *)*((_QWORD *)v12 + 7);
  }
  if ( a1 )
    GreUnlockVisRgn(*((_QWORD *)v10 + 4));
  return v13;
}
