/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800296D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180011520 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002C1F4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // ebp
  CWindowData *v7; // rdi
  int v8; // esi
  struct CWindowData *v9; // rbx
  int v10; // ebx
  CWindowData *v12; // rsi
  __int64 v13; // r14
  int SyncedWindowData; // eax
  CWindowData *v15; // rdx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  CWindowData *v19; // rax
  CWindowData *v20; // rax
  int v21; // eax
  int v22; // eax
  CWindowData *v23; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 || !a3 && !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_4;
  v19 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v19 || (v20 = CWindowData::CWindowData(v19), (v9 = v20) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    v10 = -2147024882;
    goto LABEL_33;
  }
  *((_QWORD *)v20 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v20);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v21 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x5BEu);
  else
LABEL_4:
    v7 = v9;
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xAF8u);
    goto LABEL_7;
  }
  if ( v7 )
  {
    v23 = 0LL;
    v12 = 0LL;
    if ( a3 )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 0, &v23);
      v10 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0xB00u);
        goto LABEL_7;
      }
      v12 = v23;
    }
    v23 = v7;
    v10 = 0;
    v13 = *((_QWORD *)v7 + 68);
    if ( (CWindowData *)v13 != v12 )
    {
      if ( v13 )
      {
        CWindowData::UpdateOwnerLists(v7, 0);
        v7 = v23;
      }
      *((_QWORD *)v7 + 68) = 0LL;
      if ( !v13 )
        goto LABEL_17;
      DynArray<CWindowData *,0>::Remove(v13 + 552, &v23);
      v18 = *(_DWORD *)(v13 + 464);
      if ( !v18 )
        goto LABEL_17;
      v15 = v23;
      while ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v13 + 440) + 8LL * v6) + 64LL) != v23 )
      {
        if ( ++v6 >= v18 )
          goto LABEL_18;
      }
      v22 = CWindowData::NotifyRepresentationChanged((CWindowData *)v13);
      v10 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xB27u);
      }
      else
      {
LABEL_17:
        v15 = v23;
LABEL_18:
        *((_QWORD *)v15 + 68) = v12;
        if ( v12 && v12 != v23 )
        {
          v16 = DynArray<CWindowData *,0>::AddMultipleAndSet((char *)v12 + 552, &v23);
          v10 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB34u);
          }
          else
          {
            CWindowData::CheckOwnedWindowEligibility(v23);
            v17 = CWindowData::NotifyRepresentationChanged(v12);
            v10 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xB39u);
          }
        }
      }
    }
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB04u);
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v10;
}
