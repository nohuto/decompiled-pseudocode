/*
 * XREFs of ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180207BAC
 * Callers:
 *     ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180205020 (--$swap@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@X@std@@YAXAEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::ComPtr<IUnknown>::operator=(
        CWinRTApplicationView **a1,
        CWinRTApplicationView **a2)
{
  CWinRTApplicationView *v3; // rcx
  CWinRTApplicationView *v4; // rax
  CWinRTApplicationView *v5; // rax
  CWinRTApplicationView *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return a1;
}
