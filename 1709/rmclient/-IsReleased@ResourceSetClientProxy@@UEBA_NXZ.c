/*
 * XREFs of ?IsReleased@ResourceSetClientProxy@@UEBA_NXZ @ 0x18000ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ResourceSetClientProxy::IsReleased(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 122) == 2;
}
