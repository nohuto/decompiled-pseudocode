/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180018C30 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180024B80 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180025858 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  struct CWindowData *v6; // rbx
  int v7; // ebp
  struct CWindowData *v8; // rdi
  int v9; // edi
  __int64 v10; // rax
  int updated; // eax
  volatile signed __int32 *v12; // rcx
  CResource *(__fastcall *v13)(CResource *, char); // rax
  unsigned int v14; // edi
  __int64 v15; // rbp
  void *(__fastcall *v16)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v17; // rax
  CBaseObject *v18; // r14
  int v19; // eax
  __int64 v20; // rax
  int v21; // ecx
  CVisual *v22; // rdi
  char v23; // al
  _QWORD *v24; // rax
  __int64 v26; // r9
  int v27; // r8d
  unsigned int v28; // r14d
  unsigned int v29; // ebp
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  void (__fastcall *v34)(CVisual *); // rax
  CWindowData *v35; // rax
  CWindowData *v36; // rax
  int v37; // eax
  unsigned int v38; // [rsp+20h] [rbp-A8h]
  __int128 v39; // [rsp+30h] [rbp-98h] BYREF
  __int64 v40; // [rsp+40h] [rbp-88h]
  unsigned int v41; // [rsp+48h] [rbp-80h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v43; // [rsp+60h] [rbp-68h]
  __int128 v44; // [rsp+70h] [rbp-58h]
  __int64 v45; // [rsp+80h] [rbp-48h]
  char v46; // [rsp+88h] [rbp-40h]
  unsigned int v47; // [rsp+D8h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v5 = 0LL;
  v47 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v8 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v35 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v35 || (v36 = CWindowData::CWindowData(v35), (v8 = v36) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    v9 = -2147024882;
    goto LABEL_56;
  }
  *((_QWORD *)v36 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v36);
  *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v37 = CWindowList::SyncWindowData(this, a2, v8);
  v7 = v37;
  if ( v37 >= 0 )
LABEL_2:
    v6 = v8;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x5BEu);
  v9 = v7;
  if ( v7 < 0 )
  {
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x10C1u);
    goto LABEL_29;
  }
  if ( !v6 )
    goto LABEL_29;
  v10 = *((_QWORD *)v6 + 53);
  if ( v10 )
  {
    v32 = *((_QWORD *)v6 + 48);
    if ( v32 )
    {
      v33 = *(_QWORD *)(v10 + 32);
      if ( v33 )
      {
        if ( *(_QWORD *)(v33 + 384) == v32 )
        {
          updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v32 + 16) + 904LL))(
                      *(_QWORD *)(v32 + 16),
                      *(unsigned int *)(v32 + 24));
          v9 = updated;
          if ( updated < 0 )
          {
            v38 = 4304;
LABEL_66:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v38);
            goto LABEL_29;
          }
        }
      }
    }
  }
  updated = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 344LL))(
              a2,
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v47);
  v9 = updated;
  if ( updated < 0 )
  {
    v38 = 4308;
    goto LABEL_66;
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)v6 + 48);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = **(CResource *(__fastcall ***)(CResource *, char))v12;
      if ( v13 == CResource::`scalar deleting destructor' )
        CResource::`scalar deleting destructor'((CResource *)v12, 1);
      else
        v13((CResource *)v12, 1);
    }
    *((_QWORD *)v6 + 48) = 0LL;
  }
  v14 = v47;
  if ( v47 )
  {
    v15 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v16 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    if ( v16 == WPF::ProcessHeapImpl::AllocClear )
      v17 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
    else
      v17 = (CBaseObject *)v16(WPF::g_pProcessHeap, 32LL);
    v18 = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 2) = 1;
      *(_QWORD *)v17 = &CResource::`vftable';
      *((_DWORD *)v17 + 6) = v14;
      *((_QWORD *)v17 + 2) = v15;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 88LL))(v15, v14);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x66u);
        CBaseObject::Release(v18);
      }
      else
      {
        *((_QWORD *)v6 + 48) = v18;
      }
      if ( v9 >= 0 )
        goto LABEL_19;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u);
      v9 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x10DBu);
    goto LABEL_29;
  }
LABEL_19:
  v20 = *((_QWORD *)v6 + 50);
  if ( v20 )
  {
    if ( *((_QWORD *)v6 + 48) )
    {
      v21 = *(_DWORD *)(v20 + 80);
      if ( (v21 & 0x2000000) == 0 )
      {
        v22 = *(CVisual **)(v20 + 24);
        for ( *(_DWORD *)(v20 + 80) = v21 | 0x2000000; v22; v22 = (CVisual *)*((_QWORD *)v22 + 3) )
        {
          if ( (*((_BYTE *)v22 + 80) & 1) != 0 )
            break;
          v34 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v22 + 32LL);
          if ( v34 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v22);
          else
            v34(v22);
        }
      }
    }
    else
    {
      *(_DWORD *)(v20 + 80) &= ~0x2000000u;
    }
  }
  (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 352LL))(
    a2,
    (__int64)v6 + 376,
    (__int64)v6 + 380);
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)v6 + 595) &= ~4u;
  v9 = 0;
  *((_BYTE *)v6 + 595) |= 4 * (v23 & 1);
  if ( *((_DWORD *)v6 + 116) )
  {
    v26 = *((_QWORD *)v6 + 55);
    v27 = *((_DWORD *)v6 + 116);
    v40 = 0LL;
    v39 = 0LL;
    v41 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet((__int64)&v39, 8u, v27, v26) >= 0 )
    {
      v28 = v41;
      v29 = 0;
      if ( v41 )
      {
        v30 = v39;
        while ( 1 )
        {
          v31 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v30 + 8LL * v29));
          v9 = v31;
          if ( v31 < 0 )
            break;
          if ( ++v29 >= v28 )
            goto LABEL_37;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1AF4u);
      }
    }
LABEL_37:
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v39);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x10E6u);
    goto LABEL_29;
  }
  Buffer[0] = *((_QWORD *)v6 + 15);
  v43 = 0LL;
  v44 = 0LL;
  Buffer[1] = 0LL;
  v45 = -1LL;
  v46 = 0;
  v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v24 )
    v5 = v24[6];
  if ( *((_QWORD *)v6 + 5) == v5 )
  {
    updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 15));
    v9 = updated;
    if ( updated < 0 )
    {
      v38 = 4331;
      goto LABEL_66;
    }
  }
LABEL_29:
  if ( v47 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v9;
}
