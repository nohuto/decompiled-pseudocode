/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x180035838 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x180035950 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180035B00 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x180036394 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180071118 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent *a2)
{
  int v3; // ebx
  CRenderingTechniqueFragment *v4; // rcx
  int v5; // eax
  __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // r13
  int ShaderBodies; // eax
  unsigned int v12; // edx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+A0h] [rbp+50h] BYREF
  CRenderingTechniqueFragment *v19; // [rsp+A8h] [rbp+58h] BYREF

  v19 = 0LL;
  v16 = 0LL;
  v17 = 1;
  v3 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v16);
  if ( v17 )
  {
    v4 = v19;
    v19 = v16;
    if ( v4 )
      CRenderingTechniqueFragment::`scalar deleting destructor'(v4, (unsigned int)v16);
  }
  if ( v3 < 0 )
  {
    v15 = 48;
LABEL_23:
    v14 = v3;
    goto LABEL_24;
  }
  v5 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v19, &v18);
  v3 = v5;
  if ( v5 < 0 )
  {
    v15 = 51;
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
      v8 = *(_DWORD *)(*(_QWORD *)this + 168LL);
      if ( v8 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v6 + 144);
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
            goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBodies, 0x21Du);
      }
LABEL_12:
      if ( v3 >= 0 )
      {
        CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
        goto LABEL_14;
      }
      v15 = 54;
      goto LABEL_23;
    }
    v15 = 53;
  }
  v14 = v5;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15);
LABEL_14:
  if ( v19 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v19, v12);
  return (unsigned int)v3;
}
