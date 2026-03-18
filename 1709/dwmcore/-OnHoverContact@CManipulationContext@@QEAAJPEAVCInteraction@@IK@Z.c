/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180197228 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18000A3A4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800AA8F4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B8668 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016AA60 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A1178 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801A199C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A3CA8 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(
        CComposition **this,
        struct CInteraction *a2,
        int a3,
        unsigned int a4)
{
  __int64 v4; // rax
  struct CVisualTree *v7; // rbx
  CArrayBasedCoverageSet *v8; // rdi
  unsigned int v10; // r14d
  signed int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v12; // r15
  __int64 v13; // r15
  CVisual *v14; // r15
  CArrayBasedCoverageSet *InteractionInternal; // rax
  CArrayBasedCoverageSet *v16; // rsi
  unsigned int Key; // eax
  __int64 v18; // r10
  __int64 v19; // rax
  struct CVisual *v20; // rsi
  signed int v21; // eax
  CArrayBasedCoverageSet *v23; // [rsp+30h] [rbp-10h] BYREF
  CArrayBasedCoverageSet *v24; // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v25; // [rsp+88h] [rbp+48h] BYREF
  int v26; // [rsp+90h] [rbp+50h] BYREF

  v26 = a3;
  v4 = *(_QWORD *)a2;
  v7 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v10 = 0;
  if ( (*(unsigned int (__fastcall **)(struct CInteraction *, _QWORD, _QWORD))(v4 + 80))(a2, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v23, a2);
    v8 = v23;
  }
  else
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              this[6],
                                              *((HMONITOR *)a2 + 192),
                                              *((_DWORD *)a2 + 386),
                                              &v25);
    v10 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x8Fu);
LABEL_28:
      v7 = v25;
      goto LABEL_29;
    }
    v7 = v25;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 552LL));
    v12 = *((_QWORD *)a2 + 17);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v14 = *(CVisual **)(v13 + 80);
        if ( v14 )
        {
          while ( 1 )
          {
            InteractionInternal = CVisual::GetInteractionInternal(v14);
            Microsoft::WRL::ComPtr<CInteraction>::operator=(&v24, InteractionInternal);
            v16 = v24;
            if ( v24 )
            {
              if ( (*(unsigned int (__fastcall **)(CArrayBasedCoverageSet *, _QWORD, _QWORD))(*(_QWORD *)v24 + 80LL))(
                     v24,
                     a4,
                     0LL) )
              {
                break;
              }
            }
            v14 = (CVisual *)*((_QWORD *)v14 + 10);
            if ( !v14 )
              goto LABEL_12;
          }
          Microsoft::WRL::ComPtr<CInteraction>::operator=(&v23, &v24);
          v8 = v23;
LABEL_12:
          if ( v16 )
            (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)(this + 8),
          &v26);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v18,
                          (__int64)&v26,
                          (__int64)&v23) )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xB6u);
      goto LABEL_29;
    }
  }
  else
  {
    if ( *((CArrayBasedCoverageSet **)this[9] + (int)Key) == v8 )
      goto LABEL_29;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v18,
      Key,
      &v26,
      &v23);
  }
  if ( v8 )
  {
    v19 = *((_QWORD *)v8 + 17);
    if ( v19 )
    {
      v20 = *(struct CVisual **)(v19 + 8);
      if ( v20 )
      {
        if ( v7 )
        {
LABEL_23:
          CManipulationContext::OnVisualPropertyChange(v20, v7);
          goto LABEL_29;
        }
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
        v21 = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                this[6],
                *((HMONITOR *)v8 + 192),
                *((_DWORD *)v8 + 386),
                &v25);
        v10 = v21;
        if ( v21 >= 0 )
        {
          v7 = v25;
          AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 552LL));
          goto LABEL_23;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xCBu);
        goto LABEL_28;
      }
    }
  }
LABEL_29:
  if ( v7 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v7 + 2) + 552LL));
  if ( v8 )
    (*(void (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)v8 + 8LL))(v8);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
  return v10;
}
