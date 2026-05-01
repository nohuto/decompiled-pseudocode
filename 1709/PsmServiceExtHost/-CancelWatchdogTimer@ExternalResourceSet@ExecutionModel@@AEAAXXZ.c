/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180003648
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800035A8 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003D260 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v2; // rax

  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 183), 0LL, 0LL, 0LL) )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 368) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v2 + 16))(this);
  }
}
