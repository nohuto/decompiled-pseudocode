/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180004054
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18001C0D4 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCSpriteVisualContent@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ @ 0x1800038D8 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800039B0 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x180003F80 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800157C0 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180016E34 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(
        CBrushRenderingGraphBuilder *this,
        struct CSpriteVisualContent **a2)
{
  unsigned int v3; // edx
  int v4; // ebx
  CRenderingTechniqueFragment *v5; // r14
  int v6; // eax
  __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // r13
  int ShaderBodies; // eax
  unsigned int v13; // edx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-30h]
  struct CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+A0h] [rbp+50h] BYREF
  CRenderingTechniqueFragment *v20; // [rsp+A8h] [rbp+58h] BYREF

  v20 = 0LL;
  v17 = 0LL;
  v18 = 1;
  v4 = CBrushRenderingGraphBuilder::AddBrush(this, a2, 0, &v17);
  if ( v18 )
  {
    v5 = v17;
    if ( v17 != v20 )
    {
      if ( v20 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v20, v3);
      v20 = v5;
    }
  }
  if ( v4 < 0 )
  {
    v16 = 48;
LABEL_25:
    v15 = v4;
    goto LABEL_26;
  }
  v6 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v20, &v19);
  v4 = v6;
  if ( v6 < 0 )
  {
    v16 = 51;
  }
  else
  {
    v6 = CBrushRenderingGraphBuilder::EnsureShaderCache(this);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)this;
      v4 = 0;
      v8 = 0;
      v9 = *(_DWORD *)(*(_QWORD *)this + 328LL);
      if ( v9 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v7 + 304);
          if ( !CRenderingTechnique::IsExternallyImplementedSubgraph(*(CRenderingTechnique **)(v10 + v11), 0LL) )
          {
            ShaderBodies = CRenderingTechnique::CreateShaderBodies(*(CRenderingTechnique **)(v10 + v11));
            v4 = ShaderBodies;
            if ( ShaderBodies < 0 )
              break;
          }
          ++v8;
          v10 += 8LL;
          if ( v8 >= v9 )
            goto LABEL_14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderBodies, 0x1E1u);
      }
LABEL_14:
      if ( v4 >= 0 )
      {
        CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
        goto LABEL_16;
      }
      v16 = 54;
      goto LABEL_25;
    }
    v16 = 53;
  }
  v15 = v6;
LABEL_26:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v16);
LABEL_16:
  if ( v20 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v20, v13);
  return (unsigned int)v4;
}
