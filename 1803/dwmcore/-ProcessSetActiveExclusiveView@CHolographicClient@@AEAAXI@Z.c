/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1802000BC
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801F9EF4 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801FF28C (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 */

void __fastcall CHolographicClient::ProcessSetActiveExclusiveView(CHolographicClient *this, int a2)
{
  __int64 *v2; // rsi
  struct CHolographicExclusiveView *v3; // rbx

  v2 = (__int64 *)((char *)this + 184);
  *((_DWORD *)this + 42) = a2;
  v3 = (struct CHolographicExclusiveView *)*((_QWORD *)this + 23);
  if ( CHolographicClient::FindExclusiveViewByViewId(this, a2) != v3 )
  {
    if ( v3 )
    {
      if ( *((_BYTE *)v3 + 75) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3), 0LL);
      }
      else
      {
        CHolographicExclusiveView::DeactivateView(v3, this);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  }
}
