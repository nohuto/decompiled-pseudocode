/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_95b1a6b9fe71802b53b78e46f944807e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18014CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_95b1a6b9fe71802b53b78e46f944807e_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
