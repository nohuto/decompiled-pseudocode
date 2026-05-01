/*
 * XREFs of ?IsApplicationAcquired@ExternalResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18005C400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::IsApplicationAcquired(
        ExecutionModel::ExternalResourceSet *this)
{
  return *((_DWORD *)this + 368) & 1;
}
