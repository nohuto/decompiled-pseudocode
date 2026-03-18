/*
 * XREFs of ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x1801AFDCC
 * Callers:
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18018D4E4 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18018F934 (_anonymous_namespace_--ReverseAndLeftShift.c)
 * Callees:
 *     IsWithinThresholdF @ 0x1801AFE28 (IsWithinThresholdF.c)
 */

__int64 __fastcall D3DXVectorAreCloseToZero(const struct D2DVector3 *a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = ((__int64 (*)(void))IsWithinThresholdF)();
  LODWORD(v3) = 0;
  if ( v1 && (unsigned __int8)IsWithinThresholdF(v2, 0LL) && (unsigned __int8)IsWithinThresholdF(v4, v3) )
    LODWORD(v3) = 1;
  return (unsigned int)v3;
}
