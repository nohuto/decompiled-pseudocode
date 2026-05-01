/*
 * XREFs of ?GetHostViewStateOverrides@ViewWrapperBase@@UEAA?AUHostViewStateOverrides@@XZ @ 0x180052CE0
 * Callers:
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
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
