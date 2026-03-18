/*
 * XREFs of ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18018AA0C
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x18018A84C (-OnCapturePointer@CManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18018AD60 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18004DC0C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180134EF4 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801351A0 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ??2CCombinedGeometry@@KAPEAX_K@Z @ 0x1801536E8 (--2CCombinedGeometry@@KAPEAX_K@Z.c)
 *     ?Add@?$CMap@IKV?$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z @ 0x18018A0F0 (-Add@-$CMap@IKV-$CMapEqualHelper@IK@@@@QEAAHAEBIAEBK@Z.c)
 *     ?InternalSetAtIndex@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAXHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18018A340 (-InternalSetAtIndex@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1801923A4 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180192764 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18019309C (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180193728 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
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
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  bool v16; // r9
  struct CVisualTree *v17; // r13
  int v18; // edi
  __int64 v19; // r14
  __int64 v20; // rsi
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  CManipulationContext *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  LPVOID v28; // rax
  void *v29; // rcx
  LPVOID v30; // rax
  int v31; // edx
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-58h]
  unsigned int v35; // [rsp+40h] [rbp-38h]
  CManipulationContext *v36; // [rsp+48h] [rbp-30h] BYREF
  struct CVisualTree *v37; // [rsp+50h] [rbp-28h] BYREF
  HMONITOR v38; // [rsp+58h] [rbp-20h]
  __int128 v39; // [rsp+60h] [rbp-18h] BYREF
  bool v40; // [rsp+C0h] [rbp+48h] BYREF
  struct CInteraction *v41; // [rsp+C8h] [rbp+50h]
  unsigned int v42; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v43; // [rsp+D8h] [rbp+60h] BYREF

  v43 = a4;
  v42 = a3;
  v41 = (struct CInteraction *)a2;
  v6 = a2[166];
  v8 = *((_DWORD *)a2 + 334);
  v9 = 0LL;
  v37 = 0LL;
  v35 = v8;
  v36 = 0LL;
  v40 = 0;
  v13 = v8;
  v38 = v6;
  v14 = (CComposition *)*((_QWORD *)this + 2);
  v39 = 0LL;
  TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(v14, v6, v13, &v37);
  v17 = v37;
  v18 = TreeWithWorkspaceOrMonitorAssociation;
  if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x680u);
    v19 = *((_QWORD *)&v39 + 1);
    v20 = v39;
    goto LABEL_33;
  }
  if ( !a5 )
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v37 + 2) + 584LL));
  CManipulationContext::BuildInteractionChainAndUpdateTree(
    v17,
    (struct CInteraction *)a2,
    a4,
    v16,
    (struct CInteractionChain *)&v39,
    &v40);
  v19 = *((_QWORD *)&v39 + 1);
  v20 = v39;
  if ( !*((_QWORD *)&v39 + 1) )
  {
LABEL_33:
    if ( v18 < 0 )
      goto LABEL_34;
    goto LABEL_35;
  }
  v21 = 0;
  if ( *((int *)this + 38) > 0 )
  {
    v22 = *((_QWORD *)this + 18);
    v23 = 0LL;
    while ( (_QWORD)v39 != *(_QWORD *)(*(_QWORD *)v22 + 56LL) )
    {
      ++v21;
      ++v23;
      v22 += 8LL;
      if ( v23 >= *((int *)this + 38) )
        goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
      (__int64 (__fastcall ****)(_QWORD))&v36,
      (_QWORD *)(*((_QWORD *)this + 18) + 8LL * v21));
    v9 = v36;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xd(v24, &MANIPULATION_CONTEXT_NEW_CONTACT, (__int64)v36, a3);
    if ( v9 )
      goto LABEL_23;
  }
LABEL_13:
  v25 = (CManipulationContext *)CCombinedGeometry::operator new();
  if ( v25 )
    v25 = CManipulationContext::CManipulationContext(v25, *((struct CComposition **)this + 2));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))&v36,
    (__int64 (__fastcall ***)(_QWORD))v25);
  v9 = v36;
  if ( !v36 )
  {
    v34 = 1701;
LABEL_17:
    v18 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v34);
LABEL_34:
    CManipulationManager::OnUp((struct CComposition **)this, v41, a3, v43, v9, 0, 0);
    goto LABEL_35;
  }
  v26 = CManipulationContext::Initialize(v36, v40, v38, v35);
  v18 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x6A6u);
    goto LABEL_33;
  }
  if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
                        (char **)this + 18,
                        &v36) )
  {
    v34 = 1705;
    goto LABEL_17;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v27, &MANIPULATION_CONTEXT_CREATED, (__int64)v9, a3);
LABEL_23:
  v28 = ReallocHeap(*((void **)this + 15), 4LL * (*((_DWORD *)this + 34) + 1));
  if ( !v28
    || (v29 = (void *)*((_QWORD *)this + 16),
        *((_QWORD *)this + 15) = v28,
        (v30 = ReallocHeap(v29, 8LL * (*((_DWORD *)this + 34) + 1))) == 0LL) )
  {
    v34 = 1712;
    goto LABEL_17;
  }
  v31 = *((_DWORD *)this + 34);
  *((_QWORD *)this + 16) = v30;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::InternalSetAtIndex(
    (_QWORD *)this + 15,
    v31,
    &v42,
    &v36);
  ++*((_DWORD *)this + 34);
  if ( !(unsigned int)CMap<unsigned int,unsigned long,CMapEqualHelper<unsigned int,unsigned long>>::Add(
                        (__int64)this + 160,
                        &v42,
                        &v43) )
  {
    v34 = 1717;
    goto LABEL_17;
  }
  v32 = CManipulationContext::OnNewContact(v9, (struct CInteractionChain *)&v39, a3, v43, a6);
  v18 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x6B8u);
    goto LABEL_33;
  }
LABEL_35:
  if ( !a5 && v17 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v17 + 2) + 584LL));
  ReleaseInterface<CVisualTree>(&v37);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v36);
  return (unsigned int)v18;
}
