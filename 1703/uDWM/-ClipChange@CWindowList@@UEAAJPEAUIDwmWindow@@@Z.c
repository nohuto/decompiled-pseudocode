/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030EB0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F490 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A500 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180036750 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  CWindowData *v5; // rbx
  int v6; // edi
  struct CWindowData *v7; // rsi
  unsigned int v8; // esi
  bool v9; // bp
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  CResource *(__fastcall *v12)(CResource *, char); // rax
  unsigned int v13; // edi
  __int64 v14; // r14
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v16; // rax
  CBaseObject *v17; // rsi
  int v18; // eax
  int v19; // edi
  CBaseObject ***v20; // rcx
  CWindowData *v22; // rax
  CWindowData *v23; // rax
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v26 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v22 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v22 || (v23 = CWindowData::CWindowData(v22), (v7 = v23) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x57Cu);
    v8 = -2147024882;
    goto LABEL_33;
  }
  *((_QWORD *)v23 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v23);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v24 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v24;
  if ( v24 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x580u);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1027u);
    goto LABEL_22;
  }
  if ( !v5 || !*((_QWORD *)v5 + 4) )
    goto LABEL_22;
  v9 = *((_QWORD *)v5 + 46) != 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 336LL))(
          a2,
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
          *((_QWORD *)this + 72),
          &v26);
  v8 = v10;
  if ( v10 < 0 )
  {
    v25 = 4144;
    goto LABEL_40;
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)v5 + 46);
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
    *((_QWORD *)v5 + 46) = 0LL;
  }
  v13 = v26;
  if ( v26 )
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
      v19 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x66u);
        CBaseObject::Release(v17);
      }
      else
      {
        *((_QWORD *)v5 + 46) = v17;
      }
      v8 = v19;
      if ( v19 >= 0 )
        goto LABEL_19;
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x61u);
      v8 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1034u);
    goto LABEL_22;
  }
LABEL_19:
  v20 = (CBaseObject ***)*((_QWORD *)v5 + 50);
  if ( v20 )
    CTopLevelWindow::OnClipUpdated(v20);
  if ( v9 != (*((_QWORD *)v5 + 46) != 0LL) )
  {
    v10 = CWindowData::NotifyRepresentationChanged(v5);
    v8 = v10;
    if ( v10 < 0 )
    {
      v25 = 4163;
LABEL_40:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v25);
    }
  }
LABEL_22:
  if ( v26 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      v26);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
