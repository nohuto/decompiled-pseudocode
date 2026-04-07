/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029840
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800277B0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180014180 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EE14 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  CWindowData *v5; // rbx
  int v6; // edi
  struct CWindowData *v7; // rsi
  int v8; // esi
  bool v9; // bp
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  CResource *(__fastcall *v12)(CResource *, char); // rax
  unsigned int v13; // edi
  __int64 v14; // rsi
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v16; // rax
  CBaseObject *v17; // r14
  int v18; // eax
  CBaseObject ***v19; // rcx
  CWindowData *v21; // rax
  CWindowData *v22; // rax
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v25 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v21 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v21 || (v22 = CWindowData::CWindowData(v21), (v7 = v22) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
    v8 = -2147024882;
    goto LABEL_33;
  }
  *((_QWORD *)v22 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v22);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v23 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v23;
  if ( v23 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6E2u);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x115Du);
    goto LABEL_22;
  }
  if ( !v5 || !*((_QWORD *)v5 + 4) )
    goto LABEL_22;
  v9 = *((_QWORD *)v5 + 45) != 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 336LL))(
          a2,
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
          *((_QWORD *)this + 72),
          &v25);
  v8 = v10;
  if ( v10 < 0 )
  {
    v24 = 4454;
    goto LABEL_40;
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)v5 + 45);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      v12 = **(CResource *(__fastcall ***)(CResource *, char))v11;
      if ( v12 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v11, 1);
      else
        v12((CResource *)v11, 1);
    }
    *((_QWORD *)v5 + 45) = 0LL;
  }
  v13 = v25;
  if ( v25 )
  {
    v14 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v15 == WPF::ProcessHeapImpl::AllocClear )
      v16 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v16 = (CBaseObject *)v15(WPF::g_pProcessHeap, 32LL);
    v17 = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 2) = 1;
      *(_QWORD *)v16 = &CResource::`vftable';
      *((_DWORD *)v16 + 6) = v13;
      *((_QWORD *)v16 + 2) = v14;
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, v13);
      v8 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x66u);
        CBaseObject::Release(v17);
      }
      else
      {
        *((_QWORD *)v5 + 45) = v17;
      }
      if ( v8 >= 0 )
        goto LABEL_19;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u);
      v8 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x116Au);
    goto LABEL_22;
  }
LABEL_19:
  v19 = (CBaseObject ***)*((_QWORD *)v5 + 49);
  if ( v19 )
    CTopLevelWindow::OnClipUpdated(v19);
  if ( v9 != (*((_QWORD *)v5 + 45) != 0LL) )
  {
    v10 = CWindowData::NotifyRepresentationChanged(v5);
    v8 = v10;
    if ( v10 < 0 )
    {
      v24 = 4473;
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v24);
    }
  }
LABEL_22:
  if ( v25 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      v25);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
