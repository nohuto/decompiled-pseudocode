/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_394f447e3cb7383e15c0434f11a7d111_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800917F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWinRTApplicationView **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_394f447e3cb7383e15c0434f11a7d111_>::`scalar deleting destructor'(
        CWinRTApplicationView **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
