/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x18002AC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x180019858 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::UnregisterIndirectSwapchainRenderTargetFromWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        bool *a3)
{
  struct CWindowData *v6; // rdi
  int v7; // esi
  struct CWindowData *v8; // rbp
  unsigned int v9; // ebx
  CWindowData *v11; // rax
  CWindowData *v12; // rax
  int v13; // eax
  CTopLevelWindow *v14; // rcx
  int v15; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  *a3 = 0;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v8 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v11 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v11 || (v12 = CWindowData::CWindowData(v11), (v8 = v12) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    v9 = -2147024882;
    goto LABEL_13;
  }
  *((_QWORD *)v12 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v12);
  *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v13 = CWindowList::SyncWindowData(this, a2, v8);
  v7 = v13;
  if ( v13 >= 0 )
LABEL_3:
    v6 = v8;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5BEu);
  v9 = v7;
  if ( v7 < 0 )
  {
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1215u);
    goto LABEL_7;
  }
  if ( v6 && (v14 = (CTopLevelWindow *)*((_QWORD *)v6 + 50)) != 0LL )
  {
    v15 = CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(v14, a3);
    v9 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x121Bu);
  }
  else
  {
    v9 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x1218u);
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
