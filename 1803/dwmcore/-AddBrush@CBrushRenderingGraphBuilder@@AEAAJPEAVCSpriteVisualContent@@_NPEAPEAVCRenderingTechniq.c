/*
 * XREFs of ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddBrush(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v9)(struct CSpriteVisualContent *, __int64); // rax
  char v10; // al
  int v11; // ebx
  CRenderingTechniqueFragment *v12; // rcx
  CRenderingTechniqueFragment *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  struct CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  struct CRenderingTechniqueFragment *v19; // [rsp+78h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, __int64))(v4 + 48);
  if ( (char *)v9 == (char *)CEffectBrush::IsOfType )
    v10 = CEffectBrush::IsOfType(a2, 51LL);
  else
    v10 = v9(a2, 51LL);
  if ( v10 )
  {
    v17 = 0LL;
    v18 = 1;
    v11 = CBrushRenderingGraphBuilder::AddEffectBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v12 = v19;
      v19 = v17;
      if ( v12 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v12, (unsigned int)v17);
    }
    if ( v11 < 0 )
    {
      v15 = 149;
      goto LABEL_21;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 94LL) )
    {
      v11 = -2147467263;
      v15 = 158;
      goto LABEL_21;
    }
    v17 = 0LL;
    v18 = 1;
    v11 = CBrushRenderingGraphBuilder::AddMaskBrush(this, a2, a3, &v17);
    if ( v18 )
    {
      v14 = v19;
      v19 = v17;
      if ( v14 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v14, (unsigned int)&v19);
    }
    if ( v11 < 0 )
    {
      v15 = 154;
      goto LABEL_21;
    }
  }
  v11 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v19);
  if ( v11 >= 0 )
  {
    v11 = 0;
    *a4 = v19;
    return (unsigned int)v11;
  }
  v15 = 162;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v15);
  if ( v19 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v19, v16);
  return (unsigned int)v11;
}
