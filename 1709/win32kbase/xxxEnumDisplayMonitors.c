/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C005C4E0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C005C8D0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GetScreenRect @ 0x1C00594A4 (GetScreenRect.c)
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LookupDC @ 0x1C005A8C0 (LookupDC.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C005D840 (TransformRectBetweenCoordinateSpaces.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009A848 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        struct HOBJ__ *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, struct HOBJ__ *, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 StyleWindow; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // r12d
  struct tagMONITOR *i; // rdi
  struct HOBJ__ *MonitorDC; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 *v21; // rax
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // eax
  int v25; // ecx
  struct tagMONITOR *v26; // rax
  __int64 v27; // [rsp+30h] [rbp-81h] BYREF
  __int64 (__fastcall *v28)(struct tagMONITOR *, struct HOBJ__ *, struct tagRECT *, __int64); // [rsp+38h] [rbp-79h]
  __int64 v29; // [rsp+40h] [rbp-71h]
  __int64 v30; // [rsp+48h] [rbp-69h]
  struct tagTHREADINFO *v31; // [rsp+50h] [rbp-61h]
  __int128 v32; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v34; // [rsp+80h] [rbp-31h] BYREF
  __int128 v35; // [rsp+90h] [rbp-21h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-11h] BYREF
  struct tagRECT v37; // [rsp+B0h] [rbp-1h] BYREF

  v29 = a4;
  v5 = 0;
  v36 = 0uLL;
  v27 = 0LL;
  v8 = 0LL;
  v31 = gptiCurrent;
  v28 = a3;
  StyleWindow = 0LL;
  v30 = 0LL;
  if ( !a1 )
  {
    v36 = *GetScreenRect(&v34);
    if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), a2, (int)a3);
  v21 = LookupDC((__int64)a1, 1);
  v8 = v21;
  if ( !v21 )
  {
LABEL_45:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v10, v11);
    return v5;
  }
  v22 = (v21[8] & 0x4000) == 0;
  v23 = v21[2];
  v30 = v23;
  if ( !v22 )
    StyleWindow = GetStyleWindow(v23, 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v36, 0) == 1 )
    goto LABEL_44;
  if ( StyleWindow
    && (*(_WORD *)(StyleWindow + 82) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v36, &v36, 0LL, StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v36, &v36, a2) )
  {
LABEL_44:
    v5 = 1;
    goto LABEL_45;
  }
  if ( StyleWindow )
  {
    if ( (*(_WORD *)(StyleWindow + 82) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1, 32, (__int64)&v27);
      v24 = *(_DWORD *)(StyleWindow + 128) + v27;
      LODWORD(v27) = v24;
      v25 = *(_DWORD *)(StyleWindow + 132) + HIDWORD(v27);
      HIDWORD(v27) = v25;
      goto LABEL_37;
    }
  }
  else
  {
    GreGetDCPoint(a1, 32, (__int64)&v27);
  }
  v24 = v27;
  v25 = HIDWORD(v27);
LABEL_37:
  LODWORD(v36) = v24 + v36;
  DWORD2(v36) += v24;
  HIDWORD(v36) += v25;
  DWORD1(v36) += v25;
LABEL_3:
  v12 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 96); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v32 = *GetMonitorRect(&v35, (__int64)i);
    if ( !(unsigned int)IntersectRect(&v37, &v36, &v32) )
      continue;
    if ( a1 )
    {
      v26 = AdjustDisplayMonitor(i, &v37);
      MonitorDC = (struct HOBJ__ *)GetMonitorDC((__int64)v8, v26, v26 != i);
      if ( !MonitorDC )
        goto LABEL_45;
      v37.top -= HIDWORD(v27);
      v37.left -= v27;
      v37.bottom -= HIDWORD(v27);
      v37.right -= v27;
      GreIntersectClipRect(MonitorDC, v37.left, v37.top, v37.right, v37.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    v33[0] = *((_QWORD *)v31 + 49);
    *((_QWORD *)v31 + 49) = v33;
    v33[1] = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v10, v11);
    if ( a5 )
    {
      v19 = v28(i, MonitorDC, &v37, v29);
    }
    else
    {
      if ( (int)IsxxxClientMonitorEnumProcSupported() < 0 )
        goto LABEL_15;
      v19 = xxxClientMonitorEnumProc(*(_QWORD *)i, MonitorDC, &v37, v29, v28);
    }
    v12 = v19;
LABEL_15:
    if ( !ThreadUnlock1(v16, v15, v17, v18)
      || (*((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0 )
    {
      v12 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0LL, v11);
    if ( !v12 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), v10, v11);
      v8 = LookupDC((__int64)a1, 1);
      if ( !v8 || v8[2] != v30 )
        goto LABEL_45;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v10, v11);
  return v12;
}
