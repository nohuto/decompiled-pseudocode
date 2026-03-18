/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C
 * Callers:
 *     _lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_::_lambda_invoker_cdecl_ @ 0x1800CA390 (_lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_--_lambda_invoker_cdecl_.c)
 *     _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x180189D60 (_lambda_0342f3220c32cb7c81f8659183993432_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x18004EA7C (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18004EBEC (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x18004F830 (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1800B276C (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800B2828 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18013F5F4 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18015C2FC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z @ 0x18018A7B8 (-OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18018A84C (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18018FA84 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x180192E28 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180193228 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x180193E34 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  unsigned int *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // r15
  __int64 v6; // rax
  CManipulationManager::InteractionUpdate *v7; // rbx
  CVisual *v8; // r14
  struct CInteraction *v9; // rsi
  int v10; // r9d
  void *v11; // rcx
  struct CInteraction *InteractionInternal; // rax
  int *v13; // [rsp+20h] [rbp-20h]
  HMONITOR v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+48h] BYREF
  int v17; // [rsp+90h] [rbp+50h] BYREF
  struct CVisualTree *v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = &v15;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 584LL));
  v5 = 0;
  v17 = 0;
  do
  {
    v6 = CQueue<CManipulationManager::InteractionUpdate *>::Remove(v4, v3, v2);
    v2 = 0LL;
    v7 = (CManipulationManager::InteractionUpdate *)v6;
    if ( !v6 )
      goto LABEL_14;
    v8 = *(CVisual **)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0LL;
    v9 = *(struct CInteraction **)(v6 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    v10 = *(_DWORD *)v6;
    if ( *(int *)v6 >= 0 )
    {
      if ( v10 <= 3 )
      {
        v13 = &v17;
        CManipulationContext::InvalidateMCs((char *)this + 120, v8, v9);
        goto LABEL_33;
      }
      switch ( v10 )
      {
        case 7:
          LODWORD(v13) = *(_DWORD *)(v6 + 48);
          CInteractionProcessor::SetInteractionConfiguration(
            (char *)v9 + 360,
            *(unsigned int *)(v6 + 40),
            *(unsigned int *)(v6 + 44),
            *(_QWORD *)(v6 + 56),
            v13);
LABEL_7:
          v11 = (void *)*((_QWORD *)v7 + 7);
          if ( v11 )
            WPF::ProcessHeapImpl::Free(v11);
          goto LABEL_9;
        case 4:
          v18 = 0LL;
          InteractionInternal = CVisual::GetInteractionInternal(v8);
          CManipulationContext::FindMonitorAndWorkspace(
            (CManipulationManager *)((char *)this + 120),
            InteractionInternal,
            &v14,
            &v16);
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v18);
          CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(*((CComposition **)this + 2), v14, v16, &v18);
          if ( v18 )
            CManipulationContext::OnVisualPropertyChange(v8, v18);
          v5 = 1;
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v18);
          goto LABEL_9;
        case 5:
          CManipulationManager::OnCapturePointer(this, *(_DWORD *)(v6 + 24), v9);
LABEL_33:
          v5 = 1;
          goto LABEL_9;
      }
      if ( v10 != 6 )
      {
        if ( v10 != 8 )
        {
          if ( v10 == 9 )
          {
            LOBYTE(v3) = (*(_BYTE *)(v6 + 64) & 2) != 0;
            CInteractionProcessor::SetRailsEnabled((char *)v9 + 360, v3, *(unsigned int *)(v6 + 44));
          }
          goto LABEL_9;
        }
        CInteractionProcessor::SetTemporaryConfiguration(
          (_DWORD)v9 + 360,
          *(_DWORD *)(v6 + 44),
          *(_DWORD *)(v6 + 40),
          *(_BYTE *)(v6 + 64) & 1,
          **(_DWORD **)(v6 + 56));
        goto LABEL_7;
      }
      CManipulationManager::OnCaptureManipulation(
        this,
        v9,
        *(_DWORD *)(v6 + 24),
        *(_DWORD *)(v6 + 28),
        *(_QWORD *)(v6 + 32));
    }
LABEL_9:
    if ( v8 )
      CQueue<CResource *>::Insert((char *)this + 200, v3, v8);
    if ( v9 )
      CQueue<CResource *>::Insert((char *)this + 200, v3, (char *)v9 + 8);
    CManipulationManager::InteractionUpdate::`scalar deleting destructor'(v7, v3);
LABEL_14:
    v4 = v15--;
  }
  while ( (_DWORD)v4 );
  if ( v5 )
    CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 120));
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 584LL));
  if ( *((_DWORD *)this + 54) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 560LL));
}
