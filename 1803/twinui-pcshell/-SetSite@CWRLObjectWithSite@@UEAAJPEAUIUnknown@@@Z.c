/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x180113700
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWinRTApplicationView **this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=(this + 2, (CWinRTApplicationView *)a2);
  return 0LL;
}
