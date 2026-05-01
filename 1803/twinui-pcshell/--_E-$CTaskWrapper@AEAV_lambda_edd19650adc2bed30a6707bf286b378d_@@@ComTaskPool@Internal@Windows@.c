/*
 * XREFs of ??_E?$CTaskWrapper@AEAV_lambda_edd19650adc2bed30a6707bf286b378d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18013EB00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B7C8 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CWin32ApplicationView **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_edd19650adc2bed30a6707bf286b378d_ &>::`vector deleting destructor'(
        CWin32ApplicationView **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
