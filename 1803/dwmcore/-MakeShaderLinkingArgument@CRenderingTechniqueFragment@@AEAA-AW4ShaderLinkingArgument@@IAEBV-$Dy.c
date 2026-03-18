/*
 * XREFs of ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x1800367D0
 * Callers:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036868 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x180036940 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x180036BE4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800377D4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  unsigned int i; // r8d
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * (unsigned int)a2 + 8);
  if ( v6 )
  {
    if ( *(_DWORD *)(a3 + 24) )
    {
      do
      {
        if ( v6 == *(_QWORD *)(*(_QWORD *)a3 + 8LL * v5) )
          break;
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a3 + 24) );
    }
    return (unsigned __int16)(v5 | 0x400);
  }
  else
  {
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      (unsigned int)a2,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)v10);
    for ( i = 0; i < *(_DWORD *)(a4 + 24); ++i )
    {
      if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(v10, *(_QWORD *)a4 + 28LL * i) )
        break;
    }
    return (unsigned __int16)(i | 0x200);
  }
}
