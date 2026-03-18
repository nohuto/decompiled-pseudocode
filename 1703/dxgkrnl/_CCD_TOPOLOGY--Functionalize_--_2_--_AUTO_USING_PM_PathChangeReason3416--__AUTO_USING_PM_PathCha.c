/*
 * XREFs of _CCD_TOPOLOGY::Functionalize_::_2_::_AUTO_USING_PM_PathChangeReason3416::__AUTO_USING_PM_PathChangeReason3416 @ 0x1C00A4A70
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize_::_2_::_AUTO_USING_PM_PathChangeReason3416::__AUTO_USING_PM_PathChangeReason3416(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 192) &= ~1u )
  {
    v2 = i++;
    v3 = 264 * v2;
    *(_DWORD *)(v3 + *a1 + 196) = 0;
    result = *a1;
  }
  return result;
}
