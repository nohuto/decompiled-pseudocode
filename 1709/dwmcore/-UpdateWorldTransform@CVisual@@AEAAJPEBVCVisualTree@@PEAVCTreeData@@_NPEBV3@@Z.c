/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004FD08 (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801D0370 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180092630 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801968BC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  unsigned __int64 v9; // r14
  _BOOL8 v10; // r8
  struct CMILMatrix *v11; // r9
  __int64 (__fastcall *v12)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int ManipulationManager; // eax
  _BYTE v17[64]; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+78h] [rbp-21h]
  _BYTE v19[64]; // [rsp+88h] [rbp-11h] BYREF
  int v20; // [rsp+C8h] [rbp+2Fh]
  char v21; // [rsp+110h] [rbp+77h] BYREF

  v18 = 0;
  v20 = 0;
  v9 = ((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL);
  CVisual::CalcEffectiveTransform(
    (__int64)this,
    (const struct D2D_SIZE_F *)5,
    v9,
    &v21,
    (CMILMatrix *)v17,
    (unsigned __int64)v19 & -(__int64)(*((_QWORD *)this + 29) != 0LL));
  if ( a4 || this == a2[3] )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v21 )
  {
    LOBYTE(v10) = (unsigned __int8)CMILMatrix::IsEqualTo<0>(v9, v17) == 0;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (struct CMILMatrix *)((unsigned __int64)v19 & -(__int64)(*((_QWORD *)this + 29) != 0LL));
  v12 = *(__int64 (__fastcall **)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *))(*(_QWORD *)a3 + 48LL);
  if ( v12 == CDesktopTreeData::SetWorldTransform )
    v13 = CDesktopTreeData::SetWorldTransform(a3, (const struct CMILMatrix *)v17, v10, v11);
  else
    v13 = v12(a3, (const struct CMILMatrix *)v17, v10, v11);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x67Eu);
  }
  else if ( CVisual::GetInteractionInternal(this) && (*((_BYTE *)this + 93) & 4) != 0 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&a5);
    ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 2), &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, this, (const struct CMILMatrix *)v17);
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&a5);
  }
  return v14;
}
