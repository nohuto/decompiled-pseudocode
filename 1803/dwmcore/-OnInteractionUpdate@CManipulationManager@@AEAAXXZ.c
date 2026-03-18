/*
 * XREFs of ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180025BC0
 * Callers:
 *     _lambda_a60e272d4d630cae458065bba4b68c95_::_lambda_invoker_cdecl_ @ 0x1800C8B90 (_lambda_a60e272d4d630cae458065bba4b68c95_--_lambda_invoker_cdecl_.c)
 *     _lambda_1e2b6ca0fa40af4229692291bbc0b04e_::_lambda_invoker_cdecl_ @ 0x1801CE0A0 (_lambda_1e2b6ca0fa40af4229692291bbc0b04e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x180025914 (-Remove@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipu.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800259EC (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x180028B18 (-SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800290BC (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x18014A2A8 (-FindTreeWithWorkspaceOrMonitorAssociationNoLock@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVis.c)
 *     ?OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z @ 0x1801CEF60 (-OnCaptureManipulation@CManipulationManager@@AEAAXPEAVCInteraction@@II_K@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801CEFF4 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801D61DC (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x1801DA594 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801DAAAC (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801DB318 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801DB890 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 */

void __fastcall CManipulationManager::OnInteractionUpdate(CManipulationManager *this)
{
  int *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // r12
  unsigned int *v6; // rax
  _QWORD *v7; // rbx
  CVisual *v8; // r15
  struct CInteraction *v9; // rsi
  int v10; // r9d
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  struct CInteraction *InteractionInternal; // rax
  int *v16; // [rsp+20h] [rbp-28h]
  HMONITOR v17; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+50h] BYREF
  int v20; // [rsp+A0h] [rbp+58h] BYREF
  struct CVisualTree *v21; // [rsp+A8h] [rbp+60h] BYREF

  v2 = (int *)&v18;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
  v5 = 0;
  v20 = 0;
  do
  {
    v6 = (unsigned int *)CQueue<CManipulationManager::InteractionUpdate *>::Remove(v4, v3, v2);
    v7 = v6;
    v2 = 0LL;
    if ( !v6 )
      goto LABEL_17;
    v8 = (CVisual *)*((_QWORD *)v6 + 1);
    *((_QWORD *)v6 + 1) = 0LL;
    v9 = (struct CInteraction *)*((_QWORD *)v6 + 2);
    *((_QWORD *)v6 + 2) = 0LL;
    v10 = *v6;
    if ( (*v6 & 0x80000000) == 0 )
    {
      if ( v10 <= 3 )
      {
        v16 = &v20;
        CManipulationContext::InvalidateMCs((char *)this + 120, v8, v9);
      }
      else
      {
        if ( v10 == 7 )
        {
          LODWORD(v16) = v6[12];
          CInteractionProcessor::SetInteractionConfiguration((char *)v9 + 344, v6[10], v6[11], *((_QWORD *)v6 + 7), v16);
          v11 = (void *)v7[7];
          if ( v11 )
            operator delete(v11);
          goto LABEL_8;
        }
        if ( v10 == 4 )
        {
          v21 = 0LL;
          InteractionInternal = CVisual::GetInteractionInternal(v8);
          CManipulationContext::FindMonitorAndWorkspace(
            (CManipulationManager *)((char *)this + 120),
            InteractionInternal,
            &v17,
            &v19);
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v21);
          CComposition::FindTreeWithWorkspaceOrMonitorAssociationNoLock(*((CComposition **)this + 2), v17, v19, &v21);
          if ( v21 )
            CManipulationContext::OnVisualPropertyChange(v8, v21);
          v5 = 1;
          Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v21);
          goto LABEL_8;
        }
        if ( v10 != 5 )
        {
          switch ( v10 )
          {
            case 6:
              CManipulationManager::OnCaptureManipulation(this, v9, v6[6], v6[7], *((_QWORD *)v6 + 4));
              break;
            case 8:
              CInteractionProcessor::SetTemporaryConfiguration(
                (_DWORD)v9 + 344,
                v6[11],
                v6[10],
                v6[16] & 1,
                **((_DWORD **)v6 + 7));
              v14 = (void *)v7[7];
              if ( v14 )
                operator delete(v14, 0LL);
              break;
            case 9:
              LOBYTE(v3) = (v6[16] & 2) != 0;
              CInteractionProcessor::SetRailsEnabled((char *)v9 + 344, v3, v6[11]);
              break;
          }
          goto LABEL_8;
        }
        CManipulationManager::OnCapturePointer(this, v6[6], v9);
      }
      v5 = 1;
    }
LABEL_8:
    if ( v8 )
      CQueue<CResource *>::Insert((__int64)this + 200, v3, (__int64)v8);
    if ( v9 )
      CQueue<CResource *>::Insert((__int64)this + 200, v3, (__int64)v9 + 8);
    v12 = v7[2];
    if ( v12 )
    {
      v7[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v13 = v7[1];
    if ( v13 )
    {
      v7[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    operator delete(v7, 0x48uLL);
LABEL_17:
    v4 = v18--;
  }
  while ( (_DWORD)v4 );
  if ( v5 )
    CManipulationContext::Revalidate((CManipulationManager *)((char *)this + 120));
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 576LL));
  if ( *((_DWORD *)this + 54) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 552LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
      0LL,
      0x4000LL);
}
