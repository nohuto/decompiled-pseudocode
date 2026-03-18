/*
 * XREFs of ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1801A63B0
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A4AF0 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18014793C (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveView(CHolographicManager *this, struct IUnknown *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  CHolographicInteropTaskQueue *v6; // rcx
  struct IUnknown *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 9);
  v4 = DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 14, (__int64 *)&v7);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    if ( v6 )
      CHolographicInteropTaskQueue::PostMessageW(v6, 0xAu, a2, 0LL, 0LL, 0LL, 0LL);
    ((void (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl->Release)(a2, v5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 9);
}
