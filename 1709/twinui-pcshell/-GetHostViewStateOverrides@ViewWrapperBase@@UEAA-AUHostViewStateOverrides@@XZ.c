/*
 * XREFs of ?GetHostViewStateOverrides@ViewWrapperBase@@UEAA?AUHostViewStateOverrides@@XZ @ 0x18013EF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ViewWrapperBase::GetHostViewStateOverrides(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *result; // rax

  if ( *(_DWORD *)(a1 + 248) == 1 )
    v2 = *(_DWORD *)(a1 + 252);
  else
    v2 = *(_QWORD *)(a1 + 236);
  a2[1] = v2;
  result = a2;
  *a2 = 1;
  return result;
}
