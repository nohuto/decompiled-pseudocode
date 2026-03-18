/*
 * XREFs of ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180035B00 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x1802185CC (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CheckFragmentSize(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v2; // r15
  unsigned int v5; // edi
  __int64 v6; // rdx
  bool v7; // bl
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  CRenderingTechniqueFragment *v14; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+54h] [rbp-ACh]
  int v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[448]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(_QWORD *)this;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)this;
    v18 = 0;
    v15[0] = v19;
    v16 = 16;
    v15[1] = v19;
    v17 = 16;
    v7 = (unsigned int)CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(a2, v6, v15) > 4;
    DynArrayImpl<0>::~DynArrayImpl<0>(v15);
    if ( !v7 )
      break;
    v9 = *(_QWORD *)this;
    v13 = *(_DWORD *)(v2 + 168);
    CRenderingTechniqueFragment::RemoveLargestInputFragment(a2, &v14, v9);
    v10 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, &v14, &v13);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1AEu);
      if ( v14 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v14, v12);
      return v5;
    }
    if ( v14 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v14, v11);
  }
  return v5;
}
