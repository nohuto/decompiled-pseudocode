/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800759CC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180075B38 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800AABCC (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800C0D60 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1801A0940 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo && *(_QWORD *)&DebugInfo[2].Flags )
  {
    ((void (*)(void))this[1].LockSemaphore)();
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
