/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800282D0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EC8C (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C05C (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  CWindowData *v5; // rbp
  int v6; // edi
  CWindowData *v7; // rbx
  unsigned int v8; // ebx
  volatile signed __int32 **v9; // rdi
  bool v10; // r15
  int v11; // eax
  volatile signed __int32 *v12; // rcx
  CResource *(__fastcall *v13)(CResource *, char); // rax
  CBaseObject ***v14; // rcx
  CWindowData *v16; // rax
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v19 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v16 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( v16 )
    v7 = CWindowData::CWindowData(v16);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    v8 = -2147024882;
    goto LABEL_31;
  }
  *((_QWORD *)v7 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v7);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v17 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v17;
  if ( v17 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x5BEu);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x105Bu);
    goto LABEL_18;
  }
  if ( v5 && *((_QWORD *)v5 + 4) )
  {
    v9 = (volatile signed __int32 **)((char *)v5 + 368);
    v10 = *((_QWORD *)v5 + 46) != 0LL;
    v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 336LL))(
            a2,
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
            *((_QWORD *)this + 72),
            &v19);
    v8 = v11;
    if ( v11 < 0 )
    {
      v18 = 4196;
      goto LABEL_35;
    }
    v12 = *v9;
    if ( *v9 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 && v12 )
      {
        v13 = **(CResource *(__fastcall ***)(CResource *, char))v12;
        if ( v13 == CResource::`scalar deleting destructor' )
          CResource::`scalar deleting destructor'((CResource *)v12, 1);
        else
          v13((CResource *)v12, 1);
      }
      *v9 = 0LL;
    }
    if ( v19 )
    {
      v11 = CResource::WrapExistingResource(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v19,
              (struct CResource **)v5 + 46);
      v8 = v11;
      if ( v11 < 0 )
      {
        v18 = 4200;
        goto LABEL_35;
      }
    }
    v14 = (CBaseObject ***)*((_QWORD *)v5 + 50);
    if ( v14 )
      CTopLevelWindow::OnClipUpdated(v14);
    if ( v10 != (*v9 != 0LL) )
    {
      v11 = CWindowData::NotifyRepresentationChanged(v5);
      v8 = v11;
      if ( v11 < 0 )
      {
        v18 = 4215;
LABEL_35:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v18);
      }
    }
  }
LABEL_18:
  if ( v19 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
