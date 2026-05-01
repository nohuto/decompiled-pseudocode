/*
 * XREFs of ??_E?$CTaskWrapper@AEAV_lambda_532f1f640b749836e78f2398ba6696dd_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18000C160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_532f1f640b749836e78f2398ba6696dd_ &>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
