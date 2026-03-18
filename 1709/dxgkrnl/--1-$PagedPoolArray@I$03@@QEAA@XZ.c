/*
 * XREFs of ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C00BC5FC
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00BC500 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00BC580 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
