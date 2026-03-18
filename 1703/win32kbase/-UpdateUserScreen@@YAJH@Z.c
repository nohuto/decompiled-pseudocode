/*
 * XREFs of ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960
 * Callers:
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 * Callees:
 *     MonitorFromHdev @ 0x1C0028904 (MonitorFromHdev.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0038F70 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     BuildAccelerationCurve @ 0x1C00712F0 (BuildAccelerationCurve.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0071318 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C0071A98 (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     ?RefreshMonitorList@CCursorClip@@QEAAXXZ @ 0x1C0072394 (-RefreshMonitorList@CCursorClip@@QEAAXXZ.c)
 *     MinimumMonitorDpi @ 0x1C00729F4 (MinimumMonitorDpi.c)
 *     HdevFromMonitor @ 0x1C0074360 (HdevFromMonitor.c)
 *     EnforceColorDependentSettings @ 0x1C00743A0 (EnforceColorDependentSettings.c)
 *     InitLoadResources @ 0x1C00743E0 (InitLoadResources.c)
 *     DestroyMonitor @ 0x1C0078C20 (DestroyMonitor.c)
 *     ??4?$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C007B150 (--4-$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEA.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall UpdateUserScreen(int a1)
{
  int v2; // ebp
  unsigned int v3; // r14d
  __int64 v4; // rsi
  struct tagMONITOR **v5; // rdi
  unsigned __int64 v6; // rbx
  __int16 DeviceCaps; // ax
  void *v8; // rbp
  struct tagMONITOR **v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned __int16 v12; // di
  __int64 v13; // rsi
  int v14; // r15d
  int v15; // r12d
  int v16; // ebp
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rcx
  CCursorClip *v20; // rcx
  _QWORD *v21; // rbx
  _DWORD *v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  int v30; // edx
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // r8
  int v38; // edx
  __int64 v39; // r8
  int v40; // edx
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // rax
  unsigned int i; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  CCursorClip *v54; // rcx
  __int64 v55; // rbx
  int v56; // edi
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 j; // r8
  unsigned __int8 v60; // al
  __int64 v61; // rdx
  void *v62; // rcx
  __int16 v63; // r9
  unsigned __int16 v65; // cx
  __int16 v66; // cx
  struct tagMONITOR *v67; // rax
  __int64 v68; // r8
  struct tagMONITOR *v69; // r9
  _DWORD *v70; // r8
  int v71; // r10d
  int v72; // r9d

  v2 = 0;
  v3 = 0;
  v4 = *((_QWORD *)gpDispInfo + 1);
  v5 = (struct tagMONITOR **)((char *)gpDispInfo + 96);
  v6 = *((_QWORD *)gpDispInfo + 12);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v3 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v2 = 1;
  }
  DeviceCaps = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 90);
  *((_WORD *)gpDispInfo + 72) = DeviceCaps;
  *((_WORD *)gpsi + 4339) = DeviceCaps;
  if ( a1 )
  {
    v65 = *((_WORD *)gpDispInfo + 72);
    if ( v65 >= 0x90u )
    {
      if ( v65 >= 0xC0u )
      {
        if ( v65 >= 0x120u )
          v66 = v65 < 0x180u ? 96 : 128;
        else
          v66 = 64;
      }
      else
      {
        v66 = 48;
      }
    }
    else
    {
      v66 = 32;
    }
    *((_WORD *)gpsi + 4340) = v66;
  }
  InitLoadResources(1LL);
  if ( v2 )
    W32SetCurrentThreadDpiAwarenessContext(v3);
  while ( v6 )
  {
    v8 = (void *)v6;
    v9 = (struct tagMONITOR **)(v6 + 56);
    v6 = *(_QWORD *)(v6 + 56);
    v10 = HdevFromMonitor(v8);
    if ( v10 == -1 )
    {
      DestroyMonitor(v8);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v8, v10);
      v5 = v9;
    }
  }
  if ( *(_DWORD *)(v4 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(v4 + 40 * v6 + 32)) )
      {
        v67 = SetMonitorData(0LL, v6);
        v69 = v67;
        if ( v67 )
        {
          if ( *((_QWORD *)gpDispInfo + 12) )
          {
            *((_QWORD *)*(v5 - 2) + 2) = *((_QWORD *)v67 + 6);
            *v5 = v67;
          }
          else
          {
            tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorFirst<tagMONITOR>::operator=(
              (char *)gpDispInfo + 96,
              v67,
              v68,
              v67);
          }
          v5 = (struct tagMONITOR **)((char *)v69 + 56);
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v4 + 20) );
  }
  v11 = *((_QWORD *)gpDispInfo + 12);
  if ( !v11 || !*((_QWORD *)gpDispInfo + 11) )
    return 3221225495LL;
  v12 = MinimumMonitorDpi();
  do
  {
    InitializeMonitorDpiRectsAndTransforms((struct tagMONITOR *)v11, v12);
    v11 = *(_QWORD *)(v11 + 56);
  }
  while ( v11 );
  if ( (int)IsUpdateCursorSizesSupported() >= 0 )
    UpdateCursorSizes();
  *((_DWORD *)gpsi + 551) = (*(_DWORD *)(v4 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 38) & 0x100;
  v14 = 0;
  v15 = 0;
  *((_DWORD *)gpDispInfo + 37) = *((_DWORD *)gpDispInfo + 37) & 0xFFFFFFFD | ((_DWORD)v13 != 0 ? 2 : 0);
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD *)gpDispInfo;
  *(_QWORD *)(v18 + 40) = 0LL;
  *(_QWORD *)(v18 + 48) = 0LL;
  v19 = *(_QWORD *)gpDispInfo;
  *(_QWORD *)(v19 + 56) = 0LL;
  *(_QWORD *)(v19 + 64) = 0LL;
  **(_DWORD **)gpDispInfo = 0;
  v20 = gpDispInfo;
  v21 = (_QWORD *)*((_QWORD *)gpDispInfo + 12);
  while ( v21 )
  {
    v22 = (_DWORD *)v21[5];
    if ( (v22[6] & 1) != 0 )
    {
      v23 = v22[7];
      v24 = *(_QWORD *)v20;
      v25 = v22[15];
      if ( v15 < v23 )
        v23 = v15;
      v15 = v23;
      v26 = v22[8];
      if ( v14 < v26 )
        v26 = v14;
      v14 = v26;
      v27 = v22[9];
      if ( v17 > v27 )
        v27 = v17;
      v17 = v27;
      v28 = v22[10];
      if ( v16 > v28 )
        v28 = v16;
      v16 = v28;
      if ( *(_DWORD *)(v24 + 56) < v25 )
        v25 = *(_DWORD *)(v24 + 56);
      *(_DWORD *)(v24 + 56) = v25;
      v29 = *(_QWORD *)gpDispInfo;
      v30 = *(_DWORD *)(v21[5] + 64LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 60LL) < v30 )
        v30 = *(_DWORD *)(v29 + 60);
      *(_DWORD *)(v29 + 60) = v30;
      v31 = *(_QWORD *)gpDispInfo;
      v32 = *(_DWORD *)(v21[5] + 68LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 64LL) > v32 )
        v32 = *(_DWORD *)(v31 + 64);
      *(_DWORD *)(v31 + 64) = v32;
      v33 = *(_QWORD *)gpDispInfo;
      v34 = *(_DWORD *)(v21[5] + 72LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 68LL) > v34 )
        v34 = *(_DWORD *)(v33 + 68);
      *(_DWORD *)(v33 + 68) = v34;
      v35 = *(_QWORD *)gpDispInfo;
      v36 = *(_DWORD *)(v21[5] + 44LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 40LL) < v36 )
        v36 = *(_DWORD *)(v35 + 40);
      *(_DWORD *)(v35 + 40) = v36;
      v37 = *(_QWORD *)gpDispInfo;
      v38 = *(_DWORD *)(v21[5] + 48LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 44LL) < v38 )
        v38 = *(_DWORD *)(v37 + 44);
      *(_DWORD *)(v37 + 44) = v38;
      v39 = *(_QWORD *)gpDispInfo;
      v40 = *(_DWORD *)(v21[5] + 52LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 48LL) > v40 )
        v40 = *(_DWORD *)(v39 + 48);
      *(_DWORD *)(v39 + 48) = v40;
      v41 = *(_QWORD *)gpDispInfo;
      v42 = *(_DWORD *)(v21[5] + 56LL);
      if ( *(_DWORD *)(*(_QWORD *)gpDispInfo + 52LL) > v42 )
        v42 = *(_DWORD *)(v41 + 52);
      *(_DWORD *)(v41 + 52) = v42;
      ++**(_DWORD **)gpDispInfo;
    }
    if ( *((_DWORD *)gpsi + 551) )
    {
      v43 = v21[5];
      if ( (_DWORD)v13 )
        *(_DWORD *)(v43 + 24) |= 2u;
      else
        *(_DWORD *)(v43 + 24) &= ~2u;
    }
    else if ( (*(_DWORD *)(v21[15] + 2188LL) & 0x100) != 0 )
    {
      *(_DWORD *)(v21[5] + 24LL) |= 2u;
      *((_DWORD *)gpDispInfo + 37) |= 2u;
    }
    for ( i = 0; i < 2; ++i )
      BuildAccelerationCurve(i, v21);
    v21 = (_QWORD *)v21[7];
    v20 = gpDispInfo;
  }
  *(_DWORD *)(*(_QWORD *)v20 + 24LL) = v15;
  *(_DWORD *)(*(_QWORD *)v20 + 28LL) = v14;
  *(_DWORD *)(*(_QWORD *)v20 + 32LL) = v17;
  *(_DWORD *)(*(_QWORD *)v20 + 36LL) = v16;
  CCursorClip::RefreshMonitorList(v20);
  if ( (int)IsUpdatePointerDevicesSupported(v46, v45) >= 0 )
    UpdatePointerDevices(v48, v47);
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent )
  {
    v49 = gpsi;
    v70 = *(_DWORD **)gpDispInfo;
    v71 = *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    if ( *((_DWORD *)gpsi + 546) == v71 )
    {
      v72 = v70[7];
      if ( *((_DWORD *)gpsi + 547) == v72
        && *((_DWORD *)gpsi + 548) == v70[8] - v71
        && *((_DWORD *)gpsi + 549) == v70[9] - v72 )
      {
        goto LABEL_56;
      }
    }
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  }
  v49 = gpsi;
LABEL_56:
  v49[470] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 36LL);
  *((_DWORD *)gpsi + 471) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 40LL);
  *((_DWORD *)gpsi + 546) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  *((_DWORD *)gpsi + 547) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 28LL);
  *((_DWORD *)gpsi + 548) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 32LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  *((_DWORD *)gpsi + 549) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 36LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 28LL);
  *((_DWORD *)gpsi + 529) = *((_DWORD *)gpsi + 548) + 4 + 2 * *((_DWORD *)gpsi + 502);
  *((_DWORD *)gpsi + 530) = *((_DWORD *)gpsi + 549) + 4 + 2 * *((_DWORD *)gpsi + 503);
  *((_DWORD *)gpsi + 567) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 52LL);
  *((_DWORD *)gpsi + 568) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 56LL);
  *((_DWORD *)gpsi + 643) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 40LL);
  *((_DWORD *)gpsi + 644) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 44LL);
  *((_DWORD *)gpsi + 645) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 48LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 40LL);
  *((_DWORD *)gpsi + 646) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 52LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 44LL);
  *((_DWORD *)gpsi + 626) = *((_DWORD *)gpsi + 645) + 4 + 2 * *((_DWORD *)gpsi + 502);
  *((_DWORD *)gpsi + 627) = *((_DWORD *)gpsi + 646) + 4 + 2 * *((_DWORD *)gpsi + 503);
  *((_DWORD *)gpsi + 664) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 68LL);
  *((_DWORD *)gpsi + 665) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 40LL) + 72LL);
  *((_DWORD *)gpsi + 740) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 56LL);
  *((_DWORD *)gpsi + 741) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 60LL);
  *((_DWORD *)gpsi + 742) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 64LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 56LL);
  *((_DWORD *)gpsi + 743) = *(_DWORD *)(*(_QWORD *)gpDispInfo + 68LL) - *(_DWORD *)(*(_QWORD *)gpDispInfo + 60LL);
  *((_DWORD *)gpsi + 723) = *((_DWORD *)gpsi + 742) + 4 + 2 * *((_DWORD *)gpsi + 502);
  *((_DWORD *)gpsi + 724) = *((_DWORD *)gpsi + 743) + 4 + 2 * *((_DWORD *)gpsi + 503);
  *((_DWORD *)gpsi + 550) = **(_DWORD **)gpDispInfo;
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsSetDesktopMetricsSupported(v51, v50) >= 0 )
    SetDesktopMetrics(v53, v52);
  SetOrCreateRectRgnIndirectPublic((HRGN *)gpDispInfo + 15, (struct _RECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)gpDispInfo + 16, (struct _RECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)gpDispInfo + 17, (struct _RECTL *)&gZero);
  v54 = gpDispInfo;
  if ( *((_QWORD *)gpDispInfo + 15) )
  {
    v55 = *((_QWORD *)gpDispInfo + 12);
    v56 = 0;
    if ( v55 )
    {
      do
      {
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                             (HRGN *)(v55 + 88),
                             (struct _RECTL *)(*(_QWORD *)(v55 + 40) + 28LL))
          && (*(_DWORD *)(*(_QWORD *)(v55 + 40) + 24LL) & 1) != 0 )
        {
          v56 = GreCombineRgn(*((HRGN *)gpDispInfo + 15), *((HRGN *)gpDispInfo + 15), *(HRGN *)(v55 + 88), 2);
        }
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                             (HRGN *)(v55 + 96),
                             (struct _RECTL *)(*(_QWORD *)(v55 + 40) + 44LL))
          && (*(_DWORD *)(*(_QWORD *)(v55 + 40) + 24LL) & 1) != 0 )
        {
          v56 = GreCombineRgn(*((HRGN *)gpDispInfo + 16), *((HRGN *)gpDispInfo + 16), *(HRGN *)(v55 + 96), 2);
        }
        *((_DWORD *)gpDispInfo + 37) = *((_DWORD *)gpDispInfo + 37) & 0xFFFFFFFE | (v56 == 2);
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                             (HRGN *)(v55 + 104),
                             (struct _RECTL *)(*(_QWORD *)(v55 + 40) + 60LL))
          && (*(_DWORD *)(*(_QWORD *)(v55 + 40) + 24LL) & 1) != 0 )
        {
          v56 = GreCombineRgn(*((HRGN *)gpDispInfo + 17), *((HRGN *)gpDispInfo + 17), *(HRGN *)(v55 + 104), 2);
        }
        v55 = *(_QWORD *)(v55 + 56);
      }
      while ( v55 );
      v54 = gpDispInfo;
    }
  }
  if ( (*((_DWORD *)v54 + 37) & 1) != 0 )
    v57 = 0LL;
  else
    v57 = *((_QWORD *)v54 + 15);
  v58 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( j = *(_QWORD *)(v58 + 16); j; j = *(_QWORD *)(j + 32) )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 16LL) + 216LL) = v57;
      v58 = *(_QWORD *)(v58 + 8);
    }
    while ( v58 );
    v54 = gpDispInfo;
  }
  *((_BYTE *)gpsi + 8682) = GreGetDeviceCaps(*((_QWORD *)v54 + 6), 14);
  v60 = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 12);
  v62 = gpsi;
  *((_BYTE *)gpsi + 8683) = v60;
  v63 = *((unsigned __int8 *)gpsi + 8682) * v60;
  *((_WORD *)gpsi + 4338) = v63;
  *((_WORD *)gpDispInfo + 73) = v63;
  if ( (_DWORD)v13 )
    *((_DWORD *)gpsi + 2171) |= 1u;
  else
    *((_DWORD *)gpsi + 2171) &= ~1u;
  EnforceColorDependentSettings(v62, v61);
  return 0LL;
}
