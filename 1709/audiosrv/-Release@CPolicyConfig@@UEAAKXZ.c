/*
 * XREFs of ?Release@CPolicyConfig@@UEAAKXZ @ 0x180063560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::Release(CPolicyConfig *this)
{
  return CRefCountedObject::Release((CPolicyConfig *)((char *)this + 8));
}
