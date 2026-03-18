/*
 * XREFs of ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180037C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetSizePreference(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 416);
  result = 1LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 136);
  return result;
}
