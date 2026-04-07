/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180016778 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001EE5C (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EF60 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002C878 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004849C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18006C600 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18006C6A0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     McTemplateU0pddddd @ 0x180086894 (McTemplateU0pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // esi
  struct CWindowData *v5; // rbx
  int v6; // ebp
  struct CWindowData *v7; // rdi
  int v8; // edi
  __int64 v9; // rax
  bool v10; // r8
  BOOL v11; // ebp
  CTopLevelWindow *v12; // rcx
  int v13; // r14d
  float v14; // xmm7_4
  CWindowList *v15; // rcx
  int v17; // eax
  CWindowData *v18; // rax
  CWindowData *v19; // rax
  int v20; // eax
  CWindowList *v21; // rcx
  CTopLevelWindow *v22; // rcx
  HWND v23; // rdx
  bool v24; // [rsp+88h] [rbp+10h] BYREF
  struct tagPOINT v25; // [rsp+90h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v18 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v18 || (v19 = CWindowData::CWindowData(v18), (v7 = v19) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
    v8 = -2147024882;
    goto LABEL_38;
  }
  *((_QWORD *)v19 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v19);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v20 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v20;
  if ( v20 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x6E2u);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x129Cu);
    goto LABEL_27;
  }
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v10 = *((double *)v5 + 39) != *(double *)v9
       || *((_DWORD *)v5 + 80) != *(_DWORD *)(v9 + 8)
       || *((_DWORD *)v5 + 81) != *(_DWORD *)(v9 + 12);
    v11 = *((_DWORD *)v5 + 82) != *(_DWORD *)(v9 + 16)
       || *((_DWORD *)v5 + 83) != *(_DWORD *)(v9 + 20)
       || *((_DWORD *)v5 + 84) != *(_DWORD *)(v9 + 24)
       || *((_DWORD *)v5 + 85) != *(_DWORD *)(v9 + 28);
    v12 = (CTopLevelWindow *)*((_QWORD *)v5 + 49);
    *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)v9;
    *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v9 + 16);
    *((_QWORD *)v5 + 37) = *(_QWORD *)v9;
    if ( v12 && v10 )
      CTopLevelWindow::OnSettingsUpdated(v12, 1);
    v8 = 0;
    CWindowData::EstablishPixelAlignedScale(v5, &v24);
    v13 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
    if ( v13 < 0 )
      v13 = 0;
    if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
      v4 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    v14 = *((float *)v5 + 76);
    if ( v14 != 1.0 )
    {
      v13 = (int)floor_0((float)((float)v13 * v14) + 0.5);
      v4 = (int)floor_0((float)((float)v4 * v14) + 0.5);
    }
    *((_DWORD *)v5 + 14) = v13 + *((_DWORD *)v5 + 12);
    v15 = (CWindowList *)(unsigned int)(v4 + *((_DWORD *)v5 + 13));
    *((_DWORD *)v5 + 15) = (_DWORD)v15;
    if ( *((_QWORD *)v5 + 49) && (v17 = CWindowData::OnWindowSizeUpdated((CTopLevelWindow **)v5), v8 = v17, v17 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xB1Du);
    }
    else if ( v24 || v11 )
    {
      CWindowList::OnClientMarginsChange(v15, v5);
      CWindowList::OnClientGlassChange(v21, v5);
      v22 = (CTopLevelWindow *)*((_QWORD *)v5 + 49);
      if ( v22 )
        CTopLevelWindow::OnWindowScaleUpdated(v22);
      v23 = (HWND)*((_QWORD *)v5 + 5);
      v25 = (struct tagPOINT)*((_QWORD *)v5 + 6);
      v24 = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
        v23,
        &v25);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 28),
        v5,
        v25,
        &v24);
      if ( !v24 )
        CWindowList::OnPositionChange(this, v5, 1);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x12B6u);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0pddddd(
        (_DWORD)v15,
        *((_DWORD *)v5 + 82),
        *((_QWORD *)v5 + 5),
        *((_DWORD *)v5 + 80),
        *((_DWORD *)v5 + 82),
        *((_DWORD *)v5 + 83),
        *((_DWORD *)v5 + 84),
        *((_DWORD *)v5 + 85));
    }
  }
LABEL_27:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
