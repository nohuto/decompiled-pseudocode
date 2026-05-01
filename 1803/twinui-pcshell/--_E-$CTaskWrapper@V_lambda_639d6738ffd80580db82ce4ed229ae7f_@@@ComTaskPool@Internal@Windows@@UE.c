/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_639d6738ffd80580db82ce4ed229ae7f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801384A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9504 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_639d6738ffd80580db82ce4ed229ae7f_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((CSplashScreen **)a1 + 3);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
