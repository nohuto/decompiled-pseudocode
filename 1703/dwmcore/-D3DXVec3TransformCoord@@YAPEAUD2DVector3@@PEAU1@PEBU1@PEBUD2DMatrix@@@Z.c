/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801AFA40
 * Callers:
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18018C268 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018C578 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18018DFB4 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018F53C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18018FDE4 (_anonymous_namespace_--TransformAndNormalize.c)
 * Callees:
 *     WithinEpsilon @ 0x180029340 (WithinEpsilon.c)
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm3
  float v5; // xmm2_4
  float v6; // xmm7_4
  float *v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm2_4

  v3 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v3.m128_f32[0] = (float)((float)((float)(v3.m128_f32[0] * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                         + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
                 + *((float *)a3 + 12);
  v4.m128_f32[0] = (float)((float)((float)(v4.m128_f32[0] * *((float *)a3 + 1))
                                 + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
                         + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
                 + *((float *)a3 + 13);
  v5 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 6)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
     + *((float *)a3 + 14);
  v6 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 7)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  *((float *)a1 + 2) = v5;
  if ( !WithinEpsilon(v6, 1.0) )
  {
    v8 = (float)(1.0 / v6) * v7[1];
    v9 = (float)(1.0 / v6) * v7[2];
    *v7 = (float)(1.0 / v6) * *v7;
    v7[1] = v8;
    v7[2] = v9;
  }
  return (struct D2DVector3 *)v7;
}
