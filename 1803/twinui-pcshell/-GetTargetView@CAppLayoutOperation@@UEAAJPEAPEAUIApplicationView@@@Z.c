/*
 * XREFs of ?GetTargetView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18030FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTargetView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)this + 7);
    *a2 = *v2;
  }
  return 0LL;
}
