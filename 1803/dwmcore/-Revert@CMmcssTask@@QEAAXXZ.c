/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740
 * Callers:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18001DE88 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x18002D650 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     _lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_::_lambda_invoker_cdecl_ @ 0x1800CA070 (_lambda_3ea8fc1bc8b4013abb914a693e1ae6cb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
