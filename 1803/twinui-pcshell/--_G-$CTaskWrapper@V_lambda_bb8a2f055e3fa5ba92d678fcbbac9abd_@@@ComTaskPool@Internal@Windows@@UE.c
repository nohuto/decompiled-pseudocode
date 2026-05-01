/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802584B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
