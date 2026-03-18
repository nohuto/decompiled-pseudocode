/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036868
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x1800367D0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$Dy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _WORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-18h]

  v3 = 0;
  *(_BYTE *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 96) = "AlphaMultiply";
  v7 = HeapAlloc(WPF::g_processHeap, 0, 4uLL);
  v8 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    operator delete(v8);
    v7 = *(_WORD **)(a1 + 112);
  }
  if ( v7 )
  {
    *(_QWORD *)&v11 = 2LL;
    *((_QWORD *)&v11 + 1) = v7;
    *(_OWORD *)(a1 + 56) = v11;
    *v7 = CRenderingTechniqueFragment::MakeShaderLinkingArgument((CRenderingTechniqueFragment *)a1, 0LL, a2, a3);
    v9 = *(_QWORD *)(a1 + 112);
    *(_WORD *)(v9 + 2) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                           (CRenderingTechniqueFragment *)a1,
                           (const struct CBrushRenderingGraph *)1,
                           a2,
                           a3);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x231u);
  }
  return v3;
}
