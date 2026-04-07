/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800286E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022E6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026D58 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BAF8 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002F918 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002F980 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x18002FA18 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  int v8; // esi
  struct CWindowData *v9; // rbx
  unsigned int v10; // edi
  char *v11; // rax
  struct CWindowData **v12; // rbx
  struct CWindowData *v13; // rdi
  struct CWindowData *v14; // rcx
  struct CWindowData **v15; // rdx
  struct CWindowData *v16; // rcx
  struct CWindowData *v17; // rax
  struct CWindowData *v18; // rdx
  struct CVisual **v19; // rsi
  __int64 v20; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r15
  struct CVisual *v24; // rdi
  char *v25; // rax
  struct CWindowData **v26; // rax
  struct CWindowData *v27; // rax
  int inserted; // eax
  int v29; // eax
  struct _LIST_ENTRY *v30; // r15
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct _LIST_ENTRY *v32; // rcx
  struct _LIST_ENTRY ***v33; // rsi
  unsigned int v34; // ecx
  struct _LIST_ENTRY **v35; // rax
  CWindowData *v36; // rax
  CWindowData *v37; // rax
  int v38; // eax
  CWindowData *v39; // rax
  CWindowData *v40; // rax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v45; // [rsp+40h] [rbp-C0h]
  __int128 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  char v48; // [rsp+68h] [rbp-98h]
  _QWORD v49[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+90h] [rbp-70h]
  __int128 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-50h]
  char v53; // [rsp+B8h] [rbp-48h]
  _QWORD v54[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-20h]
  __int128 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  char v58; // [rsp+108h] [rbp+8h]
  struct CWindowData *v59; // [rsp+158h] [rbp+58h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v59 = 0LL;
  v8 = 0;
  v9 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v6 + 8))(a2);
  if ( v9 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v36 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v36 || (v37 = CWindowData::CWindowData(v36), (v9 = v37) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
    v10 = -2147024882;
    goto LABEL_52;
  }
  *((_QWORD *)v37 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v37);
  *((_QWORD *)v9 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v38 = CWindowList::SyncWindowData(this, a2, v9);
  v8 = v38;
  if ( v38 >= 0 )
  {
LABEL_2:
    v59 = v9;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x6E2u);
    v9 = v59;
  }
  v10 = v8;
  if ( v8 < 0 )
  {
LABEL_52:
    v43 = 2591;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v43);
    goto LABEL_18;
  }
  if ( !v9 )
  {
    v10 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xA21u);
    goto LABEL_18;
  }
  Buffer[0] = *((_QWORD *)v9 + 15);
  v45 = 0LL;
  v46 = 0LL;
  Buffer[1] = 0LL;
  v47 = -1LL;
  v48 = 0;
  v11 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( !v11 || (v12 = (struct CWindowData **)(v11 + 64), v11 == (char *)-64LL) )
  {
    v43 = 2596;
LABEL_75:
    v8 = -2147024882;
    v10 = -2147024882;
    goto LABEL_76;
  }
  if ( a3 )
  {
    v8 = 0;
    v13 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v13 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
      goto LABEL_9;
    v39 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           744LL);
    if ( !v39 || (v40 = CWindowData::CWindowData(v39), (v13 = v40) == 0LL) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
      v10 = -2147024882;
LABEL_60:
      v43 = 2602;
      goto LABEL_76;
    }
    *((_QWORD *)v40 + 3) = a3;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v40);
    *((_QWORD *)v13 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
    v41 = CWindowList::SyncWindowData(this, a3, v13);
    v8 = v41;
    if ( v41 >= 0 )
LABEL_9:
      v12 = (struct CWindowData **)v13;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x6E2u);
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( !v12 )
      {
        v10 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0xA2Du);
        goto LABEL_18;
      }
      goto LABEL_12;
    }
    goto LABEL_60;
  }
LABEL_12:
  if ( v59 == *v12 )
    goto LABEL_18;
  v14 = *(struct CWindowData **)v59;
  if ( *(struct CWindowData **)(*(_QWORD *)v59 + 8LL) != v59
    || (v15 = (struct CWindowData **)*((_QWORD *)v59 + 1), *v15 != v59) )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  v16 = *v12;
  v17 = v59;
  if ( *((struct CWindowData ***)*v12 + 1) != v12 )
    __fastfail(3u);
  *(_QWORD *)v59 = v16;
  *((_QWORD *)v17 + 1) = v12;
  *((_QWORD *)v16 + 1) = v17;
  *v12 = v17;
  v18 = v59;
  v19 = (struct CVisual **)*((_QWORD *)v59 + 49);
  if ( v19 )
  {
    v49[0] = *((_QWORD *)v59 + 15);
    v50 = 0LL;
    v51 = 0LL;
    v49[1] = 0LL;
    v52 = -1LL;
    v53 = 0;
    v22 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v49);
    if ( v22 )
      v23 = v22[3];
    else
      v23 = 0LL;
    v54[1] = 0LL;
    v24 = 0LL;
    v55 = 0LL;
    v57 = -1LL;
    v54[0] = *((_QWORD *)v59 + 15);
    v58 = 0;
    v56 = 0LL;
    v25 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v54);
    if ( v25 )
    {
      v26 = (struct CWindowData **)(v25 + 64);
      if ( v26 )
      {
        if ( v12 != v26 )
        {
          while ( 1 )
          {
            v24 = v12[49];
            if ( v24 )
              break;
            v12 = (struct CWindowData **)v12[1];
            if ( v12 == v26 )
              goto LABEL_26;
          }
          v27 = v12[51];
          if ( v27 && *((_QWORD *)v27 + 3) )
            v24 = v12[51];
        }
LABEL_26:
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v23 + 32), v19, v24, 1u, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xA57u);
          goto LABEL_18;
        }
        v29 = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v59 + 50), 0);
        v10 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xA58u);
          goto LABEL_18;
        }
        CWindowList::UpdateAccentBlurBehind(this, v59);
        v18 = v59;
        if ( *((_QWORD *)v59 + 51) )
        {
          v42 = VisualCollection::InsertRelative(
                  (VisualCollection *)(v23 + 32),
                  *((struct CVisual ***)v59 + 51),
                  *((struct CVisual **)v59 + 49),
                  1u,
                  1);
          v10 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xA5Eu);
            goto LABEL_18;
          }
          v18 = v59;
        }
        goto LABEL_17;
      }
    }
    v43 = 2621;
    goto LABEL_75;
  }
LABEL_17:
  v20 = *((_QWORD *)v18 + 68);
  if ( v20 && *(_DWORD *)(v20 + 576) > 1u )
  {
    v30 = 0LL;
    WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v18 + 15));
    if ( WindowListForDesktopCanFail )
    {
      v32 = *(struct _LIST_ENTRY **)v59;
      if ( *(struct _LIST_ENTRY **)v59 != WindowListForDesktopCanFail )
      {
        while ( v32[34].Flink != (struct _LIST_ENTRY *)v20 )
        {
          v32 = v32->Flink;
          if ( v32 == WindowListForDesktopCanFail )
            goto LABEL_39;
        }
        v30 = v32;
      }
    }
LABEL_39:
    v33 = (struct _LIST_ENTRY ***)(v20 + 552);
    if ( v30 )
    {
      DynArray<CWindowData *,0>::Remove(v20 + 552, &v59);
      v34 = *(_DWORD *)(v20 + 576);
      v35 = *v33;
      if ( v34 )
      {
        do
        {
          if ( v30 == *v35 )
            break;
          ++v7;
          ++v35;
        }
        while ( v7 < v34 );
      }
      DynArray<CWindowData *,0>::InsertAt(v20 + 552, &v59, v7);
    }
    else if ( (*v33)[*(_DWORD *)(v20 + 576) - 1] != (struct _LIST_ENTRY *)v59 )
    {
      DynArray<CWindowData *,0>::Remove(v20 + 552, &v59);
      DynArray<CWindowData *,0>::AddMultipleAndSet(v20 + 552, &v59);
    }
  }
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
