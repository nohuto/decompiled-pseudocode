/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004DB60 (-EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802127B0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x18002A140 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801CEEA0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CComposition **this,
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
  CVisual::CalcEffectiveTransform(this, 5LL, v9, &v21, v17, (unsigned __int64)v19 & -(__int64)(this[30] != 0LL));
  if ( a4 || this == (CComposition **)a2[3] )
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
  v11 = (struct CMILMatrix *)((unsigned __int64)v19 & -(__int64)(this[30] != 0LL));
  v12 = *(__int64 (__fastcall **)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *))(*(_QWORD *)a3 + 48LL);
  if ( v12 == CDesktopTreeData::SetWorldTransform )
    v13 = CDesktopTreeData::SetWorldTransform(a3, (const struct CMILMatrix *)v17, v10, v11);
  else
    v13 = v12(a3, (const struct CMILMatrix *)v17, v10, v11);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x6F0u);
  }
  else if ( CVisual::GetInteractionInternal((CVisual *)this) && (*((_BYTE *)this + 93) & 0x40) != 0 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&a5);
    ManipulationManager = CComposition::GetManipulationManager(this[2], &a5);
    if ( ManipulationManager >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, (struct CVisual *)this, (const struct CMILMatrix *)v17);
    Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&a5);
  }
  return v14;
}
