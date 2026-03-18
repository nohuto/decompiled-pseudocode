/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180196C84
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180196A14 (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197228 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18007468C (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800B5AB4 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CCombinedGeometry@@KAPEAX_K@Z @ 0x1801464A0 (--2CCombinedGeometry@@KAPEAX_K@Z.c)
 *     McTemplateU0pq @ 0x180175258 (McTemplateU0pq.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18019582C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180195910 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x1801959D8 (-Add@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18019623C (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x180196FE8 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801A0E40 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801A1DBC (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x1801A2630 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        CManipulationManager *this,
        HMONITOR *a2,
        unsigned int a3,
        unsigned int a4,
        bool a5,
        bool a6)
{
  HMONITOR v6; // rax
  unsigned int v8; // ecx
  struct CManipulationContext *v9; // rbx
  unsigned int v13; // r8d
  CComposition *v14; // rcx
  signed int TreeWithWorkspaceOrMonitorAssociation; // eax
  struct CVisualTree *v16; // r13
  int v17; // edi
  __int64 v18; // r14
  __int64 v19; // rsi
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  CManipulationContext *v23; // rax
  signed int v24; // eax
  LPVOID v25; // rax
  void *v26; // rcx
  LPVOID v27; // rax
  int v28; // edx
  signed int v29; // eax
  bool v31; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+20h] [rbp-58h]
  unsigned int v33; // [rsp+40h] [rbp-38h]
  struct CManipulationContext *v34; // [rsp+48h] [rbp-30h] BYREF
  struct CVisualTree *v35; // [rsp+50h] [rbp-28h] BYREF
  HMONITOR v36; // [rsp+58h] [rbp-20h]
  __int128 v37; // [rsp+60h] [rbp-18h] BYREF
  bool v38; // [rsp+C0h] [rbp+48h] BYREF
  struct CInteraction *v39; // [rsp+C8h] [rbp+50h]
  unsigned int v40; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v41; // [rsp+D8h] [rbp+60h] BYREF

  v41 = a4;
  v40 = a3;
  v39 = (struct CInteraction *)a2;
  v6 = a2[192];
  v8 = *((_DWORD *)a2 + 386);
  v9 = 0LL;
  v35 = 0LL;
  v33 = v8;
  v34 = 0LL;
  v38 = 0;
  v13 = v8;
  v36 = v6;
  v14 = (CComposition *)*((_QWORD *)this + 2);
  v37 = 0LL;
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v14, v6, v13, &v35);
  v16 = v35;
  v17 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x6A2u);
    v18 = *((_QWORD *)&v37 + 1);
    v19 = v37;
    goto LABEL_33;
  }
  if ( !a5 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v35 + 2) + 552LL));
  CManipulationContext::BuildInteractionChainAndUpdateTree(
    v16,
    (struct CInteraction *)a2,
    a3,
    a4,
    v31,
    (struct CInteractionChain *)&v37,
    &v38);
  v18 = *((_QWORD *)&v37 + 1);
  v19 = v37;
  if ( !*((_QWORD *)&v37 + 1) )
  {
LABEL_33:
    if ( v17 < 0 )
      goto LABEL_34;
    goto LABEL_35;
  }
  v20 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v21 = *((_QWORD *)this + 18);
    v22 = 0LL;
    while ( (_QWORD)v37 != *(_QWORD *)(*(_QWORD *)v21 + 56LL) )
    {
      ++v20;
      ++v22;
      v21 += 8LL;
      if ( v22 >= *((int *)this + 38) )
        goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v34,
      (_QWORD *)(*((_QWORD *)this + 18) + 8LL * v20));
    v9 = v34;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v34, a3);
    if ( v9 )
      goto LABEL_23;
  }
LABEL_13:
  v23 = (CManipulationContext *)CCombinedGeometry::operator new();
  if ( v23 )
    v23 = CManipulationContext::CManipulationContext(v23, *((struct CComposition **)this + 2));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v34,
    (__int64 (__fastcall ***)(_QWORD))v23);
  v9 = v34;
  if ( !v34 )
  {
    v32 = 1736;
LABEL_17:
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, v32);
LABEL_34:
    CManipulationManager::OnUp(this, v39, a3, v41, v9, 0, 0);
    goto LABEL_35;
  }
  v24 = CManipulationContext::Initialize(v34, v38, v36, v33);
  v17 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x6C9u);
    goto LABEL_33;
  }
  if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                        (char **)this + 18,
                        &v34) )
  {
    v32 = 1740;
    goto LABEL_17;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_CONTEXT_CREATED, (__int64)v9, a3);
LABEL_23:
  v25 = ReallocHeap(*((void **)this + 15), 4LL * (*((_DWORD *)this + 34) + 1));
  if ( !v25
    || (v26 = (void *)*((_QWORD *)this + 16),
        *((_QWORD *)this + 15) = v25,
        (v27 = ReallocHeap(v26, 8LL * (*((_DWORD *)this + 34) + 1))) == 0LL) )
  {
    v32 = 1747;
    goto LABEL_17;
  }
  v28 = *((_DWORD *)this + 34);
  *((_QWORD *)this + 16) = v27;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::InternalSetAtIndex(
    (_QWORD *)this + 15,
    v28,
    &v40,
    &v34);
  ++*((_DWORD *)this + 34);
  if ( !(unsigned int)CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
                        (__int64)this + 160,
                        &v40,
                        &v41) )
  {
    v32 = 1752;
    goto LABEL_17;
  }
  v29 = CManipulationContext::OnNewContact(v9, (struct CInteractionChain *)&v37, a3, v41, a6);
  v17 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x6DBu);
    goto LABEL_33;
  }
LABEL_35:
  if ( !a5 && v16 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v16 + 2) + 552LL));
  ReleaseInterface<CVisualTree>(&v35);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
  return (unsigned int)v17;
}
