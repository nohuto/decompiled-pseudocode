/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18001E980 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180024260 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180033048 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A354 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v14; // ebp
  __int64 v15; // r15
  void *(__fastcall *v16)(WPF::ProcessHeapImpl *, size_t); // rax
  CBaseObject *v17; // rax
  CBaseObject *v18; // rdi
  int v19; // eax
  int v20; // ebp
  __int64 v21; // rax
  int v22; // ecx
  CVisual *v23; // rdi
  char v24; // al
  _QWORD *v25; // rax
  __int64 v27; // r9
  int v28; // r8d
  unsigned int v29; // r14d
  unsigned int v30; // ebp
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  void (__fastcall *v35)(CVisual *); // rax
  CWindowData *v36; // rax
  CWindowData *v37; // rax
  int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-A8h]
  __int128 v40; // [rsp+30h] [rbp-98h] BYREF
  __int64 v41; // [rsp+40h] [rbp-88h]
  unsigned int v42; // [rsp+48h] [rbp-80h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v44; // [rsp+60h] [rbp-68h]
  __int128 v45; // [rsp+70h] [rbp-58h]
  __int64 v46; // [rsp+80h] [rbp-48h]
  char v47; // [rsp+88h] [rbp-40h]
  unsigned int v48; // [rsp+D8h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v5 = 0LL;
  v48 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v8 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v36 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v36 || (v37 = CWindowData::CWindowData(v36), (v8 = v37) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x57Cu);
    v9 = -2147024882;
    goto LABEL_56;
  }
  *((_QWORD *)v37 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v37);
  *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v38 = CWindowList::SyncWindowData(this, a2, v8);
  v7 = v38;
  if ( v38 >= 0 )
LABEL_2:
    v6 = v8;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x580u);
  v9 = v7;
  if ( v7 < 0 )
  {
LABEL_56:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x108Du);
    goto LABEL_29;
  }
  if ( !v6 )
    goto LABEL_29;
  v10 = *((_QWORD *)v6 + 53);
  if ( v10 )
  {
    v33 = *((_QWORD *)v6 + 48);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v10 + 32);
      if ( v34 )
      {
        if ( *(_QWORD *)(v34 + 384) == v33 )
        {
          updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v33 + 16) + 904LL))(
                      *(_QWORD *)(v33 + 16),
                      *(unsigned int *)(v33 + 24));
          v9 = updated;
          if ( updated < 0 )
          {
            v39 = 4252;
LABEL_66:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v39);
            goto LABEL_29;
          }
        }
      }
    }
  }
  updated = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 344LL))(
              a2,
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v48);
  v9 = updated;
  if ( updated < 0 )
  {
    v39 = 4256;
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
  v14 = v48;
  if ( v48 )
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
      v20 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x66u);
        CBaseObject::Release(v18);
      }
      else
      {
        *((_QWORD *)v6 + 48) = v18;
      }
      v9 = v20;
      if ( v20 >= 0 )
        goto LABEL_19;
    }
    else
    {
      v20 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x61u);
      v9 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x10A7u);
    goto LABEL_29;
  }
LABEL_19:
  v21 = *((_QWORD *)v6 + 50);
  if ( v21 )
  {
    if ( *((_QWORD *)v6 + 48) )
    {
      v22 = *(_DWORD *)(v21 + 80);
      if ( (v22 & 0x2000000) == 0 )
      {
        v23 = *(CVisual **)(v21 + 24);
        for ( *(_DWORD *)(v21 + 80) = v22 | 0x2000000; v23; v23 = (CVisual *)*((_QWORD *)v23 + 3) )
        {
          if ( (*((_BYTE *)v23 + 80) & 1) != 0 )
            break;
          v35 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v23 + 32LL);
          if ( v35 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v23);
          else
            v35(v23);
        }
      }
    }
    else
    {
      *(_DWORD *)(v21 + 80) &= ~0x2000000u;
    }
  }
  (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 352LL))(
    a2,
    (__int64)v6 + 376,
    (__int64)v6 + 380);
  v24 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)v6 + 595) &= ~4u;
  v9 = 0;
  *((_BYTE *)v6 + 595) |= 4 * (v24 & 1);
  if ( *((_DWORD *)v6 + 116) )
  {
    v27 = *((_QWORD *)v6 + 55);
    v28 = *((_DWORD *)v6 + 116);
    v41 = 0LL;
    v40 = 0LL;
    v42 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet((__int64)&v40, 8u, v28, v27) >= 0 )
    {
      v29 = v42;
      v30 = 0;
      if ( v42 )
      {
        v31 = v40;
        while ( 1 )
        {
          v32 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v31 + 8LL * v30));
          v9 = v32;
          if ( v32 < 0 )
            break;
          if ( ++v30 >= v29 )
            goto LABEL_37;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1ACDu);
      }
    }
LABEL_37:
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v40);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x10B2u);
    goto LABEL_29;
  }
  Buffer[0] = *((_QWORD *)v6 + 15);
  v44 = 0LL;
  v45 = 0LL;
  Buffer[1] = 0LL;
  v46 = -1LL;
  v47 = 0;
  v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v25 )
    v5 = v25[6];
  if ( *((_QWORD *)v6 + 5) == v5 )
  {
    updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 15));
    v9 = updated;
    if ( updated < 0 )
    {
      v39 = 4279;
      goto LABEL_66;
    }
  }
LABEL_29:
  if ( v48 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v9;
}
