/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1801DAF10
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801CF874 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x180026454 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180026488 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTree@@@Z @ 0x1800348A4 (-FindTreeWithWorkspaceOrMonitorAssociation@CComposition@@QEAAJPEAUHMONITOR__@@KPEAPEAVCVisualTre.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801D9CE8 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801DA4EC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801DB318 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801DC828 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, unsigned int *a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  struct CVisualTree *v7; // rdi
  Dwm3DRECompositorThunk *v8; // rbx
  unsigned int v10; // r14d
  int TreeWithWorkspaceOrMonitorAssociation; // eax
  __int64 v12; // r15
  __int64 v13; // r15
  CVisual *v14; // r15
  Dwm3DRECompositorThunk *InteractionInternal; // rax
  Dwm3DRECompositorThunk *v16; // rsi
  unsigned int Key; // eax
  __int64 v18; // r10
  __int64 v19; // rax
  struct CVisual *v20; // rsi
  int v21; // eax
  Dwm3DRECompositorThunk *v23; // [rsp+30h] [rbp-10h] BYREF
  Dwm3DRECompositorThunk *v24; // [rsp+38h] [rbp-8h] BYREF
  struct CVisualTree *v25; // [rsp+88h] [rbp+48h] BYREF
  int v26; // [rsp+90h] [rbp+50h] BYREF

  v26 = a3;
  v4 = *(_QWORD *)a2;
  v7 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v10 = 0;
  if ( (*(unsigned int (__fastcall **)(unsigned int *, _QWORD, _QWORD))(v4 + 80))(a2, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CInteraction>::operator=(&v23, (Dwm3DRECompositorThunk *)a2);
    v8 = v23;
  }
  else
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
    TreeWithWorkspaceOrMonitorAssociation = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                                              *(CComposition **)(a1 + 48),
                                              *((HMONITOR *)a2 + 214),
                                              a2[430],
                                              &v25);
    v10 = TreeWithWorkspaceOrMonitorAssociation;
    if ( TreeWithWorkspaceOrMonitorAssociation < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TreeWithWorkspaceOrMonitorAssociation, 0x93u);
LABEL_29:
      v7 = v25;
      goto LABEL_30;
    }
    v7 = v25;
    AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 576LL));
    v12 = *((_QWORD *)a2 + 13);
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
              if ( (*(unsigned int (__fastcall **)(Dwm3DRECompositorThunk *, _QWORD, _QWORD))(*(_QWORD *)v24 + 80LL))(
                     v24,
                     a4,
                     0LL) )
              {
                break;
              }
            }
            v14 = (CVisual *)*((_QWORD *)v14 + 10);
            if ( !v14 )
              goto LABEL_13;
          }
          if ( !v16 )
            goto LABEL_15;
          v24 = v16;
          Microsoft::WRL::ComPtr<CInteraction>::InternalAddRef(&v24);
          v8 = v16;
          v23 = v16;
LABEL_13:
          if ( v16 )
            (*(void (__fastcall **)(Dwm3DRECompositorThunk *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
  }
LABEL_15:
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 64,
          &v26);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v18,
                          (__int64)&v26,
                          (__int64)&v23) )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xBAu);
      goto LABEL_30;
    }
  }
  else
  {
    if ( *(Dwm3DRECompositorThunk **)(*(_QWORD *)(a1 + 72) + 8LL * (int)Key) == v8 )
      goto LABEL_30;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v18,
      Key,
      &v26,
      &v23);
  }
  if ( v8 )
  {
    v19 = *((_QWORD *)v8 + 13);
    if ( v19 )
    {
      v20 = *(struct CVisual **)(v19 + 8);
      if ( v20 )
      {
        if ( v7 )
        {
LABEL_24:
          CManipulationContext::OnVisualPropertyChange(v20, v7);
          goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
        v21 = CComposition::FindTreeWithWorkspaceOrMonitorAssociation(
                *(CComposition **)(a1 + 48),
                *((HMONITOR *)v8 + 214),
                *((_DWORD *)v8 + 430),
                &v25);
        v10 = v21;
        if ( v21 >= 0 )
        {
          v7 = v25;
          AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)v25 + 2) + 576LL));
          goto LABEL_24;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xCFu);
        goto LABEL_29;
      }
    }
  }
LABEL_30:
  if ( v7 )
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v7 + 2) + 576LL));
  if ( v8 )
    (*(void (__fastcall **)(Dwm3DRECompositorThunk *))(*(_QWORD *)v8 + 8LL))(v8);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease(&v25);
  return v10;
}
