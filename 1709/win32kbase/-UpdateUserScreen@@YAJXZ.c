/*
 * XREFs of ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MonitorFromHdev @ 0x1C005A908 (MonitorFromHdev.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     BuildAccelerationCurve @ 0x1C005F380 (BuildAccelerationCurve.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0060E38 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0061814 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0061FC0 (EnforceColorDependentSettings.c)
 *     InitLoadResources @ 0x1C0062000 (InitLoadResources.c)
 *     HdevFromMonitor @ 0x1C00626A0 (HdevFromMonitor.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     ??4?$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C00734F8 (--4-$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEA.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 UpdateUserScreen(void)
{
  int v0; // esi
  unsigned int v1; // r15d
  __int64 v2; // r14
  struct tagMONITOR **v3; // rdi
  unsigned __int64 v4; // rbx
  void *v5; // rsi
  struct tagMONITOR **v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  signed int v16; // r14d
  signed int v17; // r15d
  signed int v18; // r12d
  signed int v19; // esi
  _QWORD *v20; // rbx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  unsigned int i; // edi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  CInputConfig *v30; // rcx
  __int64 v31; // rbx
  int v32; // r14d
  HBRUSH *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r9
  __int64 j; // rdx
  unsigned __int8 DeviceCaps; // al
  __int16 v38; // r9
  __int64 k; // r8
  struct tagMONITOR *v41; // rax
  __int64 v42; // r8
  struct tagMONITOR *v43; // r9
  __int128 v44; // [rsp+20h] [rbp-20h]

  v0 = 0;
  v1 = 0;
  v2 = *(_QWORD *)(gpDispInfo + 8);
  v3 = (struct tagMONITOR **)(gpDispInfo + 96);
  v4 = *(_QWORD *)(gpDispInfo + 96);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v1 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v0 = 1;
  }
  InitLoadResources(1LL);
  if ( v0 )
    W32SetCurrentThreadDpiAwarenessContext(v1);
  while ( v4 )
  {
    v5 = (void *)v4;
    v6 = (struct tagMONITOR **)(v4 + 56);
    v4 = *(_QWORD *)(v4 + 56);
    v7 = HdevFromMonitor(v5);
    if ( v7 == -1 )
    {
      DestroyMonitor(v5);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v5, v7);
      v3 = v6;
    }
  }
  if ( *(_DWORD *)(v2 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(v2 + 40 * v4 + 32)) )
      {
        v41 = SetMonitorData(0LL, v4);
        v43 = v41;
        if ( v41 )
        {
          if ( *(_QWORD *)(gpDispInfo + 96) )
          {
            *((_QWORD *)*(v3 - 2) + 2) = *((_QWORD *)v41 + 6);
            *v3 = v41;
          }
          else
          {
            tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorFirst<tagMONITOR>::operator=(gpDispInfo + 96, v41, v42, v41);
          }
          v3 = (struct tagMONITOR **)((char *)v43 + 56);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(v2 + 20) );
  }
  v8 = *(_QWORD *)(gpDispInfo + 96);
  if ( !v8 || !*(_QWORD *)(gpDispInfo + 88) )
    return 3221225495LL;
  v9 = *(_QWORD *)(gpDispInfo + 96);
  v10 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 64LL);
  do
  {
    v11 = *(_QWORD *)(v9 + 40);
    v9 = *(_QWORD *)(v9 + 56);
    v12 = *(_WORD *)(v11 + 64);
    if ( v10 < v12 )
      v12 = v10;
    v10 = v12;
  }
  while ( v9 );
  do
  {
    *(_WORD *)(*(_QWORD *)(v8 + 40) + 66LL) = v12;
    v8 = *(_QWORD *)(v8 + 56);
  }
  while ( v8 );
  if ( (int)IsUpdateCursorSizesSupported() >= 0 )
    UpdateCursorSizes();
  *((_DWORD *)gpsi + 551) = (*(_DWORD *)(v2 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*(struct HOBJ__ **)(gpDispInfo + 48), 38) & 0x100;
  *(_DWORD *)(gpDispInfo + 124) = *(_DWORD *)(gpDispInfo + 124) & 0xFFFFFFFD | ((_DWORD)v13 != 0 ? 2 : 0);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v20 = *(_QWORD **)(gpDispInfo + 96);
  if ( v20 )
  {
    do
    {
      v21 = (_DWORD *)v20[5];
      if ( (v21[6] & 1) != 0 )
      {
        v22 = v21[7];
        if ( v18 < v22 )
          v22 = v18;
        v18 = v22;
        v23 = v21[8];
        if ( v17 < v23 )
          v23 = v17;
        v17 = v23;
        v24 = v21[9];
        if ( v16 > v24 )
          v24 = v16;
        v16 = v24;
        v25 = v21[10];
        if ( v19 > v25 )
          v25 = v19;
        v19 = v25;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 551) )
      {
        v26 = v20[5];
        if ( (_DWORD)v13 )
          *(_DWORD *)(v26 + 24) |= 2u;
        else
          *(_DWORD *)(v26 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v20[29] + 2188LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v20[5] + 24LL) |= 2u;
        *(_DWORD *)(gpDispInfo + 124) |= 2u;
      }
      for ( i = 0; i < 2; ++i )
        BuildAccelerationCurve(i, v20, v15);
      v20 = (_QWORD *)v20[7];
    }
    while ( v20 );
    v15 = __PAIR64__(v19, v16);
    v14 = __PAIR64__(v17, v18);
  }
  v28 = gpDispInfo;
  v44 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v29 = v14 - v44;
  if ( !v29 )
    v29 = v15 - *((_QWORD *)&v44 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v18;
  *(_DWORD *)(*(_QWORD *)v28 + 28LL) = v17;
  *(_DWORD *)(*(_QWORD *)v28 + 32LL) = v16;
  *(_DWORD *)(*(_QWORD *)v28 + 36LL) = v19;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v29 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v30 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 550) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v30);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsUpdateDesktopThresholdsSupported() >= 0 )
    UpdateDesktopThresholds();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 112), (struct _RECTL *)&gZero);
  if ( *(_QWORD *)(gpDispInfo + 112) )
  {
    v31 = *(_QWORD *)(gpDispInfo + 96);
    v32 = 0;
    while ( v31 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                           (HRGN *)(v31 + 72),
                           (struct _RECTL *)(*(_QWORD *)(v31 + 40) + 28LL))
        && (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 24LL) & 1) != 0 )
      {
        v32 = GreCombineRgn(*(HRGN *)(gpDispInfo + 112), *(HRGN *)(gpDispInfo + 112), *(HRGN *)(v31 + 72), 2);
      }
      v33 = (HBRUSH *)(v31 + 80);
      v34 = 18LL;
      do
      {
        if ( *v33 )
        {
          GreDeleteObject(*v33);
          *v33 = 0LL;
        }
        ++v33;
        --v34;
      }
      while ( v34 );
      v31 = *(_QWORD *)(v31 + 56);
    }
    *(_DWORD *)(gpDispInfo + 124) = *(_DWORD *)(gpDispInfo + 124) & 0xFFFFFFFE | (v32 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 124) & 1) != 0 )
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(gpDispInfo + 112);
  for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
  {
    for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(k + 8) + 16LL) + 216LL) = v35;
  }
  *((_BYTE *)gpsi + 9978) = GreGetDeviceCaps(*(struct HOBJ__ **)(gpDispInfo + 48), 14);
  DeviceCaps = GreGetDeviceCaps(*(struct HOBJ__ **)(gpDispInfo + 48), 12);
  *((_BYTE *)gpsi + 9979) = DeviceCaps;
  v38 = *((unsigned __int8 *)gpsi + 9978) * DeviceCaps;
  *((_WORD *)gpsi + 4986) = v38;
  *(_WORD *)(gpDispInfo + 120) = v38;
  if ( (_DWORD)v13 )
    *((_DWORD *)gpsi + 2495) |= 1u;
  else
    *((_DWORD *)gpsi + 2495) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}
