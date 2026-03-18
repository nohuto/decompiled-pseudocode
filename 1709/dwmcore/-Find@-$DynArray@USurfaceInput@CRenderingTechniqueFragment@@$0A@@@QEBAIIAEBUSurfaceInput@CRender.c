/*
 * XREFs of ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x1800BB6A8
 * Callers:
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B588 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x18006B730 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 i; // r10

  v3 = *((_DWORD *)a1 + 6);
  v4 = 0LL;
  for ( i = *a1; (unsigned int)v4 < v3; v4 = (unsigned int)(v4 + 1) )
  {
    if ( *(_DWORD *)a3 == *(_DWORD *)(i + 8 * v4) && *(_BYTE *)(a3 + 4) == *(_BYTE *)(i + 8 * v4 + 4) )
      break;
  }
  return (unsigned int)v4;
}
