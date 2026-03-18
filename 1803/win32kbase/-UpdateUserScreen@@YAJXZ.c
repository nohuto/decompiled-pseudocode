/*
 * XREFs of ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F180 (SetOrCreateRectRgnIndirectPublic.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     MonitorFromHdev @ 0x1C0045458 (MonitorFromHdev.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     GreGetDeviceCaps @ 0x1C0054280 (GreGetDeviceCaps.c)
 *     BuildAccelerationCurve @ 0x1C0054380 (BuildAccelerationCurve.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00543B0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     InitLoadResources @ 0x1C0054BBC (InitLoadResources.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HdevFromMonitor @ 0x1C006E200 (HdevFromMonitor.c)
 *     EnforceColorDependentSettings @ 0x1C006E5E0 (EnforceColorDependentSettings.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 */

__int64 UpdateUserScreen(void)
{
  unsigned int v0; // r15d
  __int64 v1; // r14
  struct tagMONITOR **v2; // rbx
  struct tagMONITOR **v3; // rdi
  char CurrentThreadDpiAwarenessContext; // al
  int v5; // esi
  struct tagMONITOR **v6; // rsi
  struct tagMONITOR **v7; // r12
  unsigned int v8; // eax
  unsigned int v9; // r15d
  __int64 i; // rdi
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  signed int v18; // r14d
  signed int v19; // r15d
  signed int v20; // r12d
  signed int v21; // esi
  _QWORD *v22; // rbx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  unsigned int j; // edi
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  CInputConfig *v32; // rcx
  struct CInpPushLock *v33; // rdx
  __int64 v34; // rbx
  int v35; // r14d
  unsigned int v36; // esi
  HBRUSH *v37; // rdi
  __int64 v38; // r9
  __int64 k; // rdx
  __int64 m; // r8
  unsigned __int8 DeviceCaps; // al
  __int16 v42; // r9
  struct tagMONITOR *v44; // rax
  __int64 v45; // rdx
  __int128 v46; // [rsp+20h] [rbp-20h]

  v0 = 0;
  v1 = *(_QWORD *)(gpDispInfo + 16);
  v2 = (struct tagMONITOR **)(gpDispInfo + 104);
  v3 = *(struct tagMONITOR ***)(gpDispInfo + 104);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
    v0 = W32SetCurrentThreadDpiAwarenessContext((unsigned int)(v5 + 18));
  InitLoadResources(1LL);
  if ( !v5 )
    W32SetCurrentThreadDpiAwarenessContext(v0);
  while ( v3 )
  {
    v6 = v3;
    v7 = v3 + 7;
    v3 = (struct tagMONITOR **)v3[7];
    v8 = HdevFromMonitor(v6);
    v9 = v8;
    if ( v8 == -1 )
      DestroyMonitor(v6);
    else
      SetMonitorData((struct tagMONITOR *)v6, v8);
    if ( v9 != -1 )
      v2 = v7;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 20); i = (unsigned int)(i + 1) )
  {
    if ( !MonitorFromHdev(*(_QWORD *)(v1 + 40 * i + 32)) )
    {
      v44 = SetMonitorData(0LL, i);
      if ( v44 )
      {
        v45 = gpDispInfo;
        if ( *(_QWORD *)(gpDispInfo + 104) )
        {
          *((_QWORD *)*(v2 - 2) + 2) = *((_QWORD *)v44 + 6);
          *v2 = v44;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = *((_QWORD *)v44 + 6);
          *(_QWORD *)(v45 + 104) = v44;
        }
        v2 = (struct tagMONITOR **)((char *)v44 + 56);
      }
    }
  }
  v11 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v11 || !*(_QWORD *)(gpDispInfo + 96) )
    return 3221225495LL;
  v12 = *(_QWORD *)(gpDispInfo + 104);
  v13 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 64LL);
  do
  {
    v14 = *(_QWORD *)(v12 + 40);
    v12 = *(_QWORD *)(v12 + 56);
    if ( v13 >= *(_WORD *)(v14 + 64) )
      v13 = *(_WORD *)(v14 + 64);
  }
  while ( v12 );
  do
  {
    *(_WORD *)(*(_QWORD *)(v11 + 40) + 66LL) = v13;
    v11 = *(_QWORD *)(v11 + 56);
  }
  while ( v11 );
  if ( (int)IsUpdateCursorSizesSupported() >= 0 )
    UpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v1 + 16) & 1) == 0;
  v15 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 38) & 0x100;
  *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFD | ((_DWORD)v15 != 0 ? 2 : 0);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v22 = *(_QWORD **)(gpDispInfo + 104);
  if ( v22 )
  {
    do
    {
      v23 = (_DWORD *)v22[5];
      if ( (v23[6] & 1) != 0 )
      {
        v24 = v23[7];
        if ( v20 < v24 )
          v24 = v20;
        v20 = v24;
        v25 = v23[8];
        if ( v19 < v25 )
          v25 = v19;
        v19 = v25;
        v26 = v23[9];
        if ( v18 > v26 )
          v26 = v18;
        v18 = v26;
        v27 = v23[10];
        if ( v21 > v27 )
          v27 = v21;
        v21 = v27;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 555) )
      {
        v28 = v22[5];
        if ( (_DWORD)v15 )
          *(_DWORD *)(v28 + 24) |= 2u;
        else
          *(_DWORD *)(v28 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v22[29] + 2164LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v22[5] + 24LL) |= 2u;
        *(_DWORD *)(gpDispInfo + 132) |= 2u;
      }
      for ( j = 0; j < 2; ++j )
        BuildAccelerationCurve(j, v22, v17);
      v22 = (_QWORD *)v22[7];
    }
    while ( v22 );
    v17 = __PAIR64__(v21, v18);
    v16 = __PAIR64__(v19, v20);
  }
  v30 = gpDispInfo;
  v46 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v31 = v16 - v46;
  if ( !v31 )
    v31 = v17 - *((_QWORD *)&v46 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v20;
  *(_DWORD *)(*(_QWORD *)v30 + 28LL) = v19;
  *(_DWORD *)(*(_QWORD *)v30 + 32LL) = v18;
  *(_DWORD *)(*(_QWORD *)v30 + 36LL) = v21;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v31 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v32 = *(CInputConfig **)gpDispInfo;
  v33 = (struct CInpPushLock *)**(unsigned int **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = (_DWORD)v33;
  CInputConfig::OnDisplayStateChange(v32, v33);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsUpdateDesktopThresholdsSupported() >= 0 )
    UpdateDesktopThresholds();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 120), (struct _RECTL *)&gZero);
  if ( *(_QWORD *)(gpDispInfo + 120) )
  {
    v34 = *(_QWORD *)(gpDispInfo + 104);
    v35 = 0;
    while ( v34 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                           (HRGN *)(v34 + 72),
                           (struct _RECTL *)(*(_QWORD *)(v34 + 40) + 28LL))
        && (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 24LL) & 1) != 0 )
      {
        v35 = GreCombineRgn(*(HRGN *)(gpDispInfo + 120), *(HRGN *)(gpDispInfo + 120), *(HRGN *)(v34 + 72), 2);
      }
      v36 = 0;
      v37 = (HBRUSH *)(v34 + 80);
      do
      {
        if ( *v37 )
        {
          GreDeleteObject(*v37);
          *v37 = 0LL;
        }
        ++v36;
        ++v37;
      }
      while ( v36 < 0x12 );
      v34 = *(_QWORD *)(v34 + 56);
    }
    *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFE | (v35 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 132) & 1) != 0 )
    v38 = 0LL;
  else
    v38 = *(_QWORD *)(gpDispInfo + 120);
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(m + 8) + 24LL) + 40LL) + 168LL) = v38;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 14);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v42 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v42;
  *(_WORD *)(gpDispInfo + 128) = v42;
  if ( (_DWORD)v15 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}
