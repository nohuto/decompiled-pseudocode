/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C004D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0012D84 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00DBC1C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 40);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 39);
    if ( v3 )
      DxgkImmediateSignalSynchronizationObjectByReference(v3, v1);
  }
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 32LL))(*((_QWORD *)this + 31));
}
