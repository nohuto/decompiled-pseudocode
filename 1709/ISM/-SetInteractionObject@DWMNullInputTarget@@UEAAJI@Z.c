/*
 * XREFs of ?SetInteractionObject@DWMNullInputTarget@@UEAAJI@Z @ 0x180022940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMNullInputTarget::SetInteractionObject(DWMNullInputTarget *this, int a2)
{
  *((_DWORD *)this + 18) = a2;
  return 0LL;
}
