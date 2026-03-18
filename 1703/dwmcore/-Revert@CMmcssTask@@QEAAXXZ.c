/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800B5BA8 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800B6714 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800CBE30 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x180191F70 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
