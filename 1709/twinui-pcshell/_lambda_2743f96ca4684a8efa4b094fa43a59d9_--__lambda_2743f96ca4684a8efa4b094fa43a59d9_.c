/*
 * XREFs of _lambda_2743f96ca4684a8efa4b094fa43a59d9_::__lambda_2743f96ca4684a8efa4b094fa43a59d9_ @ 0x1800CFAB8
 * Callers:
 *     _TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync_::_1_::dtor$1 @ 0x1801EBCDE (_TwinUI--Cortana--ShellExperienceView--SetWindowRegionAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall lambda_2743f96ca4684a8efa4b094fa43a59d9_::__lambda_2743f96ca4684a8efa4b094fa43a59d9_(__int64 a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
