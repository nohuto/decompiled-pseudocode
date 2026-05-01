/*
 * XREFs of ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18002E450
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x18000AD70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___--Run.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rbx
  volatile signed __int64 **v5; // r14
  volatile signed __int64 *Ptr; // rdx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 48;
  v8 = this + 48;
  AcquireSRWLockExclusive(this + 48);
  v5 = (volatile signed __int64 **)&this[53];
  Ptr = (volatile signed __int64 *)this[53].Ptr;
  if ( a2 != (struct IApplicationView *)Ptr || ((__int64)this[54].Ptr & 1) != 0 )
  {
    if ( Ptr && Ptr != (volatile signed __int64 *)a2 )
      CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)this, Ptr, 9, a2);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)&this[53], a2);
    LODWORD(this[54].Ptr) &= ~1u;
    if ( *v5 )
      CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)this, *v5, 7, 0LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  else
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v8);
  }
  return 0LL;
}
