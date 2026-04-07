/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031A70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18002A548 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_pddddd @ 0x180085E58 (Template_pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  CWindowData *v4; // rbx
  int v5; // edi
  CWindowData *v6; // rsi
  unsigned int v7; // esi
  __int64 v8; // rax
  bool v9; // cl
  BOOL v10; // edi
  int updated; // eax
  int v12; // edx
  int v13; // ecx
  CWindowData *v15; // rax
  int v16; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v15 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( v15 )
    v6 = CWindowData::CWindowData(v15);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x57Cu);
    v7 = -2147024882;
    goto LABEL_28;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v16 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v16;
  if ( v16 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x580u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1166u);
    goto LABEL_18;
  }
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v9 = *((double *)v4 + 40) != *(double *)v8
      || *((_DWORD *)v4 + 82) != *(_DWORD *)(v8 + 8)
      || *((_DWORD *)v4 + 87) != *(_DWORD *)(v8 + 28);
    v10 = *((_DWORD *)v4 + 83) != *(_DWORD *)(v8 + 12)
       || *((_DWORD *)v4 + 84) != *(_DWORD *)(v8 + 16)
       || *((_DWORD *)v4 + 85) != *(_DWORD *)(v8 + 20)
       || *((_DWORD *)v4 + 86) != *(_DWORD *)(v8 + 24);
    *((_OWORD *)v4 + 20) = *(_OWORD *)v8;
    *((_OWORD *)v4 + 21) = *(_OWORD *)(v8 + 16);
    *((_QWORD *)v4 + 38) = *(_QWORD *)v8;
    *((_QWORD *)v4 + 39) = *(_QWORD *)v8;
    if ( *((_QWORD *)v4 + 50) && v9 )
      CTopLevelWindow::OnSettingsUpdated(*((CTopLevelWindow **)v4 + 50), 1);
    updated = CWindowList::UpdateWindowScale(this, v4, v10);
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1181u);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      Template_pddddd(
        v13,
        v12,
        *((_QWORD *)v4 + 5),
        *((_DWORD *)v4 + 82),
        *((_DWORD *)v4 + 83),
        *((_DWORD *)v4 + 84),
        *((_DWORD *)v4 + 85),
        *((_DWORD *)v4 + 86));
    }
  }
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
