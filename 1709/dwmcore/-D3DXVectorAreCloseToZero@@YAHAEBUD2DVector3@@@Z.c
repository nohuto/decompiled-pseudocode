/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x1801CA728
 * Callers:
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18019AAD4 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18019D3D4 (_anonymous_namespace_--ReverseAndLeftShift.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180193664 (IsWithinThresholdF.c)
 */

__int64 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1)
{
  bool v1; // al
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rcx

  v1 = IsWithinThresholdF(*(float *)a1, 0.0, 0.0049999999);
  v3 = 0;
  if ( v1
    && IsWithinThresholdF(*(float *)(v2 + 4), 0.0, 0.0049999999)
    && IsWithinThresholdF(*(float *)(v4 + 8), 0.0, 0.0049999999) )
  {
    return 1;
  }
  return v3;
}
