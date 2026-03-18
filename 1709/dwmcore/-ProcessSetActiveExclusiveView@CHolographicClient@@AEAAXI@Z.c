/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801C37E4
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801BD8E0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801C2C54 (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 */

void __fastcall CHolographicClient::ProcessSetActiveExclusiveView(CHolographicClient *this, int a2)
{
  __int64 *v2; // rsi
  struct CHolographicExclusiveView *v3; // rbx

  v2 = (__int64 *)((char *)this + 152);
  *((_DWORD *)this + 34) = a2;
  v3 = (struct CHolographicExclusiveView *)*((_QWORD *)this + 19);
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
