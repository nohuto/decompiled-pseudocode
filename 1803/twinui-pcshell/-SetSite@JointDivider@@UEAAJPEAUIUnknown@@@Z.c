/*
 * XREFs of ?SetSite@JointDivider@@UEAAJPEAUIUnknown@@@Z @ 0x1802E36C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall JointDivider::SetSite(JointDivider *this, struct IUnknown *a2)
{
  if ( !a2 && *((_QWORD *)this + 2) )
  {
    DestroyWindow(*((HWND *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=((CWinRTApplicationView **)this + 2, (CWinRTApplicationView *)a2);
  return 0LL;
}
