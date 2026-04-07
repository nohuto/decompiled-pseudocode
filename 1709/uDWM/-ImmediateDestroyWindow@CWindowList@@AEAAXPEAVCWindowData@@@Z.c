/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180027100 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800281C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800016E4 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BAA4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180010B40 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x180010CBC (--1CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180011168 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001189C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001EFD0 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025E88 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180026264 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18002C184 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002C1F4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180034AFC (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180070F20 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x18009E23C (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18009F850 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  signed int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r14
  CDesktopManager *v11; // rbx
  unsigned int j; // esi
  CBaseObject *v13; // rcx
  struct CVisual *v14; // rbx
  struct CVisual *v15; // rbx
  __int64 v16; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v20; // rsi
  unsigned int v21; // ecx
  unsigned int k; // esi
  CIconicBitmapRegistry *v23; // rbx
  CBaseObject *v24; // rcx
  void (__fastcall *v25)(WPF::ProcessHeapImpl *, void *); // rax
  signed int v26; // esi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned __int64 v28; // rcx
  CBaseObject *v29; // rcx
  struct CRenderDataVisual *v30; // rax
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v34; // rax
  struct CSecondaryWindowRepresentation *v35; // rdx
  CWindowData *v36; // rcx
  __int64 *v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rbp
  struct CVisual *v40; // rdx
  __int64 v41; // rcx
  CBaseObject *v42; // rcx
  CBaseObject *v43; // rcx
  __int64 v44; // rcx
  struct CVisual *v45; // rdx
  __int64 v46; // rcx
  CBaseObject *v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // edx
  __int64 v50; // r8
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  struct CWindowData *v55; // [rsp+58h] [rbp+10h] BYREF

  v55 = a2;
  if ( (*((_BYTE *)a2 + 594) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((char *)this + 472, &v55);
  while ( *((_DWORD *)a2 + 126) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 60));
  while ( *((_DWORD *)a2 + 134) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 64));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 116) )
  {
    v34 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 55);
    v35 = *v34;
    if ( a2 == *((struct CWindowData **)*v34 + 4) )
      *((_QWORD *)v35 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v35);
  }
  if ( *((int *)a2 + 28) < 8 || *((int *)a2 + 28) > 11 )
    CWindowData::IsShellManaged(a2);
  if ( *((_QWORD *)a2 + 53) )
  {
    v32 = (CBaseObject *)*((_QWORD *)a2 + 53);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *((_QWORD *)a2 + 53) = 0LL;
    }
    for ( i = 0; i < *((_DWORD *)a2 + 144); ++i )
    {
      v36 = *(CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * i);
      if ( (*((_DWORD *)v36 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v36, 0, 0LL, 0);
    }
  }
  v4 = (CBaseObject *)*((_QWORD *)a2 + 54);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)a2 + 54) = 0LL;
  }
  while ( 1 )
  {
    v5 = *((_DWORD *)a2 + 144);
    if ( !v5 )
      break;
    CWindowList::SetOwner(v4, *(struct CWindowData **)(*((_QWORD *)a2 + 69) + 8LL * (unsigned int)(v5 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 60), a2, 0LL, 1);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 5);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = 0;
    if ( *(_DWORD *)(v6 + 72) )
    {
      while ( **(_QWORD **)(*(_QWORD *)(v6 + 48) + 8LL * (unsigned int)v8) != v7 )
      {
        if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 72) )
          goto LABEL_15;
      }
      if ( v8 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex((CWindowPropertyTracker *)(v6 + 48), v8);
    }
LABEL_15:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  if ( v9 )
  {
    v10 = *((_QWORD *)a2 + 50);
    if ( v10 )
    {
      v26 = *(_DWORD *)(v9 + 48) - 1;
      if ( v26 >= 0 )
      {
        v37 = (__int64 *)(v9 + 24);
        v38 = 24LL * v26;
        do
        {
          v39 = *v37;
          if ( *(_QWORD *)(v38 + *v37) == v10 )
          {
            v40 = *(struct CVisual **)(v38 + v39 + 8);
            v41 = *((_QWORD *)v40 + 3);
            if ( v41 && *(_BYTE *)(v38 + v39 + 16) )
              VisualCollection::Remove((VisualCollection *)(v41 + 32), v40);
            v42 = *(CBaseObject **)(v38 + v39);
            if ( v42 )
              CBaseObject::Release(v42);
            v43 = *(CBaseObject **)(v38 + v39 + 8);
            if ( v43 )
              CBaseObject::Release(v43);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v37, v26);
          }
          v38 -= 24LL;
          --v26;
        }
        while ( v26 >= 0 );
      }
    }
  }
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  for ( j = 0; j < *((_DWORD *)v11 + 186); ++j )
  {
    v44 = *(_QWORD *)(*((_QWORD *)v11 + 90) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v44 + 176LL))(v44, a2);
  }
  v13 = (CBaseObject *)*((_QWORD *)a2 + 73);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)a2 + 73) = 0LL;
  }
  v14 = (struct CVisual *)*((_QWORD *)a2 + 51);
  if ( v14 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v14);
    v28 = *((_QWORD *)a2 + 51);
    if ( v28 )
      CTopLevelWindow3D::StopAnimation(v28);
    v29 = (CBaseObject *)*((_QWORD *)a2 + 51);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)a2 + 51) = 0LL;
    }
  }
  v15 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v15 )
  {
    v30 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v30 + 32), v15);
    v31 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *((_QWORD *)a2 + 50) = 0LL;
    }
  }
  v16 = *((_QWORD *)a2 + 50);
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 241) & 4) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 50));
    v45 = *(struct CVisual **)(v16 + 472);
    if ( v45 )
    {
      v46 = *((_QWORD *)v45 + 3);
      if ( v46 )
        VisualCollection::Remove((VisualCollection *)(v46 + 32), v45);
      v47 = *(CBaseObject **)(v16 + 472);
      if ( v47 )
      {
        CBaseObject::Release(v47);
        *(_QWORD *)(v16 + 472) = 0LL;
      }
    }
  }
  if ( *((_DWORD *)a2 + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    *((_DWORD *)a2 + 32) = 0;
  }
  v17 = 0LL;
  v18 = 0;
  v19 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
  if ( *(_DWORD *)(v19 + 40) )
  {
    v48 = *(_QWORD *)(v19 + 16);
    while ( **(_QWORD **)(v48 + 8LL * v18) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v18 >= *(_DWORD *)(v19 + 40) )
        goto LABEL_27;
    }
    v17 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v48 + 8LL * v18);
  }
LABEL_27:
  v55 = v17;
  if ( v17 )
  {
    DynArray<CBitmapSource *,0>::Remove(v19 + 16, &v55);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v17, v49);
  }
  v20 = 0LL;
  v21 = 0;
  if ( *(_DWORD *)(v19 + 40) )
  {
    v50 = *(_QWORD *)(v19 + 16);
    while ( **(_QWORD **)(v50 + 8LL * v21) != *((_QWORD *)a2 + 5) )
    {
      if ( ++v21 >= *(_DWORD *)(v19 + 40) )
        goto LABEL_30;
    }
    v20 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v50 + 8LL * v21);
  }
LABEL_30:
  v55 = v20;
  if ( v20 )
  {
    DynArray<CBitmapSource *,0>::Remove(v19 + 16, &v55);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v20, v51);
  }
  for ( k = 0; k < *(_DWORD *)(v19 + 72); ++k )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * k);
    v53 = *(_QWORD *)(v52 + 296);
    if ( v53 )
      v54 = *(_QWORD *)(v53 + 40);
    else
      v54 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v54 )
      CIconicAnimatedVisual::SetIconicData(v52, 0LL, 0LL, 0LL);
  }
  v23 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  *((_BYTE *)a2 + 594) &= 0xF1u;
  CIconicBitmapRegistry::RequestBitmap(v23, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(v23, a2);
  v24 = (CBaseObject *)*((_QWORD *)a2 + 46);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  v55 = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 544, &v55);
  CWindowData::~CWindowData(a2);
  v25 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v25 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a2);
  else
    v25(WPF::g_pProcessHeap, a2);
}
