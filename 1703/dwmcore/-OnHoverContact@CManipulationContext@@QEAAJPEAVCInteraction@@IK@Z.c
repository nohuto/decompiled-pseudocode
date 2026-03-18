/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x18019348C
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18018AD60 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800048C4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18004D330 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18004D364 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180135174 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18015C2FC (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801926E4 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180194D94 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(
        CComposition **this,
        struct CInteraction *a2,
        int a3,
        unsigned int a4)
{
  __int64 v4; // rax
  struct CVisualTree *v8; // rdi
  CArrayBasedCoverageSet *v9; // rbx
  unsigned int (__fastcall *v10)(struct CInteraction *, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v11; // r14d
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v13; // r15
  __int64 v14; // r15
  CVisual *v15; // r15
  CArrayBasedCoverageSet *InteractionInternal; // rax
  CArrayBasedCoverageSet *v17; // rsi
  unsigned int Key; // eax
  __int64 v19; // r10
  __int64 v20; // rax
  struct CVisual *v21; // rsi
  int v22; // eax
  CArrayBasedCoverageSet *v24; // [rsp+30h] [rbp-10h] BYREF
  CArrayBasedCoverageSet *v25; // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v26; // [rsp+88h] [rbp+48h] BYREF
  int v27; // [rsp+90h] [rbp+50h] BYREF

  v27 = a3;
  v4 = *(_QWORD *)a2;
  v8 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v10 = *(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD, _QWORD))(v4 + 80);
  v24 = 0LL;
  v11 = 0;
  if ( v10(a2, a4, 0LL, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v24, a2);
    v9 = v24;
  }
  else
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v26);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              this[6],
                                              *((HMONITOR *)a2 + 166),
                                              *((_DWORD *)a2 + 334),
                                              &v26);
    v11 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x8Fu);
LABEL_28:
      v8 = v26;
      goto LABEL_29;
    }
    v8 = v26;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v26 + 2) + 584LL));
    v13 = *((_QWORD *)a2 + 15);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        v15 = *(CVisual **)(v14 + 80);
        if ( v15 )
        {
          while ( 1 )
          {
            InteractionInternal = CVisual::GetInteractionInternal(v15);
            Microsoft::WRL::ComPtr<CInteraction>::operator=(&v25, InteractionInternal);
            v17 = v25;
            if ( v25 )
            {
              if ( (*(unsigned int (__fastcall **)(CArrayBasedCoverageSet *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 80LL))(
                     v25,
                     a4,
                     0LL,
                     0LL) )
              {
                break;
              }
            }
            v15 = (CVisual *)*((_QWORD *)v15 + 10);
            if ( !v15 )
              goto LABEL_12;
          }
          v25 = v17;
          Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v25);
          v9 = v17;
          v24 = v17;
LABEL_12:
          if ( v17 )
            (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)(this + 8),
          &v27);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v19,
                          (__int64)&v27,
                          (__int64)&v24) )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB6u);
      goto LABEL_29;
    }
  }
  else
  {
    if ( *((CArrayBasedCoverageSet **)this[9] + (int)Key) == v9 )
      goto LABEL_29;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v19,
      Key,
      &v27,
      &v24);
  }
  if ( v9 )
  {
    v20 = *((_QWORD *)v9 + 15);
    if ( v20 )
    {
      v21 = *(struct CVisual **)(v20 + 8);
      if ( v21 )
      {
        if ( v8 )
        {
LABEL_23:
          CManipulationContext::OnVisualPropertyChange(v21, v8);
          goto LABEL_29;
        }
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v26);
        v22 = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                this[6],
                *((HMONITOR *)v9 + 166),
                *((_DWORD *)v9 + 334),
                &v26);
        v11 = v22;
        if ( v22 >= 0 )
        {
          v8 = v26;
          AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v26 + 2) + 584LL));
          goto LABEL_23;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xCBu);
        goto LABEL_28;
      }
    }
  }
LABEL_29:
  if ( v8 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v8 + 2) + 584LL));
  if ( v9 )
    (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v9 + 8LL))(v9);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v26);
  return v11;
}
