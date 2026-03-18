/*
 * XREFs of ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801F8EC0
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801F9F40 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18020024C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveView(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  CHolographicInteropTaskQueue *Ptr; // rcx
  struct IUnknown *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  AcquireSRWLockExclusive(this + 10);
  v4 = DynArray<CBaseExpression *,1>::Remove(&this[19], &v7);
  v5 = 0LL;
  if ( v4 )
  {
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr && LOBYTE(this[28].Ptr) )
      CHolographicInteropTaskQueue::PostMessageW(Ptr, 0xDu, a2, 0LL, 0LL, 0LL, 0LL);
    ((void (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl->Release)(a2, v5);
  }
  ReleaseSRWLockExclusive(this + 10);
}
