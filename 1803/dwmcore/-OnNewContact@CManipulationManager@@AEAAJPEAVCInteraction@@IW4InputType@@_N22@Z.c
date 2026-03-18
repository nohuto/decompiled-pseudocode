/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x1801CEFF4 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF874 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D5F20 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CEllipseGeometry@@SAPEAX_K@Z @ 0x18016DDA8 (--2CEllipseGeometry@@SAPEAX_K@Z.c)
 *     McTemplateU0pq @ 0x18019F6A8 (McTemplateU0pq.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801CE404 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CE44C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801CE4F4 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x1801CE5B4 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1801CEA80 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801CF5DC (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801D99A4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801D9D68 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801DA90C (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x1801DB1A8 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        bool a7)
{
  HMONITOR v7; // rax
  unsigned int v9; // ecx
  CManipulationContext *v10; // rbx
  unsigned int v14; // r8d
  CComposition *v15; // rcx
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  struct CVisualTree *v17; // r13
  int v18; // edi
  __int64 v19; // r14
  __int64 v20; // rsi
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  CManipulationContext *v24; // rax
  int v25; // eax
  LPVOID v26; // rax
  void *v27; // rcx
  LPVOID v28; // rax
  int v29; // edx
  int v30; // eax
  unsigned int v32; // [rsp+20h] [rbp-58h]
  _OWORD *v33; // [rsp+28h] [rbp-50h]
  bool *v34; // [rsp+30h] [rbp-48h]
  CManipulationContext *v35; // [rsp+40h] [rbp-38h] BYREF
  struct CVisualTree *v36; // [rsp+48h] [rbp-30h] BYREF
  HMONITOR v37; // [rsp+50h] [rbp-28h]
  _OWORD v38[2]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v39; // [rsp+C0h] [rbp+48h]
  unsigned int v41; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v42; // [rsp+D8h] [rbp+60h] BYREF

  v42 = a4;
  v41 = a3;
  v7 = *(HMONITOR *)(a2 + 1712);
  v9 = *(_DWORD *)(a2 + 1720);
  v10 = 0LL;
  v36 = 0LL;
  v39 = v9;
  v35 = 0LL;
  a7 = 0;
  v14 = v9;
  v37 = v7;
  v15 = *(CComposition **)(a1 + 16);
  v38[0] = 0LL;
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v15, v7, v14, &v36);
  v17 = v36;
  v18 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x6B3u);
    v19 = *((_QWORD *)&v38[0] + 1);
    v20 = *(_QWORD *)&v38[0];
    goto LABEL_33;
  }
  if ( !a5 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v36 + 2) + 576LL));
  v34 = &a7;
  v33 = v38;
  CManipulationContext::BuildInteractionChainAndUpdateTree(v17, a2, a3, a4);
  v19 = *((_QWORD *)&v38[0] + 1);
  v20 = *(_QWORD *)&v38[0];
  if ( !*((_QWORD *)&v38[0] + 1) )
  {
LABEL_33:
    if ( v18 < 0 )
      goto LABEL_34;
    goto LABEL_35;
  }
  v21 = 0;
  if ( *(int *)(a1 + 152) > 0 )
  {
    v22 = *(_QWORD *)(a1 + 144);
    v23 = 0LL;
    while ( *(_QWORD *)&v38[0] != *(_QWORD *)(*(_QWORD *)v22 + 56LL) )
    {
      ++v21;
      ++v23;
      v22 += 8LL;
      if ( v23 >= *(int *)(a1 + 152) )
        goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v35,
      (_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL * v21));
    v10 = v35;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v35, a3);
    if ( v10 )
      goto LABEL_23;
  }
LABEL_13:
  v24 = (CManipulationContext *)CEllipseGeometry::operator new();
  if ( v24 )
    v24 = CManipulationContext::CManipulationContext(v24, *(struct CComposition **)(a1 + 16));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v35,
    (__int64 (__fastcall ***)(_QWORD))v24);
  v10 = v35;
  if ( !v35 )
  {
    v32 = 1753;
LABEL_17:
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v32);
LABEL_34:
    LOBYTE(v34) = 0;
    LOBYTE(v33) = 0;
    CManipulationManager::OnUp(a1, a2, a3, v42, v10, (_DWORD)v33, (_DWORD)v34, 1);
    goto LABEL_35;
  }
  v25 = CManipulationContext::Initialize(v35, a7, v37, v39);
  v18 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x6DAu);
    goto LABEL_33;
  }
  if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                        (char **)(a1 + 144),
                        &v35) )
  {
    v32 = 1757;
    goto LABEL_17;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_CREATED, (__int64)v10, a3);
LABEL_23:
  v26 = ReallocHeap(*(void **)(a1 + 120), 4LL * (*(_DWORD *)(a1 + 136) + 1));
  if ( !v26
    || (v27 = *(void **)(a1 + 128),
        *(_QWORD *)(a1 + 120) = v26,
        (v28 = ReallocHeap(v27, 8LL * (*(_DWORD *)(a1 + 136) + 1))) == 0LL) )
  {
    v32 = 1764;
    goto LABEL_17;
  }
  v29 = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 128) = v28;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::InternalSetAtIndex(
    (_QWORD *)(a1 + 120),
    v29,
    &v41,
    &v35);
  ++*(_DWORD *)(a1 + 136);
  if ( !(unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                        a1 + 160,
                        &v41,
                        &v42) )
  {
    v32 = 1769;
    goto LABEL_17;
  }
  v30 = CManipulationContext::OnNewContact(v10, v38, a3, v42, a6);
  v18 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x6ECu);
    goto LABEL_33;
  }
LABEL_35:
  if ( !a5 && v17 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v17 + 2) + 576LL));
  ReleaseInterface<CVisualTree>(&v36);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v35);
  return (unsigned int)v18;
}
