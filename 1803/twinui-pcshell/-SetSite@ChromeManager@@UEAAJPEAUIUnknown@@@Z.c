/*
 * XREFs of ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1802D4480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall ChromeManager::SetSite(IUnknown **this, struct IUnknown *a2)
{
  CWinRTApplicationView **v2; // r14
  char v5; // bp

  v2 = (CWinRTApplicationView **)(this + 2);
  if ( this[2] || !a2 )
  {
    v5 = 0;
    if ( *v2 && !a2 )
    {
      IUnknown_SetSite(this[5], 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
      IUnknown_SetSite(this[6], 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
    }
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v2, (CWinRTApplicationView *)a2);
  if ( v5 )
  {
    IUnknown_SetSite(this[5], a2);
    IUnknown_SetSite(this[6], a2);
  }
  return 0LL;
}
