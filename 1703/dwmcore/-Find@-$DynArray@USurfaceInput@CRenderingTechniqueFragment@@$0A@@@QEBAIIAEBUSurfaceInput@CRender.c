/*
 * XREFs of ?Find@?$DynArray@USurfaceInput@CRenderingTechniqueFragment@@$0A@@@QEBAIIAEBUSurfaceInput@CRenderingTechniqueFragment@@@Z @ 0x180022D74
 * Callers:
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x180015838 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingT.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceInput@CRenderingTechniqueFragment@@$03$0A@@@@Z @ 0x1801BB58C (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$DynArrayIANoCtor@PEBVCRenderingTec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CRenderingTechniqueFragment::SurfaceInput,0>::Find(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 i; // rdx

  v3 = *((_DWORD *)a1 + 6);
  result = 0LL;
  for ( i = *a1; (unsigned int)result < v3; result = (unsigned int)(result + 1) )
  {
    if ( *(_DWORD *)a3 == *(_DWORD *)(i + 8 * result) && *(_BYTE *)(a3 + 4) == *(_BYTE *)(i + 8 * result + 4) )
      break;
  }
  return result;
}
