/*
 * XREFs of _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18019AAD4
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18019B4B4 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180193664 (IsWithinThresholdF.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18019DB20 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x1801CA728 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 */

char __fastcall anonymous_namespace_::CanAddThisColumnVectorToMatrix(float *a1, int a2, __int64 a3)
{
  char v6; // si
  __int64 v7; // r8

  v6 = 1;
  if ( (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1, v7)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 3, a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 6, a3)
    || a2 == 2
    && (IsWithinThresholdF(0.0, a1[2], 0.0049999999)
     && IsWithinThresholdF(0.0, a1[5], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)(a3 + 8), 0.0049999999)
     || IsWithinThresholdF(0.0, a1[1], 0.0049999999)
     && IsWithinThresholdF(0.0, a1[4], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)(a3 + 4), 0.0049999999)
     || IsWithinThresholdF(0.0, *a1, 0.0049999999)
     && IsWithinThresholdF(0.0, a1[3], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)a3, 0.0049999999)) )
  {
    return 0;
  }
  return v6;
}
