/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800276A0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180006AAC (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000A388 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800156C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180015940 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180015AD8 (--1CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001F2BC (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002C2E0 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002C838 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002DCEC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18002DD5C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18002DD94 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002F918 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180077850 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800A679C (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800A85A8 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  int v8; // eax
  CDesktopManager *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  CWindowPropertyTracker *v12; // rbx
  signed int v13; // edx
  __int64 v14; // rcx
  CBaseObject *v15; // r14
  unsigned int j; // esi
  CBaseObject *v17; // rcx
  struct CVisual *v18; // rbx
  struct CVisual *v19; // rbx
  CBaseObject *v20; // rax
  __int64 v21; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v22; // rsi
  unsigned int v23; // ecx
  __int64 v24; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v25; // rsi
  unsigned int v26; // ecx
  unsigned int k; // esi
  CIconicBitmapRegistry *v28; // rbx
  CBaseObject *v29; // rcx
  void (__fastcall *v30)(WPF::ProcessHeapImpl *, void *); // rax
  signed int v31; // esi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned __int64 v33; // rcx
  CBaseObject *v34; // rcx
  struct CRenderDataVisual *v35; // rax
  CBaseObject *v36; // rcx
  __int64 v37; // r8
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v39; // rax
  struct CSecondaryWindowRepresentation *v40; // rdx
  CWindowData *v41; // rcx
  __int64 *v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rbp
  CBaseObject *v45; // rcx
  struct CVisual *v46; // rdx
  __int64 v47; // rax
  CBaseObject *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  CBaseObject *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // edx
  __int64 v55; // r8
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  struct CWindowData *v60; // [rsp+58h] [rbp+10h] BYREF

  v60 = a2;
  if ( (*((_BYTE *)a2 + 594) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((char *)this + 472, &v60);
  while ( *((_DWORD *)a2 + 126) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 60));
  while ( *((_DWORD *)a2 + 134) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 64));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 116) )
  {
    v39 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 55);
    v40 = *v39;
    if ( a2 == *((struct CWindowData **)*v39 + 4) )
      *((_QWORD *)v40 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v40, v4, v5);
  }
  if ( *((int *)a2 + 28) < 8 || *((int *)a2 + 28) > 11 )
    CWindowData::IsShellManaged(a2);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 53) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 144); ++i )
    {
      v41 = *(CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * i);
      if ( (*((_DWORD *)v41 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v41, 0, v37, 0);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)a2 + 54);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)a2 + 54) = 0LL;
  }
  while ( 1 )
  {
    v8 = *((_DWORD *)a2 + 144);
    if ( !v8 )
      break;
    CWindowList::SetOwner(v7, *(struct CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * (unsigned int)(v8 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 59), a2, 0LL, 1);
  v9 = CDesktopManager::s_pDesktopManagerInstance;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  if ( v10 )
  {
    v11 = *((_QWORD *)a2 + 5);
    v12 = (CWindowPropertyTracker *)(v10 + 48);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v13 = 0;
    if ( *((_DWORD *)v12 + 6) )
    {
      while ( **(_QWORD **)(*(_QWORD *)v12 + 8LL * (unsigned int)v13) != v11 )
      {
        if ( (unsigned int)++v13 >= *((_DWORD *)v12 + 6) )
          goto LABEL_15;
      }
      if ( v13 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex(v12, v13);
    }
LABEL_15:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v9 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v14 = *((_QWORD *)v9 + 29);
  if ( v14 )
  {
    v15 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v15 )
    {
      v31 = *(_DWORD *)(v14 + 48) - 1;
      if ( v31 >= 0 )
      {
        v42 = (__int64 *)(v14 + 24);
        v43 = 24LL * v31;
        do
        {
          v44 = *v42;
          v45 = *(CBaseObject **)(v43 + *v42);
          if ( v45 == v15 )
          {
            v46 = *(struct CVisual **)(v43 + v44 + 8);
            v47 = *((_QWORD *)v46 + 3);
            if ( v47 && *(_BYTE *)(v43 + v44 + 16) )
            {
              VisualCollection::Remove((VisualCollection *)(v47 + 32), v46);
              v45 = *(CBaseObject **)(v43 + v44);
            }
            if ( v45 )
              CBaseObject::Release(v45);
            v48 = *(CBaseObject **)(v43 + v44 + 8);
            if ( v48 )
              CBaseObject::Release(v48);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v42, v31);
          }
          v43 -= 24LL;
          --v31;
        }
        while ( v31 >= 0 );
        v9 = CDesktopManager::s_pDesktopManagerInstance;
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)v9 + 184); ++j )
  {
    v49 = *(_QWORD *)(*((_QWORD *)v9 + 89) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v49 + 176LL))(v49, a2);
  }
  v17 = (CBaseObject *)*((_QWORD *)a2 + 73);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)a2 + 73) = 0LL;
  }
  v18 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v18 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v18);
    v33 = *((_QWORD *)a2 + 50);
    if ( v33 )
      CTopLevelWindow3D::StopAnimation(v33);
    v34 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  v19 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v19 )
  {
    v35 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v35 + 32), v19);
    v36 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v36 )
    {
      CBaseObject::Release(v36);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v20 = (CBaseObject *)*((_QWORD *)a2 + 51);
  if ( v20 )
  {
    v50 = *((_QWORD *)v20 + 3);
    if ( v50 )
    {
      VisualCollection::Remove((VisualCollection *)(v50 + 32), *((struct CVisual **)a2 + 51));
      v20 = (CBaseObject *)*((_QWORD *)a2 + 51);
    }
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)a2 + 51) = 0LL;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = *((_QWORD *)a2 + 49);
  if ( v21 )
  {
    if ( (*(_BYTE *)(v21 + 241) & 4) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 49));
    v51 = *(CBaseObject **)(v21 + 472);
    if ( v51 )
    {
      v52 = *((_QWORD *)v51 + 3);
      if ( v52 )
      {
        VisualCollection::Remove((VisualCollection *)(v52 + 32), *(struct CVisual **)(v21 + 472));
        v51 = *(CBaseObject **)(v21 + 472);
      }
      if ( v51 )
      {
        CBaseObject::Release(v51);
        *(_QWORD *)(v21 + 472) = 0LL;
      }
    }
  }
  if ( *((_DWORD *)a2 + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    *((_DWORD *)a2 + 32) = 0;
  }
  v22 = 0LL;
  v23 = 0;
  v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
  if ( *(_DWORD *)(v24 + 40) )
  {
    v53 = *(_QWORD *)(v24 + 16);
    while ( **(_QWORD **)(v53 + 8LL * v23) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v23 >= *(_DWORD *)(v24 + 40) )
        goto LABEL_28;
    }
    v22 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v53 + 8LL * v23);
  }
LABEL_28:
  v60 = v22;
  if ( v22 )
  {
    DynArray<CBitmapSource *,0>::Remove(v24 + 16, &v60);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v22, v54);
  }
  v25 = 0LL;
  v26 = 0;
  if ( *(_DWORD *)(v24 + 40) )
  {
    v55 = *(_QWORD *)(v24 + 16);
    while ( **(_QWORD **)(v55 + 8LL * v26) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v26 >= *(_DWORD *)(v24 + 40) )
        goto LABEL_31;
    }
    v25 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v55 + 8LL * v26);
  }
LABEL_31:
  v60 = v25;
  if ( v25 )
  {
    DynArray<CBitmapSource *,0>::Remove(v24 + 16, &v60);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v25, v56);
  }
  for ( k = 0; k < *(_DWORD *)(v24 + 72); ++k )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(v24 + 48) + 8LL * k);
    v58 = *(_QWORD *)(v57 + 296);
    if ( v58 )
      v59 = *(_QWORD *)(v58 + 40);
    else
      v59 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v59 )
      CIconicAnimatedVisual::SetIconicData(v57, 0LL, 0LL, 0LL);
  }
  v28 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  *((_BYTE *)a2 + 594) &= 0xF1u;
  CIconicBitmapRegistry::RequestBitmap(v28, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v28, a2);
  v29 = (CBaseObject *)*((_QWORD *)a2 + 45);
  if ( v29 )
  {
    CBaseObject::Release(v29);
    *((_QWORD *)a2 + 45) = 0LL;
  }
  v60 = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 544, &v60);
  CWindowData::~CWindowData(a2);
  v30 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v30 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a2);
  else
    v30(WPF::g_pProcessHeap, a2);
}
