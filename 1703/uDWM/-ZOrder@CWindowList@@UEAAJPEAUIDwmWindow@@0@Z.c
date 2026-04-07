/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001516C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800151F4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002E660 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032E80 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800351F0 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  int SyncedWindowData; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  char *v10; // rax
  struct CWindowData *v11; // rbx
  struct CWindowData *v12; // rdx
  struct CWindowData **v13; // rcx
  __int64 v14; // rcx
  struct CWindowData *v15; // rax
  struct CWindowData *v16; // rdx
  struct CVisual *v17; // r12
  __int64 v18; // r14
  _QWORD *Element; // rax
  __int64 v21; // r14
  struct CVisual *v22; // rsi
  char *v23; // rax
  struct CWindowData *v24; // rax
  __int64 v25; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY **v28; // rax
  unsigned int v29; // r8d
  int v30; // r9d
  unsigned int v31; // [rsp+28h] [rbp-39h]
  struct CWindowData *v32; // [rsp+38h] [rbp-29h] BYREF
  _QWORD Buffer[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v34; // [rsp+58h] [rbp-9h]
  __int128 v35; // [rsp+68h] [rbp+7h]
  __int64 v36; // [rsp+78h] [rbp+17h]
  char v37; // [rsp+80h] [rbp+1Fh]
  struct CWindowData *v38; // [rsp+E0h] [rbp+7Fh] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v38 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v38);
  v8 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v31 = 2282;
    goto LABEL_43;
  }
  if ( !v38 )
  {
    v8 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x8ECu);
    goto LABEL_15;
  }
  v9 = *((_QWORD *)v38 + 15);
  v36 = -1LL;
  Buffer[1] = 0LL;
  v34 = 0LL;
  v37 = 0;
  v35 = 0LL;
  Buffer[0] = v9;
  v10 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  v11 = (struct CWindowData *)(v10 + 64);
  if ( !v10 )
    v11 = 0LL;
  v32 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8EFu);
    goto LABEL_15;
  }
  if ( a3 )
  {
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v32);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v31 = 2293;
      goto LABEL_43;
    }
    v11 = v32;
    if ( !v32 )
    {
      v8 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x8F8u);
      goto LABEL_15;
    }
  }
  if ( v38 == *(struct CWindowData **)v11 )
    goto LABEL_15;
  v12 = *(struct CWindowData **)v38;
  v13 = (struct CWindowData **)*((_QWORD *)v38 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v38 + 8LL) != v38 || *v13 != v38 )
    __fastfail(3u);
  *v13 = v12;
  *((_QWORD *)v12 + 1) = v13;
  v14 = *(_QWORD *)v11;
  v15 = v38;
  if ( *(struct CWindowData **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  *(_QWORD *)v38 = v14;
  *((_QWORD *)v15 + 1) = v11;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)v11 = v15;
  v16 = v38;
  v17 = (struct CVisual *)*((_QWORD *)v38 + 50);
  if ( v17 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                *((_QWORD *)v38 + 15));
    if ( Element )
      v21 = Element[3];
    else
      v21 = 0LL;
    v22 = 0LL;
    v23 = (char *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                    (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                    *((_QWORD *)v38 + 15));
    if ( v23 )
      v24 = (struct CWindowData *)(v23 + 64);
    else
      v24 = 0LL;
    if ( !v24 )
    {
      v30 = -2147024882;
      v31 = 2312;
      v8 = -2147024882;
      goto LABEL_45;
    }
    while ( v11 != v24 )
    {
      v22 = (struct CVisual *)*((_QWORD *)v11 + 50);
      if ( v22 )
      {
        v25 = *((_QWORD *)v11 + 52);
        if ( v25 && *(_QWORD *)(v25 + 24) )
          v22 = (struct CVisual *)*((_QWORD *)v11 + 52);
        break;
      }
      v11 = (struct CWindowData *)*((_QWORD *)v11 + 1);
    }
    SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(v21 + 32), v17, v22, 1u, 1);
    v8 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v31 = 2338;
    }
    else
    {
      SyncedWindowData = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v38 + 51), 0);
      v8 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v31 = 2339;
      }
      else
      {
        CWindowList::UpdateAccentBlurBehind(this, v38);
        v16 = v38;
        if ( !*((_QWORD *)v38 + 52) )
          goto LABEL_14;
        SyncedWindowData = VisualCollection::InsertRelative(
                             (VisualCollection *)(v21 + 32),
                             *((struct CVisual **)v38 + 52),
                             *((struct CVisual **)v38 + 50),
                             1u,
                             1);
        v8 = SyncedWindowData;
        if ( SyncedWindowData >= 0 )
        {
          v16 = v38;
          goto LABEL_14;
        }
        v31 = 2345;
      }
    }
LABEL_43:
    v30 = SyncedWindowData;
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v31);
    goto LABEL_15;
  }
LABEL_14:
  v18 = *((_QWORD *)v16 + 68);
  if ( v18 && *(_DWORD *)(v18 + 576) > 1u )
  {
    WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v16 + 15));
    if ( WindowListForDesktopCanFail )
    {
      for ( i = *(struct _LIST_ENTRY **)v38; i != WindowListForDesktopCanFail; i = i->Flink )
      {
        if ( i[34].Flink == (struct _LIST_ENTRY *)v18 )
        {
          DynArray<CWindowData *,0>::Remove((__int64 *)(v18 + 552), (__int64 *)&v38);
          v28 = *(struct _LIST_ENTRY ***)(v18 + 552);
          if ( *(_DWORD *)(v18 + 576) )
          {
            do
            {
              if ( i == *v28 )
                break;
              ++v6;
              ++v28;
            }
            while ( v6 < *(_DWORD *)(v18 + 576) );
          }
          DynArray<CWindowData *,0>::InsertAt((__int64 *)(v18 + 552), &v38, v6);
          goto LABEL_15;
        }
      }
    }
    if ( *(struct CWindowData **)(*(_QWORD *)(v18 + 552) + 8LL * (unsigned int)(*(_DWORD *)(v18 + 576) - 1)) != v38 )
    {
      DynArray<CWindowData *,0>::Remove((__int64 *)(v18 + 552), (__int64 *)&v38);
      DynArray<CWindowData *,0>::AddMultipleAndSet(v18 + 552, &v38, v29);
    }
  }
LABEL_15:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
