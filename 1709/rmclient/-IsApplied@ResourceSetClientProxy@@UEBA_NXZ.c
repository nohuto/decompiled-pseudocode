/*
 * XREFs of ?IsApplied@ResourceSetClientProxy@@UEBA_NXZ @ 0x18000ECD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ResourceSetClientProxy::IsApplied(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 122) == 1;
}
