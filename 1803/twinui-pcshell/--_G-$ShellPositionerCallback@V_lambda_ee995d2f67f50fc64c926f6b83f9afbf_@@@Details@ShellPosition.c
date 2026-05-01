/*
 * XREFs of ??_G?$ShellPositionerCallback@V_lambda_ee995d2f67f50fc64c926f6b83f9afbf_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x1802B6270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_ee995d2f67f50fc64c926f6b83f9afbf_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)a1 + 7);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
