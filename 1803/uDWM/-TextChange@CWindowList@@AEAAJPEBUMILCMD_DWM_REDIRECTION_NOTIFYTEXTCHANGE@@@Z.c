/*
 * XREFs of ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18002CB64
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180015C70 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003A8E8 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800826A4 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall CWindowList::TextChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // edi
  CWindowData *v7; // rsi
  __int64 v8; // rax
  struct IDwmWindow *v9; // r14
  int v10; // ebp
  CWindowData *v11; // rdi
  int WindowText; // eax
  int v13; // eax
  CVisual *v14; // rcx
  CWindowIconic *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // edx
  void *(__fastcall *v19)(WPF::ProcessHeapImpl *, size_t); // rax
  CWindowData *v20; // rax
  int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // [rsp+20h] [rbp-248h]
  WCHAR pString[256]; // [rsp+30h] [rbp-238h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)((char *)a2 + 4);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 6) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6));
    v9 = (struct IDwmWindow *)v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = (CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v11 )
        goto LABEL_4;
      v19 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v19 == WPF::ProcessHeapImpl::AllocClear )
        v20 = (CWindowData *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x2E8uLL);
      else
        v20 = (CWindowData *)v19(WPF::g_pProcessHeap, 744LL);
      if ( v20 )
        v11 = CWindowData::CWindowData(v20);
      else
        v11 = 0LL;
      if ( !v11 )
      {
        v6 = -2147024882;
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6C1u);
        goto LABEL_6;
      }
      *((_QWORD *)v11 + 3) = v9;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v9)(v9, v11);
      *((_QWORD *)v11 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v9 + 24LL))(v9);
      v21 = CWindowList::SyncWindowData(this, v9, v11);
      v10 = v21;
      if ( v21 >= 0 )
LABEL_4:
        v7 = v11;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x6E2u);
      v6 = v10;
      if ( v10 >= 0 )
        goto LABEL_6;
      goto LABEL_24;
    }
  }
LABEL_6:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xAA5u);
  }
  else if ( v7 )
  {
    WindowText = InternalGetWindowText(*((HWND *)v7 + 5), pString, 256);
    v13 = CWindowData::SetTitle(v7, (char *)pString, WindowText);
    v6 = v13;
    if ( v13 < 0 )
    {
      v23 = 2731;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v23);
      goto LABEL_13;
    }
    v14 = (CVisual *)*((_QWORD *)v7 + 49);
    if ( v14 )
      CVisual::SetDirtyFlags(v14, 0x10000);
    v15 = (CWindowIconic *)*((_QWORD *)v7 + 54);
    if ( v15 )
    {
      v13 = CWindowIconic::OnTitleUpdated(v15, 1);
      v6 = v13;
      if ( v13 < 0 )
      {
        v23 = 2740;
        goto LABEL_27;
      }
    }
    v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
    v17 = *(_DWORD *)(v16 + 360);
    if ( v17 )
    {
      v22 = *(_QWORD *)(v16 + 336);
      while ( *(CWindowData **)(v22 + 48LL * v5 + 8) != v7 )
      {
        if ( ++v5 >= v17 )
          goto LABEL_13;
      }
      CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v22 + 48LL * v5), *((unsigned __int16 **)v7 + 2));
    }
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
