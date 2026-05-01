/*
 * XREFs of ?SetSite@AppResizeView@@UEAAJPEAUIUnknown@@@Z @ 0x1802DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppResizeView::SetSite(AppResizeView *this, struct IUnknown *a2)
{
  IUnknown **v2; // rsi
  bool v5; // bp
  IUnknown *v6; // rcx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v2 = (IUnknown **)((char *)this + 16);
  v5 = !*((_QWORD *)this + 2) && a2;
  if ( *v2 && !a2 )
  {
    v6 = (IUnknown *)*((_QWORD *)this + 7);
    if ( v6 )
    {
      IUnknown_SetSite(v6, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 11);
    ppvOut = 0LL;
    if ( *((_DWORD *)this + 116) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v2,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             &ppvOut) >= 0 )
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 96LL))(ppvOut, *((unsigned int *)this + 116));
        *((_DWORD *)this + 116) = 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)v2, (CWinRTApplicationView *)a2);
  if ( v5 )
  {
    ppvOut = 0LL;
    if ( !*((_DWORD *)this + 116) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v2,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, char *, char *))(*(_QWORD *)ppvOut + 88LL))(
          ppvOut,
          (char *)this + 40,
          (char *)this + 464);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
