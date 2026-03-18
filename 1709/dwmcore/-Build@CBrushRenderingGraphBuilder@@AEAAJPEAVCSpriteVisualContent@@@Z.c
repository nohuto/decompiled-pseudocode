/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180072528 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18006BD5C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x18006BE74 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x18006C750 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x18006DEAC (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent **a2)
{
  int v3; // ebx
  CRenderingTechniqueFragment *v4; // r14
  int v5; // eax
  __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // r13
  int ShaderBodies; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+A0h] [rbp+50h] BYREF
  CRenderingTechniqueFragment *v18; // [rsp+A8h] [rbp+58h] BYREF

  v18 = 0LL;
  v15 = 0LL;
  v16 = 1;
  v3 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v15);
  if ( v16 )
  {
    v4 = v15;
    if ( v15 != v18 )
    {
      if ( v18 )
        CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v18);
      v18 = v4;
    }
  }
  if ( v3 < 0 )
  {
    v14 = 48;
LABEL_25:
    v13 = v3;
    goto LABEL_26;
  }
  v5 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v18, &v17);
  v3 = v5;
  if ( v5 < 0 )
  {
    v14 = 51;
  }
  else
  {
    v5 = CBrushRenderingGraphBuilder::EnsureShaderCache(this);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)this;
      v3 = 0;
      v7 = 0;
      v8 = *(_DWORD *)(*(_QWORD *)this + 328LL);
      if ( v8 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v6 + 304);
          if ( !CRenderingTechnique::IsExternallyImplementedSubgraph(*(CRenderingTechnique **)(v9 + v10), 0LL) )
          {
            ShaderBodies = CRenderingTechnique::CreateShaderBodies(*(CRenderingTechnique **)(v9 + v10));
            v3 = ShaderBodies;
            if ( ShaderBodies < 0 )
              break;
          }
          ++v7;
          v9 += 8LL;
          if ( v7 >= v8 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBodies, 0x1E1u);
      }
LABEL_14:
      if ( v3 >= 0 )
      {
        CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
        goto LABEL_16;
      }
      v14 = 54;
      goto LABEL_25;
    }
    v14 = 53;
  }
  v13 = v5;
LABEL_26:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
LABEL_16:
  if ( v18 )
    CRenderingTechniqueFragment::`scalar deleting destructor'((void **)v18);
  return (unsigned int)v3;
}
